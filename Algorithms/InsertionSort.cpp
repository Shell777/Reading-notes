#include<iostream>

using namespace std;

void exch(int a[], int i, int j){
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}

void sort(int a[],int length){
    for(int i=1;i<length;i++){
        for(int j=i;j>0&&a[j]<a[j-1];j--){
            exch(a,j,j-1);
        }
    }
}

int main(){
	int a[7] = {3,3,3,1,3,1,3};
	sort(a,7);
	for (int i = 0; i < 7; i++){
		cout << a[i];
	}
	cin.get();
	return 0;
}
