/*Program : right.c
* Deskripsi : Menampilkan N buah karakter terkanan 
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

#include<string.h>

int main(){
    int i, n;
    char kata[32]; 
    fgets(kata, sizeof(kata), stdin);
    scanf("%d", &n);

    //printf("%d\n", strlen(kata));
    for(i = strlen(kata)-1-n; i<strlen(kata)-1; i++){
        printf("%c", kata[i]);
        //printf("test\n");
    }
    printf("\n");

    
    
    
    return 0;
}   