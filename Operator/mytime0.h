#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time();
		Time(int h, int m = 0);
		void AddMin(int m);
		void AddHr(int h);
		void Reset(int h = 0, int m = 0);
		Time Sum(const Time &t)const;//常成员函数，只能调用const成员函数 ，并且该函数不能修改成员变量的值
		Time operator+(const Time &t)const;//+操作符
		void Show()const; 
};

#endif //MYTIME0_H_
