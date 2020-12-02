/*Program : mencarihuruf.c
* Deskripsi : Memeriksa apakah ada huruf di kata 
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

#include<string.h>

int main(){
    int i=0;
    char* kata = "jtkpolban";
    char key = tolower(getchar());

    for(;i<strlen(kata)-1; i++){
        if(key==kata[i]){
            printf("ada\n");return 0;
        }
    }
    printf("tidak ada\n");
    
    
    
    
    return 0;
}   