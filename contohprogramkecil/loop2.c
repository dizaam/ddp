/*
    Program     : loop2.c
    Deskripsi   : Looping (do-while) menginput nilai lalu dijumlahkan dengan nilai sebelumnya sampai nilai yang diinput 0
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int num, count=0, sum=0;

    do{
        printf("masukkan nilai: ");
        scanf("%d", &num);
        count++;
        sum+=num;
    }while(num!=0);

    printf("\n\nperulangan sebanyak: %d\n", count);
    printf("sum                : %d\n", sum);

    return 0;
}