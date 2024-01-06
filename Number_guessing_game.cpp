#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    //declaring the variables
    int guess_Num;
    int random_Number;
    int num_Chances = 0;
    srand(time(0)); 
    random_Number = rand() % 100 + 1; 
    cout << "\t\t\tWelcome to Guess the Number Game\n\n";

    do
    {
        cout << "Enter your guess between 1 and 100: ";
        cin >> guess_Num;
        num_Chances++;

        if (guess_Num > random_Number){
            cout << "The "<<guess_Num<<" is Too high!\n\n";
        }
        else if (guess_Num < random_Number){
            cout << "The "<<guess_Num<<" is Too low!\n\n";
        }
        else{
            cout << "\nExcellent! You got the right guess "<<guess_Num <<"in "<< num_Chances << " tries!\n";
        }
    } 
        while (guess_Num != random_Number);

return 0;
}
