#include "Publication.h"

string Publication::getName() const {
    return name;
}

void Publication::setName(const string& name) {
    this->name = name;
}

string Publication::getAuthor() const {
    return author;
}

void Publication::setAuthor(const string& author) {
    this->author = author;
}

int Publication::getPublicationYear() const {
    return publicationYear;
}

void Publication::setPublicationYear(int year) {
    publicationYear = year;
}
