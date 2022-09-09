
#include "Program.h"
using namespace Meteors;
int main(){

    Company comp;
    MembershipFactory* Factory;
    Factory = MembershipFactory::getInstance();
    Factory->createMembership("Silver", 500, 10);
    Factory->createMembership("Gold", 800, 15);
    Factory->createMembership("Platinum", 1000, 20);
    comp.setName("Amazon");
    comp.addCustomer();
    comp.addCustomer();
    comp.displayCustomers();

    return 0;
}


