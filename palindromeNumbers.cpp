#include <iostream>

using namespace std;

bool findPalindrome(int x){
	int count = 0;
	
	if (x < 0){
		return false;
	}else{
		for (int i = x; i != 0; i /= 10){
			count++;

		}

		int num[count];
		
		for (int j = 0; j < count; j++){
			int mult = 10;
			num[j] = x % mult;
			x /= mult;
			mult *= 10;
		} 	
	
		for (int i = 0; i < count;){
			if(num[i] == num[count - (i+1)]){
				i++;
				if (i > count - 1) return true;
			} else {
				return false;
			}
		}

		return false;
		
		
	}
}



int main(){
	int num;
	cout << "enter a number" << endl;
	cin >> num;
	cout << findPalindrome(num) << endl;

	return 0;
	
}
