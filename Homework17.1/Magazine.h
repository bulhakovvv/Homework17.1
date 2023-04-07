#include "Publication.h"
#include <vector>

class Magazine : public Publication {
public:
    vector<string> getArticles() const;
    void addArticle(const string& article);

    string createDescription() const override;

private:
    vector<string> articles;
};
