// #include <stdio.h>// int a b c d greatest no. not array or str

// /*
// Add `int max_of_four(int a)` here.
// */
// int max_of_four(int a, int b, int c, int d){
//     // a- 2 b-10 c-3 d-11
//    int max = 0;
    
//     if(max <= a) max = a;
//     if(max <= b) max = b;
//     if(max <= c) max = c;
//     if(max <= d) max = d;
//     return max;
// }

// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
    
    
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);
    
//     return 0;
// }

// // pointers update
// #include <stdio.h>

// void update(int *a,int *b) {
    
//     *a = *a+*b;
//     *b = *a-(2*(*b));
//     if(*b>=0){
//         *b=*b;
//     }else {
//      *b=-*b;
//     }
    
//     // Complete this function    
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);
    
    

//     return 0;
// }
