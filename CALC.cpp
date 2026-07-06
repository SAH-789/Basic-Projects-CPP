//making calculator with simple concepts in C++ 
#include <iostream>
using namespace std;
class calculator
{
    int a;
    int b;
    char c;

public:
    void setdata()
    {
        cout << "enter first number " << endl;
        cin >> a;
        cout << "enter second number" << endl;
        cin >> b;
        cout << "enter '+','-','/','*' " << endl;
        cin >> c;
    }
    void getdata()
    {
        if (c == '+')
        {
            cout << "your value is " << a + b << endl;
        }
        else if (c == '-')
        {
            cout << "your value is " << a - b << endl;
        }
        else if (c == '*')
        {
            cout << "your value is " << a * b << endl;
        }
        else if (c == '/')
        {
            if ( b == 0)
            {
                cout << "error divison by zero is not allowed" << endl;
            }

            cout << "your value is" << a / b << endl;
        }
        else
        {
            cout << "wrong argument !!!" << endl;
        }
    }
};
int main()
{
    calculator c1[3];
    for (int i = 0; i < 3; i++)
    {
        c1[i].setdata();
        c1[i].getdata();
    }

    return 0;
}