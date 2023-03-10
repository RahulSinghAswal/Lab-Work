#include<stdio.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
void main()
{
int a[30],n,i;
printf("Enter no of elements : ");
scanf("%d",&n);
printf("Enter array elements : ");
   
for(i=0;i<n;i++)
scanf("%d",&a[i]);      
mergesort(a,0,n-1);  
printf("\nSorted array is : ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

}
 
void mergesort(int a[],int i,int j)
{
int mid;
       
if(i<j)
{
mid=(i+j)/2;

//left recursion
mergesort(a,i,mid);

//right recursion   
mergesort(a,mid+1,j);
merge(a,i,mid,mid+1,j);   
}
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
int temp[50];
int i,j,k;
i=i1;   
j=i2;   
k=0;

//while elements in both lists
while(i<=j1 && j<=j2)   
{
if(a[i]<a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}

//copy remaining elements of the first list
while(i<=j1)   
temp[k++]=a[i++];

//copy remaining elements of the second list
while(j<=j2)   
temp[k++]=a[j++];

for(i=i1,j=0;i<=j2;i++,j++)
a[i]=temp[j];
}




