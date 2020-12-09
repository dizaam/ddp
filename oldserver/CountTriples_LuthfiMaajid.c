/*Program : countriple.c
* Deskripsi : Menghitung huruf 3 beruntun
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char jtk[41], a, b, c, same=0;
    fgets(jtk, sizeof(jtk), stdin);
    scanf("%c %c %c", &a, &b, &c);

    int i=0;
    for(; i<strlen(jtk)-1; i++){
        if(tolower(a)==tolower(jtk[i])){
            if(tolower(b)==tolower(jtk[i+1])){
                if(tolower(c)==tolower(jtk[i+2])){
                    same++;
                }
            }
        }
    }

    printf("%d\n", same);
    
    
    
    
    return 0;
}   