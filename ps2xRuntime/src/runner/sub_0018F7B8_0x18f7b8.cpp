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

// Function: sub_0018F7B8
// Address: 0x18f7b8 - 0x18fa68
void sub_0018F7B8_0x18f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F7B8_0x18f7b8");
#endif

    switch (ctx->pc) {
        case 0x18f7dcu: goto label_18f7dc;
        case 0x18f7fcu: goto label_18f7fc;
        case 0x18f9dcu: goto label_18f9dc;
        default: break;
    }

    ctx->pc = 0x18f7b8u;

    // 0x18f7b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18f7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18f7bc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x18f7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x18f7c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x18f7c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18f7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x18f7cc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18f7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x18f7d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18f7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18f7d4: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x18F7D4u;
    SET_GPR_U32(ctx, 31, 0x18F7DCu);
    ctx->pc = 0x18F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7D4u;
    // 0x18f7d8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x18F7D4u, 0x18F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7DCu;
label_18f7dc:
    // 0x18f7dc: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x18F7DCu;
    {
        const bool branch_taken_0x18f7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7DCu;
        // 0x18f7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7dc) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18F7E4u;
    // 0x18f7e4: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x18f7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x18f7e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x18f7e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x18f7ec: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x18F7ECu;
    {
        const bool branch_taken_0x18f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7ECu;
        // 0x18f7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7ec) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18F7F4u;
    // 0x18f7f4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x18F7F4u;
    SET_GPR_U32(ctx, 31, 0x18F7FCu);
    ctx->pc = 0x18F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7F4u;
    // 0x18f7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x18F7F4u, 0x18F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7FCu;
label_18f7fc:
    // 0x18f7fc: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x18f800: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x18f800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18f804: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x18f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x18f808: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x18f808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18f80c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x18f80cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18f810: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x18f810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x18f814: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f818: 0x90700018  lbu         $s0, 0x18($v1)
    ctx->pc = 0x18f818u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x18f81c: 0x90710019  lbu         $s1, 0x19($v1)
    ctx->pc = 0x18f81cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x18f820: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x18f820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x18f824: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F824u;
    {
        const bool branch_taken_0x18f824 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x18F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F824u;
        // 0x18f828: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f824) {
            ctx->pc = 0x18F830u;
            goto label_18f830;
        }
    }
    ctx->pc = 0x18F82Cu;
    // 0x18f82c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x18f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_18f830:
    // 0x18f830: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x18f830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f834: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F834u;
    {
        const bool branch_taken_0x18f834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F834u;
        // 0x18f838: 0xb18823  subu        $s1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f834) {
            ctx->pc = 0x18F854u;
            goto label_18f854;
        }
    }
    ctx->pc = 0x18F83Cu;
    // 0x18f83c: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F83Cu;
    {
        const bool branch_taken_0x18f83c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x18F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F83Cu;
        // 0x18f840: 0x2602ffe7  addiu       $v0, $s0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f83c) {
            ctx->pc = 0x18F848u;
            goto label_18f848;
        }
    }
    ctx->pc = 0x18F844u;
    // 0x18f844: 0x26020019  addiu       $v0, $s0, 0x19
    ctx->pc = 0x18f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
label_18f848:
    // 0x18f848: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18f848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18f84c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F84Cu;
    {
        const bool branch_taken_0x18f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F84Cu;
        // 0x18f850: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f84c) {
            ctx->pc = 0x18F858u;
            goto label_18f858;
        }
    }
    ctx->pc = 0x18F854u;
label_18f854:
    // 0x18f854: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18f854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f858:
    // 0x18f858: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F858u;
    {
        const bool branch_taken_0x18f858 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F858u;
        // 0x18f85c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f858) {
            ctx->pc = 0x18F864u;
            goto label_18f864;
        }
    }
    ctx->pc = 0x18F860u;
    // 0x18f860: 0x21023  negu        $v0, $v0
    ctx->pc = 0x18f860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_18f864:
    // 0x18f864: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x18f864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f868: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F868u;
    {
        const bool branch_taken_0x18f868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f868) {
            ctx->pc = 0x18F86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F868u;
            // 0x18f86c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F884u;
            goto label_18f884;
        }
    }
    ctx->pc = 0x18F870u;
    // 0x18f870: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F870u;
    {
        const bool branch_taken_0x18f870 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F870u;
        // 0x18f874: 0x2622ffe7  addiu       $v0, $s1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f870) {
            ctx->pc = 0x18F87Cu;
            goto label_18f87c;
        }
    }
    ctx->pc = 0x18F878u;
    // 0x18f878: 0x26220019  addiu       $v0, $s1, 0x19
    ctx->pc = 0x18f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25));
label_18f87c:
    // 0x18f87c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18f880: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
label_18f884:
    // 0x18f884: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
    // 0x18f888: 0x3421137f  ori         $at, $at, 0x137F
    ctx->pc = 0x18f888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4991);
    // 0x18f88c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18f88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18f890: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18f894: 0x3c01bf22  lui         $at, 0xBF22
    ctx->pc = 0x18f894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48930 << 16));
    // 0x18f898: 0x3421a79c  ori         $at, $at, 0xA79C
    ctx->pc = 0x18f898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42908);
    // 0x18f89c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18f89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18f8a0: 0x26480090  addiu       $t0, $s2, 0x90
    ctx->pc = 0x18f8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x18f8a4: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x18f8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
    // 0x18f8a8: 0x34211316  ori         $at, $at, 0x1316
    ctx->pc = 0x18f8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4886);
    // 0x18f8ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f8b0: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x18f8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x18f8b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18f8b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f8bc: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x18f8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
    // 0x18f8c0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18f8c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18f8c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18f8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18f8c8: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x18f8c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18f8cc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x18f8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18f8d0: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x18f8d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x18f8d4: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x18f8d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f8d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18f8dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18f8e0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x18f8e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18f8e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x18f8e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18f8e8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x18f8e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18f8ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x18f8ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f8f0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x18f8f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x18f8f4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x18f8f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f8f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x18f8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f8fc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x18f8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f900: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x18f900u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f904: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x18f904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f908: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18f908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f90c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x18f90cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f910: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x18f910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f914: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x18f914u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x18f918: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x18f918u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f91c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x18f91cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f920: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x18f920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f924: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18f924u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18f928: 0x86660092  lh          $a2, 0x92($s3)
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x18f92c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18f930: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x18f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x18f934: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x18f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x18f938: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x18f938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x18f93c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x18f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x18f940: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18f944: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x18f944u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f948: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x18f948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18f94c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18f94cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18f950: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x18f950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f954: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x18f954u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f958: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x18f958u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18f95c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18f95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18f960: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x18f960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x18f964: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x18f964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x18f968: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x18f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x18f96c: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x18f96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x18f970: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f974: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18f978: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f978u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f97c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x18f97cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x18f980: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18f980u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18f984: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x18f984u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f988: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x18f988u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f98c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x18f98cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18f990: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x18f990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x18f994: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x18f994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x18f998: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x18f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x18f99c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x18f99cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f9a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x18f9a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18f9a4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x18f9a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f9a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18f9a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f9ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18f9acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f9b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18f9b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x18f9b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f9b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f9b8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x18f9b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18f9bc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x18f9bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18f9c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f9c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x18f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x18f9c8: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x18f9c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x18f9cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18f9d0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18f9d4: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x18F9D4u;
    SET_GPR_U32(ctx, 31, 0x18F9DCu);
    ctx->pc = 0x18F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9D4u;
    // 0x18f9d8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x18F9D4u, 0x18F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9DCu;
label_18f9dc:
    // 0x18f9dc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x18f9dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f9e0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x18f9e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f9e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x18f9e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18f9e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18f9e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18f9ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x18f9ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f9f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x18f9f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f9f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x18f9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f9f8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x18f9f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18f9fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18f9fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fa00: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FA00u;
    {
        const bool branch_taken_0x18fa00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fa00) {
            ctx->pc = 0x18FA10u;
            goto label_18fa10;
        }
    }
    ctx->pc = 0x18FA08u;
    // 0x18fa08: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18FA08u;
    {
        const bool branch_taken_0x18fa08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA08u;
        // 0x18fa0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa08) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18FA10u;
label_18fa10:
    // 0x18fa10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18fa10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18fa14: 0x0  nop
    ctx->pc = 0x18fa14u;
    // NOP
    // 0x18fa18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18fa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fa1c: 0x0  nop
    ctx->pc = 0x18fa1cu;
    // NOP
    // 0x18fa20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18FA20u;
    {
        const bool branch_taken_0x18fa20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fa20) {
            ctx->pc = 0x18FA30u;
            goto label_18fa30;
        }
    }
    ctx->pc = 0x18FA28u;
    // 0x18fa28: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FA28u;
    {
        const bool branch_taken_0x18fa28 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x18FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA28u;
        // 0x18fa2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa28) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18FA30u;
label_18fa30:
    // 0x18fa30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18fa30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fa34: 0x0  nop
    ctx->pc = 0x18fa34u;
    // NOP
    // 0x18fa38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18FA38u;
    {
        const bool branch_taken_0x18fa38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA38u;
        // 0x18fa3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa38) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18FA40u;
    // 0x18fa40: 0x1e000002  bgtz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FA40u;
    {
        const bool branch_taken_0x18fa40 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x18FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA40u;
        // 0x18fa44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa40) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18FA48u;
    // 0x18fa48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fa48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fa4c:
    // 0x18fa4c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18fa4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18fa50: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18fa50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18fa54: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18fa54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18fa58: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18fa58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18fa5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18fa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fa60: 0x3e00008  jr          $ra
    ctx->pc = 0x18FA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA60u;
        // 0x18fa64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FA68u;
}
