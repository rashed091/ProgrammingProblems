#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <iterator>
using namespace std;


void tokenizer_stream(string str, char delimiter){
    string token;
    vector<string> tokens;

    istringstream iss(str);
    while(getline(iss, token, delimiter)){
        tokens.push_back(token);
    }
    for(auto it = tokens.begin(); it != tokens.end();)
        cout << *it++ << endl;
}



void tokenizer_c_style(string str){
    char * in = new char[str.length()+1];
    strcpy(in, str.c_str());
    char * tok;
    tok = strtok(in, ",");
    while (tok != NULL) {
        string tmp = tok;
        printf("%d \n", atoi(tmp.c_str()));
        tok = strtok(NULL, ",");
    }
    printf("\n");
}

void tokenizer_cpp_style(string str, string tok){
    vector<int> numbers;
    unsigned int start = 0, end;
    string st;
    while((end = str.find(tok,start)) < str.size()){
        st = str.substr(start, end-start);
        start = end + 1;
        numbers.push_back(atoi(st.c_str()));
    }
    st = str.substr(start);
    numbers.push_back(atoi(st.c_str()));
    for(size_t i = 0; i < numbers.size(); ++i)
        cout << numbers.at(i) << endl;
}

int main(){
    string str = "Let,me,split,the string.";
    char delimiter = ',';

    cout << "c style tokenizer" << endl;
    tokenizer_c_style("1,2,3");
    cout << "substring based tokenizer" << endl;
    tokenizer_cpp_style("4,5,6", ",");
    cout << "stream based tokenizer" << endl;    
    tokenizer_stream(str, delimiter);
    
    return 0;
}
