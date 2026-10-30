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

// Function: sub_002D47D0
// Address: 0x2d47d0 - 0x2d48a0
void sub_002D47D0_0x2d47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D47D0_0x2d47d0");
#endif

    switch (ctx->pc) {
        case 0x2d4804u: goto label_2d4804;
        case 0x2d4854u: goto label_2d4854;
        case 0x2d4884u: goto label_2d4884;
        default: break;
    }

    ctx->pc = 0x2d47d0u;

    // 0x2d47d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d47d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d47d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d47d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d47d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d47d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d47dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2d47dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d47e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d47e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d47e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d47e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d47e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d47ec: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d47ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d47f0: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D47F0u;
    {
        const bool branch_taken_0x2d47f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47F0u;
        // 0x2d47f4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47f0) {
            ctx->pc = 0x2D4884u;
            goto label_2d4884;
        }
    }
    ctx->pc = 0x2D47F8u;
    // 0x2d47f8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2d47f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2d47fc: 0xc089998  jal         func_226660
    ctx->pc = 0x2D47FCu;
    SET_GPR_U32(ctx, 31, 0x2D4804u);
    ctx->pc = 0x2D4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47FCu;
    // 0x2d4800: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D47FCu, 0x2D4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4804u;
label_2d4804:
    // 0x2d4804: 0x10500020  beq         $v0, $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D4804u;
    {
        const bool branch_taken_0x2d4804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4804u;
        // 0x2d4808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4804) {
            ctx->pc = 0x2D4888u;
            goto label_2d4888;
        }
    }
    ctx->pc = 0x2D480Cu;
    // 0x2d480c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2d480cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d4810: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D4810u;
    {
        const bool branch_taken_0x2d4810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4810u;
        // 0x2d4814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4810) {
            ctx->pc = 0x2D4888u;
            goto label_2d4888;
        }
    }
    ctx->pc = 0x2D4818u;
    // 0x2d4818: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d481c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D481Cu;
    {
        const bool branch_taken_0x2d481c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D481Cu;
        // 0x2d4820: 0xa2300018  sb          $s0, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d481c) {
            ctx->pc = 0x2D4834u;
            goto label_2d4834;
        }
    }
    ctx->pc = 0x2D4824u;
    // 0x2d4824: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4824u;
    {
        const bool branch_taken_0x2d4824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4824u;
        // 0x2d4828: 0x241002d2  addiu       $s0, $zero, 0x2D2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 722));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4824) {
            ctx->pc = 0x2D483Cu;
            goto label_2d483c;
        }
    }
    ctx->pc = 0x2D482Cu;
    // 0x2d482c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D482Cu;
    {
        const bool branch_taken_0x2d482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D482Cu;
        // 0x2d4830: 0x3a0202d2  xori        $v0, $s0, 0x2D2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)722);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d482c) {
            ctx->pc = 0x2D4844u;
            goto label_2d4844;
        }
    }
    ctx->pc = 0x2D4834u;
label_2d4834:
    // 0x2d4834: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4834u;
    {
        const bool branch_taken_0x2d4834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4834u;
        // 0x2d4838: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4834) {
            ctx->pc = 0x2D4840u;
            goto label_2d4840;
        }
    }
    ctx->pc = 0x2D483Cu;
label_2d483c:
    // 0x2d483c: 0x24100299  addiu       $s0, $zero, 0x299
    ctx->pc = 0x2d483cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_2d4840:
    // 0x2d4840: 0x3a0202d2  xori        $v0, $s0, 0x2D2
    ctx->pc = 0x2d4840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)722);
label_2d4844:
    // 0x2d4844: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D4844u;
    {
        const bool branch_taken_0x2d4844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4844u;
        // 0x2d4848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4844) {
            ctx->pc = 0x2D4888u;
            goto label_2d4888;
        }
    }
    ctx->pc = 0x2D484Cu;
    // 0x2d484c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D484Cu;
    SET_GPR_U32(ctx, 31, 0x2D4854u);
    ctx->pc = 0x2D4850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D484Cu;
    // 0x2d4850: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D484Cu, 0x2D4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4854u;
label_2d4854:
    // 0x2d4854: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D4854u;
    {
        const bool branch_taken_0x2d4854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4854u;
        // 0x2d4858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4854) {
            ctx->pc = 0x2D4884u;
            goto label_2d4884;
        }
    }
    ctx->pc = 0x2D485Cu;
    // 0x2d485c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d4860: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d4860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d4864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d4864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d4868: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d4868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d486c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d486cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4870: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4874: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d4874u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d4878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d4878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d487c: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2D487Cu;
    SET_GPR_U32(ctx, 31, 0x2D4884u);
    ctx->pc = 0x2D4880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D487Cu;
    // 0x2d4880: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D487Cu, 0x2D4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4884u;
label_2d4884:
    // 0x2d4884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4888:
    // 0x2d4888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d4888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d488c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d488cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4894: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4894u;
        // 0x2d4898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D489Cu;
    // 0x2d489c: 0x0  nop
    ctx->pc = 0x2d489cu;
    // NOP
    ctx->pc = 0x2d48a0u;
}
