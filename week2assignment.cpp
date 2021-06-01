#include <iostream>
#include <iomanip>
#include <string>

// Using namespace to be able to use endl; and cout


using namespace std;
// Created constants to define the weight per container of cheese, the cost of production, and the profit per container
double weightOfCheese = 2.76;
double productionCost = 4.12;
double profit = 1.45;
double kgOfCheese = 0;


// Created a class to re-use for the asterisks needed for the Welcome Introduction
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
    cout << "" << endl;
    cout << left << "Please enter the total number of kilograms of cheesed produced:  ";
    cin >> kgOfCheese;
    double container = kgOfCheese / weightOfCheese;
    cout << left << "The number of containers to hold the cheese is:  ";
    //cout << right << container * productionCost << endl;







    return 0;
}
