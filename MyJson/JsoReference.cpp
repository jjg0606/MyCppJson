#include "JsoBase.h"

//////////////////////////////////////////////
/*              JsoList                     */
//////////////////////////////////////////////
#pragma region JsoList
/*public*/
JsoList::JsoList()
	: JsoBase(JsoType::LIST)
{

}

/*virtual*/
JsoList::~JsoList()
{
	for (auto iter = list.begin(); iter != list.end(); iter++)
	{
		delete *iter;
	}
}

/*public virtual*/
const char* JsoList::toString()
{
	std::string builder;
	builder.push_back('[');

	auto itBeforeEnd = list.cend();
	itBeforeEnd--;
	for (auto iter = list.cbegin(); iter != list.cend(); iter++)
	{
		builder.append((*iter)->toString());		

		if (iter != itBeforeEnd)
		{
			builder.append(", ");
		}
	}

	builder.push_back(']');

	return builder.c_str();
}

/*public*/
int JsoList::getSize()
{
	return list.size();
}

/*public*/
void JsoList::pushBack(JsoBase* val)
{
	list.push_back(val);
}

/*public*/
JsoBase* JsoList::operator[](int index)
{
	if (index < 0 || list.size() <= index)
		return nullptr;

	return list.at(index);
}
#pragma endregion JsoList


//////////////////////////////////////////////
/*              JsoObj                      */
//////////////////////////////////////////////
#pragma region JsoObject
/*public*/
JsoObject::JsoObject()
	: JsoBase(JsoType::OBJECT)
{

}

/*public virtual*/
JsoObject::~JsoObject()
{
	for (auto iter = map.begin(); iter != map.end(); iter++)
	{
		delete iter->second;
	}
}

/*public virtual*/
const char* JsoObject::toString()
{
	std::string builder;
	builder.push_back('{');
	
	auto itBeforeEnd = map.cend();
	itBeforeEnd--;

	for (auto iter = map.cbegin(); iter != map.cend(); iter++)
	{
		builder.append(iter->first);
		builder.append(" : ");
		builder.append(iter->second->toString());

		if (iter != itBeforeEnd)
		{
			builder.append(", ");
		}
	}

	builder.push_back('}');

	return builder.c_str();
}

/*public*/
int JsoObject::getSize()
{
	return map.size();
}

/*public*/
void JsoObject::insert(const char* key, JsoBase* val)
{
	map.insert(std::make_pair(key, val));
}

/*public*/
void JsoObject::pop(const char* key)
{
	map.erase(key);
}

/*public*/
JsoBase* JsoObject::operator[](const char* key)
{
	auto iter = map.find(key);

	if (iter == map.end())
	{
		return nullptr;
	}

	return iter->second;
}
#pragma endregion JsoObject
