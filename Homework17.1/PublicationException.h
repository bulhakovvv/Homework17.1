#include <string>
#include <stdexcept>

using namespace std;

class PublicationException : public exception {
public:
    PublicationException(const string& employeeName);

    virtual const char* Message() const noexcept;

protected:
    string employeeName;
};
