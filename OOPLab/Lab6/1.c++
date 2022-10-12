#include<iostream>
using namespace std;
class Student{
    protected:
int rollno;
public:
void getRoll(int a)
{
    rollno=a;
}
void putRoll(){
    cout<<"Enter roll no "<<rollno<<endl;
}
};
class Test:public Student
{
    protected:
       float game1,game2;  
    public:  
        void getMarks(float x, float y)
        {  
            game1=x;  
            game2=y;  
        }  
        void putMarks(void)
        {  
            cout<< "Marks gain: "<<endl<<"game1="<<game1<<endl<<"game2="<<game2<<endl;  
        }  
};  
class Sport
{
    protected:
       float score;  
    public:  
        void getScore(float s)
        {  
            score=s;  
        }  
        void putScore(void)
        {  
            cout<<"Sports score : "<<score<<endl;  
        }  
};  
class Result:public Test,public Sport
{  
       float total;  
    public:  
        void display(void);  
};  
void Result::display(void)
{  
    total=game1+game2+score;  
    putRoll();  
    putMarks();  
    putScore();  
    cout<<"Total Score  : "<<total<<endl;  
}  
int main()
{  
    Result stu;  
    stu.getRoll(10);  
    stu.getMarks(40,50);  
    stu.getScore(60);  
    stu.display();  
    return 0;  
}
