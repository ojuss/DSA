#include <iostream>
#include <string>
#include <vector>
using namespace std;
// write a program to demo a concept of friend function between two classes

// write a program to design a library management system with attributes book title, author, isbn and availability status
// functionality : add, update, remove books from the library
// search for books by their title or isbn 
// display the list of available books of the library 

class Book {
public:
    string title; 
    string author; 
    string isbn; 
    string status; 

    Book(string t, string a, string i, string s) {
      title = t;
      author = a;
      isbn = i;
      status = s;
    }

    void display() {
      cout << "Title: " << title << endl;
      cout << "Author: " << author << endl;
      cout << "ISBN: " << isbn << endl;
      cout << "Status: " << status << endl;
    }
};


class Library {
public:
    vector<Book> books;

    void addBook(string t, string a, string i, string s) {
      
      Book b(t, a, i, s);
      books.push_back(b);
      
      cout << "The book " << t << " has been added to the library." << endl;
    }

    void updateBook (string ISBN, string s) {
      
      for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == ISBN) {
          books[i].status = s;
          cout << "The book " << books[i].title << " has been updated." << endl;
        } 
      }
    }

    void removeBook(string ISBN) {
      
      for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == ISBN) {
          cout << "The book " << books[i].title << " has been removed from the library." << endl;
          books.erase(books.begin() + i);
          
          books[i].display();
        }
   	  }	
    }
    
    void searchBook(string bookSearch) {
      
      for (int i = 0; i < books.size(); i++) {
        if (books[i].title == bookSearch || books[i].isbn == bookSearch) {
          cout << "The following book has been found in the library:" << endl;
          books[i].display();
          return;
        }
      }
    }

    void displayAvailableBooks() {

      for (int i = 0; i < books.size(); i++) {
          cout << "Book " << i + 1 << ":" << endl;
          books[i].display();
          cout << endl;
      }
    }
};

int main () {
    int choice;
    Library lib;
    string a, t, i, status;
    
    lib.addBook("Harry Potter", "JK Rowling", "123", "y");
    lib.addBook("Let Us C", "E balagurusamy", "124", "y");
    lib.addBook("Lord of the Rings", "JRR Tolkien", "125", "y");
    
    while (true) {

        
    }
    cout << "Enter choice : " << endl;
    cout << "1. Add\n2. Update\n3. Remove\n4. Search\n5. Display" << endl;
    cin >> choice;
    
    
    switch (choice) {
        case 1:
            cout << "Add a book details..." << endl;
            cout << "Author name: " << endl;
            cin >> a;
            cout << "Title of the book: " << endl;
            cin >> t;
            cout << "ISBN: " << endl;
            cin >> i;
            cout << "Adding the book to library..." << endl;
            lib.addBook(t, a, i, "y");
        break;
        case 2:
            cout << "Enter ISBN: " << endl;
            cin >> i;
            cout << "Change the status of the book to (y/n): " << endl;
            cin >> status;
            cout << "Updating status of the book..." << endl;
            lib.updateBook(i, status);
        break;
        case 3:
            cout << "Enter the ISBN of the book to remove: " << endl;
            cin >> i;
            lib.removeBook(i);
        break;
        case 4: 
            cout << "Enter the Title or ISBN of the book to search: " << endl;
            cin >> t;
            cout << "Searching for the book..." << endl;
            lib.searchBook(t);
        break;
        case 5: 
            cout << "Displaying the books..." << endl;
            lib.displayAvailableBooks();
        break;
    }
    return 0;
}