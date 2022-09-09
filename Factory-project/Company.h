#pragma once

#include<string>
#include<vector>

#include "Customer.h"
#include "RegCustomer.h"

#include "MembershipFactory.h"
#include "CustomerReport.h"
#include "Customer.h"
using namespace std;
namespace Meteors{
class Company{
    string _name;
    vector<Customer*> _customers;
    public:
    Company();
    void setName(string name);
    string getName();
    void addCustomer();

    void displayCustomers();
    ~Company();
};
}