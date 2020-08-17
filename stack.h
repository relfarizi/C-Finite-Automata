#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef HEADERSTACK_H_INCLUDED
#define HEADERSTACK_H_INCLUDED

typedef struct tElmtHis *addresS;

typedef struct tElmtHis {
    char in;
    addresS next;
}h;

typedef struct {
    addresS top;
} Stack;

// HEADER PROSEDUR DAN FUNGSI
void createEmpty(Stack *S); //create stack kosong
addresS alokasi(char in);
void dealokasi(addresS p);
bool isEmpty(Stack S);
void push(Stack *S, char in);
void pop(Stack *S, char in);


#endif // HEADERSTACK_H_INCLUDED
