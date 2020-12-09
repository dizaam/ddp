/*Program : couple.c
* Deskripsi : Mencari pasangan huruf
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char jtk[10], a, b;
    strcpy(jtk, "jtkpolban");

    scanf("%c %c", &b, &a);
    int i=0;
    for(;i<strlen(jtk); i++){
        if(tolower(a)==jtk[i]){
            if(tolower(b)==jtk[i+1]){
                printf("ada\n"); return 0;
            }
        }
    }
    printf("tidak ada\n");
    
    
    
    return 0;
}   