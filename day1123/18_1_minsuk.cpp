#include <iostream>
#include <conio.h>
#include "Consola.h"
#include "Keycode.h"
#define COL 5
#define ROW 5
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

void drawCell(int cell, int col, int row) {
    const char* cellSymbol[] = { " ", "¢Ë", "¡Ü", NULL, "¡ß", NULL };
    textbackground((cell == 1) ? DARKGRAY : YELLOW);
    gotoxy((col + 1) * 2, row + 1);
    puts(cellSymbol[cell]);
}

void drawMap(int mapData[][ROW]) {
    for (int row = 0; row < ROW; ++row) {
        for (int col = 0; col < COL; ++col) {
            drawCell(mapData[col][row], col, row);
        }
    }
}

void drawPlayer(int posx, int posy, const char* player) {
    xyputstr(posx, posy, player);
}

int main() {
    int key;
    const char* player = "¡Ú";
    int posx = 8, posy = 4;
    int mapData[COL][ROW] = {
    {1, 1, 1, 1, 1},
    {1, 1, 4, 1, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 2, 0, 0},
    {1, 1, 1, 1, 1},
    };
    //clrscr();
    drawMap(mapData);

    drawPlayer(posx, posy, player);

    while (1) {
        int oldx = posx;
        int oldy = posy;
        key = getkey();
        switch (key) {
        case UP_KEY:
            if (posy > 1) posy--; break;
        case DOWN_KEY:
            if (posy < 25)  posy++; break;
        case LEFT_KEY:
            if (posx > 2) posx -= 2; break;
        case RIGHT_KEY:
            if (posx < 79) posx += 2; break;
        }
        if (oldx != posx || oldy != posy) {
            xyputstr(oldx, oldy, " ");
            drawCell(mapData[oldy][oldx], posx, posy);
        }
        drawPlayer(posx, posy, player);
    }
    return 0;
}