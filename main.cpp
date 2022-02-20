#include <boost/lexical_cast.hpp>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <memory>

#include "algo/solution.h"
#include "algo/binary_tree.h"


int main(int argc, char *argv[]) {
	BaseSolution* s = new BinaryTreeSolution();
	s->solve();
}