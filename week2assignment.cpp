#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <sstream>

// Using namespace to be able to use endl; and cout
using namespace std;
// Created constants to define the weight per container of cheese, the cost of production, the profit per container, and the line width of the stars
const double WEIGHT_OF_CHEESE = 2.76;
const double PRODUCTION_COST = 4.12;
const double PROFIT = 1.45;
double kg_Of_Cheese = 0;
const int LINE_WIDTH = 75;

// Created a funtion to re-use for the asterisks needed for the Welcome Introduction
void stars()
{
    cout << left << setw(LINE_WIDTH) << setfill('*') << "" << endl;
}
// Introduces the main function
int main()
{
    // This code creates the Welcome Introduction
    stars();
    cout << left << setw(22) << setfill('*') << "" << " This Isn't a Photo, but Say Cheese! " << setw(16) << setfill('*') << "" << endl;
    stars();

    // The user is asked the total number of kilograms of cheese that is produced
    cout << '\n' << "Please enter the total number of kilograms of cheesed produced: ";
    cin >> kg_Of_Cheese;
    // Takes the input number the user entered and divided it by the 2.76kg I have declared to get the total number of containers
    int container = round(kg_Of_Cheese / WEIGHT_OF_CHEESE);

    // Had an issue converting the double to a string so it wouldnt show places after decimal point... learned stringstream
    stringstream ss;
    ss << container;
    string stringContainer = ss.str();

    // sets fill to blank spaces to line up the number of containers to the edge of the program. Then prints out the number
    string number_of_containers = "The number of containers to hold the cheese is:  ";
    string production_cost = "The cost of producing " + stringContainer + " container(s) of cheese is: $";
    string profit = "The profit from producing " + stringContainer + " container(s) of cheese is: $";
    // sets precision for answers containing decimal places to only show 2 places after the decimal
    cout << fixed << setprecision(2);
    // took the line width of the stars in the welcome message, and subtracted the length of the printed message to keep the alignment no matter the input
    cout << number_of_containers << setfill(' ') << setw(LINE_WIDTH - number_of_containers.length()) << right << container << endl;
    // next two lines show the results of the next two statements along with the print statements
    cout << production_cost << setw(LINE_WIDTH - production_cost.length()) << container * PRODUCTION_COST << endl;
    cout << profit << setw(LINE_WIDTH - profit.length()) << container * PROFIT << endl;

    return 0;
}
