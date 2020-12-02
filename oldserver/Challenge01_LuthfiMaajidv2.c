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
    int num, ord, now=10, j=0;
    char kata[31];
    fgets(kata, sizeof(kata), stdin);

    //printf("%d\n", strlen(kata));

    int i = 0;
    while(i != strlen(kata)-1){
        kata[i] = tolower(kata[i]);
        //printf("%c\n", kata[i]);

        ord = ((kata[i] - 97) / 3)+1;
        num = ((kata[i] - 97) % 3);
        
        if(kata[i]==' '){
            printf("0");
        }else{
            if(now==ord){
                printf("-1 ");
            }
            for(j=0; j<=num; j++){
                printf("%d", ord);
                if(j!=num){
                    printf(" ");
                }
            }
            
            
        }

        if(i==strlen(kata)-2){
            printf("\n");
        }else{
            printf(" ");
        }
        now=ord;
        i++;    
    }
    
    
    return 0;
}   