#ifndef GOLF_H_
#define GOLF_H_
class Setgolf {
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;

public:
	Setgolf(const char *name, int hc);
	Setgolf();
	void handicap1(int hc);
	void showgolf();
};


#endif