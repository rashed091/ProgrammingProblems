#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool string_permutation(string str1, string str2){
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	
	if(str1 == str2)
		return true;
	else
		return false;
}

int main(){
	
	string s1 = "Hello", s2 = "Hi";
	string s3 = "rashed", s4 = "dehsar";
	
	cout << string_permutation(s1, s2) << endl;
	cout << string_permutation(s3, s4) << endl; 
	return 0;
}
