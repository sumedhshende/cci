#include "../DataStructures/include/common.h"
//#include "../DataStructures/include/utils.h"

int add(int a, int b) {
	if(b==0) return a;
	int sum = a ^ b;
	int carry = (a & b) << 1;
	return add(sum, carry);
}

int main() {
	srand(time(NULL));
	for(int i=0; i<5; i++) {
		for (int j=0; j<9; j++) {
			int a = rand() % 100000;
			int b = rand() % 100000;
			cout << a << ", " << b << " --> " << (add(a, b) == (a + b) ? " Success": "Failed") << endl;
		}
	}
	return 0;
}
