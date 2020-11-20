/*
    program         : assign 1
    deskripsi       : assignment sederhana
    author          : Luthfi Maajid
    tanggal/versi   : 13 November 2020 / 1
    compiler        : gcc (Debian 10.2.0-15) 10.2.0
*/

#include <stdio.h>

int main(){
    //deklarasi & inisialisasi
    float sisi = 0, luas = 0;

    //proses
    sisi = 3.5;         //assignment langsung
    luas = sisi*sisi;   //assignment tidak langsung
    printf("nilai X = %f\n", luas);

    return 0;
}