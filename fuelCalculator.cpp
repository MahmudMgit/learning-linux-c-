#include <iostream>

int main(){

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

    std::cout << "Whats the price per litre: ";
    std::cin >> pricePerLitre;

    std::cout << "MPG: " << milesPerGallon << std::endl;
    std::cout << "Fuel Price: GBP" << pricePerLitre << " Per litre\n";

    std::cout << "Will you be returning? (Y/N): ";
    std::cin >> returnTrip;

    bool isReturning (returnTrip == 'Y' || returnTrip == 'y');

    if(isReturning){
        distance *= 2;
    }

    
        // Formulas
    gallonsUsed = distance / milesPerGallon;
    litresUsed = gallonsUsed * 4.546;
    tripCost = litresUsed * pricePerLitre;


    std::cout << "------------------------";

    std::cout << "\nGallons used: " << gallonsUsed;
    std::cout << "\nLitres used: " << litresUsed;
    std::cout << "\nCost of trip: GBP" << tripCost;

    if(distance >= 500){
        std::cout << "\n \nWarning long journey, take stops in between! ";
    }

    if(distance <= 100){
        std::cout << "\nShort Trip. ";
    } else if(distance <= 250){
        std::cout << "\nMedium Trip. ";
    }else if(distance <= 500){
        std::cout << "\nLong Trip. ";
    }

    if(milesPerGallon >=50){
        std::cout << "\nYou have great fuel economy";
    } else if(milesPerGallon >=35){
        std::cout << "\nYou have normal fuel economy";
    } else if(milesPerGallon >=0){
        std::cout << "\nYou have awful fuel economy";
    }

    return 0;
}
