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

// Function: sub_0029B2B8
// Address: 0x29b2b8 - 0x29b428
void sub_0029B2B8_0x29b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B2B8_0x29b2b8");
#endif

    switch (ctx->pc) {
        case 0x29b2f8u: goto label_29b2f8;
        case 0x29b310u: goto label_29b310;
        case 0x29b31cu: goto label_29b31c;
        case 0x29b330u: goto label_29b330;
        case 0x29b37cu: goto label_29b37c;
        case 0x29b398u: goto label_29b398;
        case 0x29b3bcu: goto label_29b3bc;
        case 0x29b3c8u: goto label_29b3c8;
        case 0x29b3e4u: goto label_29b3e4;
        default: break;
    }

    ctx->pc = 0x29b2b8u;

label_29b2b8:
    // 0x29b2b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29b2bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x29b2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x29b2c0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x29b2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x29b2c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29b2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x29b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x29b2cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29b2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29b2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x29b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x29b2dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29b2dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2e0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x29b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x29b2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b2e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x29b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29b2ec: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x29b2ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b2f0: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B2F0u;
    SET_GPR_U32(ctx, 31, 0x29B2F8u);
    ctx->pc = 0x29B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2F0u;
    // 0x29b2f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B2F0u, 0x29B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2F8u;
label_29b2f8:
    // 0x29b2f8: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x29B2F8u;
    {
        const bool branch_taken_0x29b2f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2F8u;
        // 0x29b2fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2f8) {
            ctx->pc = 0x29B3A0u;
            goto label_29b3a0;
        }
    }
    ctx->pc = 0x29B300u;
    // 0x29b300: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29b304: 0x2613ffff  addiu       $s3, $s0, -0x1
    ctx->pc = 0x29b304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x29b308: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B308u;
    SET_GPR_U32(ctx, 31, 0x29B310u);
    ctx->pc = 0x29B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B308u;
    // 0x29b30c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B308u, 0x29B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B310u;
label_29b310:
    // 0x29b310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b314: 0xc09441c  jal         func_251070
    ctx->pc = 0x29B314u;
    SET_GPR_U32(ctx, 31, 0x29B31Cu);
    ctx->pc = 0x29B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B314u;
    // 0x29b318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x29B314u, 0x29B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B31Cu;
label_29b31c:
    // 0x29b31c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b320: 0x54430020  bnel        $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x29B320u;
    {
        const bool branch_taken_0x29b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29b320) {
            ctx->pc = 0x29B324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B320u;
            // 0x29b324: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B3A4u;
            goto label_29b3a4;
        }
    }
    ctx->pc = 0x29B328u;
    // 0x29b328: 0xc09443e  jal         func_2510F8
    ctx->pc = 0x29B328u;
    SET_GPR_U32(ctx, 31, 0x29B330u);
    ctx->pc = 0x29B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B328u;
    // 0x29b32c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2510F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2510F8u, 0x29B328u, 0x29B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B330u;
label_29b330:
    // 0x29b330: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29b330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b334: 0x52a0002e  beql        $s5, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x29B334u;
    {
        const bool branch_taken_0x29b334 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b334) {
            ctx->pc = 0x29B338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B334u;
            // 0x29b338: 0x7a420000  lq          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B3F0u;
            goto label_29b3f0;
        }
    }
    ctx->pc = 0x29B33Cu;
    // 0x29b33c: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x29b33cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29b340: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x29B340u;
    {
        const bool branch_taken_0x29b340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B340u;
        // 0x29b344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b340) {
            ctx->pc = 0x29B370u;
            goto label_29b370;
        }
    }
    ctx->pc = 0x29B348u;
    // 0x29b348: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29b348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29b34c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x29b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x29b350: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x29b350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x29b354: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29b358: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x29b358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x29b35c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29b360: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29b364: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29b364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29B368u;
    {
        const bool branch_taken_0x29b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B368u;
        // 0x29b36c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b368) {
            ctx->pc = 0x29B384u;
            goto label_29b384;
        }
    }
    ctx->pc = 0x29B370u;
label_29b370:
    // 0x29b370: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29b370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b374: 0xc0a6cae  jal         func_29B2B8
    ctx->pc = 0x29B374u;
    SET_GPR_U32(ctx, 31, 0x29B37Cu);
    ctx->pc = 0x29B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B374u;
    // 0x29b378: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    goto label_29b2b8;
    ctx->pc = 0x29B37Cu;
label_29b37c:
    // 0x29b37c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29b37cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b380: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_29b384:
    // 0x29b384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29b384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b388: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x29b388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b38c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29b38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b390: 0xc0cdb82  jal         func_336E08
    ctx->pc = 0x29B390u;
    SET_GPR_U32(ctx, 31, 0x29B398u);
    ctx->pc = 0x29B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B390u;
    // 0x29b394: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E08u, 0x29B390u, 0x29B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B398u;
label_29b398:
    // 0x29b398: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29B398u;
    {
        const bool branch_taken_0x29b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B398u;
        // 0x29b39c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b398) {
            ctx->pc = 0x29B3F8u;
            goto label_29b3f8;
        }
    }
    ctx->pc = 0x29B3A0u;
label_29b3a0:
    // 0x29b3a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29b3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29b3a4:
    // 0x29b3a4: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x29b3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x29b3a8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x29B3A8u;
    {
        const bool branch_taken_0x29b3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3a8) {
            ctx->pc = 0x29B3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B3A8u;
            // 0x29b3ac: 0x7a420000  lq          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B3F0u;
            goto label_29b3f0;
        }
    }
    ctx->pc = 0x29B3B0u;
    // 0x29b3b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29b3b4: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B3B4u;
    SET_GPR_U32(ctx, 31, 0x29B3BCu);
    ctx->pc = 0x29B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3B4u;
    // 0x29b3b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B3B4u, 0x29B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3BCu;
label_29b3bc:
    // 0x29b3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29b3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3c0: 0xc09441c  jal         func_251070
    ctx->pc = 0x29B3C0u;
    SET_GPR_U32(ctx, 31, 0x29B3C8u);
    ctx->pc = 0x29B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3C0u;
    // 0x29b3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x29B3C0u, 0x29B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3C8u;
label_29b3c8:
    // 0x29b3c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b3cc: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B3CCu;
    {
        const bool branch_taken_0x29b3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29b3cc) {
            ctx->pc = 0x29B3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B3CCu;
            // 0x29b3d0: 0x7a420000  lq          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B3F0u;
            goto label_29b3f0;
        }
    }
    ctx->pc = 0x29B3D4u;
    // 0x29b3d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29b3d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29b3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3dc: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x29B3DCu;
    SET_GPR_U32(ctx, 31, 0x29B3E4u);
    ctx->pc = 0x29B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3DCu;
    // 0x29b3e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x29B3DCu, 0x29B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3E4u;
label_29b3e4:
    // 0x29b3e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29b3e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b3e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B3E8u;
    {
        const bool branch_taken_0x29b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3E8u;
        // 0x29b3ec: 0x7e830000  sq          $v1, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3e8) {
            ctx->pc = 0x29B3F4u;
            goto label_29b3f4;
        }
    }
    ctx->pc = 0x29B3F0u;
label_29b3f0:
    // 0x29b3f0: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x29b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_29b3f4:
    // 0x29b3f4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x29b3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29b3f8:
    // 0x29b3f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x29b3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b3fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x29b3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b400: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x29b400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b404: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x29b404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b408: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29b408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b40c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x29b40cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b414: 0x3e00008  jr          $ra
    ctx->pc = 0x29B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B414u;
        // 0x29b418: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B41Cu;
    // 0x29b41c: 0x0  nop
    ctx->pc = 0x29b41cu;
    // NOP
    // 0x29b420: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29b424: 0x0  nop
    ctx->pc = 0x29b424u;
    // NOP
    ctx->pc = 0x29b428u;
}
