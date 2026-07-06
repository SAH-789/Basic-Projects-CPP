// SYED ABDUL HADI..
// Making a Virtal Atm with using c++
#include <iostream>
using namespace std;
class Atm
{
    int balance;
    int choice;
    int amount;

public:
    int getchoice()
    {
        return choice;
    }
    Atm()
    { // using constructor
        balance = 5000;
        cout << "ATM STARTED " << endl;
    }

    void setdata()
    {
        cout << "1 : check balance " << endl;
        cout << "2 : deposit money " << endl;
        cout << "3 : withdraw money" << endl;
        cout << "4 : exit  " << endl;

        cout << "enter your choice " << endl;
        cin >> choice;
    }
    void getdata()
    {

        if (choice == 1)
        {
            cout << "your current balance is " << balance << endl;
        }
        else if (choice == 2)
        {
            cout << "enter a value you should deposit" << endl;
            cin >> amount;
            balance = amount + balance;
            cout << "your new balance is " << balance << endl;
        }
        
        else if (choice == 3)
        {
            cout << "enter a amount you should want to withdraw" << endl;
            cin >> amount;
            balance = balance - amount;
            cout << "your new balance is " << balance << endl;
        }
        else if (choice == 4)
        {
            cout << "Thankyou for using the atm " << endl;
        }
        else
        {
            cout << " wrong number !!!" << endl;
        }
    }
    ~Atm()
    { // using distructor
        cout << "thank you for using the ATM" << endl;
    }
};
int main()
{
    Atm h1;
    while (true)
    {
        h1.setdata();
        if (h1.getchoice() == 4)
        {
            cout << endl;
            break;
        }

        h1.getdata();
    }

    return 0;
}