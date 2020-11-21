/*
    Program     : Latihan_4.c
    Deskripsi   : Menghitung berapa banyak kelipatan 3 dan 5
    Nama/NIM    : Luthfi Maajid / 201524050
    Tanggal     : 21 Nov 2020
    Compiler    : gcc (Debian 10.2.0-16) 10.2.0
*/

#include<stdio.h>

int main(){
    int i, count1, count2, sum1, sum2;
    int addr1[10], addr2[10];
    int num[10];

    count1 = count2 = sum1 = sum2 = 0;
    printf("masukkan bilangan : \n");
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    i=0;

    do{
        if(num[i] % 2 == 0){
            addr1[count1] = i;
            addr2[count2] = -1;
            //printf("count1 ke: %d\n", count1);
            count1++;
            count2++;
        }else{
            addr2[count2] = i;
            addr1[count1] = -1;
            //printf("count2 ke: %d\n", count2);
            count2++;
            count1++;
        }
        i++;
    }while(i<10);

    printf("deret bilangan yang telah dimasukkan : \n");
    for(i=0; i<10; i++){
        printf("%d, ", num[i]);
    }

    printf("\nderet bilangan 1 : \n");
    for(i=0; i<10; i++){
        if(addr1[i]!=-1)
        printf("%d, ", num[addr1[i]]);
    }

    printf("\nderet bilangan 2 : \n");
    for(i=0; i<10; i++){
        if(addr2[i]!=-1)
        printf("%d, ", num[addr2[i]]);
    }
    
    printf("\n");

    return 0;
}