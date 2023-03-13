#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>

int Celsius(int valueFahrenheit){
    std::cout << "Enter a fahrenheit value to start the conversion!" << std::endl;
    std::cin >> valueFahrenheit;
    std::cout << "The temperature in celsius is: "<< (double)(valueFahrenheit - 32) * 5/9 << std::endl;
    return 0;
}
int Kelvin(int valueFahrenheit){
    std::cout << "Enter a fahrenheit value to start the conversion!" << std::endl;
    std::cin >> valueFahrenheit;
    std::cout << "The temperature in kelvin is: " << (double)(valueFahrenheit - 32) * 5/9 + 273.15 << std::endl;
    return 0;
}
int numGame(int numChoice){
    char retryChoice('n');
    int randomNumber(0), counter(0);
    std::cout << "Try to guess the number within the range! [0,100]" << std::endl;
    srand(time(0));
    randomNumber = rand() % 100;
    do {
        counter++;
        std::cin >> numChoice;
        if (numChoice < randomNumber)
        {
            std::cout << "Too Low! Try again.\nAttempts: " << counter << std::endl;
        }
        else if (numChoice > randomNumber)
        {
            std::cout << "Too high! Try again.\nAttempts: " << counter << std::endl;
        }
        else if (randomNumber == numChoice)
        {
            std::cout << "Correct, Great job!\nAttempts: " << counter << " Try Again? [Y/N]" << std::endl;
            std::cin >> retryChoice;
            retryChoice = tolower(retryChoice);
            if (retryChoice == 'y')
            {
                randomNumber = rand() % 100;    // implement a way to reset the counter after each try
            }
        }
         else {
            std::cout << "Incorrect input, try again..." << std::endl;
        }
    } while (retryChoice == 'y' || numChoice != randomNumber);
    return 0;
}

int main()
{     //implement more functions and options over time
    int randomNumber(0), counter(0), choice(0), numChoice(0); char retryChoice('n'), exitChoice('e'); double valueFahrenheit(0);
    do {
        std::cout << "1) Fahrenheit to Celsius Conversion\n2) Fahrenheit to Kelvin Conversion\n3) Random Number Guessing game\n4) Exit program" << std::endl;
        std::cin >> choice;
        switch (choice) {

            case 1:
            Celsius(valueFahrenheit);
            break;

            case 2:
            Kelvin(valueFahrenheit);
            break;

            case 3:
            numGame(numChoice);
            break;

            case 4:
            std::cout << "Are you sure you want to exit program?[y/n]" << std::endl;
            std::cin >> exitChoice;
            exitChoice = tolower(exitChoice);
            if (exitChoice == 'y'){
                std::cout << "Exitting program..." << std::endl;
            } else if (exitChoice == 'n'){
                std::cout << "Alright!" << std::endl;
            } else {
                std::cout << "Invalid choice, try again..." << std::endl;
            }
            break;

            default:
            std::cout << "Invalid choice, try again..." << std::endl;
        }
    }while(exitChoice == 'n');
    return 0;
}