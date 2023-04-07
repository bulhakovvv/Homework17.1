#include "BookException.h"

BookException::BookException(const string& employeeName) : PublicationException(employeeName) {}

const char* BookException::Message() const noexcept {
    return "Ошибка при работе с книгой.";
}
