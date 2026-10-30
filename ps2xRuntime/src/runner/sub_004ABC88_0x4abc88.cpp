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

// Function: sub_004ABC88
// Address: 0x4abc88 - 0x4abcf0
void sub_004ABC88_0x4abc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABC88_0x4abc88");
#endif

    switch (ctx->pc) {
        case 0x4abcb0u: goto label_4abcb0;
        case 0x4abcb8u: goto label_4abcb8;
        default: break;
    }

    ctx->pc = 0x4abc88u;

    // 0x4abc88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4abc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4abc8c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4abc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4abc90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4abc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4abc94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4abc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4abc98: 0x2452c531  addiu       $s2, $v0, -0x3ACF
    ctx->pc = 0x4abc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
    // 0x4abc9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4abc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4abca0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x4abca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4abca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4abca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4abca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4abca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abcac: 0x0  nop
    ctx->pc = 0x4abcacu;
    // NOP
label_4abcb0:
    // 0x4abcb0: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4ABCB0u;
    SET_GPR_U32(ctx, 31, 0x4ABCB8u);
    ctx->pc = 0x4ABCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABCB0u;
    // 0x4abcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4ABCB0u, 0x4ABCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABCB8u;
label_4abcb8:
    // 0x4abcb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4abcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abcbc: 0x10910005  beq         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ABCBCu;
    {
        const bool branch_taken_0x4abcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x4ABCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCBCu;
        // 0x4abcc0: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abcbc) {
            ctx->pc = 0x4ABCD4u;
            goto label_4abcd4;
        }
    }
    ctx->pc = 0x4ABCC4u;
    // 0x4abcc4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4abcc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4abcc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4abcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x4abccc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4ABCCCu;
    {
        const bool branch_taken_0x4abccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4abccc) {
            ctx->pc = 0x4ABCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abcb0;
        }
    }
    ctx->pc = 0x4ABCD4u;
label_4abcd4:
    // 0x4abcd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4abcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4abcd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4abcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abcdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4abcdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4abce0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4abce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4abce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abce8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCE8u;
        // 0x4abcec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABCF0u;
}
