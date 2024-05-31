//Class vs Struct | C++ Tutorials	//ref link:https://www.youtube.com/watch?v=FnwbsHtCJ1o&list=PLFk1_lkqT8MaImkuU0ArJ6_dbr9nEN46a&index=3
//Class - private by default, Struct - public by default

struct Vector3 {
//class Vector3 {
//public:
	double x;
	double y;
	double z;
};

int main() {
	Vector3 vec{ 1.5, 2.0, 2.5 };
	//Vector3 vec;
	//vec.x = 1.5;
	//vec.y = 2.0;
	//vec.z = 2.5;
	return 0;
}