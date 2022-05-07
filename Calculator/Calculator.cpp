#include <iostream>
#include "TrapezoidalIntgration.h"
#include "Gaussian.h"

using namespace std;
using namespace Trap;
using namespace gaussian;

void option() {
    cout << "Welcome to a Calculator for Gaussion Elimaination and a Polynomaly Intgration:\n"
        << "\t1.Gausion Elimaination\n"
        << "\t2.Polynomial Math\n"
        << "\t3.Quit\n";
}

int main()
{
    polyselect sel;
    elimination gus;
    bool domath = true;
    int playerchoice;
    
    while (domath) {
        option();
        cin >> playerchoice;
        if (playerchoice == 1) {
            gus.elim();
        }
        else if (playerchoice == 2) {
            sel.select();
        }
        else if (playerchoice == 3) {
            domath = false;
        }
    }
}
