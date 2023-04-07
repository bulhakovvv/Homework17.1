#include "PublicationException.h"

PublicationException::PublicationException(const string& employeeName) : employeeName(employeeName) {}

const char* PublicationException::Message() const noexcept {
    return "Ошибка при работе с изданием.";
}
