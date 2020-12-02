/*Program : Challenge01.c
* Deskripsi : Mengubah teks ke dalam bentuk sandi
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

#include<string.h>





int main(){
    
    int i=0, now = 0, what = 10;
    char kata[32];
    fgets(kata, sizeof(kata), stdin);
    
    while(kata[i]!='\n'){
        kata[i] = toupper(kata[i]);


        switch(kata[i]){
            case 'A':
                now = 1;
                if(now==what){
                    printf("-1 ");
                    
                }
                printf("1");
                what=1;
                break;
            case 'B':
                now = 1;
                if(now==what){
                    printf("-1 ");
                }
                printf("1 1");
                what=1;
                break;
            case 'C':
                now = 1;
                if(now==what){
                    printf("-1 ");
                }
                printf("1 1 1");
                what=1;
                break;
            case 'D':
                now = 2;
                if(now==what){
                    printf("-1 ");
                }
                printf("2");
                what=2;
                break;
            case 'E':
                now = 2;
                if(now==what){
                    printf("-1 ");
                }
                printf("2 2");
                what=2;
                break;
            case 'F':
                now = 2;
                if(now==what){
                    printf("-1 ");
                }
                printf("2 2 2");
                what=2;
                break;
            case 'G':
                now = 3;
                if(now==what){
                    printf("-1 ");
                }
                printf("3");
                what=3;
                break;
            case 'H':
                now = 3;
                if(now==what){
                    printf("-1 ");
                }
                printf("3 3");
                what=3;
                break;
            case 'I':
                now = 3;
                if(now==what){
                    printf("-1 ");
                }
                printf("3 3 3");
                what=3;
                break;
            case 'J':
                now = 4;
                if(now==what){
                    printf("-1 ");
                }
                printf("4");
                what=4;
                break;
            case 'K':
                now = 4;
                if(now==what){
                    printf("-1 ");
                }
                printf("4 4");
                what=4;
                break;
            case 'L':
                now = 4;
                if(now==what){
                    printf("-1 ");
                }
                printf("4 4 4");
                what=4;
                break;
            case 'M':
                now = 5;
                if(now==what){
                    printf("-1 ");
                }
                printf("5");
                what=5;
                break;
            case 'N':
                now = 5;
                if(now==what){
                    printf("-1 ");
                }
                printf("5 5");
                what=5;
                break;
            case 'O':
                now = 5;
                if(now==what){
                    printf("-1 ");
                }
                printf("5 5 5");
                what=5;
                break;
            case 'P':
                now = 6;
                if(now==what){
                    printf("-1 ");
                }
                printf("6");
                what=6;
                break;
            case 'Q':
                now = 6;
                if(now==what){
                    printf("-1 ");
                }
                printf("6 6");
                what=6;
                break;
            case 'R':
                now = 6;
                if(now==what){
                    printf("-1 ");
                }
                printf("6 6 6");
                what=6;
                break;
            case 'S':
                now = 7;
                if(now==what){
                    printf("-1 ");
                }
                printf("7");
                what=7;
                break;
            case 'T':
                now = 7;
                if(now==what){
                    printf("-1 ");
                }
                printf("7 7");
                what=7;
                break;
            case 'U':
                now = 7;
                if(now==what){
                    printf("-1 ");
                }
                printf("7 7 7");
                what=7;
                break;
            case 'V':
                now = 8;
                if(now==what){
                    printf("-1 ");
                }
                printf("8");
                what=8;
                break;
            case 'W':
                now = 8;
                if(now==what){
                    printf("-1 ");
                }
                printf("8 8");
                what=8;
                break;
            case 'X':
                now = 8;
                if(now==what){
                    printf("-1 ");
                }
                printf("8 8 8");
                what=8;
                break;
            case 'Y':
                now = 9;
                if(now==what){
                    printf("-1 ");
                }
                printf("9");
                what=9;
                break;
            case 'Z':
                now = 9;
                if(now==what){
                    printf("-1 ");
                }
                printf("9 9");
                what=9;
                break;
            case ' ':
                printf("0");
                break;
        }
        if(i==strlen(kata)-2){
            printf("\n");break;
        }else{
            printf(" ");
        }
        i++;
    };

    
    return 0;
}   