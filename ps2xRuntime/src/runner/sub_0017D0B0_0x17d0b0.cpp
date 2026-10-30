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

// Function: sub_0017D0B0
// Address: 0x17d0b0 - 0x17d338
void sub_0017D0B0_0x17d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D0B0_0x17d0b0");
#endif

    switch (ctx->pc) {
        case 0x17d118u: goto label_17d118;
        case 0x17d158u: goto label_17d158;
        case 0x17d204u: goto label_17d204;
        case 0x17d284u: goto label_17d284;
        case 0x17d290u: goto label_17d290;
        case 0x17d29cu: goto label_17d29c;
        case 0x17d2a8u: goto label_17d2a8;
        case 0x17d2b4u: goto label_17d2b4;
        case 0x17d2c0u: goto label_17d2c0;
        case 0x17d2ccu: goto label_17d2cc;
        case 0x17d2d8u: goto label_17d2d8;
        case 0x17d2e4u: goto label_17d2e4;
        case 0x17d2f4u: goto label_17d2f4;
        case 0x17d2fcu: goto label_17d2fc;
        case 0x17d308u: goto label_17d308;
        default: break;
    }

    ctx->pc = 0x17d0b0u;

    // 0x17d0b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x17d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x17d0b4: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x17d0b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x17d0b8: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x17d0b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d0bc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x17d0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x17d0c0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x17d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x17d0c4: 0x30b4ffff  andi        $s4, $a1, 0xFFFF
    ctx->pc = 0x17d0c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17d0c8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x17d0c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0cc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x17d0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x17d0d0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x17d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x17d0d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0d8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x17d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x17d0dc: 0x317100ff  andi        $s1, $t3, 0xFF
    ctx->pc = 0x17d0dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x17d0e0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x17d0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x17d0e4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x17d0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x17d0e8: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x17d0e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x17d0ec: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x17d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x17d0f0: 0x3135ffff  andi        $s5, $t1, 0xFFFF
    ctx->pc = 0x17d0f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x17d0f4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17d0f8: 0x3157ffff  andi        $s7, $t2, 0xFFFF
    ctx->pc = 0x17d0f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x17d0fc: 0x93b20110  lbu         $s2, 0x110($sp)
    ctx->pc = 0x17d0fcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17d100: 0x30feffff  andi        $fp, $a3, 0xFFFF
    ctx->pc = 0x17d100u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x17d104: 0x97b00118  lhu         $s0, 0x118($sp)
    ctx->pc = 0x17d104u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x17d108: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17d10c: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x17d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x17d110: 0xc05f1c0  jal         func_17C700
    ctx->pc = 0x17D110u;
    SET_GPR_U32(ctx, 31, 0x17D118u);
    ctx->pc = 0x17D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D110u;
    // 0x17d114: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C700u, 0x17D110u, 0x17D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D118u;
label_17d118:
    // 0x17d118: 0xa6d0001e  sh          $s0, 0x1E($s6)
    ctx->pc = 0x17d118u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 30), (uint16_t)GPR_U32(ctx, 16));
    // 0x17d11c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x17d11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x17d120: 0xa6d30020  sh          $s3, 0x20($s6)
    ctx->pc = 0x17d120u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 32), (uint16_t)GPR_U32(ctx, 19));
    // 0x17d124: 0x2484b8a8  addiu       $a0, $a0, -0x4758
    ctx->pc = 0x17d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    // 0x17d128: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d12c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x17d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d130: 0xa6d50028  sh          $s5, 0x28($s6)
    ctx->pc = 0x17d130u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 40), (uint16_t)GPR_U32(ctx, 21));
    // 0x17d134: 0xa6c30022  sh          $v1, 0x22($s6)
    ctx->pc = 0x17d134u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x17d138: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x17d138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x17d13c: 0xa2d1001a  sb          $s1, 0x1A($s6)
    ctx->pc = 0x17d13cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 26), (uint8_t)GPR_U32(ctx, 17));
    // 0x17d140: 0xa2c60019  sb          $a2, 0x19($s6)
    ctx->pc = 0x17d140u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 25), (uint8_t)GPR_U32(ctx, 6));
    // 0x17d144: 0xa6d7001c  sh          $s7, 0x1C($s6)
    ctx->pc = 0x17d144u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 28), (uint16_t)GPR_U32(ctx, 23));
    // 0x17d148: 0xa2d2001b  sb          $s2, 0x1B($s6)
    ctx->pc = 0x17d148u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 27), (uint8_t)GPR_U32(ctx, 18));
    // 0x17d14c: 0xa6d40024  sh          $s4, 0x24($s6)
    ctx->pc = 0x17d14cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 36), (uint16_t)GPR_U32(ctx, 20));
    // 0x17d150: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17D150u;
    SET_GPR_U32(ctx, 31, 0x17D158u);
    ctx->pc = 0x17D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D150u;
    // 0x17d154: 0xa6de0026  sh          $fp, 0x26($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 38), (uint16_t)GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17D150u, 0x17D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D158u;
label_17d158:
    // 0x17d158: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17d158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17d15c: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D15Cu;
    {
        const bool branch_taken_0x17d15c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D15Cu;
        // 0x17d160: 0xa2d10018  sb          $s1, 0x18($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 24), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d15c) {
            ctx->pc = 0x17D180u;
            goto label_17d180;
        }
    }
    ctx->pc = 0x17D164u;
    // 0x17d164: 0xdec20008  ld          $v0, 0x8($s6)
    ctx->pc = 0x17d164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x17d168: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x17d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x17d16c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x17d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17d170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17d174: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17d174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17d178: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x17D178u;
    {
        const bool branch_taken_0x17d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D178u;
        // 0x17d17c: 0xfec20008  sd          $v0, 0x8($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d178) {
            ctx->pc = 0x17D308u;
            goto label_17d308;
        }
    }
    ctx->pc = 0x17D180u;
label_17d180:
    // 0x17d180: 0xdec20008  ld          $v0, 0x8($s6)
    ctx->pc = 0x17d180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x17d184: 0x2404ffe1  addiu       $a0, $zero, -0x1F
    ctx->pc = 0x17d184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x17d188: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17d188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17d18c: 0x96c60024  lhu         $a2, 0x24($s6)
    ctx->pc = 0x17d18cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x17d190: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x17d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x17d194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d198: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x17d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17d19c: 0xa2c30018  sb          $v1, 0x18($s6)
    ctx->pc = 0x17d19cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x17d1a0: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x17d1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x17d1a4: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D1A4u;
    {
        const bool branch_taken_0x17d1a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1A4u;
        // 0x17d1a8: 0xaec60034  sw          $a2, 0x34($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1a4) {
            ctx->pc = 0x17D1B4u;
            goto label_17d1b4;
        }
    }
    ctx->pc = 0x17D1ACu;
    // 0x17d1ac: 0xa2c00018  sb          $zero, 0x18($s6)
    ctx->pc = 0x17d1acu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d1b0: 0xaed70034  sw          $s7, 0x34($s6)
    ctx->pc = 0x17d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 23));
label_17d1b4:
    // 0x17d1b4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d1b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d1bc: 0x0  nop
    ctx->pc = 0x17d1bcu;
    // NOP
    // 0x17d1c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17d1c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d1c4: 0x0  nop
    ctx->pc = 0x17d1c4u;
    // NOP
    // 0x17d1c8: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x17D1C8u;
    {
        const bool branch_taken_0x17d1c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1C8u;
        // 0x17d1cc: 0xc7a30004  lwc1        $f3, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1c8) {
            ctx->pc = 0x17D308u;
            goto label_17d308;
        }
    }
    ctx->pc = 0x17D1D0u;
    // 0x17d1d0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x17d1d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x17d1d4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x17d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d1d8: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x17d1d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17d1dc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x17d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d1e0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x17d1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x17d1e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17d1e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17d1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d1ec: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x17d1ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17d1f0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x17d1f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17d1f4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17d1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17d1f8: 0x8ea4cce4  lw          $a0, -0x331C($s5)
    ctx->pc = 0x17d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CCE4u));
    // 0x17d1fc: 0xc05fba2  jal         func_17EE88
    ctx->pc = 0x17D1FCu;
    SET_GPR_U32(ctx, 31, 0x17D204u);
    ctx->pc = 0x17D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1FCu;
    // 0x17d200: 0xe661000c  swc1        $f1, 0xC($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE88u, 0x17D1FCu, 0x17D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D204u;
label_17d204:
    // 0x17d204: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x17d204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x17d208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d20c: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17d210: 0xc6c10044  lwc1        $f1, 0x44($s6)
    ctx->pc = 0x17d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d214: 0xc6c30040  lwc1        $f3, 0x40($s6)
    ctx->pc = 0x17d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17d218: 0xc6c40048  lwc1        $f4, 0x48($s6)
    ctx->pc = 0x17d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17d21c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17d21cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d220: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x17d220u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x17d224: 0x96c3002c  lhu         $v1, 0x2C($s6)
    ctx->pc = 0x17d224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x17d228: 0xc6c2004c  lwc1        $f2, 0x4C($s6)
    ctx->pc = 0x17d228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d22c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x17d22cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x17d230: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x17d230u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x17d234: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d238: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17d238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17d23c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17d23cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17d240: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17d240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17d244: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17d244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17d248: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x17d248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x17d24c: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17d24cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17d250: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x17d250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17d254: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17d254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17d258: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x17d258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x17d25c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d260: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17d260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17d264: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x17d264u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x17d268: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17d268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17d26c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x17d26cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x17d270: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x17d270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x17d274: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17d274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17d278: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x17d278u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x17d27c: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x17D27Cu;
    SET_GPR_U32(ctx, 31, 0x17D284u);
    ctx->pc = 0x17D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D27Cu;
    // 0x17d280: 0x2058025  or          $s0, $s0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x17D27Cu, 0x17D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D284u;
label_17d284:
    // 0x17d284: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d288: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x17D288u;
    SET_GPR_U32(ctx, 31, 0x17D290u);
    ctx->pc = 0x17D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D288u;
    // 0x17d28c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x17D288u, 0x17D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D290u;
label_17d290:
    // 0x17d290: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d294: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x17D294u;
    SET_GPR_U32(ctx, 31, 0x17D29Cu);
    ctx->pc = 0x17D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D294u;
    // 0x17d298: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x17D294u, 0x17D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D29Cu;
label_17d29c:
    // 0x17d29c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d2a0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x17D2A0u;
    SET_GPR_U32(ctx, 31, 0x17D2A8u);
    ctx->pc = 0x17D2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2A0u;
    // 0x17d2a4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x17D2A0u, 0x17D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2A8u;
label_17d2a8:
    // 0x17d2a8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d2ac: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x17D2ACu;
    SET_GPR_U32(ctx, 31, 0x17D2B4u);
    ctx->pc = 0x17D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2ACu;
    // 0x17d2b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x17D2ACu, 0x17D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2B4u;
label_17d2b4:
    // 0x17d2b4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d2b8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x17D2B8u;
    SET_GPR_U32(ctx, 31, 0x17D2C0u);
    ctx->pc = 0x17D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2B8u;
    // 0x17d2bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x17D2B8u, 0x17D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2C0u;
label_17d2c0:
    // 0x17d2c0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d2c4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x17D2C4u;
    SET_GPR_U32(ctx, 31, 0x17D2CCu);
    ctx->pc = 0x17D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2C4u;
    // 0x17d2c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x17D2C4u, 0x17D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2CCu;
label_17d2cc:
    // 0x17d2cc: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x17d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x17d2d0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x17D2D0u;
    SET_GPR_U32(ctx, 31, 0x17D2D8u);
    ctx->pc = 0x17D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2D0u;
    // 0x17d2d4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x17D2D0u, 0x17D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2D8u;
label_17d2d8:
    // 0x17d2d8: 0xc6cc0014  lwc1        $f12, 0x14($s6)
    ctx->pc = 0x17d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17d2dc: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x17D2DCu;
    SET_GPR_U32(ctx, 31, 0x17D2E4u);
    ctx->pc = 0x17D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2DCu;
    // 0x17d2e0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x17D2DCu, 0x17D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2E4u;
label_17d2e4:
    // 0x17d2e4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x17d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17d2e8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x17d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x17d2ec: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x17D2ECu;
    SET_GPR_U32(ctx, 31, 0x17D2F4u);
    ctx->pc = 0x17D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2ECu;
    // 0x17d2f0: 0x24a52228  addiu       $a1, $a1, 0x2228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x17D2ECu, 0x17D2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2F4u;
label_17d2f4:
    // 0x17d2f4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x17D2F4u;
    SET_GPR_U32(ctx, 31, 0x17D2FCu);
    ctx->pc = 0x17D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2F4u;
    // 0x17d2f8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x17D2F4u, 0x17D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2FCu;
label_17d2fc:
    // 0x17d2fc: 0x8ea4cce4  lw          $a0, -0x331C($s5)
    ctx->pc = 0x17d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954212)));
    // 0x17d300: 0xc05f566  jal         func_17D598
    ctx->pc = 0x17D300u;
    SET_GPR_U32(ctx, 31, 0x17D308u);
    ctx->pc = 0x17D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D300u;
    // 0x17d304: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D598u, 0x17D300u, 0x17D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D308u;
label_17d308:
    // 0x17d308: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x17d308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17d30c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x17d30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17d310: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x17d310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17d314: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x17d314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17d318: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x17d318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17d31c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x17d31cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17d320: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x17d320u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17d324: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x17d324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17d328: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17d328u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d32c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d330: 0x3e00008  jr          $ra
    ctx->pc = 0x17D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D330u;
        // 0x17d334: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D338u;
}
