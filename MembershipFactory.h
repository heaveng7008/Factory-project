#pragma once

//#include <iostream>
#include <string>
#include <map>
#include "Membership.h"

using namespace std;
namespace Meteors{
class MembershipFactory{
    private:
        static MembershipFactory* instance;
        static map<string,Membership>pool;
        MembershipFactory();
        ~MembershipFactory();
  
  public:
    static void createMembership(string _typeOfMembership,double _fees,double _discount);
    static MembershipFactory* getInstance();
    static Membership getMembership(string typeOfMembership);
    
};
}