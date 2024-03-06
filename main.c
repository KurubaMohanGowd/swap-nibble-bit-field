#include<stdio.h>
#define SWAP(a,b)       \
        int temp=a;     \
        a=b;             \
        b=temp;
struct Nibble 
{
    unsigned char lower: 4;
    unsigned char upper: 4;
};

int main()
{
    unsigned int num;
    printf("Enter the hexa-decimal value : ");
    scanf("%x",&num);
    
    int up,lo;
    up=num>>4;
    // here, lo takes the value only last 4 bits. so no need to do below operation
    // directly do with num
    lo=num;
    struct Nibble ns={lo,up};
    //printf("Before swap nibble : %x%x\n",ns.upper,ns.lower);
    SWAP(ns.upper,ns.lower);
    printf("After swap nibble : %X%X",ns.upper,ns.lower);

}
