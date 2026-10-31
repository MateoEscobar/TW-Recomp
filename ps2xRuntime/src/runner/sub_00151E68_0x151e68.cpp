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

// Function: sub_00151E68
// Address: 0x151e68 - 0x151ed0
void sub_00151E68_0x151e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151E68_0x151e68");
#endif

    switch (ctx->pc) {
        case 0x151e7cu: goto label_151e7c;
        case 0x151e90u: goto label_151e90;
        case 0x151ebcu: goto label_151ebc;
        default: break;
    }

    ctx->pc = 0x151e68u;

    // 0x151e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151e6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x151e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x151e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151e74: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x151E74u;
    SET_GPR_U32(ctx, 31, 0x151E7Cu);
    ctx->pc = 0x151E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E74u;
    // 0x151e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x151E74u, 0x151E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E7Cu;
label_151e7c:
    // 0x151e7c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x151e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x151e80: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x151e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x151e84: 0x24454468  addiu       $a1, $v0, 0x4468
    ctx->pc = 0x151e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17512));
    // 0x151e88: 0x24634448  addiu       $v1, $v1, 0x4448
    ctx->pc = 0x151e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17480));
    // 0x151e8c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x151e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_151e90:
    // 0x151e90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151e94: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151E94u;
    {
        const bool branch_taken_0x151e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x151e94) {
            ctx->pc = 0x151E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E94u;
            // 0x151e98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151EA8u;
            goto label_151ea8;
        }
    }
    ctx->pc = 0x151E9Cu;
    // 0x151e9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x151e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x151ea0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x151ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x151ea4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x151ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_151ea8:
    // 0x151ea8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x151ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x151eac: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x151EACu;
    {
        const bool branch_taken_0x151eac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x151EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EACu;
        // 0x151eb0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151eac) {
            ctx->pc = 0x151E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151e90;
        }
    }
    ctx->pc = 0x151EB4u;
    // 0x151eb4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x151EB4u;
    SET_GPR_U32(ctx, 31, 0x151EBCu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x151EB4u, 0x151EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EBCu;
label_151ebc:
    // 0x151ebc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x151ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x151EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EC4u;
        // 0x151ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151ECCu;
    // 0x151ecc: 0x0  nop
    ctx->pc = 0x151eccu;
    // NOP
    ctx->pc = 0x151ed0u;
}
