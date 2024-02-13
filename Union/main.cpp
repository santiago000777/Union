#include "common.h"

union MyUnion
{
	int i;
	char ch[4];
	float f;
};


int main() {
	MyUnion u;
	u.ch[0] = '@';
	u.ch[1] = '\0';
	u.ch[2] = '\0';
	u.ch[3] = '\0';

	for (int i = 0; i < 4; i++) {
		std::cout << u.ch[i] << std::endl;
	}
	std::cout << u.i << std::endl;
	std::cout << u.f << std::endl;
	
}