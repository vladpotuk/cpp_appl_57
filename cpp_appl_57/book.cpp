#include "book.h"
#include <iostream>

void editBook(Book& book) {
    std::cout << "Enter book title: ";
    std::getline(std::cin, book.title);

    std::cout << "Enter book author: ";
    std::getline(std::cin, book.author);

    std::cout << "Enter book publisher: ";
    std::getline(std::cin, book.publisher);

    std::cout << "Enter book genre: ";
    std::getline(std::cin, book.genre);
}

void printAllBooks(const Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Book #" << i + 1 << "\n";
        std::cout << "Title: " << books[i].title << "\n";
        std::cout << "Author: " << books[i].author << "\n";
        std::cout << "Publisher: " << books[i].publisher << "\n";
        std::cout << "Genre: " << books[i].genre << "\n\n";
    }
}

int searchByAuthor(const Book books[], int size, const std::string& author) {
    for (int i = 0; i < size; ++i) {
        if (books[i].author == author) {
            return i; 
        }
    }
    return -1; 
}

int searchByTitle(const Book books[], int size, const std::string& title) {
    for (int i = 0; i < size; ++i) {
        if (books[i].title == title) {
            return i; 
        }
    }
    return -1; 
}

void swapBooks(Book& a, Book& b) {
    Book temp = a;
    a = b;
    b = temp;
}

void sortBooksByTitle(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (books[j].title > books[j + 1].title) {
                swapBooks(books[j], books[j + 1]);
            }
        }
    }
}

void sortBooksByAuthor(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (books[j].author > books[j + 1].author) {
                swapBooks(books[j], books[j + 1]);
            }
        }
    }
}

void sortBooksByPublisher(Book books[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (books[j].publisher > books[j + 1].publisher) {
                swapBooks(books[j], books[j + 1]);
            }
        }
    }
}
