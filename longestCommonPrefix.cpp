#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs){
	string solution = "";
        
        if (strs.size() == 1 ) return strs[0];
        while (strs.size() != 1){

	        for(int i = 0; i < strs.size() - 1; i++){
        	        for(int j = 0; j < strs[i].length(); j++){
                	        if (strs[i][j] != strs[i+1][j]){
	                        	j += strs[i].length();
                        	} else {
                                	solution += strs[i][j];
                        	}
                	}
                
                	strs[i] = solution;

                	solution = "";
        	}

		strs.pop_back();

        	if (strs.size() == 1 ) return strs[0];
	}

        return solution;
}

int main(){
	string input;
	vector<string> inputContainer(1000);
	int count = 0;

	while (input != "q"){
		cout << "enter a list of strings, enter 'q' to quit" << endl;
		cin >> input;
		if (input != "q"){
			inputContainer[count] = input;
			count++;
		}
	}

	cout << longestCommonPrefix(inputContainer) << endl;

	return 0;
}
