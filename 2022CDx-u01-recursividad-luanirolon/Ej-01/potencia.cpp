
unsigned int potencia(unsigned int base, unsigned int exp) {

    if (exp == 0) return 1;
    if (exp == 1) return base;
    return potencia(base, exp - 1) * base;
}
