#include "Singlylist.h"

// Prosedur untuk membuat list kosong
void createList(List &L) {
    First(L) = Nil;
}

// Fungsi untuk membuat elemen baru
address alokasi(infotype x) {
    address P = new tElmList;
    if (P != Nil) {
        info(P) = x;
        next(P) = Nil;
    }
    return P;
}

// Prosedur untuk menghapus elemen (dealokasi memori)
void dealokasi(address &P) {
    delete P;
    P = Nil;
}

// Prosedur untuk menambahkan elemen di awal list (Insert First)
void insertFirst(List &L, address P) {
    if (P != Nil) {
        next(P) = First(L);
        First(L) = P;
    }
}

// Prosedur untuk menampilkan isi list
void printInfo(List L) {
    address P = First(L);
    while (P != Nil) {
        cout << info(P);
        if (next(P) != Nil) {
            cout << " ";
        }
        P = next(P);
    }
    cout << endl;
}