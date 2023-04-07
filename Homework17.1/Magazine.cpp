#include "Magazine.h"

vector<string> Magazine::getArticles() const {
    return articles;
}

void Magazine::addArticle(const string& article) {
    articles.push_back(article);
}

string Magazine::createDescription() const {
    string description = "��������: " + name + "\n�����: " + author + "\n��� �������: " + to_string(publicationYear) + "\n������:\n";
    for (const string& article : articles) {
        description += "- " + article + "\n";
    }
    return description;
}
