#pragma once
#define TABLE_X 26 //��Ʈ���� �� x �� ����
#define TABLE_Y 26 //��Ʈ���� �� y �� ����


class MainMenu
{
public:
    MainMenu();
    void Sub();
};

class GameSet {
private:
    int x; // ����
    int y; // ����
    int table[TABLE_Y][TABLE_X]; // ���̺� �� 0 = " ", 1 = "��"


public:
    GameSet(int x, int y);
    void DrawGameTable();
};
