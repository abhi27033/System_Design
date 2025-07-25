#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <unordered_map>

class Book {
private:
    std::string bookName;
    int bookID;
    std::string text;
    std::unordered_map<std::string, int> wordCount;

public:
    Book(std::string bookName, int bookID);
    Book();
    std::string getBookName() const;
    int getBookID() const;
    void insertWord(const std::string word);
    int getWordCount(const std::string word) const;
};

#endif
