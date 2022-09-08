#include "Customer.h"

Customer::Customer(){

}

string Customer::getCustId()
{
    return _custId;
}

string Customer::getName()
{
    return _name;
}

void Customer::setCustId(string custId)
{
    _custId = custId;
}

void Customer::setName(string name)
{
    _name = name;
}


