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

// Function: sub_00232B78
// Address: 0x232b78 - 0x232be8
void sub_00232B78_0x232b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232B78_0x232b78");
#endif

    switch (ctx->pc) {
        case 0x232bd8u: goto label_232bd8;
        default: break;
    }

    ctx->pc = 0x232b78u;

    // 0x232b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232b7c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x232b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x232b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232b84: 0x2445bf48  addiu       $a1, $v0, -0x40B8
    ctx->pc = 0x232b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950728));
    // 0x232b88: 0x848301be  lh          $v1, 0x1BE($a0)
    ctx->pc = 0x232b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 446)));
    // 0x232b8c: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x232b8cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55BF4Au));
    // 0x232b90: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x232B90u;
    {
        const bool branch_taken_0x232b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x232B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B90u;
        // 0x232b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b90) {
            ctx->pc = 0x232BC8u;
            goto label_232bc8;
        }
    }
    ctx->pc = 0x232B98u;
    // 0x232b98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232b9c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232B9Cu;
    {
        const bool branch_taken_0x232b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B9Cu;
        // 0x232ba0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b9c) {
            ctx->pc = 0x232BB4u;
            goto label_232bb4;
        }
    }
    ctx->pc = 0x232BA4u;
    // 0x232ba4: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x232ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x232ba8: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x232ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x232bac: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x232BACu;
    {
        const bool branch_taken_0x232bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x232BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BACu;
        // 0x232bb0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bac) {
            ctx->pc = 0x232BC4u;
            goto label_232bc4;
        }
    }
    ctx->pc = 0x232BB4u;
label_232bb4:
    // 0x232bb4: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x232bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x232bb8: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x232bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x232bbc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x232BBCu;
    {
        const bool branch_taken_0x232bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x232bbc) {
            ctx->pc = 0x232BC8u;
            goto label_232bc8;
        }
    }
    ctx->pc = 0x232BC4u;
label_232bc4:
    // 0x232bc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232bc8:
    // 0x232bc8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x232BC8u;
    {
        const bool branch_taken_0x232bc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BC8u;
        // 0x232bcc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bc8) {
            ctx->pc = 0x232BDCu;
            goto label_232bdc;
        }
    }
    ctx->pc = 0x232BD0u;
    // 0x232bd0: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x232BD0u;
    SET_GPR_U32(ctx, 31, 0x232BD8u);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x232BD0u, 0x232BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BD8u;
label_232bd8:
    // 0x232bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232bdc:
    // 0x232bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x232BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BDCu;
        // 0x232be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232BE4u;
    // 0x232be4: 0x0  nop
    ctx->pc = 0x232be4u;
    // NOP
    ctx->pc = 0x232be8u;
}
