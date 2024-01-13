#include <stdio.h>
int main()
{
    char a[] = "xbryc+d", b[] = "", c;
    int l=0, r=6, k=6 ;
   while(l<=k/2){

        if (((a[l] >= 'A' && a[l] <= 'Z') || (a[l] >= 'a' && a[l] <= 'z'))&&( (a[r] >= 'A' && a[r] <= 'Z') || (a[r] >= 'a' && a[r] <= 'z'))){
                    c = a[l];
                    a[l] = a[r];
                    a[r] = c;
                   
                    
        }    printf("\n%d %d",l,k/2);  
             l++;
             r--;     
                   
       
    }
    printf("\n%s",a);
}