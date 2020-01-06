#include "hello.h"

#include "crypto/cryptlib.h"
#include "crypto/sha.h"

#include <iostream>

void hello()
{
    using namespace CryptoPP;
    HexEncoder encoder(new FileSink(std::cout));

    std::string msg(hello_world);
    std::string digest;

    SHA1 hash;
    hash.Update((const byte*)msg.data(), msg.size());
    digest.resize(hash.DigestSize());
    hash.Final((byte*)&digest[0]);

    std::cout << "Message: " << msg << std::endl;

    std::cout << "Digest: ";
    StringSource(digest, true, new Redirector(encoder));
    std::cout << std::endl;
}
