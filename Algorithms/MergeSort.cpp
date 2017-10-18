#include<iostream>

using namespace std;
//Only realize the function of Mergr sort.this app can not compile.
void Merge(int a[],int lo,int mid,int hi){
    int i=lo;
    int j=mid+1;
    for(int k=lo;k<=hi;k++)
        aux[k]==a[k];//here will throw error "aux" was not declared.Because this array should be declared as a data member in a class.
    for(int k=lo;k<=hi;k++){
        if(i>mid)
            a[k]=aux[j++];
        else if(j>hi)
            a[k]=aux[i++];
        else if(aux[j]<aux[i])
            a[k]=aux[j++];
        else
            a[k]=aux[i++];
    }
}

void sort(int a[],int lo,int hi){
    if(hi<=lo)return;
    int mid=(lo+hi)/2;
    Sort(a,lo,mid);
    Sort(a,mid+1,hi);
    Merge(a,lo,mid,hi);
}

int main(){
    int a[7] = {3,3,3,1,3,1,3};
	sort(a,0,6);
	for (int i = 0; i < 7; i++){
		cout << a[i];
	}
	cin.get();
	return 0;
}
