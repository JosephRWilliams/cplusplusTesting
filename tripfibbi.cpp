#include <iostream>

using namespace std;

int tribonacci(int n) {
        int mem[n+2];
        mem[0] = 0;
        mem[1] = 1;
        mem[2] = 1;
        
        if (n > 2){
            for (int i = 3; i < n+1; i++){
                mem[i] = mem[i-1] + mem[i-2] + mem[i-3];  
            }
        }
        
        return mem[n];
}

int main(){
	int input;
	cout << "enter a num\n";
	cin >> input;
	cout << tribonacci(input) << endl;

	return 0;
}
