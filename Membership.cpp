#include "Membership.h"

string Membership::getTypeOfMembership()
{
    return _typeOfMembership;
}
void Membership::setTypeOfMembership(string typeOfMembership)
{
    _typeOfMembership = typeOfMembership;
}
double Membership::getDiscount()
{
    return _discount;
}
