#include<iostream>
using namespace std;
int area(int s);
int area(int l1,int w1);
int main()
{
    int s1;
    int l,w;
    cout<<"Enter the value of a side of a sqare : ";
    cin>>s1;
    cout<<endl<<"Enter the value of length of a rectrangle : ";
    cin>>l;
    cout<<endl<<"Enter the value of width of a rectrangle : ";
    cin>>w;
    cout<<"Area of sqare : "<<area(s1)<<endl;
    cout<<"Area of rectrangle : "<<area(l,w)<<endl;

}
int area(int s)
{
    return s*s;
}
int area(int l1,int w1)
{
    return l1*w1;
}