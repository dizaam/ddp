/*Program : reverse.c
* Deskripsi : Membalikkan kata
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char word[12];
    fgets(word, sizeof(word), stdin);

    int i=strlen(word)-2;
    for(; i>-1; --i){
        printf("%c", word[i]);
    }
    printf("\n");
    
    
    
    
    
    return 0;
}   