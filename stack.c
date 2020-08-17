#include <string.h>
#include "stack.h"

void createEmpty(Stack *S){
    (*S).top = NULL;
}
addresS alokasi(char in){
    addresS p ;
    p=(addresS)malloc(sizeof(h));
    if(p!=NULL){
        p->in =in;
        p->next  = NULL;
    }
    return p;
}

bool isEmpty(Stack S){
    return S.top == NULL;
}

void push(Stack *S, char in){
    addresS p;
    p =alokasi(in);
    p->next = (*S).top;
    (*S).top = p;
}

void pop(Stack *S, char in){
    addresS p;
    p = (*S).top;
    in = p->in;
    (*S).top = p->next;
}
