/*
 * hello.c - Pthreads "hello, world" program
 */
/* $begin hello */
// #include "csapp.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread(void *vargp);                    //line:conc:hello:prototype

int main()                                    //line:conc:hello:main
{
    pthread_t tid;                            //line:conc:hello:tid
    pthread_create(&tid, NULL, thread, NULL); //line:conc:hello:create
    pthread_join(tid, NULL);                  //line:conc:hello:join
    exit(0);                                  //line:conc:hello:exit
}

void *thread(void *vargp) /* thread routine */  //line:conc:hello:beginthread
{
    printf("Hello, world!\n");
    return NULL;                               //line:conc:hello:return
}                                              //line:conc:hello:endthread
/* $end hello */
