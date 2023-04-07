#include "Publication.h"

class Book : public Publication {
public:
    string getSummary() const;
    void setSummary(const string& summary);

    string createDescription() const override;

private:
    string summary;
};
