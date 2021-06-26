/**
 * Suppose we have an array of elements  [6,5,1,3,2,4]
 * store its position like decreasing order [1 is smallest ellement at 3rd index = 3 ] and delete that element
 * now array is [6,5,3,2,4]
 * store smallest element from updated array on next index [ 1,2 in 4th index= 4, ] and delete that element
 * now array is [6,5,3,4 ]
 * store smallest element from updated array on next index [1,4, 3 in 3rd index =3 ] and delete that element
 * ... so on
 * final array => [3,4,3,3,2,1]
 *
 * that final array is given and and your task is to find [6,5,1,3,2,4] that array.
 *
 * ============================= Answer ============================
 * Use Sufux Tree
 *
 * */

#include<bits/stdc++.h>
using namespace std;

void swap(int* arr , int index1, int index2){
	int temp = arr[index1];
	arr[index1]=arr[index2];
	arr[index2]=temp;
}

int* solution(int* arr,int size){	
	int tmp='\0';
	for(int i=size;i>=0;--i){
		swap(arr,arr[i]-1,i);

	//	arr[arr[i]-1]
	}
//	swap(arr,0,3);

	return arr;
}

int main(int args, char** argv){
	--args;
	int* arr=(int*)malloc(sizeof(int)*(args-1));
	for(int i=0; i<args;++i)
		arr[i]=atoi(argv[i+1]);
	
	cout<<solution(arr,args-1)[2]<<"\n"<<"Array is ==> ";
	
	for(int i=0;i<args;++i){
		cout<<"args => "<<args<<" i=> "<<i <<" current= >";
		cout<<arr[i]<<endl;
	}
	return 0;
}
