/*Program : right.c
* Deskripsi : Menampilkan N buah karakter terkanan 
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

int main(){
    int i, n=0, j;
    bool sama=false;
    char kata[28]; 
    scanf("%s", kata);
    
    //printf("%d\n", strlen(kata));
    for(i = 0; i<strlen(kata); i++){
        sama=false;
        for(j=i+1; j<strlen(kata); j++){
            if(tolower(kata[i])==tolower(kata[j])){
                sama=true;
                break;
            }
        }
        if(!sama){
            n++;
        }
        //printf("test\n");
    }
    printf("%d\n", n);

    
    
    
    return 0;
}   