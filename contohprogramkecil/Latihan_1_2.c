/*
    Program     : Latihan_1_2.c
    Deskripsi   : Loop input ke array
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int num, count=0, arrNum[200];

    scanf("%d", &num);
    arrNum[count] = num;
    while(num != -99){
        count++;
        scanf("%d", &num);
        arrNum[count] = num;
    }

    printf("\n\nperulangan sebanyak: %d\n", count);
    //printf("sum                : %d\n", sum);

    return 0;
}