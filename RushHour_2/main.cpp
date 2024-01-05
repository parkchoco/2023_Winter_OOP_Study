#include <iostream>
#include <conio.h>
#include "Consola.h"
#include "game.h"
#include "keycode.h"
using namespace std;

MainMenu::MainMenu() {
    cout << "\n\n\n\n";
    textcolor(GREEN);
    cout << "\t\t"; cout << "����    ��    ��  ����  ��    ��      ��    ��  ����  ��    �� ����\n";
    cout << "\t\t"; cout << "��    ��  ��    �� ��       ��    ��      ��    �� ��    �� ��    �� ��    ��\n";
    cout << "\t\t"; cout << "��    ��  ��    �� ��       ��    ��      ��    �� ��    �� ��    �� ��    ��\n";
    cout << "\t\t"; cout << "����    ��    ��  ����  �����      ����� ��    �� ��    �� ����\n";
    cout << "\t\t"; cout << "��   ��   ��    ��       �� ��    ��      ��    �� ��    �� ��    �� ��   ��\n";
    cout << "\t\t"; cout << "��    ��  ��    ��       �� ��    ��      ��    �� ��    �� ��    �� ��    ��\n";
    cout << "\t\t"; cout << "��     ��   ���    ����  ��    ��      ��    ��  ����    ���   ��     ��\n\n";


    cout << "\t\t"; cout << "                ������ �����Ϸ��� �ƹ�Ű�� ��������.\n\n\n\n\n\n\n";

    _getch(); // �ƹ�Ű �Է� ��ٸ�
    clrscr(); // �ܼ� â clear
}

GameSet::GameSet(int x, int y) { //��Ʈ���� �� ���� ����

    this->x = x;
    this->y = y;

    //���� �ڸ� ���� ��ĥ
    for (int i = 0; i < x; i++) {
        table[0][i] = 1;
        table[y - 1][i] = 1;
    }
    for (int i = 1; i < y - 1; i++) {
        table[i][0] = 1;
        table[i][x - 1] = 1;
    }
}

/*������ �׸��� �Լ�*/
void GameSet::DrawGameTable() {

    for (int i = 0; i < TABLE_Y; i++) {
        for (int j = 0; j < TABLE_X; j++) {
            textbackground(DARKGRAY);
            textcolor(WHITE);

            if (table[i][j] == 1)
                cout << "��";
            else cout << "  "; // �� ĭ ����
        }
        cout << "\n";
    }
    textbackground(BLACK);
}

int main(void) {
    _setcursortype(_NOCURSOR);
    system("mode con cols=110 lines=40 | title ��Ʈ���� ����"); // �ܼ�â ũ�� �� ���� ����
    GameSet gt(TABLE_X, TABLE_Y); //���� �� �׸��� ��ü ����
    MainMenu(); // ���� �޴� �׸��� ������ ȣ��

    gt.DrawGameTable(); // �������� �׸���.
    _getch();
    return 0;
}



