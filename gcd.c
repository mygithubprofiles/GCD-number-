#include<stdio.h>
int main()
{
int max1=0,max2=0,arr[10],size;
printf("enter the array size:\n");
scanf("%d",&size);
 arr[size];
 printf("enter the array element:\n");
 for(int i=0;i<size;i++){
 	scanf("%d",arr[i]);
 	 if(arr[i]>max1){
 	 	max1=arr[i];
	  }
 }
 for(int i=0;i<n;i++){
 	if(arr[i]<max1 && arr[i]>max2){
 		max2=arr[i];
	 }
 }
	printf("max2=%d",max2);
	return 0;
}
