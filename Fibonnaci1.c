#include <stdio.h>
void fib(int u0,int n )
{
    int tab[n],somme,i;
    somme=0;
    tab[0]=u0;
        tab[1]=tab[0]+1;
    for(i=0;i<n;i++)
    {

        tab[i+2]=tab[i+1]+tab[i];
    }
for(i=0;i<=n;i++)
{
   somme=somme+tab[i];
}
printf("U%d=%d\n",n,tab[i-1]);
printf("S=%d\n",somme);
}

    int main()
    {
    int n,u0;
    printf("n=");
    scanf("%d",&n);
    printf("u0=");
    scanf("%d",&u0);
    fib(u0,n );
    return 0;

}
