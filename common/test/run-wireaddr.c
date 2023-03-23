#include "config.h"
#include <bitcoin/chainparams.h>
#include <common/amount.h>
#include <common/setup.h>
#include <stdio.h>

int simple_get_ln_port(const struct chainparams *params);

#define chainparams_get_ln_port simple_get_ln_port

#include "../wireaddr.c"

#define DEFAULT_PORT simple_get_ln_port(NULL)

int simple_get_ln_port(const struct chainparams *params UNNEEDED)
{
	return 9735;
}

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_div */
struct amount_sat amount_sat_div(struct amount_sat sat UNNEEDED, u64 div UNNEEDED)
{ fprintf(stderr, "amount_sat_div called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_mul */
bool amount_sat_mul(struct amount_sat *res UNNEEDED, struct amount_sat sat UNNEEDED, u64 mul UNNEEDED)
{ fprintf(stderr, "amount_sat_mul called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for b32_decode */
u8 *b32_decode(const tal_t *ctx UNNEEDED, const char *str UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "b32_decode called!\n"); abort(); }
/* Generated stub for b32_encode */
char *b32_encode(const tal_t *ctx UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "b32_encode called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_bool */
bool fromwire_bool(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bool called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_secp256k1_ecdsa_signature */
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
					secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for fromwire_sha256 */
void fromwire_sha256(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "fromwire_sha256 called!\n"); abort(); }
/* Generated stub for fromwire_tal_arrn */
u8 *fromwire_tal_arrn(const tal_t *ctx UNNEEDED,
		       const u8 **cursor UNNEEDED, size_t *max UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_tal_arrn called!\n"); abort(); }
/* Generated stub for fromwire_u16 */
u16 fromwire_u16(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u16 called!\n"); abort(); }
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u64 */
u64 fromwire_u64(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u64 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_u8_array */
void fromwire_u8_array(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_u8_array called!\n"); abort(); }
/* Generated stub for towire */
void towire(u8 **pptr UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "towire called!\n"); abort(); }
/* Generated stub for towire_bool */
void towire_bool(u8 **pptr UNNEEDED, bool v UNNEEDED)
{ fprintf(stderr, "towire_bool called!\n"); abort(); }
/* Generated stub for towire_secp256k1_ecdsa_signature */
void towire_secp256k1_ecdsa_signature(u8 **pptr UNNEEDED,
			      const secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "towire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for towire_sha256 */
void towire_sha256(u8 **pptr UNNEEDED, const struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "towire_sha256 called!\n"); abort(); }
/* Generated stub for towire_u16 */
void towire_u16(u8 **pptr UNNEEDED, u16 v UNNEEDED)
{ fprintf(stderr, "towire_u16 called!\n"); abort(); }
/* Generated stub for towire_u32 */
void towire_u32(u8 **pptr UNNEEDED, u32 v UNNEEDED)
{ fprintf(stderr, "towire_u32 called!\n"); abort(); }
/* Generated stub for towire_u64 */
void towire_u64(u8 **pptr UNNEEDED, u64 v UNNEEDED)
{ fprintf(stderr, "towire_u64 called!\n"); abort(); }
/* Generated stub for towire_u8 */
void towire_u8(u8 **pptr UNNEEDED, u8 v UNNEEDED)
{ fprintf(stderr, "towire_u8 called!\n"); abort(); }
/* Generated stub for towire_u8_array */
void towire_u8_array(u8 **pptr UNNEEDED, const u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "towire_u8_array called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int main(int argc, char *argv[])
{
	const char *err;
	struct wireaddr_internal addr, *expect = tal(NULL, struct wireaddr_internal);

	common_setup(argv[0]);
	/* Simple IPv4 address. */
	assert(parse_wireaddr_internal("127.0.0.1", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_WIREADDR;
	assert(parse_wireaddr("127.0.0.1:9735", &expect->u.wireaddr, 0, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* IPv4 address with port. */
	assert(parse_wireaddr_internal("127.0.0.1:1", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_WIREADDR;
	assert(parse_wireaddr("127.0.0.1:1", &expect->u.wireaddr, 0, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* Simple IPv6 address. */
	assert(parse_wireaddr_internal("::1", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_WIREADDR;
	assert(parse_wireaddr("::1", &expect->u.wireaddr, DEFAULT_PORT, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* IPv6 address with port. */
	assert(parse_wireaddr_internal("[::1]:1", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_WIREADDR;
	assert(parse_wireaddr("::1", &expect->u.wireaddr, 1, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* autotor address */
	assert(parse_wireaddr_internal("autotor:127.0.0.1", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_AUTOTOR;
	expect->u.torservice.port = DEFAULT_PORT;
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9051, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* autotor address with port */
	assert(parse_wireaddr_internal("autotor:127.0.0.1:9055", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_AUTOTOR;
	expect->u.torservice.port = DEFAULT_PORT;
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9055, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* autotor address with torport */
	assert(parse_wireaddr_internal("autotor:127.0.0.1/torport=9055", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_AUTOTOR;
	expect->u.torservice.port = 9055;
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9051, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* autotor address with port and torport */
	assert(parse_wireaddr_internal("autotor:127.0.0.1:9055/torport=10055", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_AUTOTOR;
	expect->u.torservice.port = 10055;
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9055, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* statictor address */
	assert(parse_wireaddr_internal("statictor:127.0.0.1", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_STATICTOR;
	expect->u.torservice.port = DEFAULT_PORT;
	memset(expect->u.torservice.blob, 0, sizeof(expect->u.torservice.blob));
	strcpy((char *)expect->u.torservice.blob, STATIC_TOR_MAGIC_STRING);
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9051, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* statictor address with port */
	assert(parse_wireaddr_internal("statictor:127.0.0.1:9055", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_STATICTOR;
	expect->u.torservice.port = DEFAULT_PORT;
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9055, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* statictor address with torport */
	assert(parse_wireaddr_internal("statictor:127.0.0.1/torport=9055", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_STATICTOR;
	expect->u.torservice.port = 9055;
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9051, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* statictor address with port and torport */
	assert(parse_wireaddr_internal("statictor:127.0.0.1:9055/torport=10055", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_STATICTOR;
	expect->u.torservice.port = 10055;
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9055, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* statictor address with port and torport and torblob */
	assert(parse_wireaddr_internal("statictor:127.0.0.1:9055/torport=10055/torblob=xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_STATICTOR;
	expect->u.torservice.port = 10055;
	/* This is actually nul terminated */
	memset(expect->u.torservice.blob, 'x', sizeof(expect->u.torservice.blob)-1);
	assert(parse_wireaddr("127.0.0.1", &expect->u.torservice.address, 9055, NULL, &err));
	assert(wireaddr_internal_eq(&addr, expect));

	/* local socket path */
	assert(parse_wireaddr_internal("/tmp/foo.sock", &addr, DEFAULT_PORT, false, false, false, &err));
	expect->itype = ADDR_INTERNAL_SOCKNAME;
	strcpy(expect->u.sockname, "/tmp/foo.sock");
	assert(wireaddr_internal_eq(&addr, expect));

	/* Unresolved */
	assert(!parse_wireaddr_internal("ozlabs.org", &addr, DEFAULT_PORT, false, false, false, &err));
	assert(streq(err, "Needed DNS, but lookups suppressed"));
	assert(parse_wireaddr_internal("ozlabs.org", &addr, DEFAULT_PORT, false, false, true, &err));
	expect->itype = ADDR_INTERNAL_FORPROXY;
	strcpy(expect->u.unresolved.name, "ozlabs.org");
	expect->u.unresolved.port = DEFAULT_PORT;
	assert(wireaddr_internal_eq(&addr, expect));

	/* Unresolved with port */
	assert(!parse_wireaddr_internal("ozlabs.org:1234", &addr, DEFAULT_PORT, false, false, false, &err));
	assert(streq(err, "Needed DNS, but lookups suppressed"));
	assert(parse_wireaddr_internal("ozlabs.org:1234", &addr, DEFAULT_PORT, false, false, true, &err));
	expect->itype = ADDR_INTERNAL_FORPROXY;
	strcpy(expect->u.unresolved.name, "ozlabs.org");
	expect->u.unresolved.port = 1234;
	assert(wireaddr_internal_eq(&addr, expect));

	tal_free(expect);
	common_shutdown();
}
