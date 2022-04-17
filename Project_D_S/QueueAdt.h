#pragma once
#include"Node.h"
template<class T>
class QueueAdt
{
	public:
		virtual bool enqueue(const T& val) = 0;
		virtual bool dequeue(T& val) = 0;
		virtual bool iSempty()const = 0;
		virtual bool peak(T& val)const = 0;
};
