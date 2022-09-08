#include <string>
using namespace std;

class Membership{
  string _typeOfMembership;
  double _discount;
  double _fees;
  
  public:
   void setTypeOfMembership(string typeOfMembership);
   void setDiscount(double discount);
   void setFees(double fees);
   string getTypeOfMembership();
   double getDiscount();
   double getFees();
    
};