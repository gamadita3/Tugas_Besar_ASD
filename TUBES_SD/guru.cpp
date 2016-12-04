#include "guru.h"

void createlist(List_guru &L)
{
    First(L) = NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////

void Insert(List_guru &L, adr_guru P)
{
    if(First(L) == NULL)
    {
        First(L) = P;

    }
    else
    {

        next(P) = First(L);
        First(L) = P;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void deletefirst(List_guru &L, adr_guru &P)
{
    if (First(L) != NULL)
    {
        P = First(L);
        if(next(First(L))== NULL)
        {
            First(L) = NULL;
        }
        else
        {
            First(L)=next(P);
            next(P)=NULL;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void deletelast(List_guru &L, adr_guru &P)
{
    adr_guru Q;
    Q=First(L);
    if (P != NULL)
    {
        while (next(next(Q)) != NULL)
        {
            Q = next(Q);
        }
        P = next(Q);
        next(Q)= NULL;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void deleteafter(List_guru &L, adr_guru prec, adr_guru &P)
{
    if(First(L) != NULL)
    {
        P = next(prec);
        next(prec)=next(P);
        next(P)= NULL;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

adr_guru findElm(List_guru L,string nama,string kelas)
{
    adr_guru P = First(L);
    while(P != NULL)
    {
        if((info(P).nama == nama) && (info(P).kelas == kelas))
        {
            return P;
        }
        P = next(P);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void printInfo(List_guru L)
{
    adr_guru P = First(L);
    if(First(L)!=NULL)
    {
        do
        {
            cout<<"Nomor Induk Pegawai   : "<<info(P).nip<<endl;
            cout<<"Nama                  : "<<info(P).nama<<endl;
            cout<<"Umur                  : "<<info(P).umur<<endl;
            cout<<"Masa Mengajar (tahun) : "<<info(P).mengajar<<endl;
            cout<<"Kelas                 : "<<info(P).kelas<<endl<<endl;
            P = next(P);
        }
        while(P!=NULL);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

adr_guru alokasi(info_guru x)
{
    adr_guru P;
    P = new elmlist_guru;
    info(P) = x;
    next(P) = NULL;
    createlist(P->Lsiswa);
    return P;
}

/////////////////////////////////////////////////////////////////////////////////////////

void dataguru(List_guru &L)
{

}
