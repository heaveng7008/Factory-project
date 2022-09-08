#include "Membership.h"

string Membership::getTypeOfMembership()
{
    return _typeOfMembership;
}
void Membership::setTypeOfMembership(string typeOfMembership)
{
    _typeOfMembership = typeOfMembership;
}
void Membership::setDiscount(double discount)
{
    _discount = discount;
}
void Membership::setFees(double fees)
{
    _fees = fees;
}

double Membership::getDiscount()
{
    return _discount;
}
