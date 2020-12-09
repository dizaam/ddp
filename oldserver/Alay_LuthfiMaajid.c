/*Program : Challenge01.c
* Deskripsi : Mengubah teks ke dalam bentuk sandi
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 2
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    int i=0;
    char kata[52];
    fgets(kata, sizeof(kata), stdin);

    for(;i<strlen(kata)-1; i++){
        switch(tolower(kata[i])){
            case 'a':
                printf("4");break;
            case 'i':
                printf("1");break;
            case 'z':
                printf("2");break;
            case 'e':
                printf("3");break;
            case 'g':
                printf("6");break;
            case 'j':
                printf("7");break;
            case 'b':
                printf("8");break;
            default:
                printf("%c", kata[i]);break;
        }
    }
    printf("\n");
    
    
    
    
    return 0;
}   