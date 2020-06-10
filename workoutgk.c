#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,d,e,f,g,i,diff,temp,temp1,mid,insert,j,temp2,h=0;
	
	scanf("%d",&a);
	while(a!=0)
	{
	    scanf("%d",&b);
	    int ar[b],max=0,count=0,max1=0;
	    int ar1[b+1];
	    scanf("%d",&c);
	    for(i=0;i<b;i++)
	    {
	        scanf("%d",&ar[i]);
	    }
	    if(c==1)
	    {
	        for(i=0;i<b-1;i++)
	        {
	            
	            diff=abs(ar[i+1]-ar[i]);
	            if(max<diff)
	            {
	                max=diff;
	                temp=i;
	                temp1=i+1;
	            }
	        }
	    }
	    mid=(ar[temp]+ar[temp1])/2;
	    for(i=0;i<b;i++)
	    {
	        if(ar[i]>mid && count==0)
	        {                                                   
	            ar1[i]=mid; 
	            temp2=i;
	            count++;                 
	           
	                                   
	        }                         
	     
	        
	    }
	    for(i=0;i<temp2;i++)
	    {
	        ar1[i]=ar[i];
	    }
	    for(i=temp2;i<b;i++)
	    {
	        ar1[i+1]=ar[i];
	    }
	    
	    
	    for(i=0;i<b;i++)
	        {
	            
	            diff=abs(ar1[i+1]-ar1[i]);
	            if(max1<diff)
	            {
	                max1=diff;
	                
	            }
	        }
	        h++;
	        printf("Case #%d",h);
	        printf(": %d\n",max1);
	    
	    
	    a--;
	}
	return 0;
}


