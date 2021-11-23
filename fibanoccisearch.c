//Fibonacci Search is a comparison based.... so......;)
#include<stdio.h>
int fib(int n);
int main()
{
    int a[50],n,i,ele,jeswin=1;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements in ascending order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search\n");
    scanf("%d",&ele);
    while(jeswin)
    {
        
        i=fib(n-2);
        if(a[i]==ele)
        {
            jeswin=0;
            printf("element found at index:%d",i);
        }
        if(a[i]>ele)
        {
            n=n-1;             
        }
        else
        {
            n=n+1;             //index should be increased so,(n-2) should be increased ,therefore n++
        }
        
    }
    return 0;
}
int fib(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    
}