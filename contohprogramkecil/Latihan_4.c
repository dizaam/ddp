/*
    Program     : Latihan_4.c
    Deskripsi   : Menghitung berapa banyak kelipatan 3 dan 5
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int i, num, count=0, sum=0;

    while(count < count+1){
        scanf("%d", &num);
        if(num%3==0){
            if(num%5==0){
                count++;
                sum+=num;
            }
        }
    }

    return 0;
}