#include "stdafx.h"
#include "iostream.h"
#include "fstream.h"
#include "string.h"
class Customer
{
private:
char mobileNo [11];
char name [25];
char dateOfBirth [9];
char billingAddress [51];
char city [25];
char phoneNo [11];
float amountoutstanding;
public:
void print ()
{
I
cout << endl << "Mobile phone number: ";
cout << mobileNo << endl;
cout << "\nName:";
cout << name << endl;
cout << "\nDate of Birth: ";
cout << dateOfBirth<<endl;
cout << "\n\nCustomer's billing address: ";
cout << billingAddress<<endl;
cout << "\nCity: ";
cout << city << endl;
cout << "\nResidence phone number: ";
cout << phoneNo << endl; I
cout << "\nAmount due: ";
cout << amountoutstanding << endl;
}
void get()
{
cout << "Mobile phone number: ";
cin >> mobileNo;
cin.ignore ();
cout << endl << "Name: ";
cin.getline (name, 25);
cout << endl << "Date of Birth: ";
cin >> dateOfBirth;
cin.ignore ();
cout << endl << "Customer's billing address: ";
cin.getline (billingAddress, 51);
cout << endl << "City: ";
cin.getline (city, 25);
cout << endl << "Residence phone number: ";
cin >> phoneNo;
cout << endl << "Amount due: ";
cin >> amountoutstanding;
}
};
int ch;
Customer object;
while (1)
{
I
cout<<"\n \n Diaz Customer Tracking System\n";
cout<< "\n 1. Enter Customer Details\n";
cout << "\n 2. Display all records \n";
cout << "\n 3. Display No of record \n";
cout << "\n 4. Display a particular record \n";
cout << "\n 5. Reverse Reading \n";
cout << "\n Enter your choice (0-3)\t";
cin>>ch;
ofstream ofile ("customer.dat");
char reply = 'Y';
while (reply ==='Y' || reply == 'y')
{
Match case
cout << "Enter customer details " << endl;
object.get();
ofile.write((char ) &object, sizeof (object));
cout << "Do you wish to continue ? [Y/N]";
cin >> reply;
ofile.close();
}
if (ch==2)
{
}
ifstream ifile ("customer.dat");
ifile.read ((char*)&object, sizeof (object));
while (ifile) //Read Till The End Of The File
{
object.print ();
ifile.read((char*)&object, sizeof (object));
ifile.close();
}
if (ch==3)
{
llehandling12.cpp filehandling11.cpp filehandling 10.cpp filehandling9.cpp filehandling8.cpp filehandlings
fstream Fil
Fil.seekg (0, ios::end);
int iEnd;
iEnd-Fil.tellg ();
cout << "The size of the file is " << iEnd << endl;
cout << "Size of one Record is " << sizeof (object) <<endl;
}
if (ch==4)
{
("customer.dat", ios :: in);
int iNorec-iEnd/sizeof(object);
cout << "There are " << iNorec << "records in the file" << endl;
Fil.close();
int choice;
cout << "Please Enter Which Record you want to see" << endl;
cin >> choice;
choice choice - 1;
ifstream ifile ("customer.dat");
ifile.seekg (choice*sizeof (object), ios::beg);
ifile.read ((char*)&object, sizeof (object));
cout << "Please Enter Which Record you want to see" << endl;
cin >> choice;
choice choice - 1;
ifstream ifile ("customer.dat");
ifile.seekg (choice*sizeof (object), ios::beg);
ifile.read ((char*)&object, sizeof (object));
object.print ();
ifile.close();
}
if (ch==5)
{
if (ch==0)
break;
}
return 0;
}

