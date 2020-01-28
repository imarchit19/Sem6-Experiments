#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int size;
	float sum = 0, test = 0;
	cout << "Enter number of processes"<<endl;
	cin >> size;
	int* arr = new int[size];
	cout << "Enter elements"<<endl;
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
	sort(arr, arr + size);
	cout << "Processes\tBurst Time\tWait Time" << endl;
   	for(int i = 0; i < size; i++){
        		if(i!=0){
			test+=arr[i - 1];
		}
        		cout << i + 1 << "\t\t" << arr[i] << "\t\t" << test << endl;
		sum+=test;
	}
	cout << "Total Waiting Time: "<<sum<<endl;
	cout << "Average Waiting Time: "<<sum/size;
	return 0;
}

