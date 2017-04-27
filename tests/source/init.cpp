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
	REQUIRE(bst.key() == 13);
	REQUIRE(bst.leftNode() == nullptr);
	REQUIRE(bst.rightNode() == nullptr);
}

SCENARIO("findElement")
{
	BinarySearchTree<int> bst;
	bst.add(13);
	REQUIRE(bst.isFound(13) == 1);
}

SCENARIO("infile")
{
	BinarySearchTree<int> bst;
	bst.fileIn("filein.txt");
	REQUIRE(bst.count(bst.root()) == 0);
}

SCENARIO("count")
{
	BinarySearchTree<int> bst;
	int count = 0;
	bst.add(13);
	bst.add(15);
	count = bst.count(bst.root());
	REQUIRE(count == 2);
}