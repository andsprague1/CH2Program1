// CH2Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Vars needed precent, money, floatingPercent, finalAmount
    double percent,money,floatingPercent,finalAmount;

    //Input percent
    cout << "What is the percent?";
    cin >> percent;
    //    Input money
    cout << "How much money?";
    cin >> money;
    //    floatingPercent = percent / 100
    floatingPercent = percent / 100;
        //    finalAmount = floatingPercent * money
    finalAmount = floatingPercent * money;
    //    display finalAmount
    cout << "The amount saved for retirement is:";
    cout << finalAmount<<endl<<endl;

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
