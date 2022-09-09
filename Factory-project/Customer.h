#pragma once
#include<string>
//using namespace std;
namespace Meteors{
class Customer{
    std::string _custId;
    std::string _name;
    std::string _email;

    public:
    Customer();
    std::string getCustId();
    void setCustId(std::string custId);
    void setName(std::string name);
    std::string getName();
    void setEmail(std::string email);
    std::string getEmail();
    virtual ~Customer(){}
};
}