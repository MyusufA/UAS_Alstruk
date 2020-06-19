#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Maulana Yusuf Abdullah");
    pritnf("197006061");
 	  printf("Masukan Nilai a : ");
    scanf("%d",&a);
    printf("Masukan Nilai b : ");
    scanf("%d",&b);
    printf("Masukan Nilai c : ");
    scanf("%d",&c);

    if ((a > b) && (a > c))
    {
        printf("A adalah Nilai Terbesar ");
    }
    else if ((b > a) && (b > c))
    {
        printf("B adalah Nilai Terbesar");
    }
    else if ((c > a) && (c > b))
    {
        printf("C adalah Nilai Terbesar");
    }
    

    return 0;
}
