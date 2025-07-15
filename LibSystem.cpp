#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 50;

class Book {
private:
    string title;
    string author;
    string ISBN;
    float price;

public:
    // Constructors
    Book() {
        title = "";
        author = "";
        ISBN = "";
        price = 0.0;
    }

    // Methods to set and get data
    void setData() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter ISBN: ";
        getline(cin, ISBN);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore(); // To handle the newline after price input
    }

    void display() const {
        cout << "Title: " << title << ", Author: " << author
             << ", ISBN: " << ISBN << ", Price: ZMK" << price << endl;
    };

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return ISBN; }
    float getPrice() const { return price; }

    void setTitle(string newTitle) { title = newTitle; }
};

// Menu-driven program
int main() {
    Book books[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    do {
        cout << "\n===== Library Menu =====" << endl;
        cout << "1. Add Book\n2. Display all books\n3. Search for a book\n4. Delete a book\n5. Edit book title\n6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // Handle newline

        switch (choice) {
            case 1:
                if (bookCount < MAX_BOOKS) {
                    books[bookCount].setData();
                    bookCount++;
                    cout << "Book added successfully." << endl;
                } else {
                    cout << "Library is full!" << endl;
                }
                break;

            case 2:
                if (bookCount == 0) {
                    cout << "No books to display." << endl;
                } else {
                    for (int i = 0; i < bookCount; i++) {
                        cout << i + 1 << ". ";
                        books[i].display();
                    }
                }
                break;

            case 3: {
                int searchOption;
                cout << "Search by: 1.Title  2.Author  3.ISBN  4.Price\nEnter option: ";
                cin >> searchOption;
                cin.ignore();

                bool found = false;
                switch (searchOption) {
                    case 1: {
                        string title;
                        cout << "Enter title to search: ";
                        getline(cin, title);
                        for (int i = 0; i < bookCount; i++) {
                            if (books[i].getTitle() == title) {
                                books[i].display();
                                found = true;
                            }
                        }
                        break;
                    }
                    case 2: {
                        string author;
                        cout << "Enter author to search: ";
                        getline(cin, author);
                        for (int i = 0; i < bookCount; i++) {
                            if (books[i].getAuthor() == author) {
                                books[i].display();
                                found = true;
                            }
                        }
                        break;
                    }
                    case 3: {
                        string isbn;
                        cout << "Enter ISBN to search: ";
                        getline(cin, isbn);
                        for (int i = 0; i < bookCount; i++) {
                            if (books[i].getISBN() == isbn) {
                                books[i].display();
                                found = true;
                            }
                        }
                        break;
                    }
                    case 4: {
                        float price;
                        cout << "Enter price to search: ";
                        cin >> price;
                        for (int i = 0; i < bookCount; i++) {
                            if (books[i].getPrice() == price) {
                                books[i].display();
                                found = true;
                            }
                        }
                        break;
                    }
                    default:
                        cout << "Invalid search option." << endl;
                }

                if (!found) {
                    cout << "Book not found." << endl;
                }
                break;
            }

            case 4: {
                string isbn;
                cout << "Enter ISBN of book to delete: ";
                getline(cin, isbn);
                bool deleted = false;
                for (int i = 0; i < bookCount; i++) {
                    if (books[i].getISBN() == isbn) {
                        for (int j = i; j < bookCount - 1; j++) {
                            books[j] = books[j + 1]; // Shift left
                        }
                        bookCount--;
                        deleted = true;
                        cout << "Book deleted." << endl;
                        break;
                    }
                }
                if (!deleted) {
                    cout << "Book not found." << endl;
                }
                break;
            }

            case 5: {
                string isbn;
                cout << "Enter ISBN of book to edit: ";
                getline(cin, isbn);
                bool edited = false;
                for (int i = 0; i < bookCount; i++) {
                    if (books[i].getISBN() == isbn) {
                        string newTitle;
                        cout << "Enter new title: ";
                        getline(cin, newTitle);
                        books[i].setTitle(newTitle);
                        cout << "Title updated." << endl;
                        edited = true;
                        break;
                    }
                }
                if (!edited) {
                    cout << "Book not found." << endl;
                }
                break;
            }

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}
