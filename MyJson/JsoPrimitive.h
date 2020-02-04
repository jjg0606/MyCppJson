#pragma once
#include "JsoBase.h"

template<typename TYPE, JsoType TENUM = JsoType::NUL>
class JsoPrim
	: public JsoBase
{
private:
	TYPE value;

public:
	JsoPrim(TYPE value)
		: JsoBase(TENUM), value(value)
	{

	}

	JsoPrim()
		: JsoPrim((TYPE)0)
	{

	}

	virtual ~JsoPrim()
	{

	}

	TYPE getValue() const
	{
		return value;
	}

	void setValue(TYPE value)
	{
		this->value = value;
	}

	std::string toString()
	{
		return std::to_string(value);
	}

	JsoPrim& operator=(const JsoPrim& operand)
	{
		this->setValue(operand.getValue());
		return *this;
	}

	JsoPrim operator+(const JsoPrim& operand)
	{
		return JsoPrim(this->getValue() + operand.getValue());
	}

	JsoPrim operator-(const JsoPrim& operand)
	{
		return JsoPrim(this->getValue() - operand.getValue());
	}

	JsoPrim operator*(const JsoPrim& operand)
	{
		return JsoPrim(this->getValue() * operand.getValue());
	}

	JsoPrim operator/(const JsoPrim& operand)
	{
		return JsoPrim(this->getValue() / operand.getValue());
	}

	JsoPrim operator%(const JsoPrim& operand)
	{
		return JsoPrim(this->getValue() % operand.getValue());
	}

	bool operator==(const JsoPrim& operand)
	{
		return this->getValue() == operand.getValue();
	}

	bool operator!=(const JsoPrim& operand)
	{
		return this->getValue() != operand.getValue();
	}
};
