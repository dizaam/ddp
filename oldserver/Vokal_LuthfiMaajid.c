/*Program : vokal.c
* Deskripsi : Memeriksa Huruf Vokal
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

#include<string.h>





int main(){
    
    char huruf;
    huruf = getchar();


    switch(tolower(huruf)){
        case 'a':
            printf("true");break;
        case 'i':
            printf("true");break;
        case 'u':
            printf("true");break;
        case 'e':
            printf("true");break;
        case 'o':
            printf("true");break;
        default:
            printf("false");break;
    }
    printf("\n");
    
    
    
    
    return 0;
}   