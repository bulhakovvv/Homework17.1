#include "Library.h"
#include <iostream>

string Library::getName() const {
    return name;
}

void Library::setName(const string& name) {
    this->name = name;
}

void Library::showPublications() const {
    for (const Publication* publication : publications) {
        cout << publication->createDescription() << endl;
    }
}

void Library::addPublication(Publication* publication) {
    publications.push_back(publication);
}

void Library::deletePublication(const string& name) {
    for (auto it = publications.begin(); it != publications.end(); ++it) {
        if ((*it)->getName() == name) {
            publications.erase(it);
            break;
        }
    }
}

Publication* Library::findPublication(const string& name) const {
    for (Publication* publication : publications) {
        if (publication->getName() == name) {
            return publication;
        }
    }
    return nullptr;
}
