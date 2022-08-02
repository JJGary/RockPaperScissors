// Gary Jiang Zihao Luo
// 5/25/2022
// Rock Paper Scissor
// Write a program that plays the game rock paper scissor

#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
   char input1, input2, input3;
   bool condition = true;
   
   cout << "Let's play Rock, Paper, Scissors.\n";
   do
   {
        cout << endl;
        cout << "Player 1: ";
        cin >> input1;
        input1 = tolower(input1);
        
        while (input1 != 'r' && input1 != 'p' && input1 != 's')
        {
            cout << "[ERROR: " << input1 << " not a valid move.]\n";
            cout << "\n";
            cout << "again? ";
            cin >> input3;
            input3 = tolower(input3);
            
            while (input3 != 'y' && input3 != 'n')
            {
                cout << "Invalid option.\n";
                cout << "\n";
                cout << "again? ";
                cin >> input3;
                input3 = tolower(input3);
            }
            
            switch(input3)
            {
                case 'n':
                    cout << "Nice game!";
                    return 0;
                case 'y':
                    cout << "\n";
                    cout << "Player 1: ";
                    cin >> input1;
                    input1 = tolower(input1);
            }
        }
        
       
        cout << "Player 2: ";
        cin >> input2;
        input2 = tolower(input2);
        
        switch(input1)
        {
            case 'r':
                cout << "Rock v. ";
                break;
            case 'p':
                cout << "Paper v. ";
                break;
            case 's':
                cout << "Scissors v. ";
                break;
            default:
                cout << "[ERROR: " << input1 << " not a valid move.]"; 
                break;
        }
        
        switch(input2)
        {
            case 'r':
                cout << "Rock\n";
                switch(input1)
                {
                    case 'r':
                        cout << "It's a TIE\n";
                        cout << endl;
                        break;
                    case 'p':
                        cout << "Player 1 wins\n";
                        cout << endl;
                        break;
                    case 's':
                        cout << "Player 2 wins\n";
                        cout << endl;
                        break;
                }
                break;
            case 'p':
                cout << "Paper\n";
                switch(input1)
                {
                    case 'r':
                        cout << "Player 2 wins\n";
                        cout << endl;
                        break;
                    case 'p':
                        cout << "It's a TIE\n";
                        cout << endl;
                        break;
                    case 's':
                        cout << "Player 1 wins\n";
                        cout << endl;
                        break;
                }
                break;
            case 's':
                cout << "Scissors\n";
                switch(input1)
                {
                    case 'r':
                        cout << "Player 1 wins\n";
                        cout << endl;
                        break;
                    case 'p':
                        cout << "Player 2 wins\n";
                        cout << endl;
                        break;
                    case 's':
                        cout << "It's a TIE\n";
                        cout << endl;
                        break;
                }
                break;
            default:
                cout << "[ERROR: " << input2 << " not a valid move.]\n";
                cout << "\n";
                break;
        }  
        
        cout << "again? ";
        cin >> input3;
        input3 = tolower(input3);
        
        while (input3 != 'y' && input3 != 'n')
        {
            cout << "Invalid option.\n";
            cout << "\n";
            cout << "again? ";
            cin >> input3;
            input3 = tolower(input3);
        }
        
        switch(input3)
        {
            case 'n':
                cout << "Nice game!";
                return 0;
        }
    }
    while (condition == true);
}


