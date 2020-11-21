/*
    Program     : Latihan_3_2.c
    Deskripsi   : Mencari nilai minimum dan rata - rata
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int i, temp;
    float nilai[6], min=0, sum=0;

    printf("masukkan niai: \n");
    for(i=0; i<6; i++){
        scanf("%f", &nilai[i]);
        sum+=nilai[i];
        
    }

    min=nilai[0];
    temp = 0;
    i =0;
    while(i<=5){
        if(nilai[i] <min){
            min = nilai[i];
            temp =i;
        }
        i++;
    }

    printf("%.2f %d %.3f\n", min, temp, sum/i);

    return 0;
}