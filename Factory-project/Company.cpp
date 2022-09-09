#include "Company.h"

namespace Meteors{
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

void chooseMembership(RegCustomer* cus);

void Company::addCustomer(){
    std::string name, id, email;
    std::cout<<"Enter name"<<std::endl;
    std::cin>>name;
    std::cout<<"Enter ID"<<std::endl;
    std::cin>>id;
    std::cout<<"Enter Email"<<std::endl;
    std::cin>>email;
    std::cout<<"Are they a registered customer? : y/n ";
    char choice;
    std::cin>>choice;
        
    Customer *cus = new Customer();
        
    if(choice == 'y'){
        std::string dtReg;
        std::cout<<"Enter Date of registration: "<<std::endl;
        std::cin>>dtReg;

        RegCustomer *rcc= new RegCustomer();
        rcc->setDtReg(dtReg);
        chooseMembership(rcc);

        cus = rcc;  //upcasting
    }


    cus->setCustId(id);
    cus->setName(name);
    cus->setEmail(email);

    _customers.push_back(cus);

    cout<<"\n";

}

void chooseMembership(RegCustomer* rcc){
    int choice;
    std::cout<<"Enter type of Membership: "<<std::endl;
    std::cout<<" 1. Silver \t Discount: 10 \t Fees: 200 \n 2. Gold \t Discount: 15 \t Fees: 500 \n 3. Platinum \t Discount: 20 \t Fees: 800"<<endl;
    std::cin>>choice;
    switch(choice){
        case 1:
            rcc->setMembership( MembershipFactory::getMembership("Silver") );
            break; 
        case 2:
            rcc->setMembership( MembershipFactory::getMembership("Gold") );
            break; 
        case 3:
            rcc->setMembership( MembershipFactory::getMembership("Platinum") );
            break; 
        default:
            std:cout<<"Undefined Choice. Please Enter Again! "<<endl;
            chooseMembership(rcc);
            break;
    }
}

void Company::displayCustomers(){
    CustomerReport report;
    
    std::cout<<"Enter Report Date: "<<endl;
    std::string date;
    std::cin>>date;
    report.SetReportDate(date);
    report.DisplayCustomers(_customers);

}

Company::~Company(){
    for(int i=0; i<_customers.size(); i++){
        delete _customers[i];
    }
}

}