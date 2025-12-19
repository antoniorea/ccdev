//Computes the size of a dog house that can be purchased
//given the user�s budget.
#include <iostream>
#include <cmath>


int main( )
{
    const double COST_PER_SQ_FT = 10.50;
    double budget, area, lengthSide;

    std::cout << "Enter the amount budgeted for your dog house $";
    std::cin >> budget;

    area = budget/COST_PER_SQ_FT;
    lengthSide = sqrt(area);

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
       std::cout << "For a price of $" << budget << std::endl
         << "I can build you a luxurious square dog house\n"
         << "that is " << lengthSide
         << " feet on each side.\n";

    return 0;
}