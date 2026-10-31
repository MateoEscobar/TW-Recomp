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

// Function: sub_00331CA0
// Address: 0x331ca0 - 0x331d08
void sub_00331CA0_0x331ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331CA0_0x331ca0");
#endif

    switch (ctx->pc) {
        case 0x331cd8u: goto label_331cd8;
        case 0x331ce8u: goto label_331ce8;
        case 0x331cf8u: goto label_331cf8;
        default: break;
    }

    ctx->pc = 0x331ca0u;

    // 0x331ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331ca4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x331ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x331ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331cac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331cb0: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331CB0u;
    {
        const bool branch_taken_0x331cb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x331CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CB0u;
        // 0x331cb4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331cb0) {
            ctx->pc = 0x331CCCu;
            goto label_331ccc;
        }
    }
    ctx->pc = 0x331CB8u;
    // 0x331cb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x331cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331cbc: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x331CBCu;
    {
        const bool branch_taken_0x331cbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x331cbc) {
            ctx->pc = 0x331CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331CBCu;
            // 0x331cc0: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331CE0u;
            goto label_331ce0;
        }
    }
    ctx->pc = 0x331CC4u;
    // 0x331cc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x331CC4u;
    {
        const bool branch_taken_0x331cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331cc4) {
            ctx->pc = 0x331CF0u;
            goto label_331cf0;
        }
    }
    ctx->pc = 0x331CCCu;
label_331ccc:
    // 0x331ccc: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x331cccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x331cd0: 0xc0cc6ea  jal         func_331BA8
    ctx->pc = 0x331CD0u;
    SET_GPR_U32(ctx, 31, 0x331CD8u);
    ctx->pc = 0x331CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331CD0u;
    // 0x331cd4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331BA8u, 0x331CD0u, 0x331CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331CD8u;
label_331cd8:
    // 0x331cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x331CD8u;
    {
        const bool branch_taken_0x331cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CD8u;
        // 0x331cdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331cd8) {
            ctx->pc = 0x331CFCu;
            goto label_331cfc;
        }
    }
    ctx->pc = 0x331CE0u;
label_331ce0:
    // 0x331ce0: 0xc0cc710  jal         func_331C40
    ctx->pc = 0x331CE0u;
    SET_GPR_U32(ctx, 31, 0x331CE8u);
    ctx->pc = 0x331CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331CE0u;
    // 0x331ce4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C40u, 0x331CE0u, 0x331CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331CE8u;
label_331ce8:
    // 0x331ce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x331CE8u;
    {
        const bool branch_taken_0x331ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CE8u;
        // 0x331cec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ce8) {
            ctx->pc = 0x331CFCu;
            goto label_331cfc;
        }
    }
    ctx->pc = 0x331CF0u;
label_331cf0:
    // 0x331cf0: 0xc0cc6c6  jal         func_331B18
    ctx->pc = 0x331CF0u;
    SET_GPR_U32(ctx, 31, 0x331CF8u);
    ctx->pc = 0x331CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331CF0u;
    // 0x331cf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331B18u, 0x331CF0u, 0x331CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331CF8u;
label_331cf8:
    // 0x331cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_331cfc:
    // 0x331cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x331CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CFCu;
        // 0x331d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331D04u;
    // 0x331d04: 0x0  nop
    ctx->pc = 0x331d04u;
    // NOP
    ctx->pc = 0x331d08u;
}
