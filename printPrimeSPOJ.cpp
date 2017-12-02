#include<iostream>
using namespace std;



int main(){
	int no;
	int s;
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
            cin>>s;
	cin>>no;
	int j;
	if(s==1){
        s++;
	}
	for(int i=s;i<=no;i++){

		for(j=s; j*j<=i;j++){
			if(i%j==0){
				break;
			}

		}
		//No is prime if for loop is complete - j*j >i
		if(j*j>i){
			cout<<i<<endl;
		}
	}
	cout<<endl;
	}


	return 0;
}
