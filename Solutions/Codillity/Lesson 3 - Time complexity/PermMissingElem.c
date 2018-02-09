

short exists[100000+9];    //Global variables are initialized to zero.

int solution(int A[], int N) 
{
    for(int i = 0; i < N; i++)  exists[A[i]] = 1;
    
    for(int i = 1; i <= N; i++)
    {
        if(exists[i] == 0)    return i;   
    }
    
    return N+1;
}


//My solution 

#include <algorithm>

int solution(vector<int> &a) {
   a.push_back(0);
   int c=0;
   sort(a.begin(),a.end());
   for(int i : a){
       if(i!=c){
           return i-1;
       }
       c++;
   }
   return a.size();
}
