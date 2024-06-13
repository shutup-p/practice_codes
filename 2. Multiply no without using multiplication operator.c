#include<bits/stdc++.h> 
using namespace std; 
int multiplyTen(int n) 
{ 
	int sum=0;
	for(int i=0;i<10;i++) 
	{ 
		sum=sum+n; 
	} 
	return sum; 
}
int main() 
{ 
	int n = 50; 
	cout << multiplyTen(n); 
	return 0; 
} 
