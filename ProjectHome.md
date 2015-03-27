LTensor is a high performance C++ Tensor Library based on indicial notation.

**AUTHORS**

Dr. Alejandro C. Limache

Eng. Sebastian Rojas Fredini

International Center of Computational Methods in Engineering (CIMEC)


**WHY THIS LIBRARY MIGHT BE USEFUL TO YOU**

To do fast matrix vector operations like:

**d = A**`*`**b + c**

or one with the transposed of A like:

**d = A<sup>T</sup>**`*`**b + c**.

one usually needs to write them in C/FORTRAN 77 (C-tran) code style for performance
reasons. This means that one needs to use several "for loops" in order to do the
products and sums component-wise. Although computationally efficient, this type of programming style is error prone and makes codes lenghtier and hard to be debugged
(see for example http://www.gps.caltech.edu/~walter/FTensor/FTensor.pdf).
On the other hand Matlab code style or Object Oriented code style may be more compact
but they are much much slower.
With our LTensor library we get the performance of a C-tran code style
combined with the code clarity and simplicity given by indicial tensor notation.

Then, if the matrix-vector operations shown above are expressed
in indicial tensor notation (i.e.

`d_i = A_ik * b_k + c_i;`

and


`d_i = A_ki * b_k + c_i;`


To perform such matrix vector operations with LTensor, one just needs to write in the .cpp the following "exactly replicate" code:

{# First declare dummy indices i,j,k, etc.}

`Index<'i'> i; Index<'j'> j; Index<'k'> k;`

{# Now just replicate the indicial tensor expressions}

`d(i) = A(i,k) * b(k) + c(i);`

`d(i) = A(k,i) * b(k) + c(i);` , respectively.


**ANOTHER EXAMPLE**

A double contraction of a 4th-order tensor C with a 2nd-order tensor E can be written simply as:

`Sigma(i,j)=C(i,j,k,l)*E(k,l);` (Sigma 2nd-order tensor, for example, the Cauchy stress tensor)

The library can detect on compile time, incorrect usage of index convention, for example:

`Sigma(i,k)=C(i,j,k,l)*E(k,l);` (compile error!!!)


**FUNCTIONALITY**

The most important features provided by the C++ Tensor Library are that: you can
code tensor operations exactly in the same way you would do in a piece of paper, it uses index/indicial tensor notation, it is easy to use and supports Einstein summation index convention.

It supports tensors up to order 4, including vectors (rank = 1, tensors) and matrices (rank = 2, tensors). It is easy to use, having a functionality similar to the matrices and vectors provided by commercial packages (like matlab) or free software (like Octave). However, it is highly optimized for performance, being completely written in C++, using expression templates.


**IS IT HARD TO USE?**

Since the library is completely written using expression templates,
it DOES NOT require to be pre-compiled (neither statically nor dynamically).
This means that it is not a .dll or .so, and then, one just has to include the .h library
file (#include /ltensor/Ltensor.h) in your .cpp and start using it.


**SUPPORT**

Do not hesitate to contact us in case you have questions about
how to use the Library or how to write your code to do more tensor operations.


**Copyright**

The library is free (under the GPL) for non-commercial use. Its use is
prohibited in any kind of commercial software without the written consent of the authors.

**IMPORTANT NOTICE**

The only condition that the authors ask to LTensor's users is the following:
If used in codes which produce results reported in papers, articles, lectures
or congress presentations, the authors of those publications MUST properly
cite/reference the library and the authors of the library, everytime those
results are reported.
Not Doing so will be considered an illegal use of the Library.

The Library can be cited as:
A.C. Limache and P.S. Rojas Fredini, "LTensor: A high performance C++ Tensor Library based on Index Notation",  http://code.google.com/p/ltensor/.

See the Copyright notice included in the Library for more details.

**Contributions**

Comments and Contributions for improving the library functionality are welcome.
