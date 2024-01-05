#include <iostream>
#include <conio.h>
#include  "Consola.h"

int main() {
	
}

void drawCell(int col, int row) {
	int cell = mapData[row][col];
	textbackground((cell == 1) ? DARKGRAY : YELLOW);
	gotoxy((MAP_X1 + col + 1) * 2, MAP_Y1 + row + 1);
	puts(cellSymbol[cell]);
}

void drawmap() {
	for (int row = 0; row < Map_Height; ++row)
		for(int col=0;col<Map)
}