#include<stdio.h>

int main()
{
    int a,c[100];
    scanf("%d", &a);
    int i=99;
    for(;a>=8;i--) {
        c[i]=a%8;
        a/=8;        
    }
    printf("%d", a);
    for(i=i+1;i<100;i++) {
        printf("%d", c[i]);
    }
    //for(;i<99;) {
    //printf("%d",c[++i])}
    
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int a,c[100];
//     scanf("%d", &a);
//     int i=0;
//     for(;a>0;i++){
//         c[i]=a%8;
//         a/=8;  
//         // printf("%d %d\n",c[i],i); 
//     }
//     for (int j = i-1; j >= 0; j--)
//     {
//         printf("%d",c[j]); 
//     }
    
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int x,ans = 0;
//     int a[10][10];
//     scanf("%d",&x);
//     int y = (sqrt(x-x%8)/8)+1;
//     for (int i = y; i >= 0; i--)
//     {
//         ans *= 10;
//         ans +=(x/pow(8,i));
//         x %=(int)pow(8,i);
//     }
    
    
//     printf("%d",ans);  
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int x,ans = 0;
//     int a[10][10];
//     scanf("%d",&x);
//     int j=0,b;
//     while (x>0)
//     {
//         b = x%8;
//         x/=8;
//         ans+=b*pow(10,j++);
//     }
    
//     printf("%d",ans);  
//     return 0;
// }