#include "RandomChar.h"

//error: need to call variables in their namespace
int const RandomChar::m_Length = 71;
char const RandomChar::m_AllPossibleChars[m_Length] = { "01234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!§$%&?@" };

RandomChar::RandomChar()
{
}

RandomChar::~RandomChar()
{
}