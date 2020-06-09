#include <stdio.h>
#include <math.h>
int main(void) {
	int a,b,c,k,u=1;
	scanf("%d",&a);
	while(a!=0)
	{
	    scanf("%d",&b);
	    
	    int ar[b],i,j,g,count=0,f;
	    float d,h;
	    for(i=0;i<b;i++)
	    {
	        scanf("%d",&ar[i]);
	    }
	    for(i=0;i<b;i++)
	    {
	        int sum=0;
	        d=sqrt((float)ar[i]);
	        g=d;
	        if(g==d)
	        {
	            
	            count++;
	           
	        }
	        
	       
	        for(j=i+1;j<b;j++)
	        {
	            int sum=0;
	            for(k=i;k<=j;k++)
	            {
	           
	            sum=sum+ar[k];
	            
	            
	           
	            
	            }
	           
	             h=sqrt((float)sum);
	            f=h;
	            if(h==f)
	            {
	                
	                count++;
	            }
	            else
	            {
	                
	                
	            }
	            
	        
	        }
	    }
	    printf("case #%d",u);
	    printf(": %d",count);
	    u++;
	  
	    a--;
	    printf("\n");
	}
	return 0;
}
