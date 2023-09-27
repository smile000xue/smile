


multi(A, B)

Let C be a new n¡Án matrix

if n == 1
c11 = a11 * b11

else partition A, B and C
C11 = multi(A11, B11) + multi(A12, B21);
C12 = multi(A11, B12) + multi(A12, B22);
C21 = multi(A21, B11) + multi(A22, B21);
C22 = multi(A21, B12) + multi(A22, B22);

return C
