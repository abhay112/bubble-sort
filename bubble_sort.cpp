#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int *a,int n){
	if(n == 1)
		return ;
	for(int i = 0; i < n; i++){
		if(a[i] > a[i+1]){
			swap(a[i],a[i+1]);
		}
	}
	bubble_sort(a,n-1);
}
int Rbubble_sort(int *b, int j,int n){
	if(n==1)
		return 0;
	if(j-1 == n){
		return Rbubble_sort(b,0,n-1);
	}
	if(b[j] > b[j+1])
		swap(b[j],b[j+1]);

	return Rbubble_sort(b,j+1,n);
	
}
int main(){
	int a[] = {5,11,4,1,3,1,32,12,321,43,33};
	bubble_sort(a,11);
	for(int i = 0; i < 11; i++)
		cout << a[i] << " ";
	int b[] = {5,11,4,1,3,1,32,321,43,33};
	Rbubble_sort(b,0,10);
	cout << endl;
	for(int i = 0; i < 10; i++)
		cout << b[i] << " ";
}