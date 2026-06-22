#include <iostream>
using namespace std;

class Library {
    string title, author;
    bool issued;

public:
    void addBook() {
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        issued = false;
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            cout << "Book Issued\n";
        } else
            cout << "Already Issued\n";
    }

    void returnBook() {
        issued = false;
        cout << "Book Returned\n";
    }

    void searchBook(string key) {
        if (key == title || key == author)
            cout << "Book Found: " << title << " by " << author << endl;
        else
            cout << "Book Not Found\n";
    }
};

int main() {
    Library b;
    int ch;
    string key;

    do {
        cout << "\n1.Add Book\n2.Issue Book\n3.Return Book\n4.Search Book\n5.Exit\n";
        cin >> ch;

        switch (ch) {
            case 1: b.addBook(); break;
            case 2: b.issueBook(); break;
            case 3: b.returnBook(); break;
            case 4:
                cout << "Enter Title/Author: ";
                cin >> key;
                b.searchBook(key);
                break;
        }
    } while (ch != 5);

    return 0;
}