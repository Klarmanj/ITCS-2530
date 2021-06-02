#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
// #include <sstream>

// Using namespace to be able to use endl; and cout


using namespace std;
// Created constants to define the weight per container of cheese, the cost of production, and the profit per container
const double WEIGHT_OF_CHEESE = 2.76;
const double PRODUCTION_COST = 4.12;
const double PROFIT = 1.45;
double kgOfCheese = 0;


// Created a funtion to re-use for the asterisks needed for the Welcome Introduction
void stars()
{
    cout << left << setw(75) << setfill('*') << "" << endl;
}
// Introduces the main function
int main()
{
    // This code creates the Welcome Introduction
    stars();
    cout << left << setw(22) << setfill('*') << "" << " Welcome to my Cheesy Program " << setw(22) << setfill('*') << "" << endl;
    stars();

    // The user is asked the total number of kilograms of cheese that is produced
    cout << '\n' << "Please enter the total number of kilograms of cheesed produced: ";
    cin >> kgOfCheese;
    // Takes the input number the user entered and divided it by the 2.76kg I have declared to get the total number of containers
    double container = round(kgOfCheese / WEIGHT_OF_CHEESE);

    // Had an issue converting the double to a string so it wouldnt show places after decimal point... learned stringstream, realized I can just cout << container << which will do the same thing.
    // stringstream ss;
    // ss << container;
    // string stringContainer = ss.str();

    // sets fill to blank spaces to line up the number of containers to the edge of the program. Then prints out the number
    cout << "The number of containers to hold the cheese is:  " << setfill(' ') << setw(26) << right << container << endl;
    cout << "The cost of producing " << container << " container(s) of cheese is: $" << setw(21) << right << container * PRODUCTION_COST << endl;
    cout << "The profit from producing " << container << " container(s) of cheese is: $" << setprecision(2) << fixed << setw(17) << right << container * PROFIT << endl;








    return 0;
}
