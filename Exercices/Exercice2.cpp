#include <iostream>
using namespace std;


int main()
{
  int long sum_fib0=1;
    int long  sum_fib1=1;
    int long  sum_fib2=1;
    int long  sum_even=0;
    
  while (sum_fib2<4000000){
	  if (sum_fib2%2==0){
		  sum_even+=sum_fib2;
	  }
	  sum_fib0=sum_fib1;
	  sum_fib1=sum_fib2;
	  sum_fib2=sum_fib0+sum_fib1;	
	 
	  
  }
  cout<<sum_even<<endl;
  //Answer: 4613732
  
  return 0;
}

