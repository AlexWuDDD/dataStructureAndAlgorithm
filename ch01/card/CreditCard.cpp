#include "CreditCard.h"				// provides CreditCard

using namespace std;				// make std:: accessible
						// standard constructor
CreditCard::CreditCard(const string& no, const string& nm, int lim, const std::string& date, int ins,  double lf, double bal) {
  number = no;
  name = nm;
  balance = bal;
  limit = lim;
  interest = ins;
  dueDate = date;
  latefee = lf;
  dueDays = 0;
}
    						// make a charge 
bool CreditCard::chargeIt(double price) {
  
  if(price < 0){
    return false;  
  }  
  if (price + balance > double(limit)) 
    return false;				// over limit
  balance += price;
  balance *= (1 + interest);
  return true;					// the charge goes through
}

void CreditCard::makePayment(double payment) {// make a payment
  if(payment < 0){
    return;    
  }
  balance -= payment;
  if(isDueDate()){
    balance = balance + balance*latefee*dueDays;
  }
}

bool CreditCard::isDueDate()
{
    //refresh the dueDays;
    return false;
}


  						// print card information
ostream& operator<<(ostream& out, const CreditCard& c) {
  out << "Number = "        << c.getNumber()      << "\n"
      << "Name = "          << c.getName()        << "\n"
      << "Balance = "       << c.getBalance()     << "\n"
      << "Limit = "         << c.getLimit()       << "\n";
  return out;
}
