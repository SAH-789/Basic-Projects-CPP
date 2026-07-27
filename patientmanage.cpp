// virtual hospital patient management with c++
#include <iostream>
using namespace std;
class hospital
{
private:
    string name[50];
    string disease[50];
    int id[50];
    int age[50];
    int choice;
    int count = 0;

public:
    void menu();
    void add();
    void manage();
    void displayall();
    void search();
    hospital()
    {
        cout << "***** Hospital Patient Management System *****" << endl;
        cout << endl;
    }
};
void hospital::menu()
{
    cout << "1 : Add patient" << endl;
    cout << "2 : Display All patient" << endl;
    cout << "3 : Search Patient" << endl;
    cout << "4 : Exit" << endl
         << endl;

    cout << "Enter Your Choice" << endl;
    cin >> choice;
}
void hospital::manage()
{
    if (choice == 1)
    {
        add();
        menu();
        manage();
    }
   
    else if (choice == 2)
    {
        displayall();
        menu();
        manage();
    }
    else if(choice==3){
        search();
        menu();
        manage();
    }
     else if (choice == 4)
    {
        cout << "You Are Exit From Hospital *Good Bye*" << endl;
    }
    else //For entering the wrong element
    {
        cout << "Error You Mistakely Enter Wrong Number" << endl; // this is for wrong arguments from input
    }
}
void hospital::add() //New patient adding procedure
{
    cout << "Enter Patient Name : " << endl;
    cin >> name[count];
    cout << "Enter Patient Id : " << endl;
    cin >> id[count];
    cout << "Enter Patient Disease : " << endl;
    cin >> disease[count];
    cout << "Enter Patient Age : " << endl;
    cin >> age[count];
    count++;
    cout << " ***Patient Add Successfully*** " << endl;
    cout << endl;
}
void hospital::displayall()
{
    if (count == 0) // If the patient is not added so print this
    {
        cout << "No Patient Found"<<endl;
    }

    for (int i = 0; i < count; i++) //if patients is exists then print their Name , Id ,Disease and age.
    {
        cout << " *** This is The Patient NO : " << i+1 << " ***" << endl;
        cout << "The Name Of Patient Is : " << name[i] << endl;
        cout << "The Id Of THE Patient Is : " << id[i] << endl;
        cout << "The Patient Disease Is :  " << disease[i] << endl;
        cout << "And The Age Of Patient Is :  " << age[i] << endl;
        cout << endl;
    }
}
void hospital::search(){
int searchid;
bool found=false;
cout<<"Enter A Id OF Your Patient"<<endl;
cin>>searchid;
cout<<endl;
for (int i = 0; i < count; i++)
{
    if (searchid==id[i])
    {
        cout<<"*** you patient is Founded Successfully ***"<<endl<<endl;
        cout<<"The Id Of Your Patient Is "<<id[i]<<endl;
        cout<<"The Name Of Your patient Is "<<name[i]<<endl;
        cout<<"The Patient Disease Is "<<disease[i]<<endl;
        cout<<"The Age Of Your Patient Is "<<age[i]<<endl;
        found=true;
        break;
    }
    
}
if(!found){
        cout<<"Patient Not Found "<<endl;
    }
}
int main()
{
    hospital hadi;
    hadi.menu();
    hadi.manage();

    return 0;
}