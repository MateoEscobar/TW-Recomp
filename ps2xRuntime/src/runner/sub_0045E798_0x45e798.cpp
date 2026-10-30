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

// Function: sub_0045E798
// Address: 0x45e798 - 0x45e818
void sub_0045E798_0x45e798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E798_0x45e798");
#endif

    switch (ctx->pc) {
        case 0x45e7bcu: goto label_45e7bc;
        case 0x45e7d0u: goto label_45e7d0;
        default: break;
    }

    ctx->pc = 0x45e798u;

    // 0x45e798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45e798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45e79c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45e7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45e7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45e7a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45e7a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x45E7A8u;
    {
        const bool branch_taken_0x45e7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x45E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E7A8u;
        // 0x45e7ac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e7a8) {
            ctx->pc = 0x45E7C4u;
            goto label_45e7c4;
        }
    }
    ctx->pc = 0x45E7B0u;
    // 0x45e7b0: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x45e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x45e7b4: 0xc114012  jal         func_450048
    ctx->pc = 0x45E7B4u;
    SET_GPR_U32(ctx, 31, 0x45E7BCu);
    ctx->pc = 0x45E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45E7B4u;
    // 0x45e7b8: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x450048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450048u, 0x45E7B4u, 0x45E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E7BCu;
label_45e7bc:
    // 0x45e7bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x45E7BCu;
    {
        const bool branch_taken_0x45e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E7BCu;
        // 0x45e7c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e7bc) {
            ctx->pc = 0x45E80Cu;
            goto label_45e80c;
        }
    }
    ctx->pc = 0x45E7C4u;
label_45e7c4:
    // 0x45e7c4: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x45E7C4u;
    {
        const bool branch_taken_0x45e7c4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x45E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E7C4u;
        // 0x45e7c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e7c4) {
            ctx->pc = 0x45E80Cu;
            goto label_45e80c;
        }
    }
    ctx->pc = 0x45E7CCu;
    // 0x45e7cc: 0x0  nop
    ctx->pc = 0x45e7ccu;
    // NOP
label_45e7d0:
    // 0x45e7d0: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x45e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x45e7d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45e7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45e7d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e7dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e7e0: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x45e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x45e7e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e7e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e7ec: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x45e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x45e7f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e7f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e7f8: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x45e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x45e7fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e800: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x45E800u;
    {
        const bool branch_taken_0x45e800 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E800u;
        // 0x45e804: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e800) {
            ctx->pc = 0x45E7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e7d0;
        }
    }
    ctx->pc = 0x45E808u;
    // 0x45e808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45e80c:
    // 0x45e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x45E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E80Cu;
        // 0x45e810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E814u;
    // 0x45e814: 0x0  nop
    ctx->pc = 0x45e814u;
    // NOP
    ctx->pc = 0x45e818u;
}
