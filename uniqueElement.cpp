#include <iostream>
#include <vector>

using namespace std;

int lonelyinteger(vector<int> a) {
    int lonely = 0;
    for (int i = 0; i < a.size(); i++){
        for (int j = 1; j < a.size(); j++){
            if (a[i] == a[j] && j != i+1){
                int temp = a[i+1];
                a[i+1] = a[j];
                a[j] = temp;
                
                i += 2;
                j = i+1;
                lonely += 2;


        cout << "[ ";

        for (int j = 0; j < a.size(); j++){
                cout << a[j] << ", ";
        }

        cout << "]" << endl;


		


            } else if (a[i] == a[j] && j == i+1){
                i += 2;
                j = i+1;
                lonely += 2;






        cout << "[ ";

        for (int j = 0; j < a.size(); j++){
                cout << a[j] << ", ";
        }

        cout << "]" << endl;







            }
            if (j == a.size() - 1 && a[i] != a[j]){





        cout << "[ ";

        for (int j = 0; j < a.size(); j++){
                cout << a[j] << ", ";
        }

        cout << "]" << endl;









            return a[lonely];
            }
	    if (i == a.size() - 2 && j == a.size() - 1 ){
		if (a[i] != a[j]){





        cout << "[ ";

        for (int j = 0; j < a.size(); j++){
                cout << a[j] << ", ";
        }

        cout << "]" << endl;








			return a[i];
		}
	    }
    
        }
    }    
    return a[lonely];
}

int main(){
	int input;
	cout << "enter how many elements should be entered. ex, a natrual number.\n";
	cin >> input;
	while (input < 1){
		cout << "Please enter a positive number.\n";
		cin >> input;
	}

	int i = input;
	vector<int> mylist(input);
        cout << "enter a list of numbers \nex. 1 [enter] 2 [enter] 1\n this shoule return: the unique element is 2." << endl;
	
	int k = 0;
	while (i != 0){
        	cin >> input;
		mylist[k] = input;
		i--;
		k++;
	}

	cout << "[ ";

	for (int j = 0; j < mylist.size(); j++){
		cout << mylist[j] << ", ";
	}
	
	cout << "]" << endl;


        cout << "the unique element is " << lonelyinteger(mylist) << "." << endl;
        return 0;
}

