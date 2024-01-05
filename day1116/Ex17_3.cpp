#include <iostream>
#include "consola.H"

using namespace std;


void xyputc(int x, int y, char ch) {
    gotoxy(x, y);
    cout << ch;

}

void xyputstr(int x, int y, const char str[]) {
    gotoxy(x, y);
    cout << str;
}

void fillbox(int x1, int y1, int x2, int y2, int color) {
    for (int i = y1; i <= y2; ++i) {
        for (int j = x1; j <= x2; ++j) {
            textbackground(color);// Set background color
            xyputc(j, i, ' ');
        }
    }
    
}



int main() {

    const char* ch = "o";
    const char str[] = "ABCDE";
    char textcolor = RED;
    char fillboxColor = BLUE;

    xyputc(10, 10, *ch);
    xyputstr(10, 12, str);
    fillbox(5, 5, 15, 15, fillboxColor);

    return 0;


}