#include "PublicationException.h"

class EditionYearException : public PublicationException {
public:
    EditionYearException(const string& employeeName, int year);

    const char* Message() const noexcept override;

private:
    int year;
};
