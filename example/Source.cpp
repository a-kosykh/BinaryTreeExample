#include <iostream>
#include <string>
#include <fstream>
#include "testclass.hpp"
int main() {
	BinarySearchTree<int> obj;
	obj.fileIn("testin.txt");
	obj.remove(16);
	obj.paintTree();
	obj.Out("testout.txt");
	system("pause");
	return 0;
}