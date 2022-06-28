#include <algorithm>
//Copyright: Free
//Author: krsheshu

 #include <iostream>
#include <vector>

int main() {
  std::vector<std::string> words;

  for (std::string temp; std::cin >> temp;) {
    // read whitespace-separated words
    words.push_back(temp);  // put into vector
    std::cout << temp << '\n';
  }

  std::cout << "Number of words: " << words.size() << '\n';
  std::sort(words.begin(), words.end());

  // sort the words
  for (int i = 0; i < int(words.size()); ++i)
    if (i == 0 || words[i - 1] != words[i])  // is this a new word?
      std::cout << words[i] << "\n";
}
