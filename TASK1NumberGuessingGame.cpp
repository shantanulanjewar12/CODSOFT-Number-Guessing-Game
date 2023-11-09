                                                 //TASK1: Creating  a random number guessing game.
                                                 //SHANTANU LANJEWAR
                                                 

#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main()
{
    cout<<"\t \t \t \t\t\t\t\t\t\t This is a number guessing game. "<<endl;
    cout<<"\t \t \t \t\t\t\t\t\t\t Guess a number between 1 to 100. "<<endl;

    srand(time(0));
    int RandomNumber = ( rand() % 100) +1 ;
    int Guess;
    int Tries;
    do
        {
            cout<< "Enter your Guess: \n";
            cin>>Guess;

            if(Guess>RandomNumber)
                {
                    cout<<"The Guess is too high.\n";
                }
            else if(Guess<RandomNumber)
                {
                    cout<<"The Guess is too low.\n";
                }
            else
                {
                    cout<<"Your Guess is corect.\n\n";
                }
            Tries++;
        } while (RandomNumber!=Guess);

        cout<<"The Random Number was :"<< RandomNumber<<endl;
        cout<<"\nYou Guessed the number in "<< Tries << " attempt.";
    

}