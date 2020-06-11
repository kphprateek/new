#include <stdio.h>

int main(void) {
	int a,b,c,d,count=0;
	scanf("%d",&a);
	while(a!=0)
	{
	    scanf("%d",&b);
	    count=0;
	    while(b!=0)
	    {
	        d=b%10;
	        if(d==4)
	        {
	          count++;  
	        }
	        b=b/10;
	    }
	    printf("%d\n",count);
	    a--;
	}
	return 0;
  }
