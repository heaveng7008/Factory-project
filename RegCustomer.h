#include<bits/stdc++.h>
using namespace std;
#include "Customer.h"
class RegCustomer : public Customer{
    string _dtReg;
    string _typeOfMembership;
    public:
    RegCustomer();
    string getDtReg();
    void setDtReg(string dtReg);
    void setMembership(Membership membership);


    //email
};