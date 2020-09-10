#include <iostream>
using namespace std;

char a[10] = {'o','1','2','3','4','5','6','7','8','9'};

int won();
void lol();

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
        lol();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter your position:  ";                                              // position where you want to mark your turn   
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && a[1] == '1')

            a[1] = mark;
        else if (choice == 2 && a[2] == '2')

            a[2] = mark;
        else if (choice == 3 && a[3] == '3')

            a[3] = mark;
        else if (choice == 4 && a[4] == '4')

            a[4] = mark;
        else if (choice == 5 && a[5] == '5')

            a[5] = mark;
        else if (choice == 6 && a[6] == '6')

            a[6] = mark;
        else if (choice == 7 && a[7] == '7')

            a[7] = mark;
        else if (choice == 8 && a[8] == '8')

            a[8] = mark;
        else if (choice == 9 && a[9] == '9')

            a[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=won();

        player++;
    }
    while(i==-1);
    lol();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}
int won()
{
    if (a[1] == a[2] && a[2] == a[3])

        return 1;
    else if (a[4] == a[5] && a[5] == a[6])

        return 1;
    else if (a[7] == a[8] && a[8] == a[9])

        return 1;
    else if (a[1] == a[4] && a[4] == a[7])

        return 1;
    else if (a[2] == a[5] && a[5] == a[8])

        return 1;
    else if (a[3] == a[6] && a[6] == a[9])

        return 1;
    else if (a[1] == a[5] && a[5] == a[9])

        return 1;
    else if (a[3] == a[5] && a[5] == a[7])

        return 1;
    else if (a[1] != '1' && a[2] != '2' && a[3] != '3' 
                    && a[4] != '4' && a[5] != '5' && a[6] != '6' 
                  && a[7] != '7' && a[8] != '8' && a[9] != '9')

        return 0;
    else
        return -1;
}
void lol()
{
    system("cls");                                                                                                // to produce a verifiable code
    cout << "\n\n\tZero Cross\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << a[1] << "  |  " << a[2] << "  |  " << a[3] << endl;

    cout << "__|_|__" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << a[4] << "  |  " << a[5] << "  |  " << a[6] << endl;

    cout << "__|_|__" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << a[7] << "  |  " << a[8] << "  |  " << a[9] << endl;

    cout << "     |     |     " << endl << endl;
}
