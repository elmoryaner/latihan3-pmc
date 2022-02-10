// Nama: Elmo Ryaner Panggabean
// NIM : 13220012
// Latihan 3

#include<stdio.h>
#include <string.h>

struct mhs {
    char nama[20];
    int nim;
    float absen;
};

int main()
{
    int i;
    struct mhs st[5];
    printf("Masukkan 5 Data Mahasiswa");
    for(i=0;i<5;i++)
    {
        printf("\nMasukkan Nama:");
        scanf("%s",&st[i].nama);

        printf("\nMasukkan NIM:");
        scanf("%d",&st[i].nim);

        printf("\nMasukkan Persentase Kehadiran:");
        scanf("%f",&st[i].absen);
    }
    printf("\nData Mahasiswa yang memiliki kehadiran kurang dari 80 persen:");
    for(i=0;i<5;i++)
    {
        if(st[i].absen < 80) {
        printf("\nNama:%s, NIM:%d, Kehadiran:%f", st[i].nama, st[i].nim, st[i].absen);
        }
    }
    return 0;
}

