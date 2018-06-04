#ifndef TV_H_
#define TV_H_
class Remote;
class Tv
{
private:
	int state;

public:
	friend class Remote;
	enum { Off, On };

	Tv(int s = Off) :state(s)
		{}
	void onoff(){ state = (state == On) ? Off : On; }
	bool ison()const { return state == On; }
	void settingc(Remote & a);


};
class Remote
{
private:
	int condition=0;//用于描述常规模式还是互动模式
public:
	friend class Tv;
	Remote(){}
	void onoff(Tv & t){ t.onoff(); }
	int show_condition() { std::cout << "\ncondition: " << condition; return condition; }
};
#endif