#ifndef BIN_H
#define BIN_H
#include <errno.h>


/* Variables controlling operation of functions below */
extern int bsUseSemUndo;
extern int bsRetryOnEintr;

int initSemAvailable(int semId, int semNum);
int initSemInUse(int semId, int semNum);
int reserveSem(int semId, int semNum);
int releaseSem(int semId, int semNum);


#endif // BIN_H
