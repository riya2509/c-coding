#include <iostream>
using namespace std;
class distance
{
    private:
        int feet;
        int inches;
    public:
        distance(int f, int i)
        {
        feet = f;
        inches=i;
        
        }
        void display()
        {
        
            cout<<"Feet: "<<feet<<endl<<"inches:"<<inches<<endl;
        }
    
        int operator< (const distance& d)
        {
            if((feet==d.feet) && (inches < d.inches))
                return 1;
            else
                return 0;
        }

    
};
    

int main()
{
  distance d1(11, 10), d2(5, 11);
  cout<<"Values of d1"<<endl;
  d1.display();
  cout<<"Values of d2"<<endl;
  d2.display();
  if(d1<d2)
    cout<<endl<<"d1 is less than d2"<<endl;
else
    cout<<endl<<"d2 is less than d1"<<endl;
  
   
   
    
    
}