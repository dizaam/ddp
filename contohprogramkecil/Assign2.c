/*
    program         : assign 2
    deskripsi       : assignment sederhana dengan casting
    author          : Luthfi Maajid
    tanggal/versi   : 13 November 2020 / 1
    compiler        : gcc (Debian 10.2.0-15) 10.2.0
*/

#include <stdio.h>

int main(){
    //deklarasi
    int s=3, p=2;
    float z=0;

    //proses
    z = (float) s/p;
    printf("nilai z = %5.2f \n", z);

    return 0;
}