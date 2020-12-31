#include <stdio.h>

void layer_helper (int n, int it) {
	if (n == -1) {
		printf ("+\n");
		return;
	}
	if (it == 0) {
		printf ("+");
	}
	if (it == n) {
		printf ("|");
	} else if (n != 0) {
		printf ("-");
	}
	if (it == 2 * n) {
		printf ("+\n");
		return;
	}
	layer_helper (n, it + 1);
}
void layer (int n) {
	layer_helper (n, 0);
}

void spaces (int n, int it) {
	if (it < n - 1) {
		printf (" ");
		spaces (n, it + 1);
	}
}

void tree_helper (int n, int it) {
	if (it < n) {
		spaces (n, it);
		layer (it - 1);
		tree_helper (n, it + 1);
	}
}
void tree (int n) {
	tree_helper (n, 0);
}

int main () {
	tree (0);

	return 0;
}