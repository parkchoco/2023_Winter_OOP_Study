#include <iostream>
#include <conio.h>
#include "Consola.h"
#include "game.h"
#include "keycode.h"
using namespace std;

MainMenu::MainMenu() {
    cout << "\n\n\n\n";
    textcolor(GREEN);
    cout << "\t\t"; cout << "■■■    ■    ■  ■■■  ■    ■      ■    ■  ■■■  ■    ■ ■■■\n";
    cout << "\t\t"; cout << "■    ■  ■    ■ ■       ■    ■      ■    ■ ■    ■ ■    ■ ■    ■\n";
    cout << "\t\t"; cout << "■    ■  ■    ■ ■       ■    ■      ■    ■ ■    ■ ■    ■ ■    ■\n";
    cout << "\t\t"; cout << "■■■    ■    ■  ■■■  ■■■■      ■■■■ ■    ■ ■    ■ ■■■\n";
    cout << "\t\t"; cout << "■   ■   ■    ■       ■ ■    ■      ■    ■ ■    ■ ■    ■ ■   ■\n";
    cout << "\t\t"; cout << "■    ■  ■    ■       ■ ■    ■      ■    ■ ■    ■ ■    ■ ■    ■\n";
    cout << "\t\t"; cout << "■     ■   ■■    ■■■  ■    ■      ■    ■  ■■■    ■■   ■     ■\n\n";


    cout << "\t\t"; cout << "                게임을 시작하려면 아무키나 누르세요.\n\n\n\n\n\n\n";

    _getch(); // 아무키 입력 기다림
    clrscr(); // 콘솔 창 clear
}

GameSet::GameSet(int x, int y) { //테트리스 판 뼈대 생성

    this->x = x;
    this->y = y;

    //가장 자리 뼈대 색칠
    for (int i = 0; i < x; i++) {
        table[0][i] = 1;
        table[y - 1][i] = 1;
    }
    for (int i = 1; i < y - 1; i++) {
        table[i][0] = 1;
        table[i][x - 1] = 1;
    }
}

/*게임판 그리는 함수*/
void GameSet::DrawGameTable() {

    for (int i = 0; i < TABLE_Y; i++) {
        for (int j = 0; j < TABLE_X; j++) {
            textbackground(DARKGRAY);
            textcolor(WHITE);

            if (table[i][j] == 1)
                cout << "▦";
            else cout << "  "; // 두 칸 띄우기
        }
        cout << "\n";
    }
    textbackground(BLACK);
}

int main(void) {
    _setcursortype(_NOCURSOR);
    system("mode con cols=110 lines=40 | title 테트리스 게임"); // 콘솔창 크기 및 제목 설정
    GameSet gt(TABLE_X, TABLE_Y); //게임 판 그리기 객체 생성
    MainMenu(); // 메인 메뉴 그리기 생성자 호출

    gt.DrawGameTable(); // 게임판을 그린다.
    _getch();
    return 0;
}



