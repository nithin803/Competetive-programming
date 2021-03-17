#include<bits/stdc++.h>
using namespace std;

int rand(int a,int b){
	return a + rand()% (b-a +1);
}

int main(int argc, char* argv[]){
	srand(atoi(argv[1]));
	int n = 10;
	int m = rand(1,15);
	// set<int> used;
	// for(int i =0;i<n;i++){
	// 	int x;
	// 	do{
	// 		x = rand(1,10);
	// 	}while(used.count(x))
	// 	cout<<x<<" ";
	// 	used.insert(x);
	// }
	// cout<<endl;
	cout<<n<<" "<<m<<endl;
	for(int i=0;i<n;i++){
		cout<<rand(1,n)<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<rand(1,n)<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		cout<<rand(1,n)<<" ";
	}
	cout<<endl;
}