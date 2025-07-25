#include"BookStore.hpp"

BookStore::BookStore(std::string bookStoreName){
    bookStoreName=bookStoreName;
    booksAvailable=0;
    bookMapping.clear();
}
void BookStore::addBook(std::string bookName,int bookID){
    Book book(bookName, bookID);
    bookMapping[bookID]=book;
    booksAvailable++;
}
void BookStore::addWordIntoBook(int bookID, std::string word){
    if(bookMapping.find(bookID)==bookMapping.end())
    {
        std::cout<<"Book Not Exists";
        return;
    }
    Book* book=&bookMapping[bookID];
    book->insertWord(word);
}
int BookStore::getWordCountInBook(int bookID,std::string word){
    if(bookMapping.find(bookID)==bookMapping.end())
    {
        std::cout<<"Book Not Exists";
        return 0;
    }
    Book book=bookMapping[bookID];
    return book.getWordCount(word);
}