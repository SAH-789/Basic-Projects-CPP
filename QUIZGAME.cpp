//Making A Simple Quiz Game With Result . Also 😣
#include <iostream>
using namespace std;
class game
{
public:
    int ans;
    int score;
    game()
    {
        score = 0;
        cout << "*********Game is start*********" << endl;
    }
    void startup()
    {
        cout << " 1 : Enter The Game" << endl;
        cout << " 2 : Exit" << endl
             << endl;
        cin >> ans;
        switch (ans)
        {
        case 1:
            question1();
            question2();
            question3();
            question4();
            question5();

            result();
            break;
        case 2:
            cout << "Your Game Is Exit" << endl;
            break;
        default:
            cout << "wrong number " << endl;
            break;
        }
    }

    void question1()
    {
        cout << "1) What Is The Name Of Our Country " << endl
             << endl;
        cout << "1: Turkey" << endl;
        cout << "2: Nepal" << endl;
        cout << "3: Pakistan" << endl;
        cin >> ans;
        if (ans == 3)
        {
            cout << "Your Answer Is Correct " << endl;
            score++;
        }
        else
        {
            cout << "WRONG ANSWER" << endl;
        }
    }

    void question2()
    {
        cout << "2) What Is The Best Fighting Game In World " << endl
             << endl;
        cout << "1: Tekken 8" << endl;
        cout << "2: Shadow Fighter" << endl;
        cout << "3: Ninja Fighter" << endl;
        cin >> ans;
        if (ans == 1)
        {
            cout << "Your Answer Is Correct " << endl;
            score++;
        }
        else
        {
            cout << "Wrong Answer" << endl;
        }
    }
    void question3()
    {
        cout << "3) Who is first prime minister of pakistan" << endl
             << endl;
        cout << "1: Shahbaz Sharif" << endl;
        cout << "2:Liaqat Ali Khan" << endl;
        cout << "3:Babar Azam" << endl;
        cin >> ans;
        if (ans == 2)
        {
            cout << "Your Answer Is Correct " << endl;
            score++;
        }
        else
        {
            cout << "Wrong Answer" << endl;
        }
    }

    void question4()
    {
        cout << "4) Who Is The Best Teacher Of Coding On Youtube " << endl
             << endl;
        cout << "1 :CodeWithHarry" << endl;
        cout << "2 :Apna college" << endl;
        cout << "3 :Coding master" << endl;
        cin >> ans;
        if (ans == 1)
        {

            cout << "Your Answer Is Correct " << endl;
            score++;
        }
        else
        {
            cout << "Wrong Answer" << endl;
        }
    }
    void question5()
    {
        cout << "5) Which Career Is More Demanding in Future" << endl
             << endl;
        cout << "1 :Artifical intelligence" << endl;
        cout << "2 :Cyber Security " << endl;
        cout << "3 :Software Engineering" << endl;
        cin >> ans;
        if (ans == 1)
        {

            cout << "Your Answer Is Correct " << endl;

            score++;
            cout << "But My Favourite Cyber Security" << endl<<endl; //just for fun
        } 
        else
        {
            cout << "Wrong Answer" << endl;
        }
    }
    ~game()
    {
        cout << "FINISH GAME" << endl;
    }
    void result()
    {
        cout << "OK YOUR RESULT IS HERE : " << endl;
        cout << "Correct Answers :" << score << endl;
        cout << "Wrong  Answers :" << 5 - score << endl;
        cout << "Percentage =" << score * 100 / 5 << '%' << endl;
    }
};

int main()
{
    game h1;
    h1.startup();

    return 0;
}
