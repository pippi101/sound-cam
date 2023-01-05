
#ifndef CROSS_CORRELATATION_H
#define CROSS_CORRELATATION_H

#include <complex>
#include <cstddef>
#include <span>
#include <vector>
#include <span>

#include <fftw3.h>

typedef float real_t;
typedef std::complex<real_t> Complex;
typedef std::vector<Complex> complex_vec_t;
typedef std::span<Complex> complex_span_t;

[[nodiscard]] fftwf_plan FFT(const complex_span_t in, complex_vec_t *out);
[[nodiscard]] fftwf_plan InvFFT(const complex_span_t in, complex_vec_t *out);

// Print a bunch of arrays for gnuplottability. X axis is index, multiple
// columns with the real part.
void PrintArray(FILE *out, const std::initializer_list<complex_span_t> &what);

#endif  // CROSS_CORRELATATION_H
