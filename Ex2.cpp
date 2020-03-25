#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string word, temp_word;
  
  cout << "Word: ";
  cin >> word;

  for (int i = 0; i < word.length(); i++) word[i] = tolower(word[i]);
  
  temp_word = word;
  reverse(temp_word.begin(), temp_word.end());

  if (word == temp_word) cout << "Yes, it is a palindrome word" << endl;
  else cout << "No, it isn't a palindrome word" << endl;
  
  return 0;
}