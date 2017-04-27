#include <testclass.hpp>
#include <catch.hpp>

SCENARIO ("constructor"){
	BinarySearchTree<int> BST;
	REQUIRE(BST.root() == nullptr);
}

SCENARIO("findElement")
{
	BinarySearchTree<int> bst;
	bst.add(13);
	REQUIRE(bst.isFound(13) == 1);
	REQUIRE(bst.isFound(12) == 0);
}

SCENARIO("addElement")
{
	BinarySearchTree<int> bst;
	bst.add(13);
	bst.add(23);
	REQUIRE(bst.key() == 13);
	REQUIRE(bst.leftNode() == nullptr);
	REQUIRE(bst.rightNode() != nullptr);
}

SCENARIO("infile")
{
	BinarySearchTree<int> bst;
	bst.fileIn("filein.txt");
	REQUIRE(bst.count(bst.root()) == 0);
}
SCENARIO("removeNode")
{
	BinarySearchTree<int> bst;
    bst.add(13);
	bst.add(15);
	bst.add(25);
	bst.add(10);
	bst.remove(13);
	REQUIRE(bst.isFound(13) == 0);
}

SCENARIO("count")
{
	BinarySearchTree<int> bst;
	int count = 0;
	bst.add(13);
	bst.add(15);
	bst.add(25);
	count = bst.count(bst.root());
	REQUIRE(count == 3);
}