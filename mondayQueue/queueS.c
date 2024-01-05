#include <stdio.h>
#include <stdlib.h>

#define Q_SIZE 20//Q_SIZE�� 20���� �����Ѵ�

// ����ü(Node) ����
typedef struct Node {
    int pid;        // ���μ��� ID
    int priority;   // �켱����
    int time;       // ���� �ð�
} Node;//���ǵ� Node�� ���α׷����� �켱���� ť�� ����带 ��Ÿ���� ���� ���ȴ�.

// �켱���� ť �迭
Node priQueue[Q_SIZE];//��带 ����
int queueSize = 0;//ť�� ���� ũ�⸦ ��Ÿ���� ����
//ť�� ����� ����� ���� �����ϴµ� ���, �߰��Ǹ� queueSize�� ����, ���ŵǸ� ���� -> ���� ť�� ũ�⸦ �����ϴµ� ���


// ��� ���� �Լ�
void insert(Node n) {
    if (queueSize >= Q_SIZE) {//ť�� �̹� ��á���� Ȯ���ϴ� ���� ť�� ũ�Ⱑ �ִ�ũ�� �̻��̸� �޽��� ��� �� �Լ��� ����
        printf("ť�� ������ ���̻� �Է� �� �� �����ϴ�.\n");
        return;
    }

    int i = queueSize;//���� ť�� �� ��� n�� ������ ��ġ�� ��Ÿ���� ����
    while (i > 0 && priQueue[i - 1].priority > n.priority) {//ť��
        priQueue[i] = priQueue[i - 1];
        i--;
    }

    priQueue[i] = n;
    queueSize++;
}

// ��� ���� �Լ�
Node deleteNode() {
    if (queueSize == 0) {
        printf("ť�� ����־ ���̻� ���� �� �� �����ϴ�.\n");
        Node emptyNode = { -1, -1, -1 };  // �� ��带 ��ȯ
        return emptyNode;
    }

    Node deletedNode = priQueue[0];

    for (int i = 1; i < queueSize; i++) {
        priQueue[i - 1] = priQueue[i];
    }

    queueSize--;
    return deletedNode;
}

// ��� ��� ��� �Լ�
void showAll() {
    printf("ť�� �ԷµǾ��ִ� ����:\n");
    for (int i = 0; i < queueSize; i++) {
        printf("PID: %d, Priority: %d, Time: %d\n", priQueue[i].pid, priQueue[i].priority, priQueue[i].time);
    }
}

int main() {
    // ��� ������ ����
    for (int i = 1; i <= 20; i++) {
        Node node = { i, rand() % 11, 5 + rand() % 16 };
        insert(node);
    }

    // ť�� ���� ���
    showAll();

    // ��� ������ ����
    for (int i = 0; i < 20; i++) {
        Node removedNode = deleteNode();
        printf("����: PID: %d, Priority: %d, Time: %d\n", removedNode.pid, removedNode.priority, removedNode.time);
    }

    // ť�� ���� ��� (�������)
    showAll();

    return 0;
}
