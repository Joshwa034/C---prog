#include <stdio.h>
int main()
{
    char a[] = "abcde",  c;

    int i,j,n=4,count=0;

    for (i = 0; i <= 4; i++)
    {
        for (j = n; j >= 0; j--)
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
            count+=1;
            if(count>0){
                n--;
            }
        }
    }


    printf("%s",a);
}