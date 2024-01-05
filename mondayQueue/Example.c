#include <stdio.h>
#include <stdlib.h>

#define Q_SIZE 20

typedef struct Node {
    int pid;
    int priority;
    int time;
} Node;

Node priQueue[Q_SIZE];
int queueSize = 0;

void insert(Node n) {
    if (queueSize >= Q_SIZE) {
        printf("ť�� ������ ���̻� �Է� �� �� �����ϴ�.\n");
        return;
    }

    int i = queueSize;
    while (i > 0 && priQueue[i - 1].priority > n.priority) {//ť��
        priQueue[i] = priQueue[i - 1];
        i--;
    }
    priQueue[i] = n;
    queueSize++;
}

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

void showAll() {
    printf("ť�� �ԷµǾ��ִ� ����:\n");
    for (int i = 0; i < queueSize; i++) {
        printf("PID: %d, Priority: %d, Time: %d\n", priQueue[i].pid, priQueue[i].priority, priQueue[i].time);
    }
}

int main() {
    for (int i = 1; i <= 20; i++) {
        Node node = { i, rand() % 11, 5 + rand() % 16 };
        insert(node);
    }

    showAll();

    for (int i = 0; i < 20; i++) {
        Node deletedNode = deleteNode();
        printf("����: PID: %d, Priority: %d, Time: %d\n", deletedNode.pid, deletedNode.priority, deletedNode.time);
    }

    showAll();

    return 0;
}
