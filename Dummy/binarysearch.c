#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,item,found=0;
int a[20];
int beg,mid,end;
clrscr();
printf("Enter the number of elements in an array:");
scanf("%d",&n);
printf("Enter elements in an array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element which you want to search");
scanf("%d",&item);
beg=0;
end=n-1;
while(beg<=end && a[mid]!=item)
{
mid=(beg+end)/2;
if(a[mid]==item)
{
printf("Element is found at %d:",mid);
found=1;
break;
}
else if(a[mid]<item)
{
beg=mid+1;
}
else
{
end=mid-1;
}
}
if(!found)
{
printf("Element is not present in an array");
}
getch();
}
