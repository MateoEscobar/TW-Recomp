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

// Function: sub_002D18B8
// Address: 0x2d18b8 - 0x2d1c38
void sub_002D18B8_0x2d18b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D18B8_0x2d18b8");
#endif

    switch (ctx->pc) {
        case 0x2d1924u: goto label_2d1924;
        case 0x2d1950u: goto label_2d1950;
        case 0x2d1990u: goto label_2d1990;
        case 0x2d19a0u: goto label_2d19a0;
        case 0x2d19acu: goto label_2d19ac;
        case 0x2d1b44u: goto label_2d1b44;
        case 0x2d1b50u: goto label_2d1b50;
        case 0x2d1b6cu: goto label_2d1b6c;
        case 0x2d1bf8u: goto label_2d1bf8;
        default: break;
    }

    ctx->pc = 0x2d18b8u;

    // 0x2d18b8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2d18b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2d18bc: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2d18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2d18c0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2d18c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2d18c4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2d18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2d18c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d18c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18cc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2d18ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2d18d0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d18d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18d4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2d18d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2d18d8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2d18d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2d18dc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2d18dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2d18e0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2d18e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2d18e4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2d18e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2d18e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d18e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d18ec: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d18ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d18f0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2d18f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2d18f4: 0x92a20039  lbu         $v0, 0x39($s5)
    ctx->pc = 0x2d18f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 57)));
    // 0x2d18f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d18fc: 0xa2a20039  sb          $v0, 0x39($s5)
    ctx->pc = 0x2d18fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d1900: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1900u;
    {
        const bool branch_taken_0x2d1900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1900) {
            ctx->pc = 0x2D1904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1900u;
            // 0x2d1904: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1908u;
            goto label_2d1908;
        }
    }
    ctx->pc = 0x2D1908u;
label_2d1908:
    // 0x2d1908: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2d1908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d190c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2d190cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2d1910: 0x1010  mfhi        $v0
    ctx->pc = 0x2d1910u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d1914: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1914u;
    {
        const bool branch_taken_0x2d1914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1914u;
        // 0x2d1918: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1914) {
            ctx->pc = 0x2D192Cu;
            goto label_2d192c;
        }
    }
    ctx->pc = 0x2D191Cu;
    // 0x2d191c: 0xc0b4526  jal         func_2D1498
    ctx->pc = 0x2D191Cu;
    SET_GPR_U32(ctx, 31, 0x2D1924u);
    ctx->pc = 0x2D1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D191Cu;
    // 0x2d1920: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1498u, 0x2D191Cu, 0x2D1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1924u;
label_2d1924:
    // 0x2d1924: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D1924u;
    {
        const bool branch_taken_0x2d1924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1924u;
        // 0x2d1928: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1924) {
            ctx->pc = 0x2D1954u;
            goto label_2d1954;
        }
    }
    ctx->pc = 0x2D192Cu;
label_2d192c:
    // 0x2d192c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2d192cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2d1930: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1930u;
    {
        const bool branch_taken_0x2d1930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1930) {
            ctx->pc = 0x2D1934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1930u;
            // 0x2d1934: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1938u;
            goto label_2d1938;
        }
    }
    ctx->pc = 0x2D1938u;
label_2d1938:
    // 0x2d1938: 0x1810  mfhi        $v1
    ctx->pc = 0x2d1938u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d193c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D193Cu;
    {
        const bool branch_taken_0x2d193c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d193c) {
            ctx->pc = 0x2D1940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D193Cu;
            // 0x2d1940: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1964u;
            goto label_2d1964;
        }
    }
    ctx->pc = 0x2D1944u;
    // 0x2d1944: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1948: 0xc0b4574  jal         func_2D15D0
    ctx->pc = 0x2D1948u;
    SET_GPR_U32(ctx, 31, 0x2D1950u);
    ctx->pc = 0x2D194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1948u;
    // 0x2d194c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D15D0u, 0x2D1948u, 0x2D1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1950u;
label_2d1950:
    // 0x2d1950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1954:
    // 0x2d1954: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1954u;
    {
        const bool branch_taken_0x2d1954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1954) {
            ctx->pc = 0x2D1958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1954u;
            // 0x2d1958: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1964u;
            goto label_2d1964;
        }
    }
    ctx->pc = 0x2D195Cu;
    // 0x2d195c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2D195Cu;
    {
        const bool branch_taken_0x2d195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D195Cu;
        // 0x2d1960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d195c) {
            ctx->pc = 0x2D1C00u;
            goto label_2d1c00;
        }
    }
    ctx->pc = 0x2D1964u;
label_2d1964:
    // 0x2d1964: 0x3c140071  lui         $s4, 0x71
    ctx->pc = 0x2d1964u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
    // 0x2d1968: 0x26924b00  addiu       $s2, $s4, 0x4B00
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 19200));
    // 0x2d196c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1970: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2d1970u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1974: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2d1974u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x2d1978: 0x26f10090  addiu       $s1, $s7, 0x90
    ctx->pc = 0x2d1978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x2d197c: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d197cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d1980: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d1980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d1984: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2d1984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2d1988: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2D1988u;
    SET_GPR_U32(ctx, 31, 0x2D1990u);
    ctx->pc = 0x2D198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1988u;
    // 0x2d198c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2D1988u, 0x2D1990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1990u;
label_2d1990:
    // 0x2d1990: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2d1990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x2d1994: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2d1994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
    // 0x2d1998: 0xc0cd550  jal         func_335540
    ctx->pc = 0x2D1998u;
    SET_GPR_U32(ctx, 31, 0x2D19A0u);
    ctx->pc = 0x2D199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1998u;
    // 0x2d199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x2D1998u, 0x2D19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19A0u;
label_2d19a0:
    // 0x2d19a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d19a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d19a4: 0xc0cd550  jal         func_335540
    ctx->pc = 0x2D19A4u;
    SET_GPR_U32(ctx, 31, 0x2D19ACu);
    ctx->pc = 0x2D19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19A4u;
    // 0x2d19a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x2D19A4u, 0x2D19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19ACu;
label_2d19ac:
    // 0x2d19ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d19acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d19b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d19b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d19b4: 0x26661730  addiu       $a2, $s3, 0x1730
    ctx->pc = 0x2d19b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 5936));
    // 0x2d19b8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d19b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d19bc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2d19bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d19c0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2d19c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d19c4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d19c8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2d19c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2d19cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d19ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d19d0: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x2d19d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2d19d4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2d19d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d19d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d19d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d19dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d19dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d19e0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d19e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d19e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d19e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d19e8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d19e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d19ec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2d19ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d19f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d19f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d19f4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2d19f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d19f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d19f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d19fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d19fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d1a00: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d1a00u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2d1a04: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d1a04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d1a08: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2d1a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1a0c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2d1a0cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a10: 0x7ea30010  sq          $v1, 0x10($s5)
    ctx->pc = 0x2d1a10u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
    // 0x2d1a14: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2d1a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d1a18: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d1a18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d1a1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1a20: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d1a20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a24: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d1a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d1a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1a2c: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x2d1a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
    // 0x2d1a30: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2d1a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2d1a34: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2d1a34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1a38: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2d1a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2d1a3c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2d1a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d1a40: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2d1a40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2d1a44: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1a48: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2d1a48u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a4c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d1a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2d1a50: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2d1a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2d1a54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d1a54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1a58: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d1a58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d1a5c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d1a5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d1a60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d1a60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d1a64: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2d1a64u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d1a68: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x2d1a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x2d1a6c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d1a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d1a70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d1a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2d1a74: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d1a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d1a78: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x2d1a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x2d1a7c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2d1a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x2d1a80: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x2d1a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x2d1a84: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2d1a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x2d1a88: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x2d1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x2d1a8c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2d1a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d1a90: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x2d1a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x2d1a94: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d1a98: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d1a9c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x2d1a9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d1aa0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d1aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d1aa4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2d1aa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2d1aa8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2d1aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1aac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2d1aacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d1ab0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2d1ab0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ab4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d1ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ab8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2d1ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d1abc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2d1abcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d1ac0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2d1ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ac4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2d1ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ac8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2d1ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d1acc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2d1accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ad0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2d1ad0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d1ad4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2d1ad4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ad8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2d1ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d1adc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2d1adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ae0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2d1ae0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2d1ae4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2d1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2d1ae8: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x2d1ae8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1aec: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d1aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2d1af0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x2d1af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1af4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2d1af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2d1af8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2d1af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1afc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2d1afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2d1b00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b04: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2d1b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2d1b08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1b0c: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d1b0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d1b10: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d1b14: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2d1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2d1b18: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2d1b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1b1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d1b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1b20: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d1b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d1b24: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d1b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d1b28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d1b28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d1b2c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d1b2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d1b30: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d1b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2d1b34: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2d1b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2d1b38: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d1b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d1b3c: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x2D1B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B44u);
    ctx->pc = 0x2D1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B3Cu;
    // 0x2d1b40: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2D1B3Cu, 0x2D1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B44u;
label_2d1b44:
    // 0x2d1b44: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2d1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d1b48: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2D1B48u;
    SET_GPR_U32(ctx, 31, 0x2D1B50u);
    ctx->pc = 0x2D1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B48u;
    // 0x2d1b4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D1B48u, 0x2D1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B50u;
label_2d1b50:
    // 0x2d1b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1b58: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1B58u;
    {
        const bool branch_taken_0x2d1b58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B58u;
        // 0x2d1b5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b58) {
            ctx->pc = 0x2D1B80u;
            goto label_2d1b80;
        }
    }
    ctx->pc = 0x2D1B60u;
    // 0x2d1b60: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d1b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b64: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2D1B64u;
    SET_GPR_U32(ctx, 31, 0x2D1B6Cu);
    ctx->pc = 0x2D1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B64u;
    // 0x2d1b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2D1B64u, 0x2D1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B6Cu;
label_2d1b6c:
    // 0x2d1b6c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1B6Cu;
    {
        const bool branch_taken_0x2d1b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B6Cu;
        // 0x2d1b70: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b6c) {
            ctx->pc = 0x2D1B80u;
            goto label_2d1b80;
        }
    }
    ctx->pc = 0x2D1B74u;
    // 0x2d1b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1b78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D1B78u;
    {
        const bool branch_taken_0x2d1b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B78u;
        // 0x2d1b7c: 0x7ec30000  sq          $v1, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b78) {
            ctx->pc = 0x2D1C00u;
            goto label_2d1c00;
        }
    }
    ctx->pc = 0x2D1B80u;
label_2d1b80:
    // 0x2d1b80: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2d1b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2d1b84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1b88: 0x26831730  addiu       $v1, $s4, 0x1730
    ctx->pc = 0x2d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5936));
    // 0x2d1b8c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d1b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1b90: 0x27c84b00  addiu       $t0, $fp, 0x4B00
    ctx->pc = 0x2d1b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
    // 0x2d1b94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d1b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d1b98: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d1b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1ba0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d1ba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d1ba4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ba8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d1ba8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1bac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d1bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d1bb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d1bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d1bb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d1bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1bb8: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x2d1bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
    // 0x2d1bbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bc0: 0xe6a10018  swc1        $f1, 0x18($s5)
    ctx->pc = 0x2d1bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x2d1bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d1bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bc8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d1bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d1bcc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d1bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d1bd0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2d1bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2d1bd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1bd8: 0x86e40092  lh          $a0, 0x92($s7)
    ctx->pc = 0x2d1bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
    // 0x2d1bdc: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d1bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2d1be0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d1be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2d1be4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d1be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1be8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d1bec: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2d1becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2d1bf0: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2D1BF0u;
    SET_GPR_U32(ctx, 31, 0x2D1BF8u);
    ctx->pc = 0x2D1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BF0u;
    // 0x2d1bf4: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2D1BF0u, 0x2D1BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BF8u;
label_2d1bf8:
    // 0x2d1bf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d1bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d1bfc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d1c00:
    // 0x2d1c00: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2d1c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d1c04: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2d1c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d1c08: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2d1c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d1c0c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2d1c0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d1c10: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2d1c10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d1c14: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2d1c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d1c18: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2d1c18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d1c1c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2d1c1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d1c20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d1c20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d1c24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d1c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1c28: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2d1c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C2Cu;
        // 0x2d1c30: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C34u;
    // 0x2d1c34: 0x0  nop
    ctx->pc = 0x2d1c34u;
    // NOP
    ctx->pc = 0x2d1c38u;
}
