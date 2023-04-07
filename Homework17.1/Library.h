#include "Publication.h"
#include <vector>

class Library {
public:
    string getName() const;
    void setName(const string& name);

    void showPublications() const;
    void addPublication(Publication* publication);
    void deletePublication(const string& name);
    Publication* findPublication(const string& name) const;

private:
    string name;
    vector<Publication*> publications;
};
