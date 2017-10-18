#include<iostream>;

using namespace std;

void exch(int a[], int i, int j){
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}

void selectSort(int a[],int length){
    for(int i=0;i<length;i++){
        int min =i;
        for(int j=i+1;j<length;j++)
            if(a[j]<a[min])min=j;
        exch(a,i,min);
    }
}

int main(){
	int a[7] = {3,3,3,1,3,1,3};
	selectSort(a,7);
	for (int i = 0; i < 7; i++){
		cout << a[i];
	}
	cin.get();
	return 0;
}
