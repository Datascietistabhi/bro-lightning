#include "config.h"
#include <assert.h>
#include <common/amount.h>
#include <common/node_id.h>
#include <common/setup.h>
#include <common/status.c>
#include <common/status_levels.h>
#include <common/wireaddr.c>
#include <connectd/netaddress.c>
#include <stdio.h>
#include <wire/wire.h>

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
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
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
/* Generated stub for daemon_conn_queue_length */
size_t daemon_conn_queue_length(const struct daemon_conn *dc UNNEEDED)
{ fprintf(stderr, "daemon_conn_queue_length called!\n"); abort(); }
/* Generated stub for daemon_conn_send */
void daemon_conn_send(struct daemon_conn *dc UNNEEDED, const u8 *msg UNNEEDED)
{ fprintf(stderr, "daemon_conn_send called!\n"); abort(); }
/* Generated stub for daemon_conn_sync_flush */
bool daemon_conn_sync_flush(struct daemon_conn *dc UNNEEDED)
{ fprintf(stderr, "daemon_conn_sync_flush called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_bool */
bool fromwire_bool(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bool called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_peektype */
int fromwire_peektype(const u8 *cursor UNNEEDED)
{ fprintf(stderr, "fromwire_peektype called!\n"); abort(); }
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
/* Generated stub for is_msg_for_gossipd */
bool is_msg_for_gossipd(const u8 *cursor UNNEEDED)
{ fprintf(stderr, "is_msg_for_gossipd called!\n"); abort(); }
/* Generated stub for peer_wire_name */
const char *peer_wire_name(int e UNNEEDED)
{ fprintf(stderr, "peer_wire_name called!\n"); abort(); }
/* Generated stub for send_backtrace */
void send_backtrace(const char *why UNNEEDED)
{ fprintf(stderr, "send_backtrace called!\n"); abort(); }
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
/* Generated stub for towire_status_fail */
u8 *towire_status_fail(const tal_t *ctx UNNEEDED, enum status_failreason failreason UNNEEDED, const wirestring *desc UNNEEDED)
{ fprintf(stderr, "towire_status_fail called!\n"); abort(); }
/* Generated stub for towire_status_io */
u8 *towire_status_io(const tal_t *ctx UNNEEDED, enum log_level iodir UNNEEDED, const struct node_id *peer UNNEEDED, const wirestring *who UNNEEDED, const u8 *data UNNEEDED)
{ fprintf(stderr, "towire_status_io called!\n"); abort(); }
/* Generated stub for towire_status_log */
u8 *towire_status_log(const tal_t *ctx UNNEEDED, enum log_level level UNNEEDED, const struct node_id *peer UNNEEDED, const wirestring *entry UNNEEDED)
{ fprintf(stderr, "towire_status_log called!\n"); abort(); }
/* Generated stub for towire_status_version */
u8 *towire_status_version(const tal_t *ctx UNNEEDED, const wirestring *version UNNEEDED)
{ fprintf(stderr, "towire_status_version called!\n"); abort(); }
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
/* Generated stub for version */
const char *version(void)
{ fprintf(stderr, "version called!\n"); abort(); }
/* Generated stub for wire_sync_write */
bool wire_sync_write(int fd UNNEEDED, const void *msg TAKES UNNEEDED)
{ fprintf(stderr, "wire_sync_write called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int main(int argc, char *argv[])
{
	struct wireaddr wa;
	const char *err;

	common_setup(argv[0]);

	// start with IPv4
	parse_wireaddr("0.0.0.0", &wa, DEFAULT_PORT, NULL, &err);
	assert(!IsValid(&wa));
	assert(IsIPv4(&wa));
	assert(!IsIPv6(&wa));
	parse_wireaddr("255.255.255.255", &wa, DEFAULT_PORT, NULL, &err);
	assert(!IsValid(&wa));
	assert(IsIPv4(&wa));
	assert(!IsIPv6(&wa));

	parse_wireaddr("127.0.0.1", &wa, DEFAULT_PORT, NULL, &err);
	assert(IsValid(&wa));
	assert(IsIPv4(&wa));
	assert(!IsIPv6(&wa));
	assert(IsLocal(&wa));
	assert(address_routable(&wa, true));
	assert(!address_routable(&wa, false));

	parse_wireaddr("0.1.2.3", &wa, DEFAULT_PORT, NULL, &err);
	assert(IsValid(&wa));
	assert(IsIPv4(&wa));
	assert(!IsIPv6(&wa));
	assert(IsLocal(&wa));
	assert(address_routable(&wa, true));
	assert(!address_routable(&wa, false));

	parse_wireaddr("10.0.21.42", &wa, DEFAULT_PORT, NULL, &err);
	assert(IsValid(&wa));
	assert(IsIPv4(&wa));
	assert(!IsIPv6(&wa));
	assert(!IsLocal(&wa));
	assert(IsRFC1918(&wa));
	assert(!address_routable(&wa, true));
	assert(!address_routable(&wa, false));

	parse_wireaddr("192.168.123.4", &wa, DEFAULT_PORT, NULL, &err);
	assert(IsValid(&wa));
	assert(IsIPv4(&wa));
	assert(!IsIPv6(&wa));
	assert(!IsLocal(&wa));
	assert(IsRFC1918(&wa));
	assert(!address_routable(&wa, true));
	assert(!address_routable(&wa, false));

	parse_wireaddr("1.2.3.4", &wa, DEFAULT_PORT, NULL, &err);
	assert(IsValid(&wa));
	assert(IsIPv4(&wa));
	assert(!IsIPv6(&wa));
	assert(!IsLocal(&wa));
	assert(address_routable(&wa, true));
	assert(address_routable(&wa, false));

	// now IPv6 stuff
	parse_wireaddr("2142:DEAD:beef::1", &wa, DEFAULT_PORT, NULL, &err);
	assert(IsValid(&wa));
	assert(!IsIPv4(&wa));
	assert(IsIPv6(&wa));
	assert(!IsLocal(&wa));
	assert(address_routable(&wa, true));
	assert(address_routable(&wa, false));

	parse_wireaddr("0::0", &wa, DEFAULT_PORT, NULL, &err);
	assert(!IsValid(&wa));
	assert(!IsIPv4(&wa));
	assert(IsIPv6(&wa));

	parse_wireaddr("2001:db8::1", &wa, DEFAULT_PORT, NULL, &err);
	assert(!IsValid(&wa));
	assert(!IsIPv4(&wa));
	assert(IsIPv6(&wa));
}
