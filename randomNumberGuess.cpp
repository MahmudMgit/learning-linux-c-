#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){

    srand(time(0));
    int secretNumber = rand() % 20 +1;
    int userGuess = 0;
    int attempts = 0;


    while(userGuess != secretNumber){
    
        std::cout << "Guess the Number between 1 and 20: ";
        std::cin >> userGuess;

        attempts++;

        if(secretNumber > userGuess){
            std::cout << "Higher! \n";
        }
        else if(secretNumber < userGuess){
            std::cout << "Lower! \n";
        } 
        else {
            std::cout << "You've got the correct number!\n";
        }

        

    }


    std::cout << "\nAttemps: " << attempts << '\n';

    

    return 0;
}
