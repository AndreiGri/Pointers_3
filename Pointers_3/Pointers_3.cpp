#include <iostream>

bool substr(const char* w, const char* occ)
{
    bool g;
    int i = 0;
    int j = 0;
    while (*(occ + i) != '\0' && *(w + j + i) != '\0')
    {
        if (*(occ + i) == *(w + j + i))
        {
            i++;
            g = true;
        }
        else
        {
            i = 0;
            j++;
            g = false;
        }
    }
    return g;
}

int main()
{
    const char* a = "Hello world!";
    const char* b = "wor";
    const char* c = "banana";

    std::cout << ' ' << std::boolalpha << substr(a, b) << std::endl;
    std::cout << ' ' << std::boolalpha << substr(a, c) << std::endl;
}