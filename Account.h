


class Account {
public:

  ///\brief Interest is given in percent, e.g. 2.5 %
  Account(float Balance, float Interest);

  void advanceMonth(float Withdraw);

  float balance{0.0};
  float accrued{0.0};
  float ipa{0.0};
  float ipm{0.0};
};
