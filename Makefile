Casestudy:Company.o Customer.o CustomerReport.o Membership.o MembershipFactory.o RegCustomer.o
 g++ -std=c++11 -o Casestudy Company.o Customer.o CustomerReport.o Membership.o MembershipFactory.o RegCustomer.o

RegCustomer.o:RegCustomer.cpp Membership.h Customer.h RegCustomer.h
 g++ -std=c++11 -c RegCustomer.cpp

MembershipFactory.o:MembershipFactory.cpp MembershipFactory.h Membership.h
 g++ -std=c++11 -c MembershipFactory.cpp

Membership.o:Membership.cpp Membership.h
 g++ -std=c++11 -c Membership.cpp

CustomerReport.o:CustomerReport.cpp RegCustomer.h Customer.h Company.h CustomerReport.h
 g++ -std=c++11 -c CustomerReport.cpp

Customer.o:Customer.cpp Customer.h
 g++ -std=c++11 -c Customer.cpp

Company.o:Company.cpp Customer.h RegCustomer.h Company.h MembershipFactory.h CustomerReport.h
 g++ -std=c++11 -c Company.cpp
