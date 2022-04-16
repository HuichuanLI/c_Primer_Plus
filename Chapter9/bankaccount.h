//
// Created by 李汇川 on 2022/4/16.
//

#ifndef POINTER_CHAPTER9_BANKACCOUNT_H_
#define POINTER_CHAPTER9_BANKACCOUNT_H_
#include<string>
class BankAccount {
 private:
  std::string name;
  std::string acctnum;
  double balance;
 public:
  BankAccount(const std::string &client,
              const std::string &num, double bal = 0.0);
  void show() const;
  void deposit(double cash);
  void withdraw(double cash);
};

#endif //POINTER_CHAPTER9_BANKACCOUNT_H_
