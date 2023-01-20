#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;



main()
{


}

void printmaze()
{
    cout<<"#######################################"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"##                                   ##"<<endl;
    cout<<"#######################################"<<endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void clear(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void showGhost(int x, int y)
{
    gotoxy(x, y);
    cout<<"G";
}

char GetCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0 , 0};
    SMALL_RECT rect = {x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
} 