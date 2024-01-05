#pragma once
#define TABLE_X 26 //테트리스 판 x 축 길이
#define TABLE_Y 26 //테트리스 판 y 축 길이


class MainMenu
{
public:
    MainMenu();
    void Sub();
};

class GameSet {
private:
    int x; // 가로
    int y; // 세로
    int table[TABLE_Y][TABLE_X]; // 테이블 판 0 = " ", 1 = "▦"


public:
    GameSet(int x, int y);
    void DrawGameTable();
};
