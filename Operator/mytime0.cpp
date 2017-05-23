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

void Time::Show()const
{
	std::cout<< hours << " hours " << minutes << " minutes"; 
}


