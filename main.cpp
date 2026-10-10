#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5;
    P1 = Nil; P2 = Nil; P3 = Nil; P4 = Nil; P5 = Nil;

    // 1. Buat List Kosong
    createList(L);

    // 2. Alokasi dan Insert First (Logika dibalik karena Insert First)
    // Urutan input di kode: 2, 0, 8, 12, 9
    // Maka hasil akhir di list: 9, 12, 8, 0, 2

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // 3. Tampilkan Hasil
    printInfo(L);

    return 0;
}