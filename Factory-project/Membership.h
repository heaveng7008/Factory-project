#pragma once

#include <string>
//using namespace std;
namespace Meteors{
class Membership{
  std::string _typeOfMembership;
  double _discount;
  double _fees;
  
  public:
   void setTypeOfMembership(std::string typeOfMembership);
   void setDiscount(double discount);
   void setFees(double fees);
   std::string getTypeOfMembership();
   double getDiscount();
   double getFees();
    
};
}