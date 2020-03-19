#include <iostream>
using namespace std;

void option_a (string word) {
	cout << "Length of word is: " << word.length() << endl;
}

void option_b (string word) {
	int count = 0;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] == 'a') count++;
	}
	
	cout << "Count of 'a' character is: " << count << endl;
}

void option_c (string word) {
	int count = 0;
	char c;

	for (int i = 0; i < word.length(); i++) {
		c = toupper(word[i]);
		
		switch (c) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'Y':
			break;
		
		default:
			count++;
			break;
		}
	}

	cout << "Count of consonants is: " << count << endl;
}

int main() {
	string word;

	cout << "Print word: ";
	cin >> word;

	option_a(word);
	option_b(word);
	option_c(word);
	return 0;
}