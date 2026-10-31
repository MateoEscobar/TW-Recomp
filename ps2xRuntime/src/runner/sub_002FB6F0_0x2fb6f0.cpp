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

// Function: sub_002FB6F0
// Address: 0x2fb6f0 - 0x2fb738
void sub_002FB6F0_0x2fb6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB6F0_0x2fb6f0");
#endif

    switch (ctx->pc) {
        case 0x2fb6f0u: goto label_2fb6f0;
        case 0x2fb6f4u: goto label_2fb6f4;
        case 0x2fb6f8u: goto label_2fb6f8;
        case 0x2fb6fcu: goto label_2fb6fc;
        case 0x2fb700u: goto label_2fb700;
        case 0x2fb704u: goto label_2fb704;
        case 0x2fb708u: goto label_2fb708;
        case 0x2fb70cu: goto label_2fb70c;
        case 0x2fb710u: goto label_2fb710;
        case 0x2fb714u: goto label_2fb714;
        case 0x2fb718u: goto label_2fb718;
        case 0x2fb71cu: goto label_2fb71c;
        case 0x2fb720u: goto label_2fb720;
        case 0x2fb724u: goto label_2fb724;
        case 0x2fb728u: goto label_2fb728;
        case 0x2fb72cu: goto label_2fb72c;
        case 0x2fb730u: goto label_2fb730;
        case 0x2fb734u: goto label_2fb734;
        default: break;
    }

    ctx->pc = 0x2fb6f0u;

label_2fb6f0:
    // 0x2fb6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2fb6f4:
    // 0x2fb6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fb6f8:
    // 0x2fb6f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb6fc:
    // 0x2fb6fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fb6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb700:
    // 0x2fb700: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2fb700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fb704:
    // 0x2fb704: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2fb704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2fb708:
    // 0x2fb708: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2fb708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb70c:
    // 0x2fb70c: 0x40f809  jalr        $v0
label_2fb710:
    if (ctx->pc == 0x2FB710u) {
        ctx->pc = 0x2FB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB70Cu;
        // 0x2fb710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB714u;
        goto label_2fb714;
    }
    ctx->pc = 0x2FB70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FB714u);
        ctx->pc = 0x2FB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB70Cu;
        // 0x2fb710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB70Cu, 0x2FB714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB714u;
label_2fb714:
    // 0x2fb714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb718:
    // 0x2fb718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb71c:
    // 0x2fb71c: 0xc08e1a4  jal         func_238690
label_2fb720:
    if (ctx->pc == 0x2FB720u) {
        ctx->pc = 0x2FB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB71Cu;
        // 0x2fb720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB724u;
        goto label_2fb724;
    }
    ctx->pc = 0x2FB71Cu;
    SET_GPR_U32(ctx, 31, 0x2FB724u);
    ctx->pc = 0x2FB720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB71Cu;
    // 0x2fb720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2FB71Cu, 0x2FB724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB724u;
label_2fb724:
    // 0x2fb724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb728:
    // 0x2fb728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb72c:
    // 0x2fb72c: 0x3e00008  jr          $ra
label_2fb730:
    if (ctx->pc == 0x2FB730u) {
        ctx->pc = 0x2FB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB72Cu;
        // 0x2fb730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB734u;
        goto label_2fb734;
    }
    ctx->pc = 0x2FB72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB72Cu;
        // 0x2fb730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB734u;
label_2fb734:
    // 0x2fb734: 0x0  nop
    ctx->pc = 0x2fb734u;
    // NOP
    ctx->pc = 0x2fb738u;
}
