#include <string>

using namespace std;

class Publication {
public:
    string getName() const;
    void setName(const string& name);

    string getAuthor() const;
    void setAuthor(const string& author);

    int getPublicationYear() const;
    void setPublicationYear(int year);

    virtual string createDescription() const = 0;

protected:
    string name;
    string author;
    int publicationYear;
};

