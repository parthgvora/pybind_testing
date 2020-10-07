#include <pybind11/pybind11.h>
#include "fib.hpp"

namespace py = pybind11;

using namespace pybind11::literals;

PYBIND11_PLUGIN(wrap) {
    py::module m("wrap", "pybind11 example plugin");
    m.def("fib", &fib, "fibonnaci");
    return m.ptr();
}
