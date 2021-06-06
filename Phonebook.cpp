#include <iostream>
#include "Contact.h"
using namespace std;

enum Choices {
    ADD,
    SEARCH,
    VIEW,
    EXIT,
    INVALID,
    HELP
};
int added = 0;
Contact contact1;
Contact contact2;
Contact contact3;
Contact Contacts[3] = { contact1, contact2, contact3 };

void getChoice();
void add();
void search();
void view();
void invalid();
void help();

int main()
{
    help();
    while (1) {
        getChoice();
    }
}
void getChoice() {
    Choices choice = Choices::ADD;
    char raw_input;
    cout << "Command(A[DD],S[EARCH],V[IEW],E[XIT],H[ELP}): ";
    cin >> raw_input;
    cin.clear();
    fflush(stdin);
    switch (raw_input) {
    case 'A': {
        choice = Choices::ADD;
    } break;
    case 'S': {
        choice = Choices::SEARCH;
    } break;
    case 'V': {
        choice = Choices::VIEW;
    } break;
    case 'E': {
        choice = Choices::EXIT;
    } break;
    case 'H': {
        choice = Choices::HELP;
    } break;
    default: {
        choice = Choices::INVALID;
    }
    }
    switch (choice) {
    case Choices::ADD: {
        add();
    } break;
    case Choices::SEARCH: {
        search();
    } break;
    case Choices::VIEW: {
        view();
    } break;
    case Choices::EXIT: {
        exit(EXIT_SUCCESS);
    } break;
    case Choices::HELP: {
        help();
    } break;
    default : {
        invalid();
    }
    }
    cout << "\n";
}
void add() {
    if (added < sizeof(Contacts)) {
        Contacts[added].Add();
    }
    else {
        cout << "Phonebook overflow!" << endl;
    }
}
void search() {
    char keyword[100];
    cout << "SEARCH PHONEBOOK:";
    cin >> keyword;
    cin.clear();
    fflush(stdin);
    for (int i = 0; i < sizeof(Contacts) / sizeof(Contact) + 1;i++ ) {
        if (Contacts[i].Find(keyword)) {
            cout << i << ".\n";
            Contacts[i].Show();
        }
    }
}
void view() {
    int uid;
    cout << "CONTACT UID:";
    cin >> uid;
    cin.clear();
    fflush(stdin);
    if (uid < added) {
        Contacts[uid].Show();
    }
    else {
        cout << "No such contact!" << endl;
    }
}
void help() {
    cout << "Phonebook in c++\n"
        "Commands:\n"
        "A -> ADD new contact.\n"
        "S -> SEARCH for contact based on information provided.\n"
        "V -> VIEW contact based on contact id.\n"
        "H -> Displays this message.\n"
        "E -> EXITS program and deletes all data.\n";
}
void invalid() {
    cout << "Invalid Option." <<
        "Type H for help";
}
