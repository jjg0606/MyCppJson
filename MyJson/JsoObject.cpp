#include "JsoObject.h"

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
std::string JsoObject::toString()
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