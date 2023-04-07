#include "PublicationException.h"

class BookException : public PublicationException {
public:
    BookException(const string& employeeName);

    const char* Message() const noexcept override;
};
