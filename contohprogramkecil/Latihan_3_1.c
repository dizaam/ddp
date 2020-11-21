/*
    Program     : Latihan_3_1.c
    Deskripsi   : Mencari nilai maksimum dan rata-rata
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int i;
    float nilai, max=0, sum=0;

    printf("masukkan niai: \n");
    for(i=0; i<6; i++){
        scanf("%f", &nilai);
        sum+=nilai;
        if(nilai>max){
            max=nilai;
        }
    }

    printf("%.3f %.2f\n", max, sum/i);

    return 0;
}