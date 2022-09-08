#pragma once

#include<bits/stdc++.h>
using namespace std;

class Customer{
    string _custId;
    string _name;
    string _email;

    public:
    Customer();
    string getCustId();
    void setCustId(string custId);
    void setName(string name);
    string getName();
    void setEmail(string email);
    string getEmail();
    virtual ~Customer(){}
};
