#include <iostream>
using namespace std;

int main() {
	//first way is to decrement in the condition itself
	int i=5;
	while(i--){
	cout<<i<<" ";
	}
	cout<<endl;
	//second way is to decrement inside the loop till i is 0
	i=5;
	while(i){
	cout<<i<<" ";
	i--;
	}
	return 0;
}
