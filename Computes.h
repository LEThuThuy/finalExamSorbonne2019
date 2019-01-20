//
// Created by Thu Thủy on 2019-01-19.
//

#ifndef FINALEXAMSORBONNE2019_COMPUTES_H
#define FINALEXAMSORBONNE2019_COMPUTES_H

#include <cmath>
#include <iostream>
#include "Secant.h"

using namespace std;

//Function: Calculate r
//arg[0]   n       number of periods
//arg[1]   PV      present value
//arg[2]   r       periodic interest rate
//return   Value of PMT (instalment)
double computesPMT(int n, double PV, double r);

//Function: Calculate PV
//arg[0]   PMT     instalment
//arg[1]   n       number of periods
//arg[2]   r       periodic interest rate
//return   Value of PV (present value)
double computesPV(double PMT, int n, double r);

//Function: Calculate n
//arg[0]   PMT     instalment
//arg[1]   PV      present value
//arg[2]   r       periodic interest rate
//return   Value of n (number of periods)
int computesN(double PMT, double PV, double r);

//Function: Calculate r
//arg[0]   PMT     instalment
//arg[1]   PV      present value
//arg[2]   n       number of periods
//return   Value of r (periodic interest rate)
double computesR(double PMT, double PV, int n);

//Get n from user
int enterN();

//Get r from user
double enterR();

//Get PMT from user
double enterPMT();

//Get PV from user
double enterPV();

//Program scenario to get n, PV, r input from user,
// then return PMT as output
void scenarioPMT();

//Program scenario to get PMT, n, r input from user,
// then return PV as output
void scenarioPV();

//Program scenario to get PMT, PV, r input from user,
// then return n as output
void scenarioN();

//Program scenario to get PMT, PV, n input from user,
// then return r as output
void scenarioR();

#endif //FINALEXAMSORBONNE2019_COMPUTES_H

