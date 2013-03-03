
// Python includes
#include <Python.h>

// STD includes
#include <stdio.h>

//-----------------------------------------------------------------------------
static PyObject * example_hello(PyObject *self, PyObject *args)
{
  // Unpack a string from the arguments
  const char *strArg;
  if (!PyArg_ParseTuple(args, "s", &strArg))
    return NULL;

  // Print message and return None
  printf("Hello %s :)\n", strArg);
  Py_RETURN_NONE;
}

//-----------------------------------------------------------------------------
static PyObject * example_elevation(PyObject *self, PyObject *args)
{
  // Return an integer
  int size = 21463;
  return Py_BuildValue("i", size);
}

//-----------------------------------------------------------------------------
static PyMethodDef example_methods[] = {
  {"hello",  example_hello, METH_VARARGS,
    "Prints back 'Hello <param>', for example example: example.hello('you')"},
  {"size",  example_elevation, METH_VARARGS,
    "Returns elevation of Nevado Sajama."},
  {NULL, NULL, 0, NULL}        /* Sentinel */
};

//-----------------------------------------------------------------------------
PyMODINIT_FUNC initexample(void)
{
  (void) Py_InitModule("example", example_methods);
}
