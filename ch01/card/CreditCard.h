#ifndef CREDIT_CARD_H                           // avoid repeated expansion
#define CREDIT_CARD_H

#include <string>				// provides string
#include <iostream>				// provides ostream

class CreditCard {
public:
  CreditCard(const std::string& no, const std::string& nm, int lim, const std::string& date, int ins = 0,  double lf = 0, double bal = 0);
  						// accessor functions
  std::string   getNumber() const	{ return number; }
  std::string   getName() const		{ return name; }
  double   	getBalance() const	{ return balance; }
  int      	getLimit() const	{ return limit; }
  double    getInterest() const {return interest;}
  std::string   getDueDate() const  {return dueDate;}
  double    getLatefee() const  {return latefee;}

  void  setNumber(const std::string &newNumber) {number = newNumber;}
  void  setName(const std::string &newName)     {name = newName;}
  void  setBalance(const double newBalance)     {balance = newBalance;}
  void  setLimit(const int newLimit)            {limit = newLimit;} 
  void  setInterest(const double newInterest)   {interest = newInterest;}
  void  setDueDate(const std::string& newDate)  {dueDate = newDate;}
  void  setLatefee(const double newLatefee)     {latefee = newLatefee;}
  
  bool isDueDate();

  bool chargeIt(double price); 			// make a charge 
  void makePayment(double payment);		// make a payment
private:                                	// private member data
  std::string   number;				// credit card number
  std::string   name;				// card owner's name
  int       	limit;				// credit limit
  double    	balance;			// credit card balance
  double        interest;
  double        latefee;
  std::string   dueDate;
  int           dueDays;
};
  						// print card information
std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif
