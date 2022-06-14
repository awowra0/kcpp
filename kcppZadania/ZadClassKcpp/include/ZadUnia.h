#ifndef ZADUNIA_H
#define ZADUNIA_H 1
union myunion{
	double d;
	float f[2];
	long long l;
	int i[2];
	short s[4];
	char c[8];
};
class M53{
	public:
		M53(){this->main();}
	private:
		int main();
		void print(myunion u);
};
#endif
