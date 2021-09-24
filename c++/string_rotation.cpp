#include <iostream>
#include <string>
using namespace std;

void string_rotation(string s1, string s2){
	string str = s1 + s1;
	if(str.find(s1) < str.size())
		cout << "s1 is the rotation of s2" << endl;
	else
		cout << "not rotatred" << endl;
		
}

int main(){
	string s1 = "ABCD";
	string s2 = "CDBA";
	
	string_rotation(s1, s2);
	
	return 0;
}
