int solution(vector<int> &A) {
	unsigned long N = A.size() + 1; 
	unsigned long total = (N * (N + 1)) / 2; 
	unsigned long sum = 0;
	sum = accumulate(A.begin(), A.end(), 0);                      

	unsigned long res = total - sum;    
	return (int) res; 
	}
