//
// Created by Thu Thủy on 2019-01-20.
//

#ifndef FINALEXAMSORBONNE2019_SECANT_H
#define FINALEXAMSORBONNE2019_SECANT_H

#include <iostream>
#include <cmath>
#include <iomanip>


int const INVALID_INT = -99;
double const INVALID_DOUBLE = -99;

//Equation of R ( f(R) = 0 )
//arg[0]    r       periodic interest values
//arg[1]    PMT     instalment
//arg[2]    PV      present value
//arg[3]    n       number of periods
//return    value of equation, used to compute with Secant method
double equationOfR(double r, double PMT, double PV, int n);

//Find value of r based on Secant method
//arg[0]    PMT     instalment
//arg[1]    PV      present value
//arg[2]    n       number of periods
//return    value of r (periodic interest values)
double findRUsingSecant(double PMT, double PV, int n);

#endif //FINALEXAMSORBONNE2019_SECANT_H
