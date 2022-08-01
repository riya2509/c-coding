#include <stdio.h>
#include<string.h>
struct book{
    char name[20];
    int bookno;
    float price;
};
void function (struct book v[],int n);


int main()
{
    struct book b[100];
    int num, i;
    printf("Enter the number of books: \n");
    scanf("%d", &num);
  
    for(i=0; i<num; i++)
    {
        printf("Enter the name of the book %d: ", i+1);;
        scanf("%s", &b[i].name);
        printf("Enter the book number of book %d:", i+1);
        scanf("%d", &b[i].bookno);
        printf("Enter the price of the book of the book %d:", i+1);
        scanf("%f", &b[i].price);
    }    
    function(b,num);
 
    return 0;
}

void function(struct book v[],int n)
{
    //int highest=0;
   
    int i;
    int x=0;
    for(i=0; i<n ; i++)
    {
   // v[i].price=highest;
    if(v[0].price<v[i].price)
   // v[i+1].price=highest;
   x=i;
    }
    printf("The book with the highest price is:  %s\n", v[x].name );
    printf("The book details are :\n");
    printf("The book number is %d\n", v[x].bookno);
    printf("the book name is %s\n", v[x].name);
    printf("The book price is %0.2f\n", v[x].price);

    
}