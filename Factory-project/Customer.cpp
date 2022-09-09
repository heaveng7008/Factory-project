#include "Customer.h"
namespace Meteors{
Customer::Customer(){

}

std::string Customer::getCustId()
{
    return _custId;
}

std::string Customer::getName()
{
    return _name;
}

void Customer::setCustId(std::string custId)
{
    _custId = custId;
}

void Customer::setName(std::string name)
{
    _name = name;
}

void Customer::setEmail(std::string email)
{
   _email=email;
}

std::string Customer::getEmail(){

    return _email;
}
}