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
        printf("큐가 꽉차서 더이상 입력 할 수 없습니다.\n");
        return;
    }

    int i = queueSize;
    while (i > 0 && priQueue[i - 1].priority > n.priority) {//큐가
        priQueue[i] = priQueue[i - 1];
        i--;
    }
    priQueue[i] = n;
    queueSize++;
}

Node deleteNode() {
    if (queueSize == 0) {
        printf("큐가 비어있어서 더이상 삭제 할 수 없습니다.\n");
        Node emptyNode = { -1, -1, -1 };  // 빈 노드를 반환
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
    printf("큐의 입력되어있는 정보:\n");
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
        printf("삭제: PID: %d, Priority: %d, Time: %d\n", deletedNode.pid, deletedNode.priority, deletedNode.time);
    }

    showAll();

    return 0;
}
