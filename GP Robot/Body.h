#pragma once

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>

#ifndef MY_CLASS_B // include guard
#define MY_CLASS_B

namespace B {
	class body {
	public:
		void textureOn(boolean);
		void upperChest();
		void lowerChest();
		void neck();
		void chest();
		void adomen0();
		void adomen1();
		void adomen2();
		void adomen3();
		void below();
	};
}

#endif /* MY_CLASS_H */