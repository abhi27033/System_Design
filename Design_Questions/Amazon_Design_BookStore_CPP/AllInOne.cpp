#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>

// ----------------------- Book Class -----------------------
class Book {
private:
    std::string bookName;
    int bookID;
    std::string text;
    std::unordered_map<std::string, int> wordCount;

public:
    Book(std::string bookName, int bookID) {
        this->bookName = bookName;
        this->bookID = bookID;
        text = "";
        wordCount.clear();
    }

    Book() {
        bookName = "";
        bookID = INT_MIN;
        text = "";
        wordCount.clear();
    }

    std::string getBookName() const {
        return bookName;
    }

    int getBookID() const {
        return bookID;
    }

    void insertWord(const std::string word) {
        wordCount[word]++;
        text += word;
    }

    int getWordCount(const std::string word) const {
        auto it = wordCount.find(word);
        if (it == wordCount.end()) return 0;
        return it->second;
    }
};

// ----------------------- BookStore Class -----------------------
class BookStore {
private:
    std::string bookStoreName;
    int booksAvailable;
    std::unordered_map<int, Book> bookMapping;

public:
    BookStore(std::string bookStoreName) {
        this->bookStoreName = bookStoreName;
        booksAvailable = 0;
        bookMapping.clear();
    }

    void addBook(std::string bookName, int bookID) {
        Book book(bookName, bookID);
        bookMapping[bookID] = book;
        booksAvailable++;
    }

    void addWordIntoBook(int bookID, std::string word) {
        if (bookMapping.find(bookID) == bookMapping.end()) {
            std::cout << "Book Not Exists\n";
            return;
        }
        bookMapping[bookID].insertWord(word);
    }

    int getWordCountInBook(int bookID, std::string word) {
        if (bookMapping.find(bookID) == bookMapping.end()) {
            std::cout << "Book Not Exists\n";
            return 0;
        }
        return bookMapping[bookID].getWordCount(word);
    }
};

// ----------------------- Test Cases -----------------------
int main() {
    BookStore store("City Central Library");

    store.addBook("C++ Primer", 101);
    store.addBook("Design Patterns", 102);

    store.addWordIntoBook(101, "template");
    store.addWordIntoBook(101, "template");
    store.addWordIntoBook(101, "class");

    store.addWordIntoBook(102, "pattern");
    store.addWordIntoBook(102, "singleton");
    store.addWordIntoBook(102, "pattern");

    std::cout << "Word count for 'template' in Book 101: "
              << store.getWordCountInBook(101, "template") << "\n";

    std::cout << "Word count for 'pattern' in Book 102: "
              << store.getWordCountInBook(102, "pattern") << "\n";

    std::cout << "Word count for 'nonexistent' in Book 102: "
              << store.getWordCountInBook(102, "nonexistent") << "\n";

    std::cout << "Trying to access word in non-existent Book 999:\n";
    std::cout << store.getWordCountInBook(999, "anything") << "\n";

    return 0;
}
