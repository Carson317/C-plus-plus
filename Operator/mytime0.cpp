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

// ���ݵ������ã����Ч�ʴ�������ʹ�õ��ڴ���٣��ٶȸ���
// ����ֵ���������ã���Ҫ����ֵָ��ֲ�����������ʱ��������ã�����ִ����Ϻ���ʱ������߾ֲ���������ʧ�����ý�ָ�򲻴��ڵ����ݣ�
// �������ֵ��Time &�������õĽ���sum�����������ʹ��TIME����ֵ, ������ɾ��sum֮ǰ�������Ŀ��������ú������õ��ÿ��� 
Time Time::Sum(const Time &t)const  
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

//������+ ����
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


