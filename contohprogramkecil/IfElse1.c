/*
    Program     : IfElse1.c
    Deskripsi   : Latihan selection
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/
#include <stdio.h>

int main(){
    int num;

    printf("Masukkan Nilai: ");
    scanf("%d", &num);

    if(num>0){
        printf("positif\n");
    }else if(num < 0){
        printf("negatif\n");
    }else {
        printf("nol\n");
    }

    return 0;
}