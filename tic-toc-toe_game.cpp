#include <iostream>
using namespace std;

char number[10] = {'o','1','2','3','4','5','6','7','8','9'};

int result();
void game_Board();

int main()
{
int player = 1,i,choice;

    char mark;
    do
    {
       game_Board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && number[1] == '1')

            number[1] = mark;
        else if (choice == 2 && number[2] == '2')

            number[2] = mark;
        else if (choice == 3 && number[3] == '3')

            number[3] = mark;
        else if (choice == 4 && number[4] == '4')

            number[4] = mark;
        else if (choice == 5 && number[5] == '5')

            number[5] = mark;
        else if (choice == 6 && number[6] == '6')

           number[6] = mark;
        else if (choice == 7 && number[7] == '7')

           number[7] = mark;
        else if (choice == 8 && number[8] == '8')

            number[8] = mark;
        else if (choice == 9 && number[9] == '9')

            number[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=result();

        player++;
    }while(i==-1);
    game_Board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
*/

int result()
{
    if (number[1] == number[2] && number[2] == number[3])

        return 1;
    else if (number[4] == number[5] && number[5] == number[6])

        return 1;
    else if (number[7] == number[8] && number[8] == number[9])

        return 1;
    else if (number[1] == number[4] && number[4] == number[7])

        return 1;
    else if (number[2] == number[5] && number[5] == number[8])

        return 1;
    else if (number[3] == number[6] && number[6] == number[9])

        return 1;
    else if (number[1] == number[5] &&number[5] == number[9])

        return 1;
    else if (number[3] == number[5] && number[5] == number[7])

        return 1;
    else if (number[1] != '1' && number[2] != '2' && number[3] != '3' 
                    && number[4] != '4' && number[5] != '5' && number[6] != '6' 
                  && number[7] != '7' && number[8] != '8' && number[9] != '9')

        return 0;
    else
        return -1;
}



    // FUNCTION for  BOARD OF TIC TAC TOE WITH PLAYERS MARK


void game_Board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << number[1] << "  |  " << number[2] << "  |  " << number[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << number[4] << "  |  " << number[5] << "  |  " << number[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << number[7] << "  |  " << number[8] << "  |  " << number[9] << endl;

    cout << "     |     |     " << endl << endl;
}
