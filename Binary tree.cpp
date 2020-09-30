//通过后续遍历以及中序遍历结果来还原二叉树
#include "binarytree.h"

int main()
{
	unsigned char pre_seq[] = { 1, 3, 2, 5, 7, 6, 4 };
	unsigned char in_seq[] = { 1, 2, 3, 4, 5, 6, 7 };
	link root = init(pre_seq, in_seq, 6);
	pre_order(root, print_item);
	putchar('\n');
	in_order(root, print_item);
	putchar('\n');
	post_order(root, print_item);
	putchar('\n');
	printf("count=%d depth=%d\n", count(root),
		depth(root));
	destroy(root);
	return 0;
}
void print_item(link p)
{
	printf("%d", p->item);
}
