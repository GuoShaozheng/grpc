/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/lds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_LDS_PROTO_UPB_H_
#define ENVOY_API_V2_LDS_PROTO_UPB_H_

#include "upb/generated_util.h"
#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

/* Public Imports. */
#include "envoy/api/v2/listener.upb.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_LdsDummy;
typedef struct envoy_api_v2_LdsDummy envoy_api_v2_LdsDummy;
extern const upb_msglayout envoy_api_v2_LdsDummy_msginit;


/* envoy.api.v2.LdsDummy */

UPB_INLINE envoy_api_v2_LdsDummy *envoy_api_v2_LdsDummy_new(upb_arena *arena) {
  return (envoy_api_v2_LdsDummy *)upb_msg_new(&envoy_api_v2_LdsDummy_msginit, arena);
}
UPB_INLINE envoy_api_v2_LdsDummy *envoy_api_v2_LdsDummy_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_LdsDummy *ret = envoy_api_v2_LdsDummy_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_LdsDummy_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_LdsDummy_serialize(const envoy_api_v2_LdsDummy *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_LdsDummy_msginit, arena, len);
}



#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_LDS_PROTO_UPB_H_ */
