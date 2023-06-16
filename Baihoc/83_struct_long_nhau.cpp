#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

struct point
{
    float x;
    float y;
};
struct tamgiac
{
    point a,b,c;
};
struct hinhtron
{
    point c;
    float r;
};
struct hinhchunhat
{
    point a,b,c,d;
};
struct dagiac
{
    point[100] ps;
    int n;
};
struct dagiac2
{
    point ps[100];
    point* ps;
};
// cn ng
struct date
{
    int day;
    int month;
    int year;
};
struct connguoi
{
    char ten[100];
    date date0birth;
    float weight;
};
// khai bao ben trong
struct person
{
    char ten[100];
    struct date
    {
        int day;
        int month;
        int year;
    };
    date date0birth;
    float weight;
};






