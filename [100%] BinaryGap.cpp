#include <iostream>

using namespace std;
int solution(int N)
 {/// n=9 1001
    int zeros = -1;
 int max_gap = 0;

 while (N > 0) 
{
 if ((N & 1) == 1) //otrzymujemy jedynke tylko w przypadku gdy oba bity sa jedynkami rozwiazanie dla liczby np 19
 {
    zeros = 0; //jesli w wersji binarnej liczby wystepuje 1 to podstawiamy za nia zero
 }

 else if (zeros != -1) //// instrukcje wykonywane gdy warunek 1-szy nie jest spelniony natomiast drugi jest
{
    zeros++; //inkrementuj int zero

  if (max_gap < zeros) {max_gap = zeros;}

}


N = N / 2; // przesuniecie bitow w prawo o jeden powoduje podzielenie wartosci n przez dwa
cout<< max_gap;

}

cout<< max_gap;
 return max_gap;
}
int main()
{
    int n;

    cin>>n;
  solution(n);

   return 0;
}
