#include "../DataStructures/include/common.h"
#include "../DataStructures/include/utils.h"

void selectSet(vector<int>& nums, int setCount, vector<int>& nset){
	if(nums.empty() || setCount < 1 || setCount > nums.size()) return;
	for(int i=0; i<setCount; i++) {
		int idx = rand() % (setCount - i);
		//cout << "idx - " << idx << " - i - " << i;
		nset.push_back(nums[idx]);
		int t = nums[idx]; nums[idx] = nums[setCount - i - 1];
		nums[setCount -i - 1] = t;
	}
}
int main() {
	srand(time(NULL));
	for(int i=0; i<10; i++) {
		int asize = rand() % 20+1;
		vector<int> arr;
		for(int j=0; j<asize; j++){
			arr.push_back(rand() % 20+1);
		}
		int setCount = rand() % 20 +1;
		vprint(arr);
		vector<int> subset;
		selectSet(arr, setCount, subset);
		cout << " Subset : " << setCount << " -> " ; 
		vprint(subset);	
	}
	return 0;
}

