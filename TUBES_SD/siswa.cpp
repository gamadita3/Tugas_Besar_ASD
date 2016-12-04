#include "siswa.h"

void createlist(List_siswa &L)
{
    first(L) = NULL;
    last(L) = NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////

void Insert(List_siswa &L, adr_siswa P)
{
    if(first(L)==NULL)
    {
        first(L)=P;
        last(L)=P;
    }
    else
    {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void deletefirst(List_siswa &L, adr_siswa &P)
{
    P = first(L);
    if(next(first(L)) == NULL)
    {
        first(L) = NULL;
    }
    else
    {
    first(L)=next(P);
    next(P)=NULL;
    prev(first(L))=NULL;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void deletelast(List_siswa &L, adr_siswa &P)
{
    P=last(L);
    last(L)=prev(P);
    prev(P)=NULL;
    next(last(L))=NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////

void deleteafter(List_siswa &L,adr_siswa prec, adr_siswa &P)
{
    P=next(prec);
    next(prec)=(next(P));
    prev(next(P))=(prec);
    prev(P) = NULL;
    next(P) = NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////

adr_siswa findElmSiswa(List_siswa L,int nis, string nama, string guru)
{
    adr_siswa P = first(L);
    while(P != NULL)
    {
         if((info(P).nis == nis) && (info(P).nama == nama) && (info(P).guru == guru))
        {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////

void printInfo(List_siswa L)
{
    adr_siswa P = first(L);
    if(first(L)!=NULL)
    {
        while(P!=NULL)
        {
            cout<<"Nomor Induk Siswa : "<<info(P).nis<<endl;
            cout<<"Nama              : "<<info(P).nama<<endl;
            cout<<"Guru              : "<<info(P).guru<<endl;
            cout<<"Nilai Matematika  : "<<info(P).nilai_mtk<<endl;
            cout<<"Nilai IPA         : "<<info(P).nilai_ipa<<endl;
            cout<<"Nilai IPS         : "<<info(P).nilai_ips<<endl<<endl;
            P = next(P);
        }

    }
}

/////////////////////////////////////////////////////////////////////////////////////////

adr_siswa alokasi(info_siswa x)
{
    adr_siswa P = new elmlist_siswa;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}
