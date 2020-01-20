#include "JsoString.h"

/*public*/
JsoString::JsoString(const char* val)
	: JsoBase(JsoType::STR), value(val)
{

}

/*public*/
JsoString::JsoString()
	: JsoString("")
{

}

/*public virtual*/
JsoString::~JsoString()
{
	value.clear();
}

/*public virtual*/
std::string JsoString::toString()
{
	return value;
}

std::string JsoString::getValue()
{
	return value;
}

void JsoString::setValue(const char* val)
{
	value.clear();
	value.append(val);
}
