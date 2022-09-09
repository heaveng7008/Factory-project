#pragma once

#include <iostream>
using namespace std;

#include <string>
#include <vector>
#include "RegCustomer.h"
#include "Customer.h"
#include "Company.h"
namespace Meteors{
class CustomerReport
	{
		string _reportDate;
        private:
            void PrintLine();
            void DisplayHeader();
            void DisplayFooter(int Count);
        public:
            void DisplayCustomers(vector<Customer*> customers);
            void SetReportDate(string date);
	};
}