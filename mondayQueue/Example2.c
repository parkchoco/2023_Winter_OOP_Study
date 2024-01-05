#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIME 5 // ���� �κ� �˰����� �ð� �Ҵ緮

struct Process {
    int pid;
    int arrival_time;
    int burst;
    int remaining_time; 
    int waiting_time;
};


int main() {
    srand(time(NULL)); // ���� �õ� �ʱ�ȭ
    struct Process processes[10];
    int i, total_waiting_time = 0;

    // ���μ��� ���� �ʱ�ȭ
    for (i = 0; i < 10; i++) {
        processes[i].pid = i + 1;
        processes[i].arrival_time = rand() % 10; // ���� ���� �ð�
        processes[i].burst = (rand() % 8) + 3; // ���� ����Ʈ Ÿ�� (3 �̻� 10 ����)
        processes[i].remaining_time = processes[i].burst;
        processes[i].waiting_time = 0;
    }

    int time = 0;
    int completed = 0;

    while (completed < 10) {
        for (i = 0; i < 10; i++) {
            if (processes[i].remaining_time > 0 && processes[i].arrival_time <= time) {
                int ex_time = TIME < processes[i].remaining_time ? TIME : processes[i].remaining_time;
                processes[i].remaining_time -= ex_time;
                time += ex_time;

                for (int j = 0; j < 10; j++) {
                    if (j != i && processes[j].remaining_time > 0 && processes[j].arrival_time <= time) {
                        processes[j].waiting_time += ex_time;
                    }
                }

                if (processes[i].remaining_time == 0) {
                    completed++;
                    total_waiting_time += processes[i].waiting_time;
                }
            }
        }
    }

    float average_waiting_time = (float)total_waiting_time / 10;
    printf("��� ��� �ð�: %f\n", average_waiting_time);

    return 0;
}
