#ifndef HASHBLOCK_H
#define HASHBLOCK_H

#include "uint256.h"
#include "uint256_t.h"
#include "sph_blake.h"
#include "sph_bmw.h"
#include "sph_groestl.h"
#include "sph_jh.h"
#include "sph_keccak.h"
#include "sph_skein.h"
#include "sph_luffa.h"
#include "sph_cubehash.h"
#include "sph_shavite.h"
#include "sph_simd.h"
#include "sph_echo.h"
#include "sph_hamsi.h"
#include "sph_fugue.h"

#ifndef QT_NO_DEBUG
#include <string>
#endif

#ifdef GLOBALDEFINED
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL sph_blake512_context     z_blake;
GLOBAL sph_bmw512_context       z_bmw;
GLOBAL sph_groestl512_context   z_groestl;
GLOBAL sph_jh512_context        z_jh;
GLOBAL sph_keccak512_context    z_keccak;
GLOBAL sph_skein512_context     z_skein;
GLOBAL sph_luffa512_context     z_luffa;
GLOBAL sph_cubehash512_context  z_cubehash;
GLOBAL sph_shavite512_context   z_shavite;
GLOBAL sph_simd512_context      z_simd;
GLOBAL sph_echo512_context      z_echo;
GLOBAL sph_hamsi512_context      z_hamsi;
GLOBAL sph_fugue512_context      z_fugue;

#define fillz() do { \
    sph_blake512_init(&z_blake); \
    sph_bmw512_init(&z_bmw); \
    sph_groestl512_init(&z_groestl); \
    sph_jh512_init(&z_jh); \
    sph_keccak512_init(&z_keccak); \
    sph_skein512_init(&z_skein); \
    sph_luffa512_init(&z_luffa); \
    sph_cubehash512_init(&z_cubehash); \
    sph_shavite512_init(&z_shavite); \
    sph_simd512_init(&z_simd); \
    sph_echo512_init(&z_echo); \
    sph_hamsi512_init(&z_hamsi); \
    sph_fugue512_init(&z_fugue); \
} while (0)


#define ZBLAKE (memcpy(&ctx_blake, &z_blake, sizeof(z_blake)))
#define ZBMW (memcpy(&ctx_bmw, &z_bmw, sizeof(z_bmw)))
#define ZGROESTL (memcpy(&ctx_groestl, &z_groestl, sizeof(z_groestl)))
#define ZJH (memcpy(&ctx_jh, &z_jh, sizeof(z_jh)))
#define ZKECCAK (memcpy(&ctx_keccak, &z_keccak, sizeof(z_keccak)))
#define ZSKEIN (memcpy(&ctx_skein, &z_skein, sizeof(z_skein)))
#define ZHAMSI (memcpy(&ctx_hamsi, &z_hamsi, sizeof(z_hamsi)))
#define ZFUGUE (memcpy(&ctx_fugue, &z_fugue, sizeof(z_fugue)))

template<typename T1>
inline uint256 Hash9(const T1 pbegin, const T1 pend)

{
union
        {
   sph_blake512_context     ctx_blake;
    sph_bmw512_context       ctx_bmw;
    sph_groestl512_context   ctx_groestl;
    sph_jh512_context        ctx_jh;
    sph_keccak512_context    ctx_keccak;
    sph_skein512_context     ctx_skein;
    sph_luffa512_context     ctx_luffa;
    sph_cubehash512_context  ctx_cubehash;
    sph_shavite512_context   ctx_shavite;
    sph_simd512_context      ctx_simd;
    sph_echo512_context      ctx_echo;
    sph_hamsi512_context      ctx_hamsi;
    sph_fugue512_context      ctx_fugue;
   } CTX[1];


unsigned char *in;
unsigned	size;
unsigned char hash[sizeof(uint512)];

	in =(unsigned char *) pbegin;
	size=(pend - pbegin) * sizeof(pbegin[0]);
	if(!size) in=hash;


    sph_blake512_init(CTX);
    sph_blake512 (CTX,in,size);
    sph_blake512_close(CTX,hash);


    sph_bmw512_init(CTX);
    sph_bmw512 (CTX,hash,64);
    sph_bmw512_close(CTX,hash);

    sph_groestl512_init(CTX);
    sph_groestl512 (CTX,hash, 64);
    sph_groestl512_close(CTX,hash);

    sph_skein512_init(CTX);
    sph_skein512 (CTX,hash, 64);
    sph_skein512_close(CTX,hash);

    sph_jh512_init(CTX);
    sph_jh512 (CTX,hash, 64);
    sph_jh512_close(CTX,hash);

    sph_keccak512_init(CTX);
    sph_keccak512 (CTX,hash, 64);
    sph_keccak512_close(CTX,hash);

    sph_luffa512_init(CTX);
    sph_luffa512 (CTX,hash, 64);
    sph_luffa512_close(CTX,hash);

    sph_cubehash512_init(CTX);
    sph_cubehash512 (CTX,hash, 64);
    sph_cubehash512_close(CTX,hash);

    sph_shavite512_init(CTX);
    sph_shavite512(CTX,hash, 64);
    sph_shavite512_close(CTX,hash);

    sph_simd512_init(CTX);
    sph_simd512 (CTX,hash, 64);
    sph_simd512_close(CTX,hash);

    sph_echo512_init(CTX);
    sph_echo512 (CTX,hash, 64);
    sph_echo512_close(CTX,hash);

    sph_hamsi512_init(CTX);
    sph_hamsi512 (CTX,hash, 64);
    sph_hamsi512_close(CTX,hash);

    sph_fugue512_init(CTX);
    sph_fugue512 (CTX,hash, 64);
    sph_fugue512_close(CTX,hash);

return *((uint256 *) &(hash[0]));
//    return hash[12].trim256();
}






#endif // HASHBLOCK_H
