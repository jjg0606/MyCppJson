#include "JsoInt.h"

/*public*/
JsoInt::JsoInt(int val)
	: JsoBase(JsoType::INT), value(val)
{

}

/*public*/
JsoInt::JsoInt()
	: JsoInt(0)
{

}

/*public virtual*/
JsoInt::~JsoInt()
{

}

/*public virtual*/
std::string JsoInt::toString()
{
	return std::to_string(value);
}

/*public*/
int JsoInt::getValue() const
{
	return value;
}

/*public*/
void JsoInt::setValue(int val)
{
	value = val;
}

/*public*/
JsoInt& JsoInt::operator=(const JsoInt& operand)
{
	this->setValue(operand.getValue());
	return *this;
}

/*public*/
JsoInt JsoInt::operator+(const JsoInt& operand)
{
	return JsoInt(this->getValue() + operand.getValue());
}

/*public*/
JsoInt JsoInt::operator-(const JsoInt& operand)
{
	return JsoInt(this->getValue() - operand.getValue());
}

/*public*/
JsoInt JsoInt::operator*(const JsoInt& operand)
{

}

/*public*/
JsoInt JsoInt::operator/(const JsoInt& operand)
{

}

/*public*/
JsoInt JsoInt::operator%(const JsoInt& operand)
{

}

/*public*/
bool JsoInt::operator==(const JsoInt& operand)
{

}
