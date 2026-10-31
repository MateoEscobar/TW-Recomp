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

// Function: sub_004A56D8
// Address: 0x4a56d8 - 0x4a5738
void sub_004A56D8_0x4a56d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A56D8_0x4a56d8");
#endif

    switch (ctx->pc) {
        case 0x4a5704u: goto label_4a5704;
        case 0x4a5718u: goto label_4a5718;
        default: break;
    }

    ctx->pc = 0x4a56d8u;

    // 0x4a56d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a56d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a56dc: 0x8f8287cc  lw          $v0, -0x7834($gp)
    ctx->pc = 0x4a56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936524)));
    // 0x4a56e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a56e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a56e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A56E4u;
    {
        const bool branch_taken_0x4a56e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56E4u;
        // 0x4a56e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a56e4) {
            ctx->pc = 0x4A5720u;
            goto label_4a5720;
        }
    }
    ctx->pc = 0x4A56ECu;
    // 0x4a56ec: 0x8f828a88  lw          $v0, -0x7578($gp)
    ctx->pc = 0x4a56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x4a56f0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4a56f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x4a56f4: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x4a56f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
    // 0x4a56f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4a56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4a56fc: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x4A56FCu;
    SET_GPR_U32(ctx, 31, 0x4A5704u);
    ctx->pc = 0x4A5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A56FCu;
    // 0x4a5700: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4A56FCu, 0x4A5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5704u;
label_4a5704:
    // 0x4a5704: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a5704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x4a5708: 0x8f8487d0  lw          $a0, -0x7830($gp)
    ctx->pc = 0x4a5708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x4a570c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4a570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4a5710: 0xc12a3a2  jal         func_4A8E88
    ctx->pc = 0x4A5710u;
    SET_GPR_U32(ctx, 31, 0x4A5718u);
    ctx->pc = 0x4A5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5710u;
    // 0x4a5714: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8E88u, 0x4A5710u, 0x4A5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5718u;
label_4a5718:
    // 0x4a5718: 0xaf8087d0  sw          $zero, -0x7830($gp)
    ctx->pc = 0x4a5718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U32(ctx, 0));
    // 0x4a571c: 0xaf8087cc  sw          $zero, -0x7834($gp)
    ctx->pc = 0x4a571cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936524), GPR_U32(ctx, 0));
label_4a5720:
    // 0x4a5720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a5720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a572c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A572Cu;
        // 0x4a5730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A572Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5734u;
    // 0x4a5734: 0x0  nop
    ctx->pc = 0x4a5734u;
    // NOP
    ctx->pc = 0x4a5738u;
}
