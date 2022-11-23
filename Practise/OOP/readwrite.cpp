#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("sample.txt");
    string name;
    cout<<"Enter your name";
    cin>>name;

    out<<name;
    out.close();

    ifstream in ("sample.txt");
    string content;
    getline(in,content);
    cout<<"The content of this file is"<<content;
    in.close();
    return 0;
}