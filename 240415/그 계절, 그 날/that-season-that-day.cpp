#include <stdio.h>
#include <stdbool.h>

bool LeapYear(int Y)
{
    if(Y %4 == 0 && Y%100 != 0) return 1;
    else if(Y%4 ==0  && Y%400 ==0) return 1;
    else return 0; 
}
bool Exist_MD(int Y, int M, int D)
{
    if(LeapYear(Y))
    {
        if(M == 2)
        {
            if(D >= 1 && D <= 29)
            return true;
            return false;
        }
    }
    else
    {
        if(M == 2)
        {
            if(D >= 1 && D <= 28)
            return true;
            return false;
        }
    }
    if(M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
    {
        if(D >= 1 && D <= 31)
        return true;
        return false;
    }
    if(M == 4 || M == 6 || M == 9 || M == 11)
    {
        if(D >= 1 && D <= 30)
        return true;
        return false;
    }
}

int main() {
    int Y, M, D;
    scanf(" %d %d %d", &Y, &M, &D);

    if(Exist_MD(Y, M, D))
    {
        if(M >= 3 && M <=5)
        {
            printf("Spring");
        }
        if(M >= 6 && M <= 8)
        {
            printf("Summer");
        }
        if(M >= 9 && M <= 11)
        {
            printf("Fall");
        }
        if(M == 12 || M == 1 || M == 2) printf("Winter");
    }
    else printf("-1");
    return 0;
}