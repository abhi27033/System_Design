#include <iostream>
#include "BookStore.hpp"

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

    return 0;
}
