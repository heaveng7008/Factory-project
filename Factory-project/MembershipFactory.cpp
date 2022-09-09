#include "MembershipFactory.h"
namespace Meteors{
    MembershipFactory* MembershipFactory::instance;
    map<string,Membership> MembershipFactory::pool;

    MembershipFactory::MembershipFactory(){
        //private constructor
    }

    MembershipFactory* MembershipFactory::getInstance(){
      if(instance == nullptr){
        instance = new MembershipFactory();
      }
      return instance;
    }

    //function to create a new type of membership in the pool
    void MembershipFactory::createMembership(string _typeOfMembership,double _fees,double _discount){
        Membership mem;
        mem.setTypeOfMembership(_typeOfMembership);
        mem.setDiscount(_discount);
        mem.setFees(_fees);
        pool[_typeOfMembership] = mem;
    }

    Membership MembershipFactory::getMembership(string typeOfMembership){
        return pool[typeOfMembership];
    }

    MembershipFactory::~MembershipFactory(){
      delete MembershipFactory::instance;
    }
}