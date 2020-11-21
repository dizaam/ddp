/*
    Program     : Test.c
    Deskripsi   : Pencabangan4 dan Depend on
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/
#include <stdio.h>

int main(){
    int angka;
    
    printf("masukkan angka: ");
    scanf("%d", &angka);

    if((angka < 10) && (angka > -10)){
        if(angka > 0){
            printf("positif\n");
        }else{
            printf("minus\n");
        }
    }else{
        printf("satu digit saja!\n");
        return 0;
    }

    switch(abs(angka)){
        case (0) : printf("nol\n"); break;
        case (1) : printf("satu\n"); break;
        case (2) : printf("dua\n"); break;
        case (3) : printf("tiga\n"); break;
        case (4) : printf("empat\n"); break;
        case (5) : printf("lima\n"); break;
        case (6) : printf("enam\n"); break;
        case (7) : printf("tujuh\n"); break;
        case (8) : printf("delapan\n"); break;
        case (9) : printf("sembilan\n"); break;
    }

    return 0;
}