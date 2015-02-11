#include <iostream>
#include <string>
#include <limits>
#include <regex>

std::vector<std::string> words_starting_with(std::string str, const std::string &needle) {
  std::smatch match;
  std::regex rule("\\b(" + needle + ")([^ ]*)");
  std::vector<std::string> words;

  while (std::regex_search(str, match, rule)) {
    words.push_back(match[0]);
    str = match.suffix().str();
  }
  return words;
}

void task6() {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::string sentence;
  std::cout << "Enter the sentence: ";
  std::getline(std::cin, sentence);

  std::string leading_part;
  std::cout << "Enter word beginning: ";
  std::cin >> leading_part;

  auto matches = words_starting_with(sentence, leading_part);

  if (matches.size()) {
    std::cout << "Matches: ";
    for (auto &word: matches) {
      std::cout << word << " ";
    }
  } else {
    std::cout << "No matches";
  }
}