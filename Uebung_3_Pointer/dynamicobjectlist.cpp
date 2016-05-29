#include "dynamicobjectlist.hpp"
#include "object.h"

DynamicObjectList::DynamicObjectList()
{
	m_capacity = 4;
	m_count = 0;
	m_list = new Object*[m_capacity];
}
DynamicObjectList::~DynamicObjectList()
{
	//delete every object in m_list
	while (m_count > 0)
		this->destroyObject(m_count - 1);
	//delete m_list
	delete[] m_list;
}
void DynamicObjectList::reserve(unsigned int capacity)
{
	if (m_capacity < capacity)
	{
		//the buffer
		Object** new_m_list = new Object *[capacity];
		// copy every object m_list point to
		for (unsigned int i = 0; i < m_count; i++)
		{
			new_m_list[i] = m_list[i];
		}
		//free the memory
		delete[] m_list;

		//copy new object to old
		m_list = new_m_list;
	}
}
Object* DynamicObjectList::createObject_back(char*name)
{
	if (m_count == m_capacity)
	{
		reserve(m_capacity * 2);
	}
	//create new Object
	Object *lastObject = new Object(name);

	//increment count, newposition is now count-1
	m_count++;
	//copy object
	return(m_list[m_count - 1] = lastObject);
}
void DynamicObjectList::destroyObject(unsigned int position)
{
	//check validity
	if (position < m_count)
	{
		delete m_list[position];
		//copy all objects
		for (unsigned int i = position; i < m_count; i++) 
		{
			m_list[i] = m_list[i + 1];
		}
		m_count--;
	}
}
Object * DynamicObjectList::getAt(unsigned int position)
{
	if (position >= m_count)
		return nullptr;
	return m_list[position];
}