int solution(vector<int> &A) {
    int n = A.size();
    int sum=0;

    sum=accumulate(A.begin(),A.end(),0);
    int res = abs(A[0]-(sum-A[0]));
    for (int i=0, aux=0;i<n-1;i++)
    {
        aux+=A[i]; 
        res=min(res,abs(aux-(sum-aux)));  
    }
   //cout<<res;
   return res;

}
