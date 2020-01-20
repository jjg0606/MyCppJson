#include "JsoList.h"

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
		delete* iter;
	}
}

/*public virtual*/
std::string JsoList::toString()
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
