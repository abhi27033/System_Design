#ifndef BOOKSTORE_HPP
#define BOOKSTORE_HPP
#include<string>
#include<unordered_map>
#include"Book.hpp"
#include<iostream>
class BookStore{
    private:
        std::string bookStoreName;
        int booksAvailable;
        std::unordered_map<int,Book> bookMapping;
    public:
        BookStore(std::string bookStoreName);
        void addBook(std::string bookName,int bookID);
        void addWordIntoBook(int bookID,std::string word);
        int getWordCountInBook(int bookID,std::string word);
};
#endif