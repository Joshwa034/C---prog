#include <stdio.h>
int main()
{
    char a[] = "a,b@c+d", b[] = "", c;
    int i=0, j=0, k ;
    // for (i = 0; i <= 4; i++)
    // {
    //     if ((a[i] >= 'A' && a[i] <= 'Z' 'A' && a[i] <= 'Z')
    //     {
    //         c = a[i];
    //         b[i + k] = a[i];
    //         k--;
    //     }
    //     else
    //     {
    //         b[i] = a[i];
    //     }
    // }

    for (i = 0; i <= 6; i++)
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            for (j = 6; j >= 0; j--)
            { 
                if ((a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z'))
                {
                    
                    c = a[i];
                    a[i] = a[j];
                    a[j] = c;
                    printf("%d %d\n",i,j);
                    if(j==-1){
                        continue;
                    }
                    if(){

                    }
                }
                
                break;
            }

            // printf("%d %d\n",i,j);
        }
        
        


        break;
    }


    for (i = 0; i <= 6; i++){
        printf("%c", a[i]);
    }

    
}