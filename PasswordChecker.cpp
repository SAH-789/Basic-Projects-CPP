#include <iostream>
#include <cctype>
#include <string>
using namespace std;
class secure
{
public:
    int score = 0;
    string password;
    void check()
    {
        cout << "Enter Password" << endl;
        cin >> password;
        cout << endl;
    };
    secure()
    {
        cout << "PASSWORD SECURITY CHECKING" << endl;
    }
    void setarguments()
    {
        bool upper = false;
        bool lower = false;
        bool special = false;
        bool number = false;

        for (int i = 0; i < password.length(); i++)
        {
            if (isupper(password[i]))
            {
                upper = true;
                break;
            }
        }
        for (int i = 0; i < password.length(); i++)
        {
            if (islower(password[i]))
            {
                lower = true;
                break;
            }
        }
        for (int i = 0; i < password.length(); i++)
        {
            if (ispunct(password[i]))
            {
                special = true;
                break;
            }
        }
        for (int i = 0; i < password.length(); i++)
        {
            if (isdigit(password[i]))
            {
                number = true;
                break;
            }
        }
        if (upper)
        {
            cout << "Upper Case : Found" << endl;
        }
        else
        {
            cout << "Upper Case : Missing" << endl;
        }
        if (lower)
        {
            cout << "lower Case : Found" << endl;
        }
        else
        {
            cout << "lower Case : Missing" << endl;
        }
        if (special)
        {
            cout << "Special Character : Found" << endl;
        }
        else
        {
            cout << "Special Character: Missing" << endl;
        }
        if (number)
        {
            cout << "Number : Found " << endl;
            cout << endl;
        }
        else
        {
            cout << "Number : Missing" << endl;
        }
        if (upper)
            score++;
        if (lower)
            score++;
        if (special)
            score++;
        if (number)
            score++;
    }
    void result()
    {
        if (score == 4)
        {
            cout << "Your Password Is Very Strong No One Can Crack It Easily " << endl;
            cout << endl;
        }
        else if (score == 3)
        {
            cout << "Your Password is Normal" << endl;
            cout << endl;
        }
        else
        {
            cout << " Your Password is very Weak " << endl;
            cout << endl;
        }
    }
};

int main()
{
    secure mypass;
    mypass.check();
    mypass.setarguments();
    mypass.result();
    return 0;
}