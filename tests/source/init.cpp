#include <testclass.hpp>
#include <catch.hpp>

SCENARIO ("constructor"){
	BinarySearchTree<int> BST;
	REQUIRE(BST.root_() == nullptr);
}
