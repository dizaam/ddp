/*Program : holes.c
* Deskripsi : Menghitung huruf berlubang 
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

int main(){
    int i, n=0;
    char kata[52]; 
    scanf("%s", kata);
    
    //printf("kata terakhir: %c\n", kata[strlen(kata)-1]);
    for(i = 0; i<strlen(kata); i++){
        switch(tolower(kata[i])){
            case'a':
                n++;break;
            case'b':
                n+=2;break;
            case'd':
                n++;break;
            case'o':
                n++;break;
            case'p':
                n++;break;
            case'q':
                n++;break;
            case'r':
                n++;break;
            default:
                break;
        }
    }
    printf("%d\n", n);

    
    
    
    return 0;
}   