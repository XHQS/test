#ifndef CROW_H_
#define  CROW_H_
class Crow
{
private:
	char name[20];
	char * hobby;
	double weight;
public:
	Crow();
	Crow(const char * nm, const char * ho, double wt);
	Crow(const Crow &c);
	~Crow();
	Crow & operator=(const Crow & c);
	void ShowCrow()const;
};
#endif