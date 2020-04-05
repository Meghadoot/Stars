#include <iostream>
#include <iomanip>
#include <string>
#include "../lib/Stars.h"


int main(int argc, char **argv)
{
    /*
     * Welcome to the Star Galaxy
     * Test/Fun Project by MG
     *
     */
    int count = 0;
    std::string temp;
    std::cout << "Hello !!!\n" << std::endl;
    std::cout << "*** Welcome to the Star Galaxy ***\n\n\n" << std::endl;
    //TODO: Takes only number of stars now. Need to take symbol as an input from user
    std::cout << "Please, Enter Maximum number of Stars: ";
    std::getline(std::cin, temp);
    count = std::stoi(temp);
    std::cout << "\n" << std::endl;
    print_in_V(count);
    //print_in_square(count);
    // Operate statemanager for view
    // Operate statemanager for controller
    std::cout << "\n" << std::endl;
    return 0;
}
