#pragma once

#include <iostream>
#include <string>
#include <map>
#include "Membership.h"

using namespace std;

class MembershipFactory{
    private:
        static MembershipFactory* instance;
        static map<string,Membership>pool;
        static Membership createMembership(string _typeOfMembership,double _fees,double _discount);
        MembershipFactory();
  
  public:
    static MembershipFactory* getInstance();
    static Membership create(string _typeOfMembership);
    
    
};