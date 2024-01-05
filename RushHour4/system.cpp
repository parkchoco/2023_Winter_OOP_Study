#include <iostream>
#include <windows.h>
#include "consola.h"
using namespace std;

void _setcursortype(int show) {

}

//커서 위치 지정
void gotoxy(int x, int y) {
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}