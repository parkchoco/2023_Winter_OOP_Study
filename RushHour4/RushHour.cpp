#include <iostream>
#include <conio.h>
#include <vector>
#include "keycode.h"
#include "Consola.h"
#define TABLE_X 26
#define TABLE_Y 26
using namespace std;

int getkey() {
    int ch;
    ch = _getch();
    return (ch != 0xe0) ? ch : (0xe000 | _getch());
}

void xyputstr(int x, int y, const char* str) {
    gotoxy(x, y);
    cout << str;
}

class GameTable {
private:
    int x; // ����
    int y; // ����
    vector<vector<int> > table; // ���̺� �� 0 = " ", 1 = "��" , 2  = "��"
public:
    GameTable(int x, int y) { //��Ʈ���� �� ���� ����
        this->x = x;
        this->y = y;
        for (int i = 0; i < y; i++) {
            vector<int> temp;
            for (int j = 0; j < x; j++) {
                temp.push_back(0);
            }
            table.push_back(temp);
        }
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
    void DrawGameTable() {

        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                if (table[i][j] == 1){
                    
                    cout << "��";
                    
            }
                else cout << "  "; // �� ĭ ����
            }
            cout << "\n";
        }
    }
};
void drawPlayer(int posx, int posy, const char* player) {
    xyputstr(posx, posy, player);
}
int main() {
    system("mode con cols=90 lines=30 | title RUSH HOUR"); // �ܼ�â ũ�� �� ���� ����
    GameTable gt(TABLE_X, TABLE_Y); //���� �� �׸��� ��ü ����
    int key;
    const char* player = "�ڡڡڡ�";

    int posx = 7, posy = 4;
    //clrscr();
    gt.DrawGameTable();
    _setcursortype(_NOCURSOR);
    drawPlayer(posx, posy, player);

    while (1) {
        int oldx = posx;
        int oldy = posy;
        key = getkey();
        switch (key) {
        case M_UPKEY:
            if (posy > 2) posy--; break;
        case M_DOWNKEY:
            if (posy < 25)  posy++; break;
        case M_LEFTKEY:
            if (posx > 4) posx -= 2; break;
        case M_RIGHTKEY:
            if (posx < 48) posx += 2; break;
        }
        if (oldx != posx || oldy != posy) {
            xyputstr(oldx, oldy, "  ");
            xyputstr(oldx, oldy, "  ");
        }
        drawPlayer(posx, posy, player);
    }
    return 0;
}