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

// Function: sub_002D7BC8
// Address: 0x2d7bc8 - 0x2d7c68
void sub_002D7BC8_0x2d7bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7BC8_0x2d7bc8");
#endif

    switch (ctx->pc) {
        case 0x2d7bfcu: goto label_2d7bfc;
        case 0x2d7c10u: goto label_2d7c10;
        case 0x2d7c24u: goto label_2d7c24;
        case 0x2d7c38u: goto label_2d7c38;
        case 0x2d7c44u: goto label_2d7c44;
        default: break;
    }

    ctx->pc = 0x2d7bc8u;

    // 0x2d7bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7bd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d7bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d7bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7bdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7be0: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D7BE0u;
    {
        const bool branch_taken_0x2d7be0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BE0u;
        // 0x2d7be4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7be0) {
            ctx->pc = 0x2D7C2Cu;
            goto label_2d7c2c;
        }
    }
    ctx->pc = 0x2D7BE8u;
    // 0x2d7be8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d7be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d7bec: 0x26040468  addiu       $a0, $s0, 0x468
    ctx->pc = 0x2d7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1128));
    // 0x2d7bf0: 0x24a56458  addiu       $a1, $a1, 0x6458
    ctx->pc = 0x2d7bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25688));
    // 0x2d7bf4: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D7BF4u;
    SET_GPR_U32(ctx, 31, 0x2D7BFCu);
    ctx->pc = 0x2D7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BF4u;
    // 0x2d7bf8: 0x240602a0  addiu       $a2, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D7BF4u, 0x2D7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BFCu;
label_2d7bfc:
    // 0x2d7bfc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d7c00: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x2d7c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x2d7c04: 0x24a56468  addiu       $a1, $a1, 0x6468
    ctx->pc = 0x2d7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25704));
    // 0x2d7c08: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D7C08u;
    SET_GPR_U32(ctx, 31, 0x2D7C10u);
    ctx->pc = 0x2D7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C08u;
    // 0x2d7c0c: 0x2406029f  addiu       $a2, $zero, 0x29F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D7C08u, 0x2D7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C10u;
label_2d7c10:
    // 0x2d7c10: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d7c14: 0x260404b8  addiu       $a0, $s0, 0x4B8
    ctx->pc = 0x2d7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1208));
    // 0x2d7c18: 0x24a56478  addiu       $a1, $a1, 0x6478
    ctx->pc = 0x2d7c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25720));
    // 0x2d7c1c: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D7C24u);
    ctx->pc = 0x2D7C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C1Cu;
    // 0x2d7c20: 0x240602a1  addiu       $a2, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D7C1Cu, 0x2D7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C24u;
label_2d7c24:
    // 0x2d7c24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D7C24u;
    {
        const bool branch_taken_0x2d7c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C24u;
        // 0x2d7c28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c24) {
            ctx->pc = 0x2D7C54u;
            goto label_2d7c54;
        }
    }
    ctx->pc = 0x2D7C2Cu;
label_2d7c2c:
    // 0x2d7c2c: 0x26100468  addiu       $s0, $s0, 0x468
    ctx->pc = 0x2d7c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1128));
    // 0x2d7c30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d7c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c34: 0x0  nop
    ctx->pc = 0x2d7c34u;
    // NOP
label_2d7c38:
    // 0x2d7c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c3c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D7C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D7C44u);
    ctx->pc = 0x2D7C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C3Cu;
    // 0x2d7c40: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D7C3Cu, 0x2D7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C44u;
label_2d7c44:
    // 0x2d7c44: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2d7c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d7c48: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7C48u;
    {
        const bool branch_taken_0x2d7c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C48u;
        // 0x2d7c4c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c48) {
            ctx->pc = 0x2D7C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7c38;
        }
    }
    ctx->pc = 0x2D7C50u;
    // 0x2d7c50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d7c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7c54:
    // 0x2d7c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C5Cu;
        // 0x2d7c60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7C64u;
    // 0x2d7c64: 0x0  nop
    ctx->pc = 0x2d7c64u;
    // NOP
    ctx->pc = 0x2d7c68u;
}
