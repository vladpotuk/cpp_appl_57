#include "book.h"
#include <iostream>

int main() {
    const int librarySize = 10;
    Book library[librarySize];

    for (int i = 0; i < librarySize; ++i) {
        std::cout << "Enter details for Book #" << i + 1 << ":\n";
        editBook(library[i]);
    }

    std::cout << "\nAll Books in the Library:\n";
    printAllBooks(library, librarySize);


    std::string authorToSearch;
    std::cout << "\nEnter author to search: ";
    std::getline(std::cin, authorToSearch);
    int foundByAuthor = searchByAuthor(library, librarySize, authorToSearch);
    if (foundByAuthor != -1) {
        std::cout << "\nBook found by author:\n";
        std::cout << "Title: " << library[foundByAuthor].title << "\n";
        std::cout << "Author: " << library[foundByAuthor].author << "\n";
    }
    else {
        std::cout << "\nBook not found by author.\n";
    }

    std::string titleToSearch;
    std::cout << "\nEnter title to search: ";
    std::getline(std::cin, titleToSearch);
    int foundByTitle = searchByTitle(library, librarySize, titleToSearch);
    if (foundByTitle != -1) {
        std::cout << "\nBook found by title:\n";
        std::cout << "Title: " << library[foundByTitle].title << "\n";
        std::cout << "Author: " << library[foundByTitle].author << "\n";
    }
    else {
        std::cout << "\nBook not found by title.\n";
    }

    
    sortBooksByTitle(library, librarySize);
    std::cout << "\nLibrary after sorting by title:\n";
    printAllBooks(library, librarySize);

    
    sortBooksByAuthor(library, librarySize);
    std::cout << "\nLibrary after sorting by author:\n";
    printAllBooks(library, librarySize);

    
    sortBooksByPublisher(library, librarySize);
    std::cout << "\nLibrary after sorting by publisher:\n";
    printAllBooks(library, librarySize);

    return 0;
}
