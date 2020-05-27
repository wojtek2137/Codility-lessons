#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int solution(vector<int> &A) {

    vector<int> v = A;
    int result = 0;

    if (!v.empty()){ ///if the container is not empty
        for (int i : v) {
            result ^= i;  ///xor operacja bitowa polegajaca na zamianie bitow ktore sie pokrywaja na zero
        }
    }
    return result;
}
int main()
{
    vector <int> v = {9,3,9,3,9,7,6,9};

   return 0;
}
