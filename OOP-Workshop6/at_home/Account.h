
// OOP244 Workshop 5 In Lab
// File Account.h
// Version 1.0
// Date 06/17/16
// Author Marco Beltempo
// Email mabeltempo@myseneca.ca
// Description
// 
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
// M.Beltempo 06/17/16 removed ostream overload from member class
// M.Beltempo 06/22/16 removed friend operator and created accessor
// M.Beltempo 06/23/16 created += helper 
//////////////////////// ///////////////////////////////////

#ifndef SICT_ACCOUNT_H__
#define SICT_ACCOUNT_H__

#include <iostream>

namespace sict{
    class Account{
        char name_[41];
        double balance_;
    public:

        void display(bool gotoNewline = true)const;
        Account();
        Account(double balance);
        Account(const char name[], double balance = 0.0);
        Account& operator=(const char name[]);
        double getBalance()const;
        Account& operator+=(const Account& A);
    };

    std::ostream& operator<<(std::ostream&, const Account&);
    Account operator+(const Account A, const Account B);
    double operator+=(double&, const Account&);
}
#endif





