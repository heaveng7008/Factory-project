#include "Customer.h"
#include "RegCustomer.h"
#include "Company.h"
#include "MembershipFactory.h"

Company::Company(){ 
    //empty
}

void Company::setName(string name)
{
    _name = name;
}

string Company::getName()
{
    return _name;
}

void membership(RegCustomer* cus);

void Company::addCustomer(){
    std::string name, id;
    std::cout<<"Enter name"<<std::endl;
    std::cin>>name;
    std::cout<<"Enter ID"<<std::endl;
    std::cin>>id;
    std::cout<<"Are they a registered customer? : y/n ";
    char choice;
    std::cin>>choice;
        
    Customer *cus = new Customer();
        
    if(choice == 'y'){

        // RegCustomer* reg = new RegCustomer();
        // cus = dynamic_cast<Customer *> (reg); //upcasting

        // RegCustomer *reg = new RegCustomer();
        // cus = reg;

        std::string dtReg;
        std::cout<<"Enter Date of registration: "<<std::endl;
        std::cin>>dtReg;

        RegCustomer *rcc= dynamic_cast<RegCustomer *>(cus);
        rcc->setDtReg(dtReg);
        membership(rcc);


    }


    cus->setCustId(id);
    cus->setName(name);

    //cus->setEmail

    _customers.push_back(cus);

    delete cus;

}

void membership(RegCustomer* cus){
    int choice;
    std::cout<<"Enter type of Membership: "<<std::endl;
    cout<<" 1. Silver \t Discount: 10 \t Fees: 200 \n 2. Gold \t Discount: 15 \t Fees: 500 \n 3. Platinum \t Discount: 20 \t Fees: 800"<<endl;

    switch(choice){
        case 1:
            cus->setMembership( MembershipFactory::create("Silver") );
            break; 
        case 2:
            cus->setMembership( MembershipFactory::create("Gold") );
            break; 
        case 3:
            cus->setMembership( MembershipFactory::create("Platinum") );
            break; 
        default:
            std:cout<<"Undefined Choice. Please Enter Again! "<<endl;
            membership(cus);
    }
}

void Company::displayCustomers(){
    std::cout<<"hello";
}
