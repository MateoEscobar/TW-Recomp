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

// Function: sub_002EA840
// Address: 0x2ea840 - 0x2ea8f8
void sub_002EA840_0x2ea840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA840_0x2ea840");
#endif

    switch (ctx->pc) {
        case 0x2ea88cu: goto label_2ea88c;
        case 0x2ea89cu: goto label_2ea89c;
        case 0x2ea8ccu: goto label_2ea8cc;
        default: break;
    }

    ctx->pc = 0x2ea840u;

    // 0x2ea840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ea840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ea844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ea844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea848: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ea848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ea84c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ea84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ea850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ea858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea85c: 0x9211002e  lbu         $s1, 0x2E($s0)
    ctx->pc = 0x2ea85cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2ea860: 0x1623001f  bne         $s1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EA860u;
    {
        const bool branch_taken_0x2ea860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA860u;
        // 0x2ea864: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea860) {
            ctx->pc = 0x2EA8E0u;
            goto label_2ea8e0;
        }
    }
    ctx->pc = 0x2EA868u;
    // 0x2ea868: 0x8cc200d4  lw          $v0, 0xD4($a2)
    ctx->pc = 0x2ea868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2ea86c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2ea86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ea870: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2ea870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2ea874: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EA874u;
    {
        const bool branch_taken_0x2ea874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA874u;
        // 0x2ea878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea874) {
            ctx->pc = 0x2EA8E4u;
            goto label_2ea8e4;
        }
    }
    ctx->pc = 0x2EA87Cu;
    // 0x2ea87c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ea87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2ea880: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ea880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea884: 0xc089998  jal         func_226660
    ctx->pc = 0x2EA884u;
    SET_GPR_U32(ctx, 31, 0x2EA88Cu);
    ctx->pc = 0x2EA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA884u;
    // 0x2ea888: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EA884u, 0x2EA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA88Cu;
label_2ea88c:
    // 0x2ea88c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EA88Cu;
    {
        const bool branch_taken_0x2ea88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA88Cu;
        // 0x2ea890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea88c) {
            ctx->pc = 0x2EA8E4u;
            goto label_2ea8e4;
        }
    }
    ctx->pc = 0x2EA894u;
    // 0x2ea894: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2EA894u;
    SET_GPR_U32(ctx, 31, 0x2EA89Cu);
    ctx->pc = 0x2EA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA894u;
    // 0x2ea898: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EA894u, 0x2EA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA89Cu;
label_2ea89c:
    // 0x2ea89c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EA89Cu;
    {
        const bool branch_taken_0x2ea89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA89Cu;
        // 0x2ea8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea89c) {
            ctx->pc = 0x2EA8CCu;
            goto label_2ea8cc;
        }
    }
    ctx->pc = 0x2EA8A4u;
    // 0x2ea8a4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ea8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ea8a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ea8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ea8ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ea8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea8b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea8b4: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2ea8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2ea8b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ea8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea8bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ea8bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ea8c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea8c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8c4: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2EA8C4u;
    SET_GPR_U32(ctx, 31, 0x2EA8CCu);
    ctx->pc = 0x2EA8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8C4u;
    // 0x2ea8c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EA8C4u, 0x2EA8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8CCu;
label_2ea8cc:
    // 0x2ea8cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ea8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea8d0: 0xa2110024  sb          $s1, 0x24($s0)
    ctx->pc = 0x2ea8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ea8d4: 0xa202002e  sb          $v0, 0x2E($s0)
    ctx->pc = 0x2ea8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea8d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA8D8u;
    {
        const bool branch_taken_0x2ea8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8D8u;
        // 0x2ea8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8d8) {
            ctx->pc = 0x2EA8E4u;
            goto label_2ea8e4;
        }
    }
    ctx->pc = 0x2EA8E0u;
label_2ea8e0:
    // 0x2ea8e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea8e4:
    // 0x2ea8e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ea8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea8e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ea8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8F0u;
        // 0x2ea8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA8F8u;
}
