#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool is_palindrome(string);
string to_string(int);
int main(){
	int max = 0;
	for(int i = 999; i > 100; i--){
		for(int j = 999; j > 100; j--){
			string s = to_string(i * j);
			if(is_palindrome(s)){
				cout << "found: " << i * j << endl;
				if(max < i * j)
					max = i * j;
			}
		}
	}
	cout << "Final: " << max << endl;
	cout << "Press any key to exit" << endl;
	cin.get();
	return 0;
	return 0;
}
string to_string(int a){
	stringstream ss;
	ss << a;
	return ss.str();
}
bool is_palindrome(string s){
	bool pal = true;
	for(int i = 0; i < s.length(); i++){
		int j = s.length() - i - 1;
		if(s[i] != s[j]){
			pal = false;
		}
	}
	return pal;
}
