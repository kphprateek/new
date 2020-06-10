#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,h=0;
    scanf("%d",&a);
    while(a!=0)
    {
        scanf("%d",&b);
        int ar[b];
        for(c=0;c<b;c++)
        {
            scanf("%d",&ar[c]);
        }
        int count=0;
        for(d=1;d<b-1;d++)
        {
            e=ar[d-1];
            f=ar[d+1];
            if(ar[d]>e && ar[d]>f)
            {
                count++;
            }
        }
        h++;
        printf("case #%d",h);
        printf(": %d",count);
        printf("\n");
        a--;
    }
    return 0;
}