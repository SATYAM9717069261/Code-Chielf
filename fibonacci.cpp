/**
 * here we find even fibonacce number in give range
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 114 ...
 * Even Numbers are => 0, 2, 8, 34, 114 ...
 *
 * relation is => 2*4+[previous even]
 * 2*4+0=8
 * 8*4+2=34
 * 34*4+8=114
 * ... soon
 */ 
#include<bits/stdc++.h>

using namespace std;
void febonic(int* previous_num,int* strt,int* limit){
	int result=(*strt)*4+(*previous_num);
	if( (result) <= (*limit) ){
		cout<<result<<"\t";
		febonic(strt,&result,limit);
	}
}
int main(int args, char** argv){
	int limit=0;
	cin>>limit;
	int prev=0;
	int s=2;
	if(limit>3){
		cout<<"Even Number in Febonic Series=>\t0\t2\t";
		febonic(&prev,&s,&limit);
	}else
		cout<<"limit is too shot";
	return 0;
}
