#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "guru.h"
#include "siswa.h"
using namespace std;

int main()
{
    List_guru g;
    info_guru a;
    info_siswa b;
    dataguru(g);
    createlist(g);
    int menu = 0;
    int i = 0;
        cout<<"loading";
        while (i != 5)
        {
            cout<<".";
            Sleep(250);
            i++;

        }
        while (menu != 5)
        {
            system("cls");
            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
            cout<<endl<<"Silahkan Pilih : "<<endl<<endl;
            cout<<"1. Data Guru"<<endl;
            cout<<"2. Data Siswa"<<endl;
            cout<<"3. Keluar"<<endl;
            cout<<endl;
            cout<<"Masukkan Pilihan : ";
            cin>>menu;
            switch(menu)
            {
            case 1:
                {
                    system("cls");
                    int menugr = 0;
                    while (menugr != 5)
                    {
                        system("cls");
                        cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                        cout<<endl<<"Silahkan Pilih : "<<endl<<endl;
                        cout<<"1. Tambah Data Guru"<<endl;
                        cout<<"2. Hapus Data Guru"<<endl;
                        cout<<"3. Cari Data Guru"<<endl;
                        cout<<"4. Menampilkan Data Guru"<<endl;
                        cout<<"5. Kembali"<<endl<<endl;
                        cout<<"Masukkan Pilihan : ";
                        cin>>menugr;
                        if (menugr == 1)
                        {
                            system("cls");
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            cout<<"Masukan Data Guru"<<endl<<endl;
                            cout<<"NIP             : ";
                            cin>>a.nip;
                            cout<<endl;
                            cout<<"Nama            : ";
                            cin>>a.nama;
                            cout<<endl;
                            cout<<"Umur            : ";
                            cin>>a.umur;
                            cout<<endl;
                            cout<<"Masa Mengajar   : ";
                            cin>>a.mengajar;
                            cout<<endl;
                            cout<<"Kelas           : ";
                            cin>>a.kelas;
                            cout<<endl;
                            if (findElm(g,a.nama,a.kelas)== NULL)
                            {
                                Insert(g, alokasi(a));
                            }
                            else
                            {
                                cout<<"Data Sudah Ada"<<endl;
                            }
                        }
                        else if (menugr == 2)
                        {
                            system("cls");
                            adr_guru crg;
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            cout<<"Hapus Data Guru"<<endl;
                            cout<<"1.NIP   : ";
                            cin>>a.nip;
                            cout<<endl;
                            cout<<"2.Nama  : ";
                            cin>>a.nama;
                            cout<<endl;
                            cout<<"3.Kelas : ";
                            cin>>a.kelas;
                            cout<<endl;
                            crg = findElm(g,a.nama,a.kelas);
                            if(crg != NULL)
                            {
                                if(crg == First(g))
                                {
                                    deletefirst(g,crg);
                                }
                                else if(next(crg) != NULL)
                                {
                                    adr_guru prec = First(g);
                                    while(next(prec) != crg)
                                    {
                                        prec = next(prec);
                                    }
                                    deleteafter(g,prec,crg);
                                }
                                else
                                {
                                    deletelast(g,crg);
                                }
                            }
                        }
                        else if (menugr == 3)
                        {
                            int i = 0;
                            system("cls");
                            adr_guru crg;
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            cout<<"Cari Data Guru"<<endl;
                            cout<<"1. Masukkan NIP   : ";
                            cin>>a.nip;
                            cout<<endl;
                            cout<<"2. Masukkan Nama  : ";
                            cin>>a.nama;
                            cout<<endl;
                            cout<<"3. Masukkan Kelas : ";
                            cin>>a.kelas;
                            cout<<endl;
                            crg = findElm(g,a.nama,a.kelas);
                            if(crg != NULL)
                            {
                                cout<<"NIP           : "<<info(crg).nip<<endl;
                                cout<<"Nama          : "<<info(crg).nama<<endl;
                                cout<<"Umur          : "<<info(crg).umur<<endl;
                                cout<<"Masa Mengajar : "<<info(crg).mengajar<<endl;
                                cout<<"Kelas         : "<<info(crg).kelas<<endl;
                            }
                            else
                            {
                                cout<<"Guru yang Dicari Tidak Ada"<<endl;
                            }
                            cout<<endl<<endl<<"1. Kembali"<<endl<<endl<<"Pilih : ";
                            cin>>i;
                            while (i!=1)
                            {
                                if (i==1)
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<endl<<endl<<"Pilihan Salah"<<endl<<endl<<"Pilih : ";
                                    cin>>i;
                                }
                            }
                         }
                         else if (menugr == 4)
                          {
                            int a = 0;
                            system("cls");
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            printInfo(g);
                            cout<<endl<<endl<<"1. Kembali"<<endl<<endl<<"Pilih : ";
                            cin>>a;
                            while (a!=1)
                            {
                                if (a==1)
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<endl<<endl<<"Pilihan Salah"<<endl<<endl<<"Pilih : ";
                                    cin>>a;
                                }
                            }
                          }
                         else if (menugr == 5)
                         {
                             break;
                         }
                    }
                    break;
                }
            case 2:
                {
                    system("cls");
                    int menusw = 0;
                    while (menusw != 5)
                    {
                        system("cls");
                        cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                        cout<<endl<<"Silahkan Pilih : "<<endl<<endl;
                        cout<<"1. Tambah Data Siswa"<<endl;
                        cout<<"2. Hapus Data Siswa"<<endl;
                        cout<<"3. Cari Data Siswa"<<endl;
                        cout<<"4. Menampilkan Data Siswa"<<endl;
                        cout<<"5. Kembali"<<endl<<endl;
                        cout<<"Masukkan Pilihan : ";
                        cin>>menusw;
                        if (menusw == 1)
                        {
                            system("cls");
                            adr_guru crg;
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            cout<<"Masukan Data Siswa"<<endl;
                            cout<<"NIS                : ";
                            cin>>b.nis;
                            cout<<endl;
                            cout<<"Nama               : ";
                            cin>>b.nama;
                            cout<<endl;
                            cout<<"guru               : ";
                            cin>>b.guru;
                            cout<<endl;
                            cout<<"kelas              : ";
                            cin>>b.kelas;
                            cout<<endl;
                            cout<<"Nilai Matematika   : ";
                            cin>>b.nilai_mtk;
                            cout<<endl;
                            cout<<"Nilai IPA          : ";
                            cin>>b.nilai_ipa;
                            cout<<endl;
                            cout<<"Nilai IPS          : ";
                            cin>>b.nilai_ips;
                            cout<<endl;
                            crg = findElm(g, b.guru,b.kelas);
                            if (crg != NULL)
                            {
                                if(findElmSiswa(crg->Lsiswa,b.nis,b.nama,b.guru)== NULL)
                                {
                                    Insert(crg->Lsiswa, alokasi(b));
                                }
                                else
                                {
                                    cout<<"Siswa Sudah Terdaftar"<<endl;
                                    Sleep(1000);
                                }
                            }
                            else
                            {
                                cout<<"Tidak Ada guru"<<endl;
                                Sleep(1000);
                            }
                        }
                        else if (menusw == 2)
                        {
                            system("cls");
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            cout<<"Hapus Data Siswa"<<endl;
                            cout<<"1.NIS   : ";
                            cin>>b.nis;
                            cout<<endl;
                            cout<<"2.Nama  : ";
                            cin>>b.nama;
                            cout<<endl;
                            cout<<"3.Guru  : ";
                            cin>>b.guru;
                            cout<<endl;
                            cout<<"4.Kelas : ";
                            cin>>b.kelas;
                            cout<<endl;
                            adr_guru crg = findElm(g,b.guru,b.guru);
                            if (crg != NULL)
                            {
                               adr_siswa crs = findElmSiswa(crg->Lsiswa,b.nis,b.nama,b.guru);
                                if (crs != NULL)
                                {
                                    if(crs == first(crg->Lsiswa))
                                    {
                                        deletefirst(crg->Lsiswa,crs);
                                    }
                                    else if (next(first(crg->Lsiswa)) != NULL)
                                    {
                                       adr_siswa prec = first(crg->Lsiswa);
                                        while(next(prec) != crs)
                                        {
                                            prec = next(prec);
                                        }
                                        deleteafter(crg->Lsiswa,prec,crs);
                                    }
                                    else
                                    {
                                        deletelast(crg->Lsiswa,crs);
                                    }
                                }
                            }
                        }
                        else if (menusw == 3)
                        {
                           system("cls");
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            cout<<"Cari Data Siswa"<<endl;
                            cout<<"1.NIS    : ";
                            cin>>b.nis;
                            cout<<endl;
                            cout<<"2.Nama   : ";
                            cin>>b.nama;
                            cout<<endl;
                            cout<<"3.Guru   : ";
                            cin>>b.guru;
                            cout<<endl;
                            cout<<"4.Kelas  : ";
                            cin>>b.kelas;
                            cout<<endl;
                            adr_guru crg = findElm(g,b.guru,b.kelas);
                            if (crg != NULL)
                            {
                                adr_siswa crs = findElmSiswa(crg->Lsiswa,b.nis,b.nama,b.guru);
                                if (crs != NULL)
                                {
                                    cout<<"NIS              :"<<info(crs).nis<<endl;
                                    cout<<"Nama             :"<<info(crs).nama<<endl;
                                    cout<<"Guru             :"<<info(crs).guru<<endl;
                                    cout<<"Kelas            :"<<info(crs).kelas<<endl;
                                    cout<<"Nilai Matematika :"<<info(crs).nilai_mtk<<endl;
                                    cout<<"Nilai IPA        :"<<info(crs).nilai_ipa<<endl;
                                    cout<<"Nilai IPS        :"<<info(crs).nilai_ips<<endl;
                                }
                            }
                            else
                            {
                                cout<<"Siswa Tidak Di Temukan"<<endl;
                            }
                            cout<<endl<<endl<<"1. Kembali"<<endl<<endl<<"Pilih : ";
                            cin>>i;
                            while (i!=1)
                            {
                                if (i==1)
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<endl<<endl<<"Pilihan Salah"<<endl<<endl<<"Pilih : ";
                                    cin>>i;
                                }
                            }
                        }
                        else if (menusw == 4)
                        {
                            int a = 0;
                            system("cls");
                            cout<<endl<<" |                SELAMAT DATANG DI SDN CIGANITRI                |"<<endl<<endl;
                            adr_guru P = First(g);
                            if(First(g)!=NULL)
                            {
                                while (P != NULL)
                                {
                                    if (first(P->Lsiswa) != NULL)
                                    {
                                        adr_siswa Q = first(P->Lsiswa);
                                        while(Q!=NULL)
                                        {
                                            cout<<"NIS              : "<<info(Q).nis<<endl;
                                            cout<<"Nama             : "<<info(Q).nama<<endl;
                                            cout<<"Guru             : "<<info(Q).guru<<endl;
                                            cout<<"Kelas            : "<<info(Q).kelas<<endl;
                                            cout<<"Nilai Matematika : "<<info(Q).nilai_mtk<<endl;
                                            cout<<"Nilai IPA        : "<<info(Q).nilai_ipa<<endl;
                                            cout<<"Nilai IPS        : "<<info(Q).nilai_ips<<endl;
                                            Q = next(Q);
                                        }
                                    }
                                    P = next(P);
                                }
                            }
                            cout<<endl<<endl<<"1. Kembali"<<endl<<endl<<"Pilih : ";
                            cin>>a;
                            while (a!=1)
                            {
                                if (a==1)
                                {
                                    break;
                                }
                                else
                                {
                                    cout<<endl<<endl<<"Pilihan Salah"<<endl<<endl<<"Pilih : ";
                                    cin>>a;
                                }
                            }
                        }
                        else if (menusw == 5)
                        {
                            break;
                        }
                     }
                     break;
                }
                case 3:
                {
                    system("cls");
                    cout<<endl<<" |                SELAMAT TINGGAL SDN CIGANITRI                |"<<endl<<endl;
                    cout<<"TERIMA KASIH";
                    Sleep(1000);
                    return 0;
                }
            }
        }
}
