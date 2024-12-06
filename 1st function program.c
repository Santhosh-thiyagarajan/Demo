// programm 1 using function

#include<stdio.h>
float mile(float mile)
{
    float km=mile*1.60934;
    return km;
}
int main()
{
    float m=5,km;
    km=mile(m);
    printf("km is %.2f",km);
    return 0;
}
