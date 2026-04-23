#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0; i<T; i++){
	    int B1,B2,B3;
	    cin>>B1>>B2>>B3;
	    if(B1+B2+B3<=1){
	        cout<<"Water filling time"<< endl;
	    }else{
	        cout<<"Not Now"<<endl;
	    }
	}

}
