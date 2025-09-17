// CH2Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int digit1, digit2,
        digit3, digit4, input;
    /*We want to be given a number 
    of farthings
    turn those farthings into 
    the number of pounds,
    the number of penies,
    the number of shillings
    and farthings remaing
    favoriting the largest currency
    */
    int coins;
    int farthings, pennies, shillings, pounds;
    cout << "How many farthings do you have sir?";
    //get the totatal farthings
    cin >> coins;
    //modulo 4
    farthings = coins % 4;
    //divide it by 4 and set nextcoins to that
    coins = coins / 4;//converting to pennies
        //take next coins and modulo 12 for pennies
    pennies = coins % 12;
    //divide by 12
    coins = coins / 12;
    //take that and modulo 20 to get shillings
    shillings = coins % 20;
    pounds = coins / 20;

    cout << "YOU have :" << pounds << " Pounds\n"
        << shillings << " Shillings\n"
        << pennies << " Pennies\n"
        << "and" << farthings << " Farthings\n"
        << "good sir!";
    //divide that by 20, that's the biggest so it's what's left


    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
