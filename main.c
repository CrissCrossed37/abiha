// Date : 21.2.25 
// Name : Abiha Amir

#include "stdio.h"
#include "math.h"

int main(void)
{
    int a,b,c;
    
    while(1)
    {
        printf("ax2 + bx + c = 0\n\n");
        
        printf("Enter a, b, c : ");
        scanf("%d, %d, %d", &a, &b, &c);
    
        if(a == 0)
        {
            printf("Solution is not possible\n");
        }
        else
        {   
            float x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
            float x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    
            printf("{ %f, %f }\n\n", x1, x2);
        }
    }
}
