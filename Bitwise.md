# Bitwise 

In computer programming, a **bitwise operation** operates on a bit string, a bit array or a bunary numeral.
But bit string and bit array is interchangeable term here.

Here are some useful links on learning more on Bitwise operations:
1. [Erichto YouTube](https://www.youtube.com/watch?v=xXKL9YBWgCY&t=615)
2. [Erichto Blog in code forces](https://codeforces.com/blog/entry/73490)
3. [Addition advaced article](https://www.topcoder.com/thrive/articles/A%20bit%20of%20fun:%20fun%20with%20bits) 

## Bit shifts
The bit shifts are sometimes considered bitwise operations, because they treat a value as a series of bits rather than as a numerical quantity.
In these operations, the digits are moved, or shifted, to the left or right. 
Registers in a computer processor have a fixed width, so some bits will be "shifted out" of the register at one end, while the same number of bits are "shifted in" from the other end;
the differences between bit shift operators lie in how they determine the values of the shifted-in bits.
## Bit Addressing
If the width of the register (frequently 32 or even 64) is larger than the number of bits (usually 8) of the smallest addressable unit (atomic element), frequently called byte, the shift operations induce an addressing scheme from the bytes to the bits. Thereby the orientations "left" and "right" are taken from the standard writing of numbers in a place-value notion, such that a left shift increases and right shift decreased the value of the number - if the left digits are read first, this makes up a big-endian orientation. 
Disregarding the boundary effects at both ends of the register, arithmetic and logical shift operations behave tha same, and a shift by 8 bit positions transports the bit pattern by 1 byte position in the following way:
- Little-endian ordering:
    - a left shift by 8 position increases the byte address by 1.
    - a right shift by 8 position decreases the byte address by 1.
- Big-endian ordering: 
    - a left shift by 8 positions decreases the byte address by 1.
    - a right shift by 8 positions increases the byte by 1.

## Arithmetic Shift
In an arithmetic shift, the bits that are shifted out of either end are discarded. In a left arithmetic shift, zeros are shifted in on the right, in a right arithmetic shift, the sign bit (the MSB (most significant bit) in two's complements) is shifted in on theleft, thus preserving the sign of the operand. 

I need to learn again about the most and the least significant bits.
