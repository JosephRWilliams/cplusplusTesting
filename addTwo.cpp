#include <iostream>
#include <vector>
#include <string>

using namespace std;


 Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int solution = 0;
        int mult = 10;
        for (int i = 0; i < l1.size(); i++){  
            solution = exp(mult, i) * l1[i];
        }
        
        for (int j = 0; j < l2.size(); j++){
            solution = exp(mult, j) * l2[j];
        }
        
        int count = 0;
        int tmp = solution;
        
        while (tmp > 1){
            count /= 10;
            
        }
        
        int mylist = 
    }
};

int main(){
	int input;
	cout << "enter how a positive natural number.\n";
	cin >> input;
	while (input < 1){
		cout << "please enter a positive number." << endl;
		cin >> input;
	}

	int i = input;
	vector<>

	
	return 0;
}
