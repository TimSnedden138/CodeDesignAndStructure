#include"tForwardList.h"
int main() {
	tForwardList<int> link;
	link.push_front(4);
	link.pop_front();
	link.push_front(9);
	link.pop_front();
	link.push_front(57);
	std::cout << link.front()<< std::endl;
	return 0;
}