#include<bits/stdc++.h>
using namespace std;

class Company{
    string _name;
    vector<Customer*> _customers;
    public:
    Company();
    void setName(string name);
    string getName();
    void addCustomer();
}