#ifndef SISWA_H_INCLUDED
#define SISWA_H_INCLUDED
#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define parent(P) P->parent

struct siswa {
    int nis;
    string nama;
    string guru;
    string kelas;
    int nilai_mtk;
    int nilai_ipa;
    int nilai_ips;
};

 typedef siswa info_siswa;
 typedef struct elmlist_siswa *adr_siswa;

 struct elmlist_siswa{
     info_siswa info;
     adr_siswa next;
     adr_siswa prev;

 };

struct List_siswa{
    adr_siswa first;
    adr_siswa last;
};


void createlist(List_siswa &L);
void Insert(List_siswa &L, adr_siswa P);
void deletefirst(List_siswa &L, adr_siswa &P);
void deletelast(List_siswa &L, adr_siswa &P);
void deleteafter(List_siswa &L,adr_siswa prec, adr_siswa &P);
adr_siswa findElmSiswa(List_siswa L,int nis, string nama, string guru);
void printInfo(List_siswa L);
adr_siswa alokasi(info_siswa x);

#endif // KELAS_H_INCLUDED
