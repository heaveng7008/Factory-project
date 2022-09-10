#pragma once

#include<string>
using namespace std;

#include "Membership.h"
#include "Customer.h"
namespace Meteors{
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
}