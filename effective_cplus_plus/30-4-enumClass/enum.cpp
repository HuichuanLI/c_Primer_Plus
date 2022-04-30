//
// Created by 李汇川 on 2022/4/30.
//

#include <iostream>

class CostEstimate {
 public:
  CostEstimate();
  ~CostEstimate();
 private:
  static const double FudgeFactor; // 定义常量
};

const double CostEstimate::FudgeFactor = 1.35;

CostEstimate::CostEstimate() {
}

CostEstimate::~CostEstimate() {
}

int main() {
  CostEstimate ce;
  return 0;
}