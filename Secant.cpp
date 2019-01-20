//
// Created by Thu Thủy on 2019-01-20.
//

#include "Secant.h"

double equationOfR(double r, double PMT, double PV, int n)
{
    return PMT/PV - (r*(1 + 1/(pow(1+r,n) - 1)));
}

double findRUsingSecant(double PMT, double PV, int n)
{
    //Using r1 & r2 as starting point, we start our computation
    //Iteration number (as of Secant method, we start with iteration 2)
    int iter = 2;
    int const MAX_ITER = 100;

    //Acceptable error
    double const err = 0.0001;

    //We know that 0 <= r <= 1 (between 0% and 100%)
    //But r should different than 0 (to avoid division by 0 problems)
    //So for 1st iteration, r0 = 0.0001 & r1 = 1
    //In our program:
    // r0 is r (i - 1)
    // r1 is r (i)
    // r  is r (i + 1)
    // So the final value after computation is r
    double r0 = 0.0001;
    double r1 = 1;
    double r  = r0;
    //while we have iterations left
    //and equation of r is not near 0
    //the loop quit when equation of r is near 0
    while ((iter <= MAX_ITER) and
          (fabs(equationOfR(r, PMT, PV, n)) > err))
    {
        //Compute new r
        r = r1 - (equationOfR(r1, PMT, PV, n)*(r1 - r0)) /
                 (equationOfR(r1, PMT, PV, n) - equationOfR(r0, PMT, PV, n));

        //Update r1 & r0
        r0 = r1;
        r1 = r;

        //Update iteration
        iter++;
    }

    //Check if iteration is beyond max
    //If it the case, r cannot be found
    if (iter > MAX_ITER)
    {
        r = INVALID_DOUBLE;
    }

    //Else, r is safe
    return r;
}