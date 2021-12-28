#include<stdio.h>
int main()
{

	int test_case,i,no,k,flag,div,count;
	while(scanf("%d",&test_case)==1&&(test_case<=65)){
		for(i=1;i<=test_case;i++)
		{
			scanf("%d",&no);
			if(no==0)
				break;
			div=no;
			count=0;
		    while(div>0){
		    	if(div%2==1)
		    		count++;
		    	div=div/2;

		    }
		    flag=0;
		    while(flag!=1)
		    {

		    	no=no+1;
		    	div=no;
				k=0;
			    while(div>0){
			    	if(div%2==1)
			    		k++;
			    	div=div/2;
			    }
			    if(k==count){
			    	flag=1;
			    	printf("Case %d: %d",i,no);
			    }
		    }
		}
	}

}

