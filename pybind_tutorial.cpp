#include <pybind11/pybind11.h>

namespace py = pybind11;

int fib(int n) {

	int prevprevN, prevN = 0, curN = 1;

	for (int i = 1; i < n; i++) {

		prevprevN = prevN;
		prevN = curN;
		curN = prevprevN + prevN;

	}
	return curN;
}

PYBIND11_MODULE(pybind_tutorial, m) {
	m.doc() = "pybind 11 tutorial: fibonacci number generator";
	m.def("fib", &fib, "A function which calculates the nth fibonacci number");
}
