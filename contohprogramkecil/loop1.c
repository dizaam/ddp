/*
    Program     : loop1.c
    Deskripsi   : Looping (while-loop) menginput nilai sampai nilai yang diinput -99
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int num, count=0;

    num=0;
    while(num != -99){
        count++;
        scanf("%d", &num);
    }
    printf("perulangan sebanyak: %d\n", count);

    return 0;
}