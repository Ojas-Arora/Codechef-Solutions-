//Age Limit in Codeshef 
#include <iostream>
using namespace std;

int main() {
  	int T,X,Y,A,i;//Take input of T,X,Y,A,i
	cin>>T;
	
	for(i=0;i<T;i++)
	{
	    cin>>X>>Y>>A;
	    
	    if(X<=A && Y>A)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
	
