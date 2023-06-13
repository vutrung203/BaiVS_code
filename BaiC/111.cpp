#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
void TextColor(int x)
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
void resizeConsole(int width, int height)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
};
enum TT{RIGHT, LEFT, UP, DOWP};
struct Toado{
    int x, y;
};
struct Snake{
    Toado dot[500];
    int n;
    TT tt;
};
struct HQ{
    Toado td;
};

void playgame(int &thoat, char name[], int &lever, Snake &luusnake, char dname[]);
void khungplay();
void help(int &thoat, char name[], int &lever, Snake &luusnake, char dname[]);
void about(int &thoat, char name[], int &lever, Snake &luusnake, char dname[]);
void Score(int &thoat, char name[], int &lever, Snake &luusnake, char dname[]);
void khungngoai();
void khoitao(Snake &snake, HQ &hq);
void hienthi(Snake &snake, HQ &hq);
void dieukhien(Snake &snake,int &cam);
void Random(Snake &snake, HQ &hq);
void thuagame(Snake snake, int &thua);
void Time();
void vaogame(char name[], int &lever,  Snake &luusnake, char dname[]);
void docfile(Snake &luusnake, char dname[]);
void ghifile(Snake snake, char name[]);
void Score(Snake &luusnake, char dname[]);
void gameover(char name[], Snake snake, Snake luusnake);
void tamdung();



int main()
{
    resizeConsole(700,550);
    int thua=1, cam=0, thoat = 0, lever;
    char name[30], dname[30] = "No name";
    Snake snake, luusnake;
    luusnake.n = 0;
    HQ hq;
    docfile(luusnake, dname);
    playgame(thoat, name, lever, luusnake, dname);
    system("cls");
    fflush(stdin);
    if(thoat==0)
    {
        do{
            thua=1; cam=0;
            khungngoai();
            khoitao(snake, hq);
            do{
                hienthi(snake, hq);
                dieukhien(snake, cam);
                Random(snake, hq);
                thuagame(snake, thua);
                Sleep(lever);
              }while(thua != 0);
              gameover(name, snake,luusnake);
              system("cls");
              if(snake.n > luusnake.n)
               {
                    ghifile(snake, name);
                    docfile(luusnake, dname);
                }
              playgame(thoat, name, lever, luusnake, dname);
          }while(thoat == 0);
      }
}

void khungngoai()
{
            for(int i = 5; i<75; i++)
    {
        for(int j = 2; j<28; j++)
        {
            gotoxy(i, j+6); TextColor(112); printf(" ");
        }
        printf("\n");
    }
        TextColor(11);
    for(int i = 0; i<=78; i++)
    {
        gotoxy(i, 0); printf("%c", 205);
        Sleep(1);
    }
        for(int i = 0; i<=78; i++)
    {
        gotoxy(i, 40); printf("%c", 205);
        Sleep(1);
    }
}
