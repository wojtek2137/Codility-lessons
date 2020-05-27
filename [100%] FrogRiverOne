 int solution(int X, vector<int> &A)
{
    unsigned int n = A.size(); 
    if (n == 1) if (A[0] == 1) return 0; //

    bool leaves[X+1] = {0}; // 6
    unsigned int total = X * (X+1) / 2; 
    unsigned int sum = 0;

    for (unsigned int i = 0; i < n; ++i) {
        if (!leaves[A[i]]) {  // laves A[6] = jesli zero
            leaves[A[i]] = true; //to 1
             cout<<A[i]<<"=" <<"A["<<i<<"]"<<endl;
            sum += A[i];
             cout<<"leaves[A[i]] "<<leaves[A[i]]<<endl;
            cout<<"sum "<<sum<<endl;

        }
        if (sum == total) return i;
    }
    return -1;
}
