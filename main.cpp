﻿//説明スライドを参考に、現実世界のポリフォーズムを名前にしてください

#include <stdio.h>

class oya
{
public:
	virtual void Voice() {
		printf("あにまる¥n");
	};
};;

class gakiA : public oya
{
public:
	void Voice() {
		printf("子供Aっす\n");
	};
};

class gakiB : public oya
{
public:
	void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	oya* animal[2] = { new gakiA,new gakiB };

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}