#include <iostream>

using namespace std;

int romanToInt(string s){
	int count = 0;
	char prev = 'a';
	char curr = s[0];
	for (int i = 0; i < s.length();){
		if (curr == 'I'){
			count += 1; 
		}
		if (curr == 'V'){
			count += 5;
			if (prev == 'I'){
				count -= 2;
			}
		}
		if (curr == 'X'){
			count += 10;
			if (prev == 'I'){
				count -= 2;
			}
		}
		if (curr == 'L'){
			count += 50;
			if (prev == 'X'){
				count -= 20;
			}
		}
		if (curr == 'C'){
			count += 100;
			if (prev == 'X'){
				count -= 20;
			}
		}
		if (curr == 'D'){
			count += 500;
			if (prev == 'C'){
				count -= 200;
			}
		}
		if (curr == 'M'){
			count += 1000;
			if (prev == 'C'){
				count -= 200;
			}
		}

		i++;

		prev = curr;
		curr = s[i];

	}

	return count;
}

int main(){
	string input;
	cout << "enter a string" << endl;
	cin >> input;
	cout << romanToInt(input) << endl;

	return 0;
}
