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

// Function: sub_00151C70
// Address: 0x151c70 - 0x151cd8
void sub_00151C70_0x151c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151C70_0x151c70");
#endif

    switch (ctx->pc) {
        case 0x151c90u: goto label_151c90;
        case 0x151c9cu: goto label_151c9c;
        case 0x151cc0u: goto label_151cc0;
        default: break;
    }

    ctx->pc = 0x151c70u;

    // 0x151c70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x151c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x151c74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151c78: 0x8c44c540  lw          $a0, -0x3AC0($v0)
    ctx->pc = 0x151c78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50C540u));
    // 0x151c7c: 0x4810009  bgez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151C7Cu;
    {
        const bool branch_taken_0x151c7c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x151C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C7Cu;
        // 0x151c80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c7c) {
            ctx->pc = 0x151CA4u;
            goto label_151ca4;
        }
    }
    ctx->pc = 0x151C84u;
    // 0x151c84: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151c88: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151C88u;
    SET_GPR_U32(ctx, 31, 0x151C90u);
    ctx->pc = 0x151C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C88u;
    // 0x151c8c: 0x2484d498  addiu       $a0, $a0, -0x2B68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151C88u, 0x151C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C90u;
label_151c90:
    // 0x151c90: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151c94: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151C94u;
    SET_GPR_U32(ctx, 31, 0x151C9Cu);
    ctx->pc = 0x151C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C94u;
    // 0x151c98: 0x2484d488  addiu       $a0, $a0, -0x2B78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151C94u, 0x151C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C9Cu;
label_151c9c:
    // 0x151c9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151C9Cu;
    {
        const bool branch_taken_0x151c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C9Cu;
        // 0x151ca0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c9c) {
            ctx->pc = 0x151CC4u;
            goto label_151cc4;
        }
    }
    ctx->pc = 0x151CA4u;
label_151ca4:
    // 0x151ca4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151ca8: 0x8c62c538  lw          $v0, -0x3AC8($v1)
    ctx->pc = 0x151ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C538u));
    // 0x151cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151cb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151CB0u;
    {
        const bool branch_taken_0x151cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CB0u;
        // 0x151cb4: 0xac62c538  sw          $v0, -0x3AC8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cb0) {
            ctx->pc = 0x151CC0u;
            goto label_151cc0;
        }
    }
    ctx->pc = 0x151CB8u;
    // 0x151cb8: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x151CB8u;
    SET_GPR_U32(ctx, 31, 0x151CC0u);
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x151CB8u, 0x151CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CC0u;
label_151cc0:
    // 0x151cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151cc4:
    // 0x151cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x151CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CC4u;
        // 0x151cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151CCCu;
    // 0x151ccc: 0x0  nop
    ctx->pc = 0x151cccu;
    // NOP
    // 0x151cd0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x151cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x151cd4: 0x0  nop
    ctx->pc = 0x151cd4u;
    // NOP
    ctx->pc = 0x151cd8u;
}
