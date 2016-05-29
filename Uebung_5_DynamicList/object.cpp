#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "Object.h"
#include <iostream>
Object::Object(const char* name)
{
	m_name = new char[strlen(name)];
	strcpy(m_name, name);
	std::cout << "Created object with name: " << m_name << std::endl;
}
Object::Object(const Object& o) :
m_name(o.m_name)
{
	std::cout << "Copied object with name: " << m_name << std::endl;
}

Object::~Object()
{
  std::cout << "Destroyed object with name: " << m_name << std::endl;
}

Object & Object::operator+=(Object & rhs)
{
	// TODO: hier Rückgabeanweisung eingeben
	char* result = new char[strlen(m_name) + strlen(rhs.GetName()) + 1];
	strcpy(result, m_name);
	return Object(strcat(result, rhs.GetName()));
}

std::ostream& operator<< (std::ostream& stream, const Object& rhs)
{
	stream << "|-|"<< rhs.GetName() <<" |-|";
	return stream;
}