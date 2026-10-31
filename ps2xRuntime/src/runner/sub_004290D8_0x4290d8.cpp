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

// Function: sub_004290D8
// Address: 0x4290d8 - 0x4298c0
void sub_004290D8_0x4290d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004290D8_0x4290d8");
#endif

    switch (ctx->pc) {
        case 0x429114u: goto label_429114;
        case 0x42918cu: goto label_42918c;
        case 0x429288u: goto label_429288;
        case 0x429318u: goto label_429318;
        case 0x429848u: goto label_429848;
        case 0x429890u: goto label_429890;
        default: break;
    }

    ctx->pc = 0x4290d8u;

    // 0x4290d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4290d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4290dc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4290dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4290e0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4290e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4290e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4290e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4290e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4290e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4290ec: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4290ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4290f0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4290f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4290f4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4290f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4290f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4290f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4290fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4290fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x429100: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x429100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x429104: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x429104u;
    {
        const bool branch_taken_0x429104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x429108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429104u;
        // 0x429108: 0x8e560008  lw          $s6, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429104) {
            ctx->pc = 0x429118u;
            goto label_429118;
        }
    }
    ctx->pc = 0x42910Cu;
    // 0x42910c: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x42910Cu;
    SET_GPR_U32(ctx, 31, 0x429114u);
    ctx->pc = 0x429110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42910Cu;
    // 0x429110: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x42910Cu, 0x429114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429114u;
label_429114:
    // 0x429114: 0x0  nop
    ctx->pc = 0x429114u;
    // NOP
label_429118:
    // 0x429118: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x429118u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x42911c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x42911Cu;
    {
        const bool branch_taken_0x42911c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x429120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42911Cu;
        // 0x429120: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42911c) {
            ctx->pc = 0x429128u;
            goto label_429128;
        }
    }
    ctx->pc = 0x429124u;
    // 0x429124: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x429124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_429128:
    // 0x429128: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x429128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42912c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x42912cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429130: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x429130u;
    {
        const bool branch_taken_0x429130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x429134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429130u;
        // 0x429134: 0xac40711c  sw          $zero, 0x711C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429130) {
            ctx->pc = 0x429158u;
            goto label_429158;
        }
    }
    ctx->pc = 0x429138u;
    // 0x429138: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x429138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x42913c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x42913cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x429140: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x429140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x429144: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x429144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x429148: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x429148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x42914c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x42914cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x429150: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x429150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x429154: 0xaea2711c  sw          $v0, 0x711C($s5)
    ctx->pc = 0x429154u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28956), GPR_U32(ctx, 2));
label_429158:
    // 0x429158: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x429158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x42915c: 0x3c140059  lui         $s4, 0x59
    ctx->pc = 0x42915cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)89 << 16));
    // 0x429160: 0x8c627118  lw          $v0, 0x7118($v1)
    ctx->pc = 0x429160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x597118u));
    // 0x429164: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x429164u;
    {
        const bool branch_taken_0x429164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x429168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429164u;
        // 0x429168: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429164) {
            ctx->pc = 0x429248u;
            goto label_429248;
        }
    }
    ctx->pc = 0x42916Cu;
    // 0x42916c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42916Cu;
    {
        const bool branch_taken_0x42916c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x429170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42916Cu;
        // 0x429170: 0xde826e20  ld          $v0, 0x6E20($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 28192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42916c) {
            ctx->pc = 0x429194u;
            goto label_429194;
        }
    }
    ctx->pc = 0x429174u;
    // 0x429174: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x429174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x429178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x429178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42917c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429180: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x429180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x429184: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x429184u;
    SET_GPR_U32(ctx, 31, 0x42918Cu);
    ctx->pc = 0x429188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429184u;
    // 0x429188: 0xfe826e20  sd          $v0, 0x6E20($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 28192), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x429184u, 0x42918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42918Cu;
label_42918c:
    // 0x42918c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42918Cu;
    {
        const bool branch_taken_0x42918c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42918Cu;
        // 0x429190: 0xae707118  sw          $s0, 0x7118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28952), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42918c) {
            ctx->pc = 0x4291A4u;
            goto label_4291a4;
        }
    }
    ctx->pc = 0x429194u;
label_429194:
    // 0x429194: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x429194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x429198: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x429198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42919c: 0xfe826e20  sd          $v0, 0x6E20($s4)
    ctx->pc = 0x42919cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 28192), GPR_U64(ctx, 2));
    // 0x4291a0: 0xae707118  sw          $s0, 0x7118($s3)
    ctx->pc = 0x4291a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28952), GPR_U32(ctx, 16));
label_4291a4:
    // 0x4291a4: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x4291A4u;
    {
        const bool branch_taken_0x4291a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4291A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4291A4u;
        // 0x4291a8: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4291a4) {
            ctx->pc = 0x429248u;
            goto label_429248;
        }
    }
    ctx->pc = 0x4291ACu;
    // 0x4291ac: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x4291acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x4291b0: 0xdca26e08  ld          $v0, 0x6E08($a1)
    ctx->pc = 0x4291b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 28168)));
    // 0x4291b4: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x4291b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x4291b8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x4291b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4291bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4291bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4291c0: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x4291c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x4291c4: 0x5024000e  beql        $at, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4291C4u;
    {
        const bool branch_taken_0x4291c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x4291c4) {
            ctx->pc = 0x4291C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4291C4u;
            // 0x4291c8: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x429200u;
            goto label_429200;
        }
    }
    ctx->pc = 0x4291CCu;
    // 0x4291cc: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x4291ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x4291d0: 0x5024000b  beql        $at, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4291D0u;
    {
        const bool branch_taken_0x4291d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x4291d0) {
            ctx->pc = 0x4291D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4291D0u;
            // 0x4291d4: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x429200u;
            goto label_429200;
        }
    }
    ctx->pc = 0x4291D8u;
    // 0x4291d8: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x4291d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x4291dc: 0x50240008  beql        $at, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4291DCu;
    {
        const bool branch_taken_0x4291dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x4291dc) {
            ctx->pc = 0x4291E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4291DCu;
            // 0x4291e0: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x429200u;
            goto label_429200;
        }
    }
    ctx->pc = 0x4291E4u;
    // 0x4291e4: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x4291e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x4291e8: 0x50240005  beql        $at, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4291E8u;
    {
        const bool branch_taken_0x4291e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x4291e8) {
            ctx->pc = 0x4291ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4291E8u;
            // 0x4291ec: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x429200u;
            goto label_429200;
        }
    }
    ctx->pc = 0x4291F0u;
    // 0x4291f0: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x4291f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x4291f4: 0x50240002  beql        $at, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4291F4u;
    {
        const bool branch_taken_0x4291f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x4291f4) {
            ctx->pc = 0x4291F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4291F4u;
            // 0x4291f8: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x429200u;
            goto label_429200;
        }
    }
    ctx->pc = 0x4291FCu;
    // 0x4291fc: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x4291fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_429200:
    // 0x429200: 0x0  nop
    ctx->pc = 0x429200u;
    // NOP
    // 0x429204: 0xfca26e08  sd          $v0, 0x6E08($a1)
    ctx->pc = 0x429204u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 28168), GPR_U64(ctx, 2));
    // 0x429208: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x429208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x42920c: 0x30c20f00  andi        $v0, $a2, 0xF00
    ctx->pc = 0x42920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x429210: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x429210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x429214: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x429214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x429218: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x429218u;
    {
        const bool branch_taken_0x429218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x42921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429218u;
        // 0x42921c: 0xfc806e00  sd          $zero, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429218) {
            ctx->pc = 0x429228u;
            goto label_429228;
        }
    }
    ctx->pc = 0x429220u;
    // 0x429220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x429220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x429224: 0xfc826e00  sd          $v0, 0x6E00($a0)
    ctx->pc = 0x429224u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
label_429228:
    // 0x429228: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x429228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x42922c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x42922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x429230: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x429230u;
    {
        const bool branch_taken_0x429230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x429234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429230u;
        // 0x429234: 0x8ea2711c  lw          $v0, 0x711C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429230) {
            ctx->pc = 0x42924Cu;
            goto label_42924c;
        }
    }
    ctx->pc = 0x429238u;
    // 0x429238: 0xdc826e00  ld          $v0, 0x6E00($a0)
    ctx->pc = 0x429238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 28160)));
    // 0x42923c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x429240: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x429240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x429244: 0xfc826e00  sd          $v0, 0x6E00($a0)
    ctx->pc = 0x429244u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
label_429248:
    // 0x429248: 0x8ea2711c  lw          $v0, 0x711C($s5)
    ctx->pc = 0x429248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28956)));
label_42924c:
    // 0x42924c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42924Cu;
    {
        const bool branch_taken_0x42924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42924Cu;
        // 0x429250: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42924c) {
            ctx->pc = 0x429268u;
            goto label_429268;
        }
    }
    ctx->pc = 0x429254u;
    // 0x429254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x429254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x429258: 0xdc436de8  ld          $v1, 0x6DE8($v0)
    ctx->pc = 0x429258u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 28136)));
    // 0x42925c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x42925cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429260: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x429260u;
    {
        const bool branch_taken_0x429260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429260u;
        // 0x429264: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429260) {
            ctx->pc = 0x429278u;
            goto label_429278;
        }
    }
    ctx->pc = 0x429268u;
label_429268:
    // 0x429268: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x429268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x42926c: 0xdc436de8  ld          $v1, 0x6DE8($v0)
    ctx->pc = 0x42926cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 28136)));
    // 0x429270: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x429270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429274: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x429274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_429278:
    // 0x429278: 0xfc436de8  sd          $v1, 0x6DE8($v0)
    ctx->pc = 0x429278u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 28136), GPR_U64(ctx, 3));
    // 0x42927c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429280: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x429280u;
    SET_GPR_U32(ctx, 31, 0x429288u);
    ctx->pc = 0x429284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429280u;
    // 0x429284: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x429280u, 0x429288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429288u;
label_429288:
    // 0x429288: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x429288u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x42928c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42928cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x429290: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x429290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x429294: 0x3402d806  ori         $v0, $zero, 0xD806
    ctx->pc = 0x429294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x429298: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x429298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x42929c: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x42929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61184);
    // 0x4292a0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x4292a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x4292a4: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x4292a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x4292a8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x4292a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x4292ac: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4292acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4292b0: 0x8e03707c  lw          $v1, 0x707C($s0)
    ctx->pc = 0x4292b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x4292b4: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x4292b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x4292b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4292b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4292bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4292bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4292c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4292c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4292c4: 0x8c44cd98  lw          $a0, -0x3268($v0)
    ctx->pc = 0x4292c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD98u));
    // 0x4292c8: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x4292c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x4292cc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4292ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4292d0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4292d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x4292d4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4292d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4292d8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4292d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4292dc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4292dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x4292e0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x4292e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4292e4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x4292e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4292e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4292e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4292ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4292ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4292f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4292f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4292f4: 0x72251389  pcpyld      $v0, $s1, $a1
    ctx->pc = 0x4292f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 5)));
    // 0x4292f8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4292f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4292fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4292fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x429300: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x429300u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x429304: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x429304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x429308: 0xae03707c  sw          $v1, 0x707C($s0)
    ctx->pc = 0x429308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 3));
    // 0x42930c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429310: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x429310u;
    SET_GPR_U32(ctx, 31, 0x429318u);
    ctx->pc = 0x429314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429310u;
    // 0x429314: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x429310u, 0x429318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429318u;
label_429318:
    // 0x429318: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x429318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x42931c: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x42931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x429320: 0x72231b89  pcpyld      $v1, $s1, $v1
    ctx->pc = 0x429320u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
    // 0x429324: 0x8e02707c  lw          $v0, 0x707C($s0)
    ctx->pc = 0x429324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x429328: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x429328u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x42932c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x429330: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x429330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x429334: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x429334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x429338: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x429338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x42933c: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x42933cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x429340: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x429340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x429344: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x429344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x429348: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x429348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x42934c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x42934cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x429350: 0x70912389  pcpyld      $a0, $a0, $s1
    ctx->pc = 0x429350u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 17)));
    // 0x429354: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x429354u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x429358: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x429358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x42935c: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x42935cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x429360: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x429360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x429364: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x429364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x429368: 0x8ea3711c  lw          $v1, 0x711C($s5)
    ctx->pc = 0x429368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28956)));
    // 0x42936c: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x42936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x429370: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x429370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x429374: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x429374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x429378: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x429378u;
    {
        const bool branch_taken_0x429378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429378u;
        // 0x42937c: 0xac827120  sw          $v0, 0x7120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429378) {
            ctx->pc = 0x429390u;
            goto label_429390;
        }
    }
    ctx->pc = 0x429380u;
    // 0x429380: 0xde826e20  ld          $v0, 0x6E20($s4)
    ctx->pc = 0x429380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 28192)));
    // 0x429384: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x429384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x429388: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x429388u;
    {
        const bool branch_taken_0x429388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429388u;
        // 0x42938c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429388) {
            ctx->pc = 0x42939Cu;
            goto label_42939c;
        }
    }
    ctx->pc = 0x429390u;
label_429390:
    // 0x429390: 0xde826e20  ld          $v0, 0x6E20($s4)
    ctx->pc = 0x429390u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 28192)));
    // 0x429394: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x429394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x429398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x429398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42939c:
    // 0x42939c: 0xfe826e20  sd          $v0, 0x6E20($s4)
    ctx->pc = 0x42939cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 28192), GPR_U64(ctx, 2));
    // 0x4293a0: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x4293a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x4293a4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4293a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4293a8: 0x8e826e20  lw          $v0, 0x6E20($s4)
    ctx->pc = 0x4293a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28192)));
    // 0x4293ac: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x4293acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x4293b0: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x4293b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x4293b4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4293b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4293b8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4293b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4293bc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4293bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4293c0: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x4293c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x4293c4: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x4293c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x4293c8: 0xdc64f750  ld          $a0, -0x8B0($v1)
    ctx->pc = 0x4293c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294965072)));
    // 0x4293cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4293ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4293d0: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x4293d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x4293d4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x4293d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x4293d8: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4293d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4293dc: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x4293dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x4293e0: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x4293e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4293e4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4293e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4293e8: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x4293e8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x4293ec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x4293ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x4293f0: 0x8e06707c  lw          $a2, 0x707C($s0)
    ctx->pc = 0x4293f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x4293f4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x4293f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x4293f8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4293f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4293fc: 0xae06707c  sw          $a2, 0x707C($s0)
    ctx->pc = 0x4293fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 6));
    // 0x429400: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x429400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x429404: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x429404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x429408: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x429408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x42940c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x42940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x429410: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x429410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x429414: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x429414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x429418: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x429418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x42941c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42941cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429420: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x429420u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x429424: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x429424u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x429428: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x429428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x42942c: 0xae03707c  sw          $v1, 0x707C($s0)
    ctx->pc = 0x42942cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 3));
    // 0x429430: 0xde826e20  ld          $v0, 0x6E20($s4)
    ctx->pc = 0x429430u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 28192)));
    // 0x429434: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x429434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x429438: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x429438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x42943c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x42943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x429440: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x429440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x429444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x429444u;
    {
        const bool branch_taken_0x429444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429444u;
        // 0x429448: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429444) {
            ctx->pc = 0x429458u;
            goto label_429458;
        }
    }
    ctx->pc = 0x42944Cu;
    // 0x42944c: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x42944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x429450: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x429450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x429454: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x429454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_429458:
    // 0x429458: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x429458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x42945c: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x42945cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x429460: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x429460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x429464: 0x0  nop
    ctx->pc = 0x429464u;
    // NOP
    // 0x429468: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x429468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x42946c: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x42946cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x429470: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x429470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x429474: 0x0  nop
    ctx->pc = 0x429474u;
    // NOP
    // 0x429478: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x429478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x42947c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x42947cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x429480: 0x0  nop
    ctx->pc = 0x429480u;
    // NOP
    // 0x429484: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x429484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x429488: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x429488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x42948c: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x42948cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x429490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x429490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x429494: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x429494u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x429498: 0x0  nop
    ctx->pc = 0x429498u;
    // NOP
    // 0x42949c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42949cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4294a0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x4294a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4294a4: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x4294a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4294a8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x4294a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4294ac: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x4294acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4294b0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x4294b0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x4294b4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x4294b4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x4294b8: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x4294b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x4294bc: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x4294bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x4294c0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x4294c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4294c4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x4294c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4294c8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4294c8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4294cc: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x4294ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x4294d0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x4294d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x4294d4: 0xae03707c  sw          $v1, 0x707C($s0)
    ctx->pc = 0x4294d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 3));
    // 0x4294d8: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x4294d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x4294dc: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x4294dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x4294e0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x4294e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x4294e4: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x4294e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x4294e8: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x4294e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x4294ec: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x4294ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x4294f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4294f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4294f4: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x4294f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x4294f8: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x4294f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x4294fc: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x4294fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x429500: 0xae03707c  sw          $v1, 0x707C($s0)
    ctx->pc = 0x429500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 3));
    // 0x429504: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x429504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x429508: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x429508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x42950c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x42950cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x429510: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x429510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x429514: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x429514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x429518: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x429518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x42951c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x42951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x429520: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x429520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x429524: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x429524u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x429528: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x429528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x42952c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x42952cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x429530: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x429530u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x429534: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x429534u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x429538: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x429538u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x42953c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x42953cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x429540: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x429540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x429544: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x429544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x429548: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x429548u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x42954c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x42954cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x429550: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x429550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x429554: 0xae03707c  sw          $v1, 0x707C($s0)
    ctx->pc = 0x429554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 3));
    // 0x429558: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x429558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x42955c: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x42955cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x429560: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x429560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x429564: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x429564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x429568: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x429568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x42956c: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x42956cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x429570: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x429570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x429574: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x429574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x429578: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x429578u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x42957c: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x42957cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x429580: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x429580u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x429584: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x429584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x429588: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x429588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x42958c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x42958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x429590: 0x8c626e80  lw          $v0, 0x6E80($v1)
    ctx->pc = 0x429590u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x596E80u));
    // 0x429594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x429594u;
    {
        const bool branch_taken_0x429594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429594u;
        // 0x429598: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x429594) {
            ctx->pc = 0x4295A8u;
            goto label_4295a8;
        }
    }
    ctx->pc = 0x42959Cu;
    // 0x42959c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x42959Cu;
    {
        const bool branch_taken_0x42959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42959c) {
            ctx->pc = 0x4295A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42959Cu;
            // 0x4295a0: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4295C8u;
            goto label_4295c8;
        }
    }
    ctx->pc = 0x4295A4u;
    // 0x4295a4: 0x0  nop
    ctx->pc = 0x4295a4u;
    // NOP
label_4295a8:
    // 0x4295a8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4295a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4295ac: 0x8c436e84  lw          $v1, 0x6E84($v0)
    ctx->pc = 0x4295acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x596E84u));
    // 0x4295b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4295B0u;
    {
        const bool branch_taken_0x4295b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4295B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4295B0u;
        // 0x4295b4: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4295b0) {
            ctx->pc = 0x4295F0u;
            goto label_4295f0;
        }
    }
    ctx->pc = 0x4295B8u;
    // 0x4295b8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4295B8u;
    {
        const bool branch_taken_0x4295b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4295b8) {
            ctx->pc = 0x4295BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4295B8u;
            // 0x4295bc: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4295F8u;
            goto label_4295f8;
        }
    }
    ctx->pc = 0x4295C0u;
    // 0x4295c0: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x4295c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x4295c4: 0x0  nop
    ctx->pc = 0x4295c4u;
    // NOP
label_4295c8:
    // 0x4295c8: 0x8e04707c  lw          $a0, 0x707C($s0)
    ctx->pc = 0x4295c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x4295cc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4295ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4295d0: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x4295d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x4295d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4295d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7F0u));
    // 0x4295d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4295d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4295dc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4295dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4295e0: 0xae04707c  sw          $a0, 0x707C($s0)
    ctx->pc = 0x4295e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 4));
    // 0x4295e4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4295e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4295e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4295E8u;
    {
        const bool branch_taken_0x4295e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4295ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4295E8u;
        // 0x4295ec: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4295e8) {
            ctx->pc = 0x429618u;
            goto label_429618;
        }
    }
    ctx->pc = 0x4295F0u;
label_4295f0:
    // 0x4295f0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4295f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4295f4: 0x0  nop
    ctx->pc = 0x4295f4u;
    // NOP
label_4295f8:
    // 0x4295f8: 0x8e04707c  lw          $a0, 0x707C($s0)
    ctx->pc = 0x4295f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x4295fc: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x4295fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x429600: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x429600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x429604: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x429604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x429608: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x429608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x42960c: 0xae04707c  sw          $a0, 0x707C($s0)
    ctx->pc = 0x42960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 4));
    // 0x429610: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x429610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x429614: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x429614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_429618:
    // 0x429618: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x429618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x42961c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x42961cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x429620: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x429620u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x429624: 0xae05707c  sw          $a1, 0x707C($s0)
    ctx->pc = 0x429624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 5));
    // 0x429628: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x429628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42962c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42962cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x429630: 0x8c447124  lw          $a0, 0x7124($v0)
    ctx->pc = 0x429630u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597124u));
    // 0x429634: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x429634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x429638: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x429638u;
    {
        const bool branch_taken_0x429638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x42963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429638u;
        // 0x42963c: 0xaca06e78  sw          $zero, 0x6E78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429638) {
            ctx->pc = 0x429648u;
            goto label_429648;
        }
    }
    ctx->pc = 0x429640u;
    // 0x429640: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x429640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x429644: 0xaca26e78  sw          $v0, 0x6E78($a1)
    ctx->pc = 0x429644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 2));
label_429648:
    // 0x429648: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x429648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x42964c: 0x9ca56e78  lwu         $a1, 0x6E78($a1)
    ctx->pc = 0x42964cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 28280)));
    // 0x429650: 0x9c826e7c  lwu         $v0, 0x6E7C($a0)
    ctx->pc = 0x429650u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x596E7Cu));
    // 0x429654: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x429654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x429658: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x429658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x42965c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x429660: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x429660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x429664: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x429664u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x429668: 0x8e04707c  lw          $a0, 0x707C($s0)
    ctx->pc = 0x429668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x42966c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x42966cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x429670: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x429670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x429674: 0xae04707c  sw          $a0, 0x707C($s0)
    ctx->pc = 0x429674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 4));
    // 0x429678: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x429678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x42967c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x42967Cu;
    {
        const bool branch_taken_0x42967c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42967Cu;
        // 0x429680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42967c) {
            ctx->pc = 0x429708u;
            goto label_429708;
        }
    }
    ctx->pc = 0x429684u;
    // 0x429684: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x429684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x429688: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x429688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x42968c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x42968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x429690: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x429690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x429694: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x429694u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x429698: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x429698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x42969c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x42969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4296a0: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x4296a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x4296a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x4296a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4296a8: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x4296a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x4296ac: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x4296acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x4296b0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x4296b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4296b4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4296b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4296b8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4296b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4296bc: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x4296bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4296c0: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x4296c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x4296c4: 0xde626de8  ld          $v0, 0x6DE8($s3)
    ctx->pc = 0x4296c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 28136)));
    // 0x4296c8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x4296c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x4296cc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4296ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4296d0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4296d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4296d4: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x4296d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x4296d8: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x4296d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x4296dc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4296dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4296e0: 0xdc626e08  ld          $v0, 0x6E08($v1)
    ctx->pc = 0x4296e0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E08u));
    // 0x4296e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4296e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4296e8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4296e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4296ec: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4296ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x4296f0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x4296f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4296f4: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x4296f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x4296f8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4296f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4296fc: 0xdc626e00  ld          $v0, 0x6E00($v1)
    ctx->pc = 0x4296fcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E00u));
    // 0x429700: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x429700u;
    {
        const bool branch_taken_0x429700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429700u;
        // 0x429704: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429700) {
            ctx->pc = 0x429778u;
            goto label_429778;
        }
    }
    ctx->pc = 0x429708u;
label_429708:
    // 0x429708: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x429708u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x42970c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x42970cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x429710: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x429710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x429714: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x429714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x429718: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x429718u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x42971c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x42971cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x429720: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x429720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x429724: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x429724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x429728: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x429728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x42972c: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x42972cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x429730: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x429730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x429734: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x429734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x429738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x429738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42973c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x42973cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x429740: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x429740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x429744: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x429744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x429748: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x429748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x42974c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x429750: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x429750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x429754: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x429754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x429758: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x429758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x42975c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x42975cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x429760: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x429760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x429764: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x429764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x429768: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x429768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x42976c: 0xde626de8  ld          $v0, 0x6DE8($s3)
    ctx->pc = 0x42976cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 28136)));
    // 0x429770: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x429770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x429774: 0x0  nop
    ctx->pc = 0x429774u;
    // NOP
label_429778:
    // 0x429778: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x429778u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x42977c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x42977cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x429780: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x429780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x429784: 0xae02707c  sw          $v0, 0x707C($s0)
    ctx->pc = 0x429784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 2));
    // 0x429788: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x429788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x42978c: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x42978cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x429790: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x429790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x429794: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x429794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x429798: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x429798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x42979c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x42979cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x4297a0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x4297a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x4297a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4297a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4297a8: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x4297a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x4297ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4297acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4297b0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4297b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4297b4: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x4297b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4297b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4297b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4297bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4297bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4297c0: 0x8cc36e74  lw          $v1, 0x6E74($a2)
    ctx->pc = 0x4297c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28276)));
    // 0x4297c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4297c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4297c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4297c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4297cc: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4297CCu;
    {
        const bool branch_taken_0x4297cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4297D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4297CCu;
        // 0x4297d0: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4297cc) {
            ctx->pc = 0x4297F8u;
            goto label_4297f8;
        }
    }
    ctx->pc = 0x4297D4u;
    // 0x4297d4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x4297d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x4297d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4297d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4297dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4297dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4297e0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x4297e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4297e4: 0x8e03707c  lw          $v1, 0x707C($s0)
    ctx->pc = 0x4297e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x4297e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4297e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4297ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4297ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4297f0: 0xae03707c  sw          $v1, 0x707C($s0)
    ctx->pc = 0x4297f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 3));
    // 0x4297f4: 0xacc56e74  sw          $a1, 0x6E74($a2)
    ctx->pc = 0x4297f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28276), GPR_U32(ctx, 5));
label_4297f8:
    // 0x4297f8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x4297f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x4297fc: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x4297fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x429800: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x429800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x429804: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x429804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x429808: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x429808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42980c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x42980cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x429810: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x429810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x429814: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x429814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x429818: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x429818u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x42981c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x42981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x429820: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x429820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x429824: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x429824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x429828: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x429828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x42982c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x42982cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x429830: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x429830u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x429834: 0x8e03707c  lw          $v1, 0x707C($s0)
    ctx->pc = 0x429834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28796)));
    // 0x429838: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x429838u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x42983c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x42983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x429840: 0xae03707c  sw          $v1, 0x707C($s0)
    ctx->pc = 0x429840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28796), GPR_U32(ctx, 3));
    // 0x429844: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x429844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_429848:
    // 0x429848: 0x42000039  di
    ctx->pc = 0x429848u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x42984c: 0x40f  sync.p
    ctx->pc = 0x42984cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429850: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x429850u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x429854: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x429854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x429858: 0x0  nop
    ctx->pc = 0x429858u;
    // NOP
    // 0x42985c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x42985Cu;
    {
        const bool branch_taken_0x42985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42985c) {
            ctx->pc = 0x429848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429848;
        }
    }
    ctx->pc = 0x429864u;
    // 0x429864: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x429864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x429868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x429868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x42986c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x42986cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x429870: 0x42000038  ei
    ctx->pc = 0x429870u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x429874: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x429874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x429878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x429878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42987c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x429880: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x429880u;
    {
        const bool branch_taken_0x429880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x429884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429880u;
        // 0x429884: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429880) {
            ctx->pc = 0x429890u;
            goto label_429890;
        }
    }
    ctx->pc = 0x429888u;
    // 0x429888: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x429888u;
    SET_GPR_U32(ctx, 31, 0x429890u);
    ctx->pc = 0x42988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429888u;
    // 0x42988c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x429888u, 0x429890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429890u;
label_429890:
    // 0x429890: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x429890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x429894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x429894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x429898: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x429898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x42989c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x42989cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4298a0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4298a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4298a4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4298a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4298a8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4298a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4298ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4298acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4298b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4298b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4298b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4298B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4298B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4298B4u;
        // 0x4298b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4298B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4298BCu;
    // 0x4298bc: 0x0  nop
    ctx->pc = 0x4298bcu;
    // NOP
    ctx->pc = 0x4298c0u;
}
