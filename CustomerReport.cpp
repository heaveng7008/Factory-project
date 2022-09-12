
#include "CustomerReport.h"

namespace Meteors{
void CustomerReport::PrintLine()
{
    cout << "-------------------------------------------------------------------------------------------------------" << endl;
}

void CustomerReport::DisplayHeader()
{
    PrintLine();
    cout << "CUSTOMER REPORT\t\t\t\t" << endl;
    cout << "Date : " << _reportDate << endl;
    PrintLine();
}

void CustomerReport::DisplayFooter(int count)
{
    PrintLine();
    cout << "Total Customers : "<< count << endl;
    PrintLine();
}

void CustomerReport::DisplayCustomers(vector<Customer*> customers)
{
    DisplayHeader();

    cout << "S.NO\tCUS_ID\t\tNAME\t\tEMAIL\t\t\tMEMBERSHIP\t\tDATE REGISTERED" << endl;
    PrintLine();

    int count = customers.size();
    for(int i=0; i<count; i++){
        cout<<i+1<<". "<<"\t";
        cout<<customers[i]->getCustId()<<"\t\t";
        cout<<customers[i]->getName()<<"\t\t";
        cout<<customers[i]->getEmail()<<"\t";


        RegCustomer *rcc= dynamic_cast<RegCustomer *>(customers[i]);
        if(rcc != NULL){
            cout<<rcc->getMembership().getTypeOfMembership()<<"\t\t\t";
            cout<<rcc->getDtReg();
        }
        else{
            cout<<"NA"<<"\t\t\t";
            cout<<"NA";
        }
        cout<<endl;
    }
    DisplayFooter(count);
}

void CustomerReport::SetReportDate(string date){
	_reportDate = date;
}

}
