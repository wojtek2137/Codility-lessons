#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> solution(int N, vector<int> &A) {
    int M = A.size();

    std::vector<int> counters(N, 0);
    int maximum = 0;
    int minimum = 0;

    for (int k=0; k<M; k++) {
        if (A[k] <= N) {
            cout<<"A[k]= "<<A[k]<<endl;
            int counter = std::max(counters[A[k]-1], minimum) + 1;
            cout<<"counter "<<counter<<endl;
            counters[A[k]-1] = counter;
            if (counter > maximum) {
                maximum = counter;
                //cout<<"maximum=  "<<maximum<<endl;
            }
        } else if (A[k] == (N+1)) {

            minimum = maximum;
            //cout<<"minimum pojawia sie przy n+1 "<<minimum<<endl;
        }
    }

   
    for (int k=0; k<N; k++) {
        counters[k] = std::max(counters[k], minimum);
    cout<<" [k]  "<<k<<endl;
    cout<<"counters [k] = "<<counters[k]<<endl;
    }
    //cout<<"counters "<<counters<<endl;
    return counters;



}
int main()
{
    vector <int> v= {3,4,4,6,1,4,4};
  solution(5,v);
    return 0;
}
