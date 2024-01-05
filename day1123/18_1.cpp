#include <iostream>
#include "Consola.h"
#include <conio.h>
#include "keycode.h"
using namespace std;

const int CHARACTER_WIDTH = 4;
const int CHARACTER_HEIGHT = 2;

int getkey() {
    int ch = _getch();
    if (ch != 0xe0)
        return ch;
    else {
        int ch2 = _getch();
        return (0xe000 | ch2);
    }
}

void xyputstr(int x, int y, const char* str) {
    gotoxy(x, y);
    cout << str;
}

void clearCharacter(int x, int y) {
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        for (int j = 0; j < CHARACTER_WIDTH; j++) {
            xyputstr(x + j * 2, y + i, "  ");
        }
    }
}

void drawCharacter(int x, int y) {
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        for (int j = 0; j < CHARACTER_WIDTH; j++) {
            xyputstr(x + j * 2, y + i, "бс");
        }
    }
}

int main() {
    int key;
    int posx = 40, posy = 10;
    textbackground(YELLOW);
    textcolor(BLUE);
    clrscr();

    drawCharacter(posx, posy);

    while (1) { // Change the loop condition as per your requirements
        int oldx = posx;
        int oldy = posy;
        key = getkey();

        clearCharacter(oldx, oldy);

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

        drawCharacter(posx, posy);
    }

    return 0;
}
