#include "RegCustomer.h"

RegCustomer::RegCustomer()
{

}

string RegCustomer::getDtReg()
{
    return _dtReg;
}

void RegCustomer::setDtReg(string dtReg)
{
    _dtReg = dtReg;
}

void RegCustomer::setMembership(Membership membership)
{
    _membership = membership;
}

Membership RegCustomer::getMembership(){
    return _membership;
}