// // hello world reverse

// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     char s[] = "hello world";
//     char l[] = "";
//     for (i = 0; i <= 10; i++)
//     {
//         if (s[i] == 'w')
//         {
//             for (j = 11; j >= i; j--)
//             {
//                 printf("%c", s[j]);

//             }break;
//         }
//         printf("%c", s[i]);
//     }
// }
// hello dlrow
// 2.arr reverse and prev indx
// #include <stdio.h>
// int main()
// {
//     int i, j, h[] = {}, o[] = {}, temp;
//     int a[] = {4, 2, 5, 1}, c[] = {4, 2, 5, 1};

//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < 4; i++)
//     {
//         printf("%d", a[i]);
//     }
//     printf("\n");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             if (a[i] == c[j])
//             {
//                 printf("%d", j);
//             }
//         }
//     }
// }