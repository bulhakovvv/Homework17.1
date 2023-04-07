#include "EditionYearException.h"

EditionYearException::EditionYearException(const string& employeeName, int year) : PublicationException(employeeName), year(year) {}

const char* EditionYearException::Message() const noexcept {
    return "Невозможно создать издание – указан некорректный год издания.";
}
