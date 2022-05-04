//
// Created by 李汇川 on 2022/5/4.
//
#include <stdio.h>

#include <stdlib.h>

#include <iostream>

int *getGrade() {
  int *grade = (int *) malloc(20 * sizeof(int));
  return grade;
}

int main(int argc, char **argv) {
  int *grade = getGrade;

  free(grade);

  return 0;
}