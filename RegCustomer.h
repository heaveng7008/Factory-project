#pragma once

#include<bits/stdc++.h>
using namespace std;

#include "Membership.h"
#include "Customer.h"

class RegCustomer : public Customer{
    string _dtReg;
    string _typeOfMembership;
    Membership _membership;
    public:
    RegCustomer();
    string getDtReg();
    void setDtReg(string dtReg);
    void setMembership(Membership membership);
    Membership getMembership();


    //email
};