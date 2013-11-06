#include<iostream>
#include<vector>
using namespace std;
/* 
  Finds all the subsets of S, populate it in result R 
  pre is the prefix string passed where we will append the set item to make new set
  id is the index in S starting from it we have to consider item to add in subsets.

*/
void PrintPSRecursive(vector<char> S, vector<string>& R, string pre,int id){
  if(id == S.size())
	return;
  for(int i = id ; i < S.size(); i++){
	string X = pre + S[i];
    R.push_back(X);
    PrintPSRecursive(S,R,X,i+1);
  }

}
/* 
   wrapper around recursive call 
*/
void PrintPS(vector<char> S){
  vector<string> Result;
  PrintPSRecursive(S,Result,"",0);
  for(int i =0 ; i < Result.size(); i ++){
	cout<< Result[i] << endl;
  }
}
/* test */
int  main(){
  vector<char> S;
  S.push_back('a');
  S.push_back('b');
  S.push_back('c');
  PrintPS(S);
}
