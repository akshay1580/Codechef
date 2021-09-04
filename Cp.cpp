#include<stdio.h>
#include<stdlib.h>
int main()
{
	int l;
	int test;
	scanf("%d",&test);
	for(l=0;l<test;l++)
	{
	int n;
	scanf("%d",&n);
	int *a;
	int *b;
	int answer=0;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	int i;
	int j=1;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		if((a[i]+j)%2==0 && a[i]!=-1)
		{
			continue;
		}
		else if((a[i]+j)%2==1 && a[i]!=-1)
		{
			b[j]=a[i];
			a[i]=-1;
			j++;
			i=0;	
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=-1)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=1;i<=n;i++)
	{
		if((b[i]+i)%2==1)
		{
			answer++;
		}
	}
	free(a);
	free(b);
	printf("%d\n",answer);
}
	return 0;
}
