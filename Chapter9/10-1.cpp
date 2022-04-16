//
// Created by 李汇川 on 2022/4/16.
//

// filename 10-1.cpp
#include<iostream>
#include"bankaccount.h"
int main() {
  BankAccount ba("Kermit", "croak322", 123.00);
  ba.show();
  ba.deposit(20);
  ba.show();
  ba.withdraw(300);
  ba.show();
  ba.withdraw(23);
  ba.show();
  return 0;
}