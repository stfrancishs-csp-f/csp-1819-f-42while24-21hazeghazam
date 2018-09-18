#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=11;

   // for(k=0;k<5;k++)
   while(k<=11)
    {
        sum = k - 1;
        k--;
    }

    printf("%d\n",sum);

    //k=6;

    for(k=10;k>0;k--) {
       sum = k - 1; //use something different in "for" version
        printf ("%d\n", k);

    }

    printf("Blast Off!!!!!\n");

}

