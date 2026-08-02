#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class password
{
public:
    int strength;
    int choice;
    void menu();
    void takestrength();
    void generatepass();
    password()
    {
        cout << "***** PASSWORD GENERATOR ***** " << endl;
        cout<<endl;
    }
};
void password::menu()
{
    cout << "1 : Generate a Password" << endl;
    
    cout << "2 : Exit"<<endl;
    cout<<endl;
    cout << "Enter Your Choice" << endl;
    cin >> choice;
    if (choice == 1)
    {
        takestrength();
        generatepass();
    }
    else if (choice == 2)
    {
        cout << "*** You Are Exit ***" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
}
void password::takestrength()
{
    cout << "Enter A Strength Of Your Password" << endl;
    cin >> strength;
}
void password::generatepass()
{
    char characters[] = "qwertyuiopppasdfghjklzxcvbnm1234567890!@#$%^&*";
    srand(time(0));
    cout << "Password Generated : ";
    for (int i = 0; i < strength; i++)
    {
        int index = rand() % (sizeof(characters) - 1);
        cout << characters[index];
    }
}
int main()
{
    password my;
    my.menu();

    return 0;
}