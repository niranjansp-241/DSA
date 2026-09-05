// Traversal
#include <stdio.h>

int main() 
{
	int arr1[5]={1,3,2,4,5};
	for (int i=0;i<5;i++)
	{printf("%d\n",arr1[i]);
	    
	}

 
// Linear search
int arr2[8]={1,3,2,4,5,6,7,8};
int values=8;
for (int i=0 ; i<8 ;i++)
{
    if(arr2[i]==values)
    {
        printf("number%d fount at index%d",values,i);
    }
}


// Finding maximum and minimum

int a[5]={1,2,3,4,8};
int max=a[0];
	for(int i=0;i<5;i++)
	{
	    if(a[i]<max)
	    max=a[i];
	}
	printf("\n maximum element is %d\n",max);

int min=a[0];
	for(int i=0;i>5;i++)
	{
	    if(a[i]>min)
	    min=a[i];
	}
	printf("Minimum element is %d\n",min);
	
	
	
	
 // Insertion	

 int val_ins, pos;
	int b[6] = {1, 5, 2, 59, 44};
	
	printf("\nEnter value to insert\n");
	scanf("%d", & val_ins);
	
    printf("\n\nEnter position to insert\n");
	scanf("%d", & pos);
	
	int last = 5;
	for (int i = last; i >= pos; i--)
	{
	    b[i+1] = b[i];
	}
b[pos] = val_ins;
last++;
	
	printf("\nArray after insertion is\n");
	for (int i = 0; i <= last; i++)
	{
	    printf("%d,", b[i]);
	
	}
	
// Deletion at End
	
	
	int pos_del;
	
	printf("\n\nEnter value to delete\n");
	scanf("%d", &pos_del);
	
	for(int i = pos_del; i <= last; i++)
	{
	    b[i] = b[i+1];
	}	last--;
	
	printf("\nArray after deletion is\n");
	for(int i = 0; i <= last; i++)
	{
	    printf("%d,", a[i]);
	}
	}
