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

// Function: sub_00329BD0
// Address: 0x329bd0 - 0x329c38
void sub_00329BD0_0x329bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329BD0_0x329bd0");
#endif

    switch (ctx->pc) {
        case 0x329bf8u: goto label_329bf8;
        case 0x329c18u: goto label_329c18;
        default: break;
    }

    ctx->pc = 0x329bd0u;

    // 0x329bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329bd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x329bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x329bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329be0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329be4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x329be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x329be8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x329BE8u;
    {
        const bool branch_taken_0x329be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BE8u;
        // 0x329bec: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329be8) {
            ctx->pc = 0x329C24u;
            goto label_329c24;
        }
    }
    ctx->pc = 0x329BF0u;
    // 0x329bf0: 0x84a20026  lh          $v0, 0x26($a1)
    ctx->pc = 0x329bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x329bf4: 0x0  nop
    ctx->pc = 0x329bf4u;
    // NOP
label_329bf8:
    // 0x329bf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x329BF8u;
    {
        const bool branch_taken_0x329bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329bf8) {
            ctx->pc = 0x329BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329BF8u;
            // 0x329bfc: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C0Cu;
            goto label_329c0c;
        }
    }
    ctx->pc = 0x329C00u;
    // 0x329c00: 0x24b00028  addiu       $s0, $a1, 0x28
    ctx->pc = 0x329c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x329c04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329C04u;
    {
        const bool branch_taken_0x329c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C04u;
        // 0x329c08: 0xa4a00026  sh          $zero, 0x26($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 38), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c04) {
            ctx->pc = 0x329C18u;
            goto label_329c18;
        }
    }
    ctx->pc = 0x329C0Cu;
label_329c0c:
    // 0x329c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c10: 0xc0ca518  jal         func_329460
    ctx->pc = 0x329C10u;
    SET_GPR_U32(ctx, 31, 0x329C18u);
    ctx->pc = 0x329C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C10u;
    // 0x329c14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329460u, 0x329C10u, 0x329C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C18u;
label_329c18:
    // 0x329c18: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x329c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329c1c: 0x54a0fff6  bnel        $a1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x329C1Cu;
    {
        const bool branch_taken_0x329c1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c1c) {
            ctx->pc = 0x329C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C1Cu;
            // 0x329c20: 0x84a20026  lh          $v0, 0x26($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329bf8;
        }
    }
    ctx->pc = 0x329C24u;
label_329c24:
    // 0x329c24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x329c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329c30: 0x3e00008  jr          $ra
    ctx->pc = 0x329C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C30u;
        // 0x329c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329C38u;
}
