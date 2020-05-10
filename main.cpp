#include <iostream>
#include <algorithm> 

bool isPalindrome(const std::string & text);

int main() {
  std::string textToCheck;

  std::cin >> textToCheck;
  if (isPalindrome(textToCheck)) {
    std::cout << "Given text is a palindrome\n";
  }
  else {
    std::cout << "Given text is NOT a palindrome\n";
  }
}

bool isPalindrome(const std::string & text) {
  std::string localText = text;
  transform(localText.begin(), localText.end(), localText.begin(), ::tolower); 
  
  std::string reversed = localText;
  std::reverse(reversed.begin(), reversed.end());

  return localText.compare(reversed) == 0;
}