#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    int A,B,C;
    cin>>A>>B>>C;
    if (A!=B && B!=C && C!=A){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    }
	return 0;
}
