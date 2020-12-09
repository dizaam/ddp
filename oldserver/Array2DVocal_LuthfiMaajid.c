/*Program : chalennge02.c
* Deskripsi : Menghitung jumlah langkah
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>


int main(){
    char huruf[3][3];
    bool vokal[3][3];
    int n=0;

    memset(vokal, 0, sizeof(vokal));


    int i=0;
    for(i=; i<3; i++){
        int j=0;
        for(;j<3; j++){
            scanf("%s", &huruf[i][j]);
            switch(tolower(huruf[i][j])){
                case 'a':
                    vokal[i][j] = true; n++; break;
                case 'i':
                    vokal[i][j] = true; n++; break;
                case 'u':
                    vokal[i][j] = true; n++; break;
                case 'e':
                    vokal[i][j] = true; n++; break;
                case 'o':
                    vokal[i][j] = true; n++; break;
                default:
                    break;
            }

        }
    }

    //printf("input selesai\n");

    if(n==0){
        printf("tidak ada huruf vokal\n");
        return 0;
    }


    i=0;
    for(; i<3; i++){
        int j=0;
        for(;j<3; j++){
            if(vokal[i][j]){
                printf("%c: (%d,%d)\n", huruf[i][j], i+1, j+1);
            }

        }
    }


    return 0;
}   