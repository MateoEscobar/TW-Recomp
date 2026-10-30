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

// Function: sub_002AD378
// Address: 0x2ad378 - 0x2ad490
void sub_002AD378_0x2ad378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD378_0x2ad378");
#endif

    switch (ctx->pc) {
        case 0x2ad408u: goto label_2ad408;
        case 0x2ad410u: goto label_2ad410;
        case 0x2ad444u: goto label_2ad444;
        case 0x2ad454u: goto label_2ad454;
        case 0x2ad460u: goto label_2ad460;
        default: break;
    }

    ctx->pc = 0x2ad378u;

    // 0x2ad378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad37c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ad37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ad380: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ad380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ad384: 0x2442f5b0  addiu       $v0, $v0, -0xA50
    ctx->pc = 0x2ad384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964656));
    // 0x2ad388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad390: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ad390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ad394: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ad394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ad398: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ad398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ad39c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ad39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad3a4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2ad3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3a8: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x2ad3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x2ad3ac: 0xe60c0024  swc1        $f12, 0x24($s0)
    ctx->pc = 0x2ad3acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2ad3b0: 0x3c090071  lui         $t1, 0x71
    ctx->pc = 0x2ad3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)113 << 16));
    // 0x2ad3b4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2ad3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2ad3b8: 0x25294b00  addiu       $t1, $t1, 0x4B00
    ctx->pc = 0x2ad3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19200));
    // 0x2ad3bc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2ad3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2ad3c0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2ad3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad3c4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2ad3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad3c8: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2ad3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ad3cc: 0xa206002d  sb          $a2, 0x2D($s0)
    ctx->pc = 0x2ad3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ad3d0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2ad3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2ad3d4: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2ad3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad3d8: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2ad3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ad3dc: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x2ad3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ad3e0: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x2ad3e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2ad3e4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ad3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ad3e8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ad3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ad3ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ad3ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad3f0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2ad3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2ad3f4: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x2ad3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2ad3f8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ad3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ad3fc: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2ad3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2ad400: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2AD400u;
    SET_GPR_U32(ctx, 31, 0x2AD408u);
    ctx->pc = 0x2AD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD400u;
    // 0x2ad404: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2AD400u, 0x2AD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD408u;
label_2ad408:
    // 0x2ad408: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2AD408u;
    SET_GPR_U32(ctx, 31, 0x2AD410u);
    ctx->pc = 0x2AD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD408u;
    // 0x2ad40c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2AD408u, 0x2AD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD410u;
label_2ad410:
    // 0x2ad410: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AD410u;
    {
        const bool branch_taken_0x2ad410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD410u;
        // 0x2ad414: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad410) {
            ctx->pc = 0x2AD460u;
            goto label_2ad460;
        }
    }
    ctx->pc = 0x2AD418u;
    // 0x2ad418: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2ad418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad41c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AD41Cu;
    {
        const bool branch_taken_0x2ad41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad41c) {
            ctx->pc = 0x2AD420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD41Cu;
            // 0x2ad420: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD464u;
            goto label_2ad464;
        }
    }
    ctx->pc = 0x2AD424u;
    // 0x2ad424: 0x5260000f  beql        $s3, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2AD424u;
    {
        const bool branch_taken_0x2ad424 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad424) {
            ctx->pc = 0x2AD428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD424u;
            // 0x2ad428: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD464u;
            goto label_2ad464;
        }
    }
    ctx->pc = 0x2AD42Cu;
    // 0x2ad42c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2ad42cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ad430: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AD430u;
    {
        const bool branch_taken_0x2ad430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD430u;
        // 0x2ad434: 0x26240418  addiu       $a0, $s1, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad430) {
            ctx->pc = 0x2AD460u;
            goto label_2ad460;
        }
    }
    ctx->pc = 0x2AD438u;
    // 0x2ad438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ad438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad43c: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AD43Cu;
    SET_GPR_U32(ctx, 31, 0x2AD444u);
    ctx->pc = 0x2AD440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD43Cu;
    // 0x2ad440: 0x2406025c  addiu       $a2, $zero, 0x25C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AD43Cu, 0x2AD444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD444u;
label_2ad444:
    // 0x2ad444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ad444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad448: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x2ad448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x2ad44c: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AD44Cu;
    SET_GPR_U32(ctx, 31, 0x2AD454u);
    ctx->pc = 0x2AD450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD44Cu;
    // 0x2ad450: 0x24060184  addiu       $a2, $zero, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AD44Cu, 0x2AD454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD454u;
label_2ad454:
    // 0x2ad454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad458: 0xc089974  jal         func_2265D0
    ctx->pc = 0x2AD458u;
    SET_GPR_U32(ctx, 31, 0x2AD460u);
    ctx->pc = 0x2AD45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD458u;
    // 0x2ad45c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2AD458u, 0x2AD460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD460u;
label_2ad460:
    // 0x2ad460: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ad460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ad464:
    // 0x2ad464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad468: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ad468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad46c: 0x8c83021c  lw          $v1, 0x21C($a0)
    ctx->pc = 0x2ad46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x2ad470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad474: 0xa203002e  sb          $v1, 0x2E($s0)
    ctx->pc = 0x2ad474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ad478: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ad478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad47c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ad47cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad484: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x2ad484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
    // 0x2ad488: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD488u;
        // 0x2ad48c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD490u;
}
