#include<iostream>

using namespace std;

void conv(int a){

   int temp[20];

   int in=0;

   while(a!=0){

       temp[in]=a%2;

       a/=2;

       in++;

   }

   cout<<"Binary Equivalent is \"";

   for(in=in-1;in>=0;in--){

       cout<<temp[in];

   }

   cout<<"\"";

}

int main(){

   int num;

   do{

       cout<<"menu _exit_condition";

       cout<<"\n\t\tEnter the number = ";

       cin>>num;

       if(num>0)

           conv(num);

   }while(num!=999);

}