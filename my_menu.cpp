#include <iostream>
#include <fstream>
#include <limits>

void displayMenu(){
    std::cout << "My menu:";
    std::cout << "1. Set name for saving the picture (default == pattern.ppm) \n";
    std::cout << "2. Set the width (default == 256) \n";
    std::cout << "3. Set image height (default == 256)\n";
    std::cout << "4. Exit\n";
}

int getUserChoiceInt(const std::string& message) {
    int choice;
    while (true){
        try{
            std::cout << message;
            std::cin >> choice ;
            if (std::cin.fail()){
                throw std::ios_base::failure("Invalid input please enter an integer");
            }
        }
    }
    std::cout << message ;
    std::cin >> choice;
    return choice;
}

void Director(int choice) {
     switch (choice){
        case 1:
            std::cout << "Setting name for the picture :\n";
            
            break;
        case 2:
            std::cout << "Executing Option 2\n";
            // Add the code for Option 2 here
            break;
        case 3:
            std::cout << "Executing Option 3\n";
            // Add the code for Option 3 here
            break;
        case 4:
            std::cout << "Exiting program\n";
            break;
        default:
            std::cout << "Invalid choice. Please enter a valid option.\n";
    }
}

int main() {
    int choice;

    do {
        displayMenu();
        choice = getUserChoiceInt();

        // Clear the console screen
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        Director(choice);

    } while (choice != 4);

    return 0;
}