#include<stdio.h>
int main()
{
    double t;
    int n,i,j,c=0,max,a,b;
    while((scanf("%d %d",&a,&b)) != EOF){

        if(a <= b){i = a; j = b;}
        else { i = b; j = a;}
        max=0;
            while(i <= j){
                n = i;
                while(1){
                    c++;
                    if(n == 1) break;
                    if(n % 2 != 0){
                        n = 3 * n + 1;
                    }else n = n / 2;
                }
                if(max < c) max = c;
                c=0;
                i++;
            }
            printf("%d %d %d\n",a,b,max);
    }

    return 0;
}
