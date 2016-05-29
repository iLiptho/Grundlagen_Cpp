#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
/// This object class serves basically as dummy for an "any object".
/// Later on we will learn different possibilities how we actually could store "anything" in here.
class Object
{
public:
	Object(const char* name);
	Object(const Object&);
	~Object();

	/// Returns ID which was passed in the constructor.
	const char* GetName() const { return m_name; };

	/// Returns whether object is const or not
	const char* GetType() const { return "Const object"; };
	const char* GetType() { return "not const"; };

	/// Implementiert den angegebenen und die verwandten Operatoren
	bool operator==(Object& o)
	{
		return std::stoi(std::string(m_name)) == std::stoi(std::string(o.GetName())) ? true : false;
	}
	Object& operator+=(Object& o);

private:

	char* m_name;

	// Here could be YOUR data!
};
/// Implementiert den angegebenen und die verwandten Operatoren
std::ostream& operator<< (std::ostream& stream, const Object&);
// implement < and > for dynamicobjectlist.sort()
inline bool operator< (const Object& lhs, const Object& rhs)
{
	return std::stoi(lhs.GetName()) < std::stoi(rhs.GetName()) ? true : false;
}
inline bool operator> (const Object& lhs, const Object& rhs)
{
	return std::stoi(lhs.GetName()) > std::stoi(rhs.GetName()) ? true : false;
}
inline bool operator<= (const Object& lhs, const Object& rhs)
{
	return std::stoi(lhs.GetName()) <= std::stoi(rhs.GetName()) ? true : false;
}
inline bool operator>= (const Object& lhs, const Object& rhs)
{
	return std::stoi(lhs.GetName()) >= std::stoi(rhs.GetName()) ? true : false;
}
inline bool operator== (const Object& lhs, const Object& rhs)
{
	return std::stoi(lhs.GetName()) == std::stoi(rhs.GetName()) ? true : false;
}