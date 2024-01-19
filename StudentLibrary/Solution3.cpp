#include "Solution3.h"
#include <algorithm>
#include <stdexcept>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
    if (_words.empty()) {
        throw std::runtime_error("Mots pas trouvés :(");
    }
    words = _words;
}

void Solution3::SortWords() {

    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {

        std::string lowerA = a, lowerB = b;
        std::transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower); // Conversion en minuscules
        std::transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);
        return lowerA < lowerB;

    });
}

std::vector<std::string> Solution3::GetSortedWords() const

{
    return words;
}

#endif