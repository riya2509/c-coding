#include<iostream>
#include <stdio.h>
#include <cstdlib>
#include<conio.h>
using namespace std;


class B;
class A
{
int m;
public:
void getm()
{
cout<<"Enter the value of interger m:";
cin>>m;
}
void clrscr() {
  system("cls");
  system("clear");  
}
friend void max(A, B);
};
class B
{
int n;
public:
void getn()
{
cout<<"\nEnter the value of interger n:";
cin>>n;
}
friend void max(A,B);
};
void max(A x,B y)
{
if(x.m>y.n)
{
cout<<"\nGreater number is:"<<x.m;	
 }
else
{
cout<<"\nGreater number is:"<<y.n;
}
}
int main()
{
A x;
B y;
x.getm();
y.getn();
max(x,y);
getch();
}