#include <iostream>
#include "
#include <conio.h>
#include "keycode.h"

using namespace std;

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

int main() {
    int key;
    const char* mainChar = "¡Ú";
    int posx = 40, posy = 10;
    textbackground(YELLOW);
    textcolor(BLUE);
    clrscr();

    xyputstr(posx, posy, mainChar);

    while (1) { // Change the loop condition as per your requirements
        int oldx = posx;
        int oldy = posy;
        key = getkey();

        switch (key) {
        case KEY_UP: if (posy > 1) posy--; break;
        case KEY_DOWN: if (posy < 25) posy++; break;
        case KEY_LEFT: if (posx > 1) posx -= 2; break;
        case KEY_RIGHT: if (posx < 70) posx += 2; break;
        }

        if (oldx != posx || oldy != posy) {
            xyputstr(oldx, oldy, " ");
            xyputstr(posx, posy, mainChar);
        }
    }

    return 0;
}