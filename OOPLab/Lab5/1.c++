#include <iostream>
#include <string>
using namespace std;

class sample
{
    int length, breadth;

    public:
    sample(int length, int breadth) : length(length), breadth(breadth)
    {
    }
    friend void calcArea(sample s); //friend function declaration
};

//friend function definition
void calcArea(sample s)
{
    cout << "Area of Rectangle = " << s.length * s.breadth;
}

int main()
{
    int len, bdth;
    cout << "Enter length and breadth: \n";
    cin >> len >> bdth;
    sample s(len, bdth);
    calcArea(s);
    return 0;
}

    
