#ifndef GURU_H_INCLUDED
#define GURU_H_INCLUDED
#include "siswa.h"
#define next(P) P->next
#define First(L) L.First
#define info(P) P->info
#include <iostream>
using namespace std;

struct guru {
    int nip;
    string nama;
    int umur;
    int mengajar;
    string kelas;
};

typedef guru info_guru;
typedef struct elmlist_guru *adr_guru;

 struct elmlist_guru {
     adr_guru next;
     info_guru info;
     List_siswa Lsiswa;
 };

 struct List_guru{
     adr_guru First;
};





void createlist(List_guru &L);
void Insert(List_guru &L, adr_guru P);
void deletefirst(List_guru &L, adr_guru &P);
void deletelast(List_guru &L, adr_guru &P);
void deleteafter(List_guru &L, adr_guru Prec, adr_guru &P);
adr_guru findElm(List_guru L,string nama,string kelas);
void printInfo(List_guru L);
adr_guru alokasi(info_guru x);
void dataguru(List_guru &L);



#endif // GURU_H_INCLUDED
