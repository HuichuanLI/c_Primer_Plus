//
// Created by 李汇川 on 2022/4/16.
//

#ifndef POINTER_CHAPTER8_GOLF_H_
#define POINTER_CHAPTER8_GOLF_H_
// filename golf.h
const int Len = 40;
struct golf {
  char fullname[Len];
  int handicap;
};
void setgolf(golf &g, const char *name, int hc);
int setgolf(golf &g);
void handicap(golf &g, int hc);
void showgolf(const golf &g);


#endif //POINTER_CHAPTER8_GOLF_H_
