//
// Created by 李汇川 on 2022/5/21.
//
#include <stdio.h>

/* 函数声明 */
int max(int num1, int num2);

int main ()
{
  /* 局部变量定义 */
  int a,b,ret;
  scanf("%d",&a);
  scanf("%d",&b);
  /* 调用函数来获取最大值 */
  ret = max(a, b);

  printf( "Max value is : %d\n", ret );

  return 0;
}

/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2)
{
  /* 局部变量声明 */
  int result;

  if (num1 > num2)
    result = num1;
  else
    result = num2;

  return result;
}