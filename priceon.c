#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	while(a!=0)
	{
	    int b,c,i,j,sum=0,sum1=0,result;
	    scanf("%d",&b);
	    scanf("%d",&c);
	    int ar[b],ar1[b];
	    for(i=0;i<b;i++)
	    {
	        scanf("%d",&ar[i]);
	    }
	    for(i=0;i<b;i++)
	    {
	        sum=sum+ar[i];
	        if(ar[i]>=c)
	        {
	            ar1[i]=c;
	        }
	        else
	        {
	        ar1[i]=ar[i];
	        }
	    }
	    for(i=0;i<b;i++)
	    {
	        
	        sum1=sum1+ar1[i];
	    }
	    
	    result=sum-sum1;
	    printf("%d",result);
	    a--;
	    printf("\n");
	}
	return 0;
}

