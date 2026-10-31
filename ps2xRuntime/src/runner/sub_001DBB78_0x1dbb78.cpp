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

// Function: sub_001DBB78
// Address: 0x1dbb78 - 0x1dbee0
void sub_001DBB78_0x1dbb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBB78_0x1dbb78");
#endif

    ctx->pc = 0x1dbb78u;

    // 0x1dbb78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1dbb7c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1dbb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1dbb80: 0xc440edf8  lwc1        $f0, -0x1208($v0)
    ctx->pc = 0x1dbb80u;
    { uint32_t bits = FAST_READ32(0x50EDF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbb84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1dbb88: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1dbb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1dbb8c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1dbb8cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1dbb90: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1dbb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1dbb94: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1dbb94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x1dbb98: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1dbb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1dbb9c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x1dbb9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x1dbba0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1dbba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1dbba4: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x1dbba4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
    // 0x1dbba8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dbba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dbbac: 0x3c0b0063  lui         $t3, 0x63
    ctx->pc = 0x1dbbacu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)99 << 16));
    // 0x1dbbb0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1dbbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1dbbb4: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x1dbbb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
    // 0x1dbbb8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1dbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1dbbbc: 0x3c0a0063  lui         $t2, 0x63
    ctx->pc = 0x1dbbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)99 << 16));
    // 0x1dbbc0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1dbbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1dbbc4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1dbbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1dbbc8: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x1dbbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x1dbbcc: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1dbbccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    // 0x1dbbd0: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x1dbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1dbbd4: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1dbbd4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    // 0x1dbbd8: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1dbbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1dbbdc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1dbbdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1dbbe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dbbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dbbe4: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1dbbe4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x1dbbe8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1dbbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1dbbec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dbbecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dbbf0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1dbbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1dbbf4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1dbbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1dbbf8: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x1dbbf8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbbfc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1dbbfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dbc00: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x1dbc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
    // 0x1dbc04: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1dbc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1dbc08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dbc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbc0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc10: 0x46130001  sub.s       $f0, $f0, $f19
    ctx->pc = 0x1dbc10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[19]);
    // 0x1dbc14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1dbc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1dbc18: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x1dbc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1dbc1c: 0xe442ee54  swc1        $f2, -0x11AC($v0)
    ctx->pc = 0x1dbc1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE54u, _value); } while (0); }
    // 0x1dbc20: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1dbc20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc24: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1dbc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1dbc28: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1dbc28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1dbc2c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1dbc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1dbc30: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1dbc30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc34: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1dbc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
    // 0x1dbc38: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1dbc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1dbc3c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1dbc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1dbc40: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1dbc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc44: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1dbc48: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1dbc48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1dbc4c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1dbc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1dbc50: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1dbc50u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc54: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1dbc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
    // 0x1dbc58: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1dbc58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1dbc5c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1dbc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1dbc60: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc64: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1dbc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1dbc68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dbc68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dbc6c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1dbc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1dbc70: 0x3c190051  lui         $t9, 0x51
    ctx->pc = 0x1dbc70u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc74: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1dbc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1dbc78: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1dbc78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1dbc7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1dbc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1dbc80: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc84: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1dbc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1dbc88: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1dbc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dbc8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1dbc90: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x1dbc94: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1dbc94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1dbc98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dbc98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dbc9c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1dbca0: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1dbca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1dbca4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1dbca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1dbca8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1dbca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1dbcac: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1dbcacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1dbcb0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1dbcb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dbcb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dbcb8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1dbcb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1dbcbc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1dbcbcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1dbcc0: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x1dbcc4: 0x34218b44  ori         $at, $at, 0x8B44
    ctx->pc = 0x1dbcc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35652);
    // 0x1dbcc8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1dbcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1dbccc: 0x33080002  andi        $t0, $t8, 0x2
    ctx->pc = 0x1dbcccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2);
    // 0x1dbcd0: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1dbcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1dbcd4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1dbcd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1dbcd8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1dbcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1dbcdc: 0x3c013f41  lui         $at, 0x3F41
    ctx->pc = 0x1dbcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16193 << 16));
    // 0x1dbce0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1dbce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1dbce4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dbce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dbce8: 0x3c013ef3  lui         $at, 0x3EF3
    ctx->pc = 0x1dbce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16115 << 16));
    // 0x1dbcec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dbcecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1dbcf0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1dbcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1dbcf4: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x1dbcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x1dbcf8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1dbcf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1dbcfc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1dbcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1dbd00: 0xe5215360  swc1        $f1, 0x5360($t1)
    ctx->pc = 0x1dbd00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635360u, _value); } while (0); }
    // 0x1dbd04: 0xe5405364  swc1        $f0, 0x5364($t2)
    ctx->pc = 0x1dbd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635364u, _value); } while (0); }
    // 0x1dbd08: 0xe4e8ee10  swc1        $f8, -0x11F0($a3)
    ctx->pc = 0x1dbd08u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE10u, _value); } while (0); }
    // 0x1dbd0c: 0xe4c6ee18  swc1        $f6, -0x11E8($a2)
    ctx->pc = 0x1dbd0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE18u, _value); } while (0); }
    // 0x1dbd10: 0xe4a5ee30  swc1        $f5, -0x11D0($a1)
    ctx->pc = 0x1dbd10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE30u, _value); } while (0); }
    // 0x1dbd14: 0xe484ee38  swc1        $f4, -0x11C8($a0)
    ctx->pc = 0x1dbd14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE38u, _value); } while (0); }
    // 0x1dbd18: 0xe463ee44  swc1        $f3, -0x11BC($v1)
    ctx->pc = 0x1dbd18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE44u, _value); } while (0); }
    // 0x1dbd1c: 0xe452edfc  swc1        $f18, -0x1204($v0)
    ctx->pc = 0x1dbd1cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EDFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EDFCu, _value); } while (0); }
    // 0x1dbd20: 0xe5d25350  swc1        $f18, 0x5350($t6)
    ctx->pc = 0x1dbd20u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635350u, _value); } while (0); }
    // 0x1dbd24: 0xe5efee00  swc1        $f15, -0x1200($t7)
    ctx->pc = 0x1dbd24u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE00u, _value); } while (0); }
    // 0x1dbd28: 0xe5b25354  swc1        $f18, 0x5354($t5)
    ctx->pc = 0x1dbd28u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635354u, _value); } while (0); }
    // 0x1dbd2c: 0xe7d0ee04  swc1        $f16, -0x11FC($fp)
    ctx->pc = 0x1dbd2cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE04u, _value); } while (0); }
    // 0x1dbd30: 0xe5925358  swc1        $f18, 0x5358($t4)
    ctx->pc = 0x1dbd30u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635358u, _value); } while (0); }
    // 0x1dbd34: 0xe6f1ee08  swc1        $f17, -0x11F8($s7)
    ctx->pc = 0x1dbd34u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE08u, _value); } while (0); }
    // 0x1dbd38: 0xe561535c  swc1        $f1, 0x535C($t3)
    ctx->pc = 0x1dbd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x63535Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63535Cu, _value); } while (0); }
    // 0x1dbd3c: 0xe68eee14  swc1        $f14, -0x11EC($s4)
    ctx->pc = 0x1dbd3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE14u, _value); } while (0); }
    // 0x1dbd40: 0xe6adee1c  swc1        $f13, -0x11E4($s5)
    ctx->pc = 0x1dbd40u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE1Cu, _value); } while (0); }
    // 0x1dbd44: 0xe66cee28  swc1        $f12, -0x11D8($s3)
    ctx->pc = 0x1dbd44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE28u, _value); } while (0); }
    // 0x1dbd48: 0xe6cbee34  swc1        $f11, -0x11CC($s6)
    ctx->pc = 0x1dbd48u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE34u, _value); } while (0); }
    // 0x1dbd4c: 0xe72aee3c  swc1        $f10, -0x11C4($t9)
    ctx->pc = 0x1dbd4cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE3Cu, _value); } while (0); }
    // 0x1dbd50: 0xe609ee40  swc1        $f9, -0x11C0($s0)
    ctx->pc = 0x1dbd50u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE40u, _value); } while (0); }
    // 0x1dbd54: 0xe627ee50  swc1        $f7, -0x11B0($s1)
    ctx->pc = 0x1dbd54u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EE50u, _value); } while (0); }
    // 0x1dbd58: 0x1100002f  beqz        $t0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DBD58u;
    {
        const bool branch_taken_0x1dbd58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD58u;
        // 0x1dbd5c: 0xe652ee58  swc1        $f18, -0x11A8($s2) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962776), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd58) {
            ctx->pc = 0x1DBE18u;
            goto label_1dbe18;
        }
    }
    ctx->pc = 0x1DBD60u;
    // 0x1dbd60: 0x33020004  andi        $v0, $t8, 0x4
    ctx->pc = 0x1dbd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
    // 0x1dbd64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBD64u;
    {
        const bool branch_taken_0x1dbd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD64u;
        // 0x1dbd68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd64) {
            ctx->pc = 0x1DBDB0u;
            goto label_1dbdb0;
        }
    }
    ctx->pc = 0x1DBD6Cu;
    // 0x1dbd6c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1dbd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1dbd70: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dbd70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1dbd74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dbd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dbd78: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1dbd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x1dbd7c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1dbd7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1dbd80: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1dbd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1dbd84: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x1dbd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x1dbd88: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1dbd88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1dbd8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dbd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbd90: 0x3c013ee8  lui         $at, 0x3EE8
    ctx->pc = 0x1dbd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16104 << 16));
    // 0x1dbd94: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1dbd94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1dbd98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dbd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbd9c: 0x3c013f67  lui         $at, 0x3F67
    ctx->pc = 0x1dbd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16231 << 16));
    // 0x1dbda0: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1dbda0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1dbda4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dbda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dbda8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DBDA8u;
    {
        const bool branch_taken_0x1dbda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDA8u;
        // 0x1dbdac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbda8) {
            ctx->pc = 0x1DBDF0u;
            goto label_1dbdf0;
        }
    }
    ctx->pc = 0x1DBDB0u;
label_1dbdb0:
    // 0x1dbdb0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1dbdb4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1dbdb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1dbdb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dbdb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dbdbc: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x1dbdc0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1dbdc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1dbdc4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1dbdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1dbdc8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1dbdcc: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1dbdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x1dbdd0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1dbdd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1dbdd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dbdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbdd8: 0x3c013ee8  lui         $at, 0x3EE8
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16104 << 16));
    // 0x1dbddc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1dbddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1dbde0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dbde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbde4: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1dbde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1dbde8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1dbde8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1dbdec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dbdecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1dbdf0:
    // 0x1dbdf0: 0xe660ee28  swc1        $f0, -0x11D8($s3)
    ctx->pc = 0x1dbdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294962728), bits); }
    // 0x1dbdf4: 0xe733ee3c  swc1        $f19, -0x11C4($t9)
    ctx->pc = 0x1dbdf4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294962748), bits); }
    // 0x1dbdf8: 0xe602ee40  swc1        $f2, -0x11C0($s0)
    ctx->pc = 0x1dbdf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962752), bits); }
    // 0x1dbdfc: 0xe623ee50  swc1        $f3, -0x11B0($s1)
    ctx->pc = 0x1dbdfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962768), bits); }
    // 0x1dbe00: 0xe684ee14  swc1        $f4, -0x11EC($s4)
    ctx->pc = 0x1dbe00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294962708), bits); }
    // 0x1dbe04: 0xe441ee68  swc1        $f1, -0x1198($v0)
    ctx->pc = 0x1dbe04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962792), bits); }
    // 0x1dbe08: 0xe644ee58  swc1        $f4, -0x11A8($s2)
    ctx->pc = 0x1dbe08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962776), bits); }
    // 0x1dbe0c: 0xe6a1ee1c  swc1        $f1, -0x11E4($s5)
    ctx->pc = 0x1dbe0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294962716), bits); }
    // 0x1dbe10: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DBE10u;
    {
        const bool branch_taken_0x1dbe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE10u;
        // 0x1dbe14: 0xe461ee6c  swc1        $f1, -0x1194($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962796), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe10) {
            ctx->pc = 0x1DBEB4u;
            goto label_1dbeb4;
        }
    }
    ctx->pc = 0x1DBE18u;
label_1dbe18:
    // 0x1dbe18: 0x33020008  andi        $v0, $t8, 0x8
    ctx->pc = 0x1dbe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)8);
    // 0x1dbe1c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DBE1Cu;
    {
        const bool branch_taken_0x1dbe1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe1c) {
            ctx->pc = 0x1DBE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBE1Cu;
            // 0x1dbe20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBEB8u;
            goto label_1dbeb8;
        }
    }
    ctx->pc = 0x1DBE24u;
    // 0x1dbe24: 0x33020004  andi        $v0, $t8, 0x4
    ctx->pc = 0x1dbe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
    // 0x1dbe28: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DBE28u;
    {
        const bool branch_taken_0x1dbe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe28) {
            ctx->pc = 0x1DBE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBE28u;
            // 0x1dbe2c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBEB8u;
            goto label_1dbeb8;
        }
    }
    ctx->pc = 0x1DBE30u;
    // 0x1dbe30: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1dbe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x1dbe34: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1dbe34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1dbe38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dbe38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe3c: 0x3c013ed7  lui         $at, 0x3ED7
    ctx->pc = 0x1dbe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16087 << 16));
    // 0x1dbe40: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1dbe40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1dbe44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dbe44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dbe48: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x1dbe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x1dbe4c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dbe4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1dbe50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dbe50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbe54: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x1dbe58: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1dbe58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1dbe5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dbe5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dbe60: 0x3c013ede  lui         $at, 0x3EDE
    ctx->pc = 0x1dbe60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16094 << 16));
    // 0x1dbe64: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1dbe64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1dbe68: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1dbe68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1dbe6c: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x1dbe6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x1dbe70: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1dbe70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1dbe74: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1dbe74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1dbe78: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x1dbe7c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1dbe7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1dbe80: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1dbe80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1dbe84: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1dbe88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dbe88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dbe8c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1dbe8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1dbe90: 0xe7c0ee04  swc1        $f0, -0x11FC($fp)
    ctx->pc = 0x1dbe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294962692), bits); }
    // 0x1dbe94: 0xe6e1ee08  swc1        $f1, -0x11F8($s7)
    ctx->pc = 0x1dbe94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294962696), bits); }
    // 0x1dbe98: 0xe5e2ee00  swc1        $f2, -0x1200($t7)
    ctx->pc = 0x1dbe98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294962688), bits); }
    // 0x1dbe9c: 0xe6c3ee34  swc1        $f3, -0x11CC($s6)
    ctx->pc = 0x1dbe9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294962740), bits); }
    // 0x1dbea0: 0xe604ee40  swc1        $f4, -0x11C0($s0)
    ctx->pc = 0x1dbea0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962752), bits); }
    // 0x1dbea4: 0xe652ee58  swc1        $f18, -0x11A8($s2)
    ctx->pc = 0x1dbea4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962776), bits); }
    // 0x1dbea8: 0xe625ee50  swc1        $f5, -0x11B0($s1)
    ctx->pc = 0x1dbea8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962768), bits); }
    // 0x1dbeac: 0xe666ee28  swc1        $f6, -0x11D8($s3)
    ctx->pc = 0x1dbeacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294962728), bits); }
    // 0x1dbeb0: 0xe6a7ee1c  swc1        $f7, -0x11E4($s5)
    ctx->pc = 0x1dbeb0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294962716), bits); }
label_1dbeb4:
    // 0x1dbeb4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1dbeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1dbeb8:
    // 0x1dbeb8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1dbeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dbebc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1dbebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dbec0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1dbec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dbec4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dbec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dbec8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1dbec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbecc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1dbeccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbed0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1dbed0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbed4: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x1dbed4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBED8u;
        // 0x1dbedc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBEE0u;
}
