#include<stdio.h>
void main()
{
    int i, j,len=1, n;
    char a[100];
    printf("enter str\n");
    scanf("%s",a);
    
    for(len=0;a[len]!='\0';++len);
    
    
    for(i=0;i<=len;i++){

        // printf("%c\n",a[i]);
        if(a[i]>='a' && a[i]<='e'){
            if(a[i]<='c'){
                a[i]='a';
            }
            else{
                a[i]='e';
            }
        }

        else if(a[i]>'e' && a[i]<='i'){
            if(a[i]<='g'){
                a[i]='e';
            }
            else{
                a[i]='i';
            }
        }

        else if(a[i]>'i' && a[i]<='o'){
            if(a[i]<='l'){
                a[i]='i';
            }
            else{
                a[i]='o';
            }
        }

        else if(a[i]>'o' && a[i]<='u'){
            if(a[i]<='c'){
                a[i]='o';
            }
            else{
                a[i]='u';
            }
        }

        else if( a[i]>='u'){
            
                a[i]='u';
            
            
        }
        
 printf("%c",a[i]);

    }
   
    
}