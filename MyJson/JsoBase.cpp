#include "JsoBase.h"

/*public*/
JsoBase::JsoBase(JsoType type)
	: type(type)
{

}

/*public*/ 
JsoBase::JsoBase()
: JsoBase(JsoType::NUL)
{

}

/*public virtual*/
JsoBase::~JsoBase()
{

}

/*public*/
JsoType JsoBase::getType()
{
	return this->type;
}

/*public virtual*/
std::string JsoBase::toString()
{
	return "";
}

/*public virtual*/
bool JsoBase::isNull()
{
	return this->type == JsoType::NUL;
}
