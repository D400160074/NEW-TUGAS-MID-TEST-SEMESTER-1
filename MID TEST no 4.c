#include <stdio.h>
unsigned char i=0;
int main (){

    system ("color 0a") ;
    printf ("PROGRAM BAHASA C, TUGAS MID TEST SEMESTER 1 TAHUN 2016\n\n") ;
    printf("========================================\n");
    printf("HURUF\t| DESIMAL\t| HEKSA DESIMAL\n");
    printf("========================================\n");


    for(i=65; i<255; i++){
        printf ("%c\t|  %d\t\t| 0x%x\n",  i,  i,  i);
    }
    printf("\n========================================\n");
    printf("========================================\n");
    return 0;
}
