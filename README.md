# DROT13 - Double ROT-13 encryption

When ROT-13 encryption isn't secure enough, look no further than DOUBLE ROT-13.
This C library contains functions for encoding and decoding. See test.c for
example of use.

## Usage

#### drot13_encode()

Pass in your string and it will return a pointer to a newly allocated string
containing the encryped data.

char *drot13_encode(const char *str);

#### drot13_decode()

Pass in an drot13 encrypted string and it will return a pointer the plain text
string.

char *drot13_decode(const char *str);


## Legality

A number of nations, in particular the U.S., restrict the use or export
of cryptography. If you are potentially subject to such restrictions
you should seek competent professional legal advice before attempting to
develop or distribute cryptographic code.