#include "linked_list.h"

int main(int argc, char* argv[]){
	node* test_list = create_list();

	print_list(test_list);

	int n = list_length(test_list);
	printf("length of the list is %d\n", n);

	node* sorted_list = sort_list(test_list);
	printf("after sort\n");
	print_list(sorted_list);


	node* deleted_list = delete_node(sorted_list, 1);
	printf("after delete\n");
	print_list(deleted_list);

	node* inserted_list = insert_node(deleted_list, 5);
	printf("after insert\n");
	print_list(inserted_list);

	return 0;
}

