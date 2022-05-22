//
// Created by 李汇川 on 2022/5/21.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>

static void *thread_job(void *s)
{
  printf("this is 1\n");
}
static void *thread_job1(void *s)
{
  printf("this is 2\n");
}

int main(void)
{
  pthread_t tid,tid1;
  pthread_create(&tid, NULL, thread_job, NULL);
  pthread_create(&tid1, NULL, thread_job1, NULL);


  pthread_join(tid,NULL);
  pthread_join(tid1,NULL);
  exit(0);
}