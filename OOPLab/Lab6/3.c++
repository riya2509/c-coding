//parameterised constructor
//C++ to calc area of wall

#include <iostream>
using namespace std;
//declare a class
class Wall{
    private:
    double length;
    double height;
    public:
    // parameterized constructor to initialize variables
    Wall(double len,double hgt){
    length=len;
    height=hgt;
}
double calculateArea() {
    return length*height;
}
};
 int main(){
    //creating objects and initialising data members
  Wall wall1(10.5,8.6);
  Wall wall2(8.5,6.3);

  cout<<"Area of wall 1 : "<< wall1.calculateArea()<< endl;
  cout<< "Area of wall 2: "<< wall2.calculateArea();
  return 0;
}


 
