#include<iostream>
using namespace std;
main(){
  cout<< sizeof(unsigned long) << endl;
  int *A = new int[10];
  try{
  A[11111111] = 10;
  int *B = new int[10]; 
  B[2] = 10;
  }catch (exception e){
	cout<< "exception thrown" ;
  }
}

