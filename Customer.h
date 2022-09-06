#include<bits/stdc++.h>
using namespace std;

class Customer{
    string _custId;
    string _name;

    public:
    Customer();
    string getCustId();
    void setCustId(string custId);
    void setName(string name);
    string getName();
};