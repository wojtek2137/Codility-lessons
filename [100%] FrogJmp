#include <iostream>

using namespace std;

int solution(int X, int Y, int D) {
   int jumps=0;
    //int wynik=0;
    if (X>=Y)
    {
        jumps=0;
    }
    else if ((Y-X)%D!=0)
{
    jumps=(Y-X)/D+1;
}
else if ((Y-X)%D==0)
{
    jumps=(Y-X)/D;
}
return jumps;
}
    //
int main()
{

    int y=85,x=84, d=30;
    solution(x,y,d);

    return 0;
}
