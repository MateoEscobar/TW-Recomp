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

// Function: sub_004B3C98
// Address: 0x4b3c98 - 0x4b3d10
void sub_004B3C98_0x4b3c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3C98_0x4b3c98");
#endif

    switch (ctx->pc) {
        case 0x4b3cbcu: goto label_4b3cbc;
        case 0x4b3cdcu: goto label_4b3cdc;
        case 0x4b3cecu: goto label_4b3cec;
        case 0x4b3cf4u: goto label_4b3cf4;
        default: break;
    }

    ctx->pc = 0x4b3c98u;

    // 0x4b3c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b3c9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b3c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b3ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b3ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b3ca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3cac: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3CACu;
    {
        const bool branch_taken_0x4b3cac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3CACu;
        // 0x4b3cb0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3cac) {
            ctx->pc = 0x4B3CC4u;
            goto label_4b3cc4;
        }
    }
    ctx->pc = 0x4B3CB4u;
    // 0x4b3cb4: 0xc12cef2  jal         func_4B3BC8
    ctx->pc = 0x4B3CB4u;
    SET_GPR_U32(ctx, 31, 0x4B3CBCu);
    ctx->pc = 0x4B3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BC8u, 0x4B3CB4u, 0x4B3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3CBCu;
label_4b3cbc:
    // 0x4b3cbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B3CBCu;
    {
        const bool branch_taken_0x4b3cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3CBCu;
        // 0x4b3cc0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3cbc) {
            ctx->pc = 0x4B3CFCu;
            goto label_4b3cfc;
        }
    }
    ctx->pc = 0x4B3CC4u;
label_4b3cc4:
    // 0x4b3cc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4b3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b3cc8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b3cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b3ccc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B3CCCu;
    {
        const bool branch_taken_0x4b3ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3CCCu;
        // 0x4b3cd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ccc) {
            ctx->pc = 0x4B3CF8u;
            goto label_4b3cf8;
        }
    }
    ctx->pc = 0x4B3CD4u;
    // 0x4b3cd4: 0xc12cef2  jal         func_4B3BC8
    ctx->pc = 0x4B3CD4u;
    SET_GPR_U32(ctx, 31, 0x4B3CDCu);
    ctx->pc = 0x4B3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BC8u, 0x4B3CD4u, 0x4B3CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3CDCu;
label_4b3cdc:
    // 0x4b3cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b3cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b3ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ce4: 0xc12cf14  jal         func_4B3C50
    ctx->pc = 0x4B3CE4u;
    SET_GPR_U32(ctx, 31, 0x4B3CECu);
    ctx->pc = 0x4B3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3CE4u;
    // 0x4b3ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C50u, 0x4B3CE4u, 0x4B3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3CECu;
label_4b3cec:
    // 0x4b3cec: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B3CECu;
    SET_GPR_U32(ctx, 31, 0x4B3CF4u);
    ctx->pc = 0x4B3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3CECu;
    // 0x4b3cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B3CECu, 0x4B3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3CF4u;
label_4b3cf4:
    // 0x4b3cf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b3cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b3cf8:
    // 0x4b3cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b3cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b3cfc:
    // 0x4b3cfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b3cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3d04: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D04u;
        // 0x4b3d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3D0Cu;
    // 0x4b3d0c: 0x0  nop
    ctx->pc = 0x4b3d0cu;
    // NOP
    ctx->pc = 0x4b3d10u;
}
