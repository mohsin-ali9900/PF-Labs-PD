#include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printA();
void printW();
void printA2();
void printI();
void printS();

main()
{
	printA();
	printW();
	printA2();
	printI();
	printS();
}

void printA()
{
	gotoxy(20,10);
	cout<<"               ";
	gotoxy(20,11);
	cout<<"      #       ";
	gotoxy(20,12);
	cout<<"     # #       ";
	gotoxy(20,13);
	cout<<"    #   #      ";
	gotoxy(20,14);
	cout<<"   #######     ";
	gotoxy(20,15);
	cout<<"  #       #    ";
	gotoxy(20,16);
	cout<<" #         #   ";
	gotoxy(20,17);
	cout<<"               ";
}


void printW()
{
	gotoxy(20,20);
	cout<<"                                            ";
	gotoxy(20,21);
	cout<<"   #     #     #                               ";
	gotoxy(20,22);
	cout<<"   #    # #    #                                 ";
	gotoxy(20,23);
	cout<<"   #   #   #   #                                ";
	gotoxy(20,24);
	cout<<"   #  #     #  #                                ";
	gotoxy(20,25);
	cout<<"   # #       # #                                ";
	gotoxy(20,26);
	cout<<"   #           #                               ";
	gotoxy(20,27);
	cout<<"                                            ";
	gotoxy(20,28);
}



void printA2()
{
	gotoxy(20,30);
	cout<<"               ";
	gotoxy(20,31);
	cout<<"      #       ";
	gotoxy(20,32);
	cout<<"     # #       ";
	gotoxy(20,33);
	cout<<"    #   #      ";
	gotoxy(20,34);
	cout<<"   #######     ";
	gotoxy(20,35);
	cout<<"  #       #    ";
	gotoxy(20,36);
	cout<<" #         #   ";
	gotoxy(20,37);
	cout<<"               ";
}



void printI()
{
	gotoxy(20,39);
	cout<<"                                  ";
	gotoxy(20,40);
	cout<<"  ##############                          ";
	gotoxy(20,41);
	cout<<"        #                         ";
	gotoxy(20,42);
	cout<<"        #                          ";
	gotoxy(20,43);
	cout<<"        #                          ";
	gotoxy(20,44);
	cout<<"        #                          ";
	gotoxy(20,45);
	cout<<"        #                          ";
	gotoxy(20,46);
	cout<<"        #                          ";
	gotoxy(20,47);
	cout<<"        #                         ";
	gotoxy(20,48);
	cout<<"  ##############                          ";
	gotoxy(20,49);
	cout<<"                                  ";
}


void printS()
{
	gotoxy(20, 51);
	cout<<"                                   ";
	gotoxy(20, 52);
	cout<<"          ######                         ";
	gotoxy(20, 53);
	cout<<"        ##     ###                      ";
	gotoxy(20, 54);
	cout<<"       ##         #                   ";
	gotoxy(20, 55);
	cout<<"      ##                             ";
	gotoxy(20, 56);
	cout<<"       ##                            ";
	gotoxy(20, 57);
	cout<<"        ##                           ";
	gotoxy(20, 58);
	cout<<"          ######                          ";
	gotoxy(20, 59);
	cout<<"                ##                    ";
	gotoxy(20,60);
	cout<<"                 ##                  ";
	gotoxy(20, 61);
	cout<<"                  ##                 ";
	gotoxy(20, 62);
	cout<<"       #         ##                  ";
	gotoxy(20, 63);
	cout<<"        ###     ##                  ";
	gotoxy(20, 64);
	cout<<"          ######                          ";
	gotoxy(20, 65);
	cout<<"                                   ";
}