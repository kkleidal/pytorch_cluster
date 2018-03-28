#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "generic/serial_cuda.c"
#else

void cluster_(serial)(THCudaLongTensor *output, THCudaLongTensor *row, THCudaLongTensor *col, THCTensor *weight, THCudaLongTensor *degree) {
  cluster_kernel_(serial)(state, output, row, col, weight, degree);
}

#endif

