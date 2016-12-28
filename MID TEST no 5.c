#include <stdio.h>

int a,b,c ;
float D,x1,x2;

int main()
{
    system ("color 0a") ;
    printf("Masukan Niali a =");
    scanf("%d",&a);
    printf("Masukan Niali b =");
    scanf("%d",&b);
    printf("Masukan Niali c =");
    scanf("%d",&c);

        D = (b*b) - (4*a*c);

        x1 = (-b + sqrt (D) )/(2*a);
        x2 = (b + sqrt (D) )/(2*a);

        printf ("\nNilai Diskriminan = %f\n", D) ;
        printf ("\nHasil X1 = %f\n", x1);
        printf ("\nHasil X2 = %f\n", x2) ;

    return 0;
}
