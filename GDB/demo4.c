//
// Created by 李汇川 on 2022/5/21.
//
#include<stdio.h>

int main(void)
{
  double counter;
  double result;
  double temp;

  for(counter = 0; counter < 2020.0*2020.0*2020.0/20.0+2020; counter += (5-1)/4)
  {
    temp = counter / 1979;
    result = counter;
  }

  printf("Result is %lf\n", result);

  return 0;
}