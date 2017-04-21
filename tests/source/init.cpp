#include <testclass.hpp>
#include <catch.hpp>

SCENARIO ("constructor"){
	BinarySearchTree<int> BST;
	REQUIRE(BST.root() == nullptr);
}

SCENARIO("addElement")
{
	BinarySearchTree<int> bst;
	bst.add(13);
	REQUIRE(bst.value_() == 13);
	REQUIRE(bst.leftNode_() == nullptr);
	REQUIRE(bst.rightNode_() == nullptr);
}

SCENARIO("findElement")
{
	BinarySearchTree<int> bst;
	bst.add(13);
	REQUIRE(bst.isFound(13) == 1);
}

SCENARIO("removeElement")
{
	BinarySearchTree<int> bst;
	bst.add(6);
	bst.add(3);
	bst.add(8);
	bst.add(15);
	bst.add(14);
	bst.add(20);
	
	bst.rmv(8);
	
	REQUIRE(bst.isFound(8) == 0);
}

SCENARIO("infile")
{
	BinarySearchTree<int> bst;
	bst.infile("file.txt");
	REQUIRE(bst.count_(bst.root()) == 0);
}

SCENARIO("count")
{
	BinarySearchTree<int> bst;
	int count = 0;
	bst.insert(13);
	bst.insert(15);
	count = bst.count(bst.root());
	REQUIRE(count == 2);
}