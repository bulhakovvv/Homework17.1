#include "Book.h"

string Book::getSummary() const {
    return summary;
}

void Book::setSummary(const string& summary) {
    this->summary = summary;
}

string Book::createDescription() const {
    return "��������: " + name + "\n�����: " + author + "\n��� �������: " + to_string(publicationYear) + "\n������: " + summary;
}
