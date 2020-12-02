/*Program : strcmp.c
* Deskripsi : Membandingkan 2 buah karakter array 
* Nama : Luthfi Maajid
* tanggal/ versi : 2 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char kata1[11], kata2[11], buffer[11];
    scanf("%s", buffer);strcpy(kata1, buffer);
    scanf("%s", buffer);strcpy(kata2, buffer);

    /*
    if(strcmp(kata1, kata2)>0){
        printf("+%d\n", strcmp(kata1, kata2));
    }else{
        printf("%d\n", strcmp(kata1, kata2));
    }
    */

    int i=0;
    for(;i<strlen(kata1)||i<strlen(kata2); i++){
        if(kata1[i]!=kata2[i]){
            if(kata1[i]>kata2[i]){
                printf("+%d\n", abs(kata1[i]-kata2[i]));
            }else{
                printf("%d\n", kata1[i]-kata2[i]);
            }
            printf("%d\n", i+1);
            return 0;
        }else{
            
        }

    }
    printf("0\n");
    printf("0\n");
    
    
    
    return 0;
}   