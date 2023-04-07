#include "Magazine.h"

vector<string> Magazine::getArticles() const {
    return articles;
}

void Magazine::addArticle(const string& article) {
    articles.push_back(article);
}

string Magazine::createDescription() const {
    string description = "Название: " + name + "\nАвтор: " + author + "\nГод издания: " + to_string(publicationYear) + "\nСтатьи:\n";
    for (const string& article : articles) {
        description += "- " + article + "\n";
    }
    return description;
}
