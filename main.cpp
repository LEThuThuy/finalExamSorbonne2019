//
// Created by Thu Thủy on 2019-01-19.
//


#include "Computes.h"

using namespace std;

int main(int argc, char** argv)
{
    int userChoice = -1;

    while (userChoice != 0)
    {
        cout << "Please select values you want to calculate:" << endl;
        cout << " (1) PMT (2) PV (3) n (4) r " << endl;
        cout << " (0) Quit program" << endl;
        cin >> userChoice;

        switch (userChoice)
        {
            case 1:
                //Scenario for PMT
                scenarioPMT();
                break;
            case 2:
                //Scenario for PV
                scenarioPV();
                break;
            case 3:
                //Scenario for n
                scenarioN();
                break;
            case 4:
                //Scenario for r
                scenarioR();
                break;
            case 0:
                //
                cout << "Quit program due to user choice or input violation" << endl;
                break;
            default:
                //Case that input is invalid
                cout << "Input is invalid, please select again" << endl;
                break;
        }

    }



    return 0;
}

