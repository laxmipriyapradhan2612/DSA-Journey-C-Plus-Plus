// NOTATION --> Big O (Worst case or upper bound case)
//LINEAR TIME COMPLEXITY O(n)
//sum of numbers 1 to N 
int n;
cin>> n;
int ans= n*(n+1)/2;

//N factorial
int fact=1;
for(int i=1; i<=n; i++){
    fact*=i;
}

//Nth fibonacci series
//Kadane's Algorithm