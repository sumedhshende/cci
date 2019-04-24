#include "../DataStructures/include/common.h"
#include "../DataStructures/include/utils.h"

void swap( int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}  
void getNewDeck(vector<int>& cards) {
	for(int i=0; i<52; i++ ) {
		cards.push_back(i%13 + 1);
	}
	printv(cards);
}

void shuffle(vector<int>& cards) {
	srand(time(NULL));
	int arr[13] ={0};
	for(int i=0; i<cards.size();i++) {
		int ai = rand() % (cards.size() - i);
		arr[cards[ai]-1]++;
		//cout << ai << ", " << cards[ai] << " --> " << endl;	
		swap(cards[ai], cards[cards.size()- (i+1)]);	
	}
	for(int i=0; i<13;i++){
		cout << i+1 << ", " << arr[i] << endl;
	}
	printv(cards);
} 

int main() {
	vector<int> cards;
	getNewDeck(cards);
	shuffle(cards);	
	return 0;
}
