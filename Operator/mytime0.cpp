#include<iostream>
#include "mytime0.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h,int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes/60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

// 传递的是引用，提高效率传递引用使用的内存更少，速度更快
// 返回值不能是引用，不要返回值指向局部变量或者临时对象的引用，函数执行完毕后，临时对象或者局部变量将消失，引用将指向不存在的数据，
// 如果返回值是Time &，则引用的将是sum对象，因此这里使用TIME返回值, 程序将在删除sum之前构造它的拷贝，调用函数将得到该拷贝 
Time Time::Sum(const Time &t)const  
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

//操作符+ 重载
Time Time::operator+(const Time &t)const  
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator*(double mult)const
{
	Time result;
    long totalminutes = t.hours * mult * 60 + t.minutes *mult;
    result.hours = totalminutes /60;
    result.minutes = totalminutes %60;
    return result;
}

void Time::Show()const
{
	std::cout<< hours << " hours " << minutes << " minutes"; 
}

void operator<<(ostream os, const Time &t)
{
	os<< t.hours << " hours " << t.minutes << " minutes";
}


