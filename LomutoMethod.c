#include<stdlib.h>
#include<stdio.h>
void quicksort(int A[],int p,int r);
int partition(int A[],int p,int r);
int main(void)
{
	int i,n,A[100];
	printf("enter the size of array:");
	scanf("%d",&n);
        
	for(i=0;i<n;i++)

	A[i]=(rand()%(100-0))+0;
	printf("The elements in array is:");
	for(i=0;i<n;i++)
	printf("%d\n",A[i]);
	quicksort(A,0,n-1);
	printf("After sorting the array is");
	for(i=0;i<n;i++)
	printf("%d\n",A[i]);
}
void quicksort(int A[],int p,int r)
{
	if(p<r)
	{
		int q;
		q=partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);
	}
}
int partition(int A[],int p,int r)
{
	int x=A[r],i=0,j=0,temp=0,temp2=0;;
	i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(A[j]<=x)
		{	i=i+1;
		        temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}	
	temp2=A[i+1];
	A[i+1]=A[r];
	A[r]=temp2;
	return (i+1);
}
