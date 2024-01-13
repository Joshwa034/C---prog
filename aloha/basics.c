// ########################################################################################################################################
// print NON prime numbers :

// #include <stdio.h>

// int main() {
//     int i, j;

//     for (i = 1; i <= 10; i++) {

//         for (j = 2; j < i; j++) {
//             if (i % j == 0) {
//                 printf("%d ", i);

//                 break;
//             }
//         }
//     }

//     return 0;
// }
// ########################################################################################################################################

// print prime numbers

// #include <stdio.h>

// int main() {
//     int i, j;
//     for(i=1;i<=100;i++){
//         for(j=2;j<=i;j++){
//             if(i==j){
//                 printf("%d\n",i);
//             }
//             if(i%j==0){
//                 break;
//             }
//         }
//     }

// }
// ########################################################################################################################################

// print non prime numbers and their factors

// #include <stdio.h>

// int main() {
//     int i, j,k;
//     for(i=1;i<=100;i++){
//         for(j=2;j<=i;j++){
//             if(i%j==0){
//                 printf("%d\n", i);
//                 break;
//             }
//             for(k=0;k<=i;k++){
//                 printf("%d",i);

//             }
//         }
//     }
// }

// ########################################################################################################################################
// print non prime numbers and their factors only odd no.

// #include <stdio.h>

// int main() {
//     int i, j;
//     // Loop through all numbers between 1 and 10
//     for (i = 1; i <= 21; i++) {
//         // Check if the number is divisible by any number between 2 and i-1
//         for (j = 2; j < i; j++) {
//             if (i % j == 0)
//             {
//                 // If it is divisible, set isPrime to 0 and break the inner loop
//                 printf("%d is npn and factors are ", i);
//                 // print the factors
//             //     for(int k=1; k<=i; k++) {
//             //       if(i%k==0)
//             //         printf("%d,",k);
//             // }

//             printf("\n");
//             break;
//             }
//         }
//     }
// }

// ########################################################################################################################################

// factorial of a no.
// #include <stdio.h>

// int main() {
//     int g=1, num=4;
//     for (int i=1;i<=num;i++){
//         g=g*i;
//     }
//     printf("%d", g);
//     return 0;
// }

// ########################################################################################################################################

// print in reverse 50 to 1 which is not divisible by 2 and 3
// #include <stdio.h>
// int series(int k)
// {

//     for (int i = k; i >= 1; i--)
//     {

//         if (i % 2 != 0 && i % 3 != 0)
//         {
//             printf("%d ",i);
//         }
//     }
// }
// int main()
// {

//    int k=50;
//    series(k);
//    return 0;

// }
// ########################################################################################################################################

// fibinoci series
// #include <stdio.h>
// int main() {
//     int i,j,a=1,b=1,n=10,c;
//     for(i=0;i<=n;i++){
//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d ",c);
//       }
//     }

// ########################################################################################################################################

// bubble sort
// #include <stdio.h>
// int main() {
//     int i, l=4;
//     int s[5]={5,3,4,2,7},temp,j;
//     for(i=0;i<=l;i++){
//         for (j=0;j<=l;j++){
//         if(s[i]<s[j]){
//             temp = s[i];
//             s[i] = s[j];
//             s[j]=temp;
//         }

//         }
//       }
//       for(i=0;i<=l;i++)
//         printf("%d ",s[i]);
//     }

// ########################################################################################################################################

// UNSOLVED : inp ['o','o','c','o','c'], {'a','b','a','c','b'}  find how many apps are open

#include <stdio.h>

int main()
{
    int i, j, a = 0, b = 0, c = 0;
    char p[5] = {'o', 'o', 'c', 'o', 'c'}, q[5] = {'a', 'b', 'a', 'c', 'b'};
    for (i = 0; i < 5; i++)
    {
        if (p[i] == 'o')
        {
            if (q[i] == 'a')
            {
                a = 1;
            }
            if (q[i] == 'b')
            {
                a = 1;
            }
            else
            {
                a = 1;
            }
            break;
        }

        if (p[i] == 'c')
        {
            if (q[i] == 'a')
            {
                a = 0;
            }
            if (q[i] == 'b')
            {
                a = 0;
            }
            else
            {
                a = 0;
            }
        }
        break;
    }
    if (a == 1)
    {
        printf("a is open");
    }
    else if (b == 1)
    {
        printf("b is open");
    }
    else
    {
        printf("c is open");
    }

    printf(" %d", a);
    printf(" %d", b);
    printf(" %d", c);
    // else{
    //     printf("all are close");
    // }

    return 0;
}
