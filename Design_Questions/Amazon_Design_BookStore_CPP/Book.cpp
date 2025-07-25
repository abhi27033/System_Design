#include"Book.hpp"
Book::Book(std::string bookName, int bookID)
{
    bookName=bookName;
    bookID=bookID;
    text="";
    wordCount.clear();
}
Book::Book(){
    bookName="";
    bookID=INT_MIN;
    text="";
}

std::string Book::getBookName() const {
    return bookName;
}

int Book::getBookID() const {
    return bookID;
}

void Book::insertWord(const std::string word) {
    wordCount[word]++;
    text += word;
}

int Book::getWordCount(const std::string word) const {
    auto it = wordCount.find(word);
    if (it == wordCount.end()) return 0;
    return it->second;
}
