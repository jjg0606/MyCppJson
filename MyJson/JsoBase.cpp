#include "JsoBase.h"

/*public*/
JsoBase::JsoBase(JsoType type)
	: type(type)
{

}

/*public*/ 
JsoBase::JsoBase()
: JsoBase(JsoType::NULL)
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
const char* JsoBase::toString()
{
	return "";
}

/*public virtual*/
bool JsoBase::isNull()
{
	return this->type == JsoType::NULL;
}
