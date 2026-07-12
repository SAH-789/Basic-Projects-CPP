// SYED ABDUL HADI
// MAKING A VIRTUAL ORDER TAKING WORKER ON RESTAURANT WITH USING C++
#include <iostream>
using namespace std;
class restaurant
{
public:
    int total = 0;
    int quantity;
    int food;
    int choice;
    string items[6] = {"PIZZA", "BURGER", "PASTA", "FRIES", "SANDWICH", "SUSHI"};
    int prices[6] = {1200, 350, 800, 250, 800, 1250};
    restaurant()
    {
        cout << "*** WELCOME TO OUR RESTAURANT ***" << endl;
    }
    void setmenu()
    {
        cout << "1: Show Menu" << endl;
        cout << "2: Exit " << endl
             << endl;
        cin >> choice;
    }
    void order()
    {
        if (choice == 1)
        {
            cout << "****THE MENU IS HERE****" << endl
                 << endl;
            cout << "1:" << items[0] << "  PRICE : " << prices[0] << endl;
            cout << "2:" << items[1] << "  PRICE : " << prices[1] << endl;
            cout << "3:" << items[2] << "  PRICE : " << prices[2] << endl;
            cout << "4:" << items[3] << "  PRICE : " << prices[3] << endl;
            cout << "5:" << items[4] << "  PRICE : " << prices[4] << endl;
            cout << "6:" << items[5] << "  PRICE : " << prices[5] << endl;
            cout << endl;
            cout << "Order A Food :" << endl;
            cin >> food;
            cout << "Enter A Food Quantity :" << endl;
            cin >> quantity;
        }
        else if (choice == 2)
        {
            cout << " YOU ARE EXIT FROM THIS MENU " << endl;
        }
        else
        {
            cout << " .... ERROR .... " << endl;
        }
        if (food >= 1 && food <= 6)
        {
            total = total + (prices[food - 1] * quantity);
        }
        else
        {
            cout << "INVALID  FOOD  NUMBER" << endl;
        }
    }
    bool more()
    {
        char more;
        cout << "DO YOU WANT TO ORDER ANOTHER FOOD  y/n " << endl;
        cin >> more;
        if (more == 'y')
        {
            order();
            return true;
        }
        else if (more == 'n')
        {
            cout << endl;
            cout << " OKAY  " << endl;
            return false;
        }
        else
        {
            cout << "ERROR !!!" << endl;
            return false;
        }
    }
    void bill()
    {
        cout << "PAY YOUR BILL" << " : " << total << endl;
    }

    ~restaurant()
    {
        cout << endl;
        cout << "Thanks For Visiting Our Restaurant" << endl;
    }
};
int main()
{
    restaurant hadi;
    hadi.setmenu();
    hadi.order();
    while (hadi.more())
    {
    }

    hadi.bill();

    return 0;
}