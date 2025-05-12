
#include <Account.h>
#include <cmath>



Account::Account(float Balance, float Interest) : balance(Balance){
    ipa = 1.0 + Interest/100.0;
    ipm = pow(ipa, 1.0/12.0);
}

///\brief Assume withdraw primo, interest ultimo
float Account::advanceMonth(float Withdraw) {
  balance -= std::min(balance, Withdraw);
  accrued += balance * (ipm - 1.0);
}
