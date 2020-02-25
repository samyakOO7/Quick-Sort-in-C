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
	int x,temp=0,i=0,j=0;
	x=A[p];
	i=p-1;
	j=r+1;
	do
	{
		do
		{i=i+1;
		}while((A[i]<=x) && (i<r));
		do
		{
			j=j-1;
		}while(A[j]>x);
		if(i<j)
		{temp=A[i];
		A[i]=A[j];
		A[j]=temp;
		}
	}while(i<j);
	A[p]=A[j];
	A[j]=x;
	return j;
}
		

