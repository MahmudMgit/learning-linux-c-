#include <iostream>

void runCalc();
void fuelCalc();

int main(){

    char option;

    do{std::cout << "Hi there, please choose an option: \n";
    std::cout << "1: calculator\n";
    std::cout << "2: fuel calculator\n";
    
    std::cin >> option;

    switch (option)
    {
    case '1':
        runCalc();
        break;
    case '2':
        fuelCalc();
        break;
    
    default:
        break;
    }}while(option != '1' && option != '2');


    

    return 0;
    
}

void runCalc(){
    double num1;
    double num2;
    char numOperator;

    double result;

    std::cout << "Enter the operator you want: ";
    std::cin >> numOperator;

    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch (numOperator)
    {
    case '+':
    result = num1 + num2;
    std::cout << "Your answer is: " << result;
        break;
    case '-':
    result = num1 - num2;
    std::cout << "Your answer is: " << result;
        break;
    case '/':
    result = num1 / num2;
    std::cout << "Your answer is: " << result;
        break;
    case '*':
    result = num1 * num2;
    std::cout << "Your answer is: " << result;
        break;
    
    default:
    std::cout << "You did not input a valid operator! \n";
        break;
    }
}

void fuelCalc() {
    double distance;
    double milesPerGallon;
    double pricePerLitre;
    double gallonsUsed;
    double litresUsed;
    double tripCost;
    char returnTrip;

    std::cout << "---------- TRIP CALCULATOR ----------\n";

    std::cout << "Enter the distance in miles: ";
    std::cin >> distance;

    std::cout << "Enter vehicle MPG: ";
    std::cin >> milesPerGallon;

    std::cout << "What's the price per litre: ";
    std::cin >> pricePerLitre;

    std::cout << "Will you be returning? (Y/N): ";
    std::cin >> returnTrip;

    bool isReturning = (returnTrip == 'Y' || returnTrip == 'y');

    if (isReturning) {
        distance *= 2;
    }

    gallonsUsed = distance / milesPerGallon;
    litresUsed = gallonsUsed * 4.546;
    tripCost = litresUsed * pricePerLitre;

    std::cout << "\n------------------------";

    std::cout << "\nGallons used: " << gallonsUsed;
    std::cout << "\nLitres used: " << litresUsed;
    std::cout << "\nCost of trip: GBP" << tripCost;

    if (distance >= 500) {
        std::cout << "\nWarning long journey, take stops in between!";
    }

    if (distance <= 100) {
        std::cout << "\nShort Trip.";
    } else if (distance <= 250) {
        std::cout << "\nMedium Trip.";
    } else if (distance <= 500) {
        std::cout << "\nLong Trip.";
    }

    if (milesPerGallon >= 50) {
        std::cout << "\nYou have great fuel economy";
    } else if (milesPerGallon >= 35) {
        std::cout << "\nYou have normal fuel economy";
    } else if (milesPerGallon >= 0) {
        std::cout << "\nYou have awful fuel economy";
    }
}
