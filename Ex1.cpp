#include <iostream>
using namespace std;

bool isConsonant(char ch) {
  ch = toupper(ch); 

  return !(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y') && ch >= 65 && ch <= 90; 
} 

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

	for (int i = 0; i < word.length(); i++) if (isConsonant(word[i])) count++;

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