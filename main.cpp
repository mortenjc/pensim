
#include <Account.h>
#include <cstdio>



int main(int argc, char * argv[]) {

  Account Cash(700000.0, 2.2);

  printf("bal %f acc %f ipa %f ipm %f\n", Cash.balance, Cash.accrued, Cash.ipa, Cash.ipm);
  Cash.advanceMonth(0.0);
  printf("bal %f acc %f ipa %f ipm %f\n", Cash.balance, Cash.accrued, Cash.ipa, Cash.ipm);

}
