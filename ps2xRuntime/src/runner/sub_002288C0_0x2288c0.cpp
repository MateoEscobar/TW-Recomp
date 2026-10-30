#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002288C0
// Address: 0x2288c0 - 0x228a70
void sub_002288C0_0x2288c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002288C0_0x2288c0");
#endif

    ctx->pc = 0x2288c0u;

    // 0x2288c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2288c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2288c4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2288c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2288c8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2288c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2288cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2288ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2288d0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x2288d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2288d4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2288d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2288d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2288d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2288dc: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x2288dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
    // 0x2288e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2288e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2288e4: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x2288e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2288e8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2288e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2288ec: 0x3900a  movz        $s2, $zero, $v1
    ctx->pc = 0x2288ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2288f0: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x2288f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2288f4: 0x258c19a0  addiu       $t4, $t4, 0x19A0
    ctx->pc = 0x2288f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 6560));
    // 0x2288f8: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x2288f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2288fc: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2288fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x228900: 0x8fb400e0  lw          $s4, 0xE0($sp)
    ctx->pc = 0x228900u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x228904: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x228904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x228908: 0x8faf00f0  lw          $t7, 0xF0($sp)
    ctx->pc = 0x228908u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22890c: 0x50682a  slt         $t5, $v0, $s0
    ctx->pc = 0x22890cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x228910: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x228910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x228914: 0x54702a  slt         $t6, $v0, $s4
    ctx->pc = 0x228914u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x228918: 0x8fb300e8  lw          $s3, 0xE8($sp)
    ctx->pc = 0x228918u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22891c: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x22891cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x228920: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x228920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x228924: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x228924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228928: 0x4fb02a  slt         $s6, $v0, $t7
    ctx->pc = 0x228928u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x22892c: 0x8fb90088  lw          $t9, 0x88($sp)
    ctx->pc = 0x22892cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x228930: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x228930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x228934: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x228934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x228938: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x228938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22893c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x22893cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228940: 0x7fb70000  sq          $s7, 0x0($sp)
    ctx->pc = 0x228940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
    // 0x228944: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x228944u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x228948: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x228948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22894c: 0x19c02a  slt         $t8, $zero, $t9
    ctx->pc = 0x22894cu;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x228950: 0xa487002c  sh          $a3, 0x2C($a0)
    ctx->pc = 0x228950u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 7));
    // 0x228954: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x228954u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228958: 0xa488002e  sh          $t0, 0x2E($a0)
    ctx->pc = 0x228958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 8));
    // 0x22895c: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x22895cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x228960: 0xa4850028  sh          $a1, 0x28($a0)
    ctx->pc = 0x228960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x228964: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x228968: 0xa486002a  sh          $a2, 0x2A($a0)
    ctx->pc = 0x228968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x22896c: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x22896cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x228970: 0xa08c0043  sb          $t4, 0x43($a0)
    ctx->pc = 0x228970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 12));
    // 0x228974: 0xd800a  movz        $s0, $zero, $t5
    ctx->pc = 0x228974u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x228978: 0xa4890034  sh          $t1, 0x34($a0)
    ctx->pc = 0x228978u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 9));
    // 0x22897c: 0xea00a  movz        $s4, $zero, $t6
    ctx->pc = 0x22897cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x228980: 0xa48a0030  sh          $t2, 0x30($a0)
    ctx->pc = 0x228980u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 10));
    // 0x228984: 0x16780a  movz        $t7, $zero, $s6
    ctx->pc = 0x228984u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x228988: 0xa48b0032  sh          $t3, 0x32($a0)
    ctx->pc = 0x228988u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 11));
    // 0x22898c: 0x338b80b  movn        $s7, $t9, $t8
    ctx->pc = 0x22898cu;
    if (GPR_U64(ctx, 24) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 25));
    // 0x228990: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x228990u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x228994: 0x2a2d0080  slti        $t5, $s1, 0x80
    ctx->pc = 0x228994u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x228998: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x228998u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22899c: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x22899cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2289a0: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x2289a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2289a4: 0x2a080002  slti        $t0, $s0, 0x2
    ctx->pc = 0x2289a4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2289a8: 0xe48f000c  swc1        $f15, 0xC($a0)
    ctx->pc = 0x2289a8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2289ac: 0x2a850065  slti        $a1, $s4, 0x65
    ctx->pc = 0x2289acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2289b0: 0xe4900010  swc1        $f16, 0x10($a0)
    ctx->pc = 0x2289b0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2289b4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2289b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2289b8: 0xe4910014  swc1        $f17, 0x14($a0)
    ctx->pc = 0x2289b8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2289bc: 0x2a660002  slti        $a2, $s3, 0x2
    ctx->pc = 0x2289bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2289c0: 0xe4920018  swc1        $f18, 0x18($a0)
    ctx->pc = 0x2289c0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2289c4: 0x29e20002  slti        $v0, $t7, 0x2
    ctx->pc = 0x2289c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2289c8: 0xe493001c  swc1        $f19, 0x1C($a0)
    ctx->pc = 0x2289c8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2289cc: 0xed880a  movz        $s1, $a3, $t5
    ctx->pc = 0x2289ccu;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
    // 0x2289d0: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x2289d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2289d4: 0x65a00a  movz        $s4, $v1, $a1
    ctx->pc = 0x2289d4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x2289d8: 0xa0970036  sb          $s7, 0x36($a0)
    ctx->pc = 0x2289d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 23));
    // 0x2289dc: 0x2a2780a  movz        $t7, $s5, $v0
    ctx->pc = 0x2289dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 21));
    // 0x2289e0: 0x2a8800a  movz        $s0, $s5, $t0
    ctx->pc = 0x2289e0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    // 0x2289e4: 0x2a6980a  movz        $s3, $s5, $a2
    ctx->pc = 0x2289e4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
    // 0x2289e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2289e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2289ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2289ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2289f0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2289f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2289f4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2289f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2289f8: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2289f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2289fc: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x2289fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x228a00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x228a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228a04: 0xa0920037  sb          $s2, 0x37($a0)
    ctx->pc = 0x228a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 18));
    // 0x228a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228a0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x228a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228a10: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x228a10u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x228a14: 0xa0910038  sb          $s1, 0x38($a0)
    ctx->pc = 0x228a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 17));
    // 0x228a18: 0xa0900039  sb          $s0, 0x39($a0)
    ctx->pc = 0x228a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 16));
    // 0x228a1c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x228a1cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x228a20: 0xa0940040  sb          $s4, 0x40($a0)
    ctx->pc = 0x228a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 20));
    // 0x228a24: 0xa0930041  sb          $s3, 0x41($a0)
    ctx->pc = 0x228a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 19));
    // 0x228a28: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x228a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228a2c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x228a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228a30: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x228a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228a34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x228a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228a38: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x228a38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228a3c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x228a3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a40: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x228a40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228a44: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x228a44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228a48: 0xa08f0042  sb          $t7, 0x42($a0)
    ctx->pc = 0x228a48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 15));
    // 0x228a4c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x228a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x228a50: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x228a50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x228a54: 0xa083003b  sb          $v1, 0x3B($a0)
    ctx->pc = 0x228a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 59), (uint8_t)GPR_U32(ctx, 3));
    // 0x228a58: 0xa085003c  sb          $a1, 0x3C($a0)
    ctx->pc = 0x228a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 5));
    // 0x228a5c: 0xa086003d  sb          $a2, 0x3D($a0)
    ctx->pc = 0x228a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 6));
    // 0x228a60: 0xa087003f  sb          $a3, 0x3F($a0)
    ctx->pc = 0x228a60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 63), (uint8_t)GPR_U32(ctx, 7));
    // 0x228a64: 0xa088003e  sb          $t0, 0x3E($a0)
    ctx->pc = 0x228a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 62), (uint8_t)GPR_U32(ctx, 8));
    // 0x228a68: 0x3e00008  jr          $ra
    ctx->pc = 0x228A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A68u;
        // 0x228a6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228A70u;
}
