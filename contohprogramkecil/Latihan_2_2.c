/*
    Program     : Latihan_2_2.c
    Deskripsi   : Mengecek bilangan genap
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int num[10], i;

    printf("masukkan 10 bilangan:\n");
    for (i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    do{
        if(num[i]%2==0){
            printf("%d\n", num[i]);
        }
    }while(i<10);

    return 0;
}