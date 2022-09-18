#include <iostream>
using namespace std;
int main(){

int i, k, r, price, result;
cin>>k>>r;

for(i=1; i<=1000; i++){
	price = (k*i);
	if(price % 10 == r || price %10 == 0){
		cout<<i;
		break;
	}
}

}
