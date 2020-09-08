#include <vector>				// provides STL vector
#include "CreditCard.h"				// provides CreditCard, cout, string

using namespace std;				// make std accessible

void testCard() {				// CreditCard test function
  vector<CreditCard*> wallet(10);		// vector of 10 CreditCard pointers
  						// allocate 3 new cards
  wallet[0] = new CreditCard("5391 0375 9387 5309", "John Bowman", 2500, "1-8");
  wallet[1] = new CreditCard("3485 0399 3395 1954", "John Bowman", 3500, "2-8");
  wallet[2] = new CreditCard("6011 4902 3294 2994", "John Bowman", 5000, "3-8");

  for (int j=1; j <= 60; j+=1) {			// make some charges
    bool ret1 = wallet[0]->chargeIt(double(j));		// explicitly cast to double
    bool ret2 = wallet[1]->chargeIt(2 * j);			// implicitly cast to double
    bool ret3 = wallet[2]->chargeIt(double(3 * j));
    if(ret1 || ret2 || ret3){
        if(!ret1){
            cout << "card 1 go over" << endl;
        }
        if(!ret2){
            cout << "card 2 go over" << endl;
        }
        if(!ret2){
            cout << "card 3 go over" << endl;
        }
    }
  }
  
  
  
  

  cout << "Card payments:\n";
  for (int i=0; i < 3; i++) {			// make more charges
    cout << *wallet[i];
    while (wallet[i]->getBalance() > 100.0) {
      wallet[i]->makePayment(100.0);
      cout << "New balance = " << wallet[i]->getBalance() << "\n";
    }
    cout << "\n";
    delete wallet[i];				// deallocate storage
  }
}

int main() {					// main function
  testCard();
  return EXIT_SUCCESS;				// successful execution
}
