#include "string2.h"
#include <cstring>
#include <cctype>

chaine2::chaine2(const char* ch)
{
    _taille = strlen(ch);
    _ptr = new char[_taille + 1];
    strcpy(_ptr, ch);
}

chaine2::chaine2(char c, int n)
{
    _taille = n;
    _ptr = new char[_taille + 1];
    for (int i = 0; i < n; i++)
        _ptr[i] = c;
    _ptr[n] = '\0';
}

chaine2::chaine2(const chaine2& other)
{
    _taille = other._taille;
    _ptr = new char[_taille + 1];
    strcpy(_ptr, other._ptr);
}

chaine2::~chaine2()
{
    delete[] _ptr;
}

int chaine2::longueur()
{
    return _taille;
}

char& chaine2::operator[](int index)
{
    return _ptr[index];
}

void chaine2::operator+=(char c)
{
    int oldSize = _taille;
    _taille += 1;
    char* newPtr = new char[_taille + 1];
    strcpy(newPtr, _ptr);
    newPtr[oldSize] = c;
    newPtr[_taille] = '\0';
    delete[] _ptr;
    _ptr = newPtr;
}

void chaine2::operator+=(const chaine2& other)
{
    int oldSize = _taille;
    _taille += other._taille;
    char* newPtr = new char[_taille + 1];
    strcpy(newPtr, _ptr);
    strcpy(newPtr + oldSize, other._ptr);
    newPtr[_taille] = '\0';
    delete[] _ptr;
    _ptr = newPtr;
}

chaine2& chaine2::operator+(const chaine2& other)
{
    chaine2 result(*this);
    result += other;
    return result;
}

chaine2& chaine2::operator=(const chaine2& other)
{
    if (this != &other)
    {
        delete[] _ptr;
        _taille = other._taille;
        _ptr = new char[_taille + 1];
        strcpy(_ptr, other._ptr);
    }
    return *this;
}

int chaine2::operator==(const chaine2& other)
{
    return strcmp(_ptr, other._ptr) == 0;
}

int chaine2::operator!=(const chaine2& other)
{
    return !(*this == other);
}

chaine2 chaine2::operator+(char c) const
{
    chaine2 result(*this);
    result += c;
    return result;
}

chaine2 chaine2::operator+(const char* str) const
{
    chaine2 result(*this);
    result += str;
    return result;
}

chaine2& chaine2::operator<<(const char* str)
{
    int newSize = _taille + strlen(str);
    char* newPtr = new char[newSize + 1];
    strcpy(newPtr, _ptr);
    strcat(newPtr, str);
    delete[] _ptr;
    _ptr = newPtr;
    _taille = newSize;
    return *this;
}

chaine2& chaine2::operator>>(char* str)
{
    strcpy(str, _ptr);
    delete[] _ptr;
    _taille = 0;
    _ptr = new char[1];
    _ptr[0] = '\0';
    return *this;
}

chaine2& chaine2::minuscule()
{
    for (int i = 0; i < _taille; i++)
    {
        _ptr[i] = tolower(_ptr[i]);
    }
    return *this;
}
