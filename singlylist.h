#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define First(L) (L).First

typedef int infotype;
typedef struct tElmList *address;

struct tElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Deklarasi Prosedur dan Fungsi
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif