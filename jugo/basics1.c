// // partern
// //  #include<stdio.h>
// //  int main()
// //  {
// //      int i,j;
// //      for(i=0;i<=4;i++){
// //          for(j=0;j<=4;j++){
// //              printf("%d",j);
// //          }printf("\n");
// //      }
// //  }
// //  01234
// //  01234
// //  01234
// //  01234
// //  01234

// //  #include<stdio.h>
// //  int main()
// //  {
// //      int i,j;
// //      for ( i = 0; i <=5; i++){
// //          for ( j = 5; j >= 0; j--){
// //              printf("%d",j);

// //         }printf("\n");

// //     }

// // }
// // 543210
// // 543210
// // 543210
// // 543210
// // 543210
// // 543210

// #include <stdio.h>
// int main()
// {
//     int j, i;
//     for (i = 0; i <= 5; i++)
//     {
//         for (j = 5; j >= 0; j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }
  


// //   333333
// #include<stdio.h>
// int main()
// {
//     int i,j,k,l;
//     for(i=0;i<=5;i++){
//         printf("g");

//     }
//  }
// #include <stdio.h>
// #include <dos.h> // notice this! you need it! (windows)

// int main(){
//     printf("Hello,");
//     Sleep(2000); // format is Sleep(x); where x is # of milliseconds.
//     printf("World");
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int c=5;
//     for (int i = 1; i<=4; i++)
//     {
//         for (int j =1; j <=4-i; j++)
//         {

//             printf(" ");

//         }
//         for(int j=1; j<=c; j++)
//         {
//             printf("0");
//         }

//         printf("\n");
//     }
// }
// //    00000
// //   00000
// //  00000
// // 00000

// #include <stdio.h>

// int main()
// {
//     int i, j, rows, columns;

//     /* Input rows and columns from user */
//     printf("Enter rows: ");
//     scanf("%d", &rows);
//     printf("Enter columns: ");
//     scanf("%d", &columns);

//     /* Iterate through each row */
//     for(i=1; i<=rows; i++)
//     {
//         /* Print trailing spaces */
//         for(j=1; j<=rows - i; j++)
//         {
//             printf(" ");
//         }

//         /* Print stars after spaces */
//         for(j=1; j<=columns; j++)
//         {
//             printf("*");
//         }

//         /* Move to the next line */
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i,j, k;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = i; j >= 1; j--)
//         {
//             printf("%d", j);

//         }printf("\n");
//     }
//     for (i = 4; i >= 1; i--)
//     {
//         for (j = i; j >= 1; j--)
//         {
//             printf("%d", j);

//         }printf("\n");
//     }

// }

// // 1
// // 21
// // 321
// // 4321
// // 54321
// // 4321
// // 321
// // 21
// // 1

// #include <stdio.h>
// int main()
// {
//     int i,j, k;
//     for (i = 4; i >= 1; i--)
//     {
//         for (j = i; j >= 1; j--)
//         {
//             printf("%d", j);

//         }printf("\n");
//     }

// }
// // 4321
// // 321
// // 21
// // 1

// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     int a[10] = {1, 2, 9, 4, 5};
//     int b[10] = {2, 3, 1, 0, 5};
//     int count = 0;

//     for (i = 0; i <= 4; i++)
//     {
//         count = 0;
//         for (j = 0; j <= 4; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 count = count + 1;
//             }
//         }

//         if (count == 0)
//         {+

//             printf("%d\n", a[i]);
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int a[20] = {1, 2, 3, 4,  5,6, 7, 8, 9,10,11,12,13,15};
//     for (i = 0; i <= 15; i++)
//     {
//         if (a[i] == i +1)
//         {
//         }
//         else
//         {
//             printf("%d", a[i] -1);
//             break;
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int count, tmp,j, a[10] = {3, 2, 4, 2, 1}, i, temp;
//     for (i = 0; i <= 4; i++)
//     {
//         for (j = i + 1; j <= 4; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i <= 4; i++)
//     {
//         printf("%d\n", a[i]);
//     }
// // 1 2 2 3 4
// count=1;

//     for (i = 1; i <= 4; i++)
//     {

//         {
//             if (a[i] != a[i-1] ){

//                     count+=1;
//                 }
//         }
//     }
//     printf("\n%d",count);
// }
// // // 4 elements

// //print distinct substring char from string
// #include <stdio.h>
// int main()
// {
//     int count=1, temp, i, j;
//     char a[] = "agsfgf";
//     for (i = 0; i < +5; i++)
//     {
//         for (j = i+1; j <= 5; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i <= 5; i++)
//     {
//         printf("%c", a[i]);
//     }
//     for (i = 1; i <= 5; i++)
//     {

//         {
//             if (a[i] != a[i - 1])
//             {

//                 count += 1;
//             }
//         }
//     }
//     printf("\n%d", count);
// }

// #include<stdio.h>
// int main()
// {
//     int a,c;
//     printf("enter the postv no.\n");
//     scanf("%d",&a);
//     c=a*a*a;
//     printf("ans = %d",c);
// }

// #include <stdio.h>
// int main()
// {
//     int a[20]={1,2,4,3,5,6,7,5},count=0, i,j ;
//     for(i=0;i<=7;i++){
//         for(j=0;j<=7;j++){
//             if(a[i]+a[j]==5){
//                 count+=1;
//             }
//         }
//     }printf("%d",count);
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,n,k;
//     for(i=1;i<=5;i++)
//     {
//         for(j=i;j<5;j++)
//         {
//             printf("  ");
//         }
//         for(k=1;k<(i*2);k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// //         *
// //       * * *
// //     * * * * *
// //   * * * * * * *
// // * * * * * * * * *

// #include<stdio.h>
// int main()
// {
//     int i,j,n,k;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=i;j<n;j++)
//         {
//             printf("  ");

//         }
//         for(k=1;k<(i*2);k++)
//         {
//             printf("* ");
//             if(n>=n*0.5+1){
//                 printf("");
//             }
//         }
//         printf("\n");
//     }
// }


