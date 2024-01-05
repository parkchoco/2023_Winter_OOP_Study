#include <stdio.h>
#include <stdlib.h>

#define Q_SIZE 20//Q_SIZE를 20으로 정의한다

// 구조체(Node) 정의
typedef struct Node {
    int pid;        // 프로세스 ID
    int priority;   // 우선순위
    int time;       // 수행 시간
} Node;//정의된 Node는 프로그램에서 우선순위 큐의 각노드를 나타내기 위해 사용된다.

// 우선순위 큐 배열
Node priQueue[Q_SIZE];//노드를 저장
int queueSize = 0;//큐의 현재 크기를 나타내는 변수
//큐에 저장된 노드의 수를 추적하는데 사용, 추가되면 queueSize가 증가, 제거되면 감소 -> 현재 큐의 크기를 추적하는데 사용


// 노드 삽입 함수
void insert(Node n) {
    if (queueSize >= Q_SIZE) {//큐가 이미 꽉찼는지 확인하는 조건 큐의 크기가 최대크기 이상이면 메시지 출력 후 함수를 종료
        printf("큐가 꽉차서 더이상 입력 할 수 없습니다.\n");
        return;
    }

    int i = queueSize;//현재 큐에 새 노드 n을 삽입할 위치를 나타내는 변수
    while (i > 0 && priQueue[i - 1].priority > n.priority) {//큐가
        priQueue[i] = priQueue[i - 1];
        i--;
    }

    priQueue[i] = n;
    queueSize++;
}

// 노드 삭제 함수
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

// 모든 노드 출력 함수
void showAll() {
    printf("큐의 입력되어있는 정보:\n");
    for (int i = 0; i < queueSize; i++) {
        printf("PID: %d, Priority: %d, Time: %d\n", priQueue[i].pid, priQueue[i].priority, priQueue[i].time);
    }
}

int main() {
    // 노드 데이터 삽입
    for (int i = 1; i <= 20; i++) {
        Node node = { i, rand() % 11, 5 + rand() % 16 };
        insert(node);
    }

    // 큐의 내용 출력
    showAll();

    // 노드 데이터 삭제
    for (int i = 0; i < 20; i++) {
        Node removedNode = deleteNode();
        printf("삭제: PID: %d, Priority: %d, Time: %d\n", removedNode.pid, removedNode.priority, removedNode.time);
    }

    // 큐의 내용 출력 (비어있음)
    showAll();

    return 0;
}
