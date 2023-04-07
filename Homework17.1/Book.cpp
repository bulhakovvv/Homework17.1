#include "Book.h"

string Book::getSummary() const {
    return summary;
}

void Book::setSummary(const string& summary) {
    this->summary = summary;
}

string Book::createDescription() const {
    return "Название: " + name + "\nАвтор: " + author + "\nГод издания: " + to_string(publicationYear) + "\nРезюме: " + summary;
}
