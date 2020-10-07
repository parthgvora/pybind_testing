int fib(int n) {

	int prevprevN, prevN = 0, curN = 1;

	for (int i = 1; i < n; i++) {

		prevprevN = prevN;
		prevN = curN;
		curN = prevprevN + prevN;

	}
	return curN;
}
