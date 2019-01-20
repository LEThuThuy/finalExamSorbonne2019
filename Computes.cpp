//
// Created by Thu Thủy on 2019-01-19.
//

#include "Computes.h"

double computesPMT(int n, double PV, double r)
{
    //Value of PMT
    return r*(1+1/(pow(1+r,n)-1))*PV;
}

double computesPV(double PMT, int n, double r)
{
    //Value of PV
    return PMT/(r*(1+1/(pow(1+r,n)-1)));
}

int computesN(double PMT, double PV, double r)
{
    //Value of n
    //Need to round up
    return (int)round(log(PMT/(PMT-PV*r))/log(1+r));
}



double computesR(double PMT, double PV, int n)
{
    //Value of r
    return findRUsingSecant(PMT, PV, n);
}

int enterN()
{
    int n;
    cout << "Enter n (positive integer): " << endl;
    cin >> n;

    if (n <= 0)
    {
        cout << "Input n invalid, quit function" << endl;
        n = INVALID_INT;
    }

    return n;
}

double enterR()
{
    double r;
    cout << "Enter r (0 < r < 1): " << endl;
    cin >> r;

    if ((r < 0) or (r > 1))
    {
        cout << "Input r invalid, quit function" << endl;
        r = INVALID_DOUBLE;
    }

    return r;
}

double enterPV()
{
    double PV;
    cout << "Enter PV (positive): " << endl;
    cin >> PV;

    if (PV <= 0)
    {
        cout << "Input PV invalid, quit function" << endl;
        PV = INVALID_DOUBLE;
    }

    return PV;
}

double enterPMT()
{
    double PMT;
    cout << "Enter PMT (positive): " << endl;
    cin >> PMT;

    if (PMT <= 0)
    {
        cout << "Input PMT invalid, quit function" << endl;
        PMT = INVALID_DOUBLE;
    }

    return PMT;
}

void scenarioPMT()
{
    cout << "### Function: Computing PMT ####" << endl;

    //Check n
    int n  = enterN();
    if (n == INVALID_INT)
    {
        //Quit function
        return;
    }

    //Check r
    double r  = enterR();
    if (r == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //Check PV
    double PV = enterPV();
    if (PV == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //All input are correct
    //Return value calculated
    cout << "PMT = " << computesPMT(n, PV, r) << endl;
    cout << "########" << endl;

}

void scenarioPV()
{
    cout << "### Function: Computing PV ####" << endl;

    //Check PMT
    double PMT = enterPMT();
    if (PMT == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //Check n
    int n  = enterN();
    if (n == INVALID_INT)
    {
        //Quit function
        return;
    }

    //Check r
    double r  = enterR();
    if (r == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //All input are correct
    //Return value calculated
    cout << "PV = " << computesPV(PMT, n, r) << endl;
    cout << "########" << endl;
}

void scenarioN()
{
    cout << "### Function: Computing n ####" << endl;

    //Check PMT
    double PMT = enterPMT();
    if (PMT == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //Check PV
    double PV  = enterPV();
    if (PV == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //Check r
    double r  = enterR();
    if (r == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //All input are correct
    //Return value calculated
    cout << "n = " << computesN(PMT, PV, r) << endl;
    cout << "########" << endl;
}

void scenarioR()
{
    cout << "### Function: Computing r ####" << endl;

    //Check PMT
    double PMT = enterPMT();
    if (PMT == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //Check PV
    double PV  = enterPV();
    if (PV == INVALID_DOUBLE)
    {
        //Quit function
        return;
    }

    //Check n
    int n  = enterN();
    if (n == INVALID_INT)
    {
        //Quit function
        return;
    }

    //All input are correct
    //Return value calculated
    cout << "r = " << computesR(PMT, PV, n)*100 << "%" << endl;
    cout << "########" << endl;
}