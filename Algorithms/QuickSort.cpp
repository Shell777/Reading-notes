#include<iostream>

using namespace std;

//Quick
int partition(int[], int, int);

void QuickSort(int a[],int lo,int hi){
	if (lo >= hi)return;
	int j = partition(a, lo, hi);
	QuickSort(a, lo, j - 1);
	QuickSort(a, j + 1, hi);
}

void exch(int a[], int i, int j){
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}


int partition(int a[],int lo,int hi){
	int i = lo;
	int j = hi + 1;//Because we use --j at the second while,so +1 here
	int v = a[lo];//select partition randomly,here is the first one
	while (true){
		while (a[++i]<v){//skip the first number
			if (i == hi)break;
		}
		while(a[--j]>v){//
			if (j == lo)break;
		}
		if (i >= j)break;
		exch(a, i, j);
	}
	exch(a, lo, j);
	return j;
}


int main(){
	int a[7] = {3,3,3,1,3,1,3};
	QuickSort(a,0,6);
	for (int i = 0; i < 7; i++){
		cout << a[i];
	}
	cin.get();
	return 0;
}
