
#include "MembershipFactory.h"

    MembershipFactory* MembershipFactory::instance;
    map<string,Membership> MembershipFactory::pool;

    MembershipFactory::MembershipFactory(){
        //private constructor
    }

    MembershipFactory* MembershipFactory::getInstance(){
      if(instance == nullptr){
        instance = new MembershipFactory();
        // pool["Silver"] = createMembership("Silver", 200, 10);
        // pool["Gold"] = createMembership("Gold", 500, 15);
        // pool["Platinum"] = createMembership("Platinum", 800, 20);
      }
      return instance;
    }

    //function to create a new type of membership in the pool
    Membership MembershipFactory::createMembership(string _typeOfMembership,double _fees,double _discount){
        Membership mem;
        mem.setTypeOfMembership(_typeOfMembership);
        mem.setDiscount(_discount);
        mem.setFees(_fees);
        return mem;
    }


    Membership MembershipFactory::create(string _typeOfMembership){
        return pool[_typeOfMembership];
    }