#include <stdio.h>
#include <iostream>
using namespace std;

class Square
{
    int num, sqr;

    public:
    Square(int n)
    {
        num = n;
    }
    
    Square(const Square &s1)
    {
        num = s1.num;
        sqr = num * num;
    }

    void getSqr()
    {
        cout << "The Square of " << num << " is " << sqr;
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >>n;

    Square s1(n);
    Square s2(s1);

    s2.getSqr();
    return 0;
}
