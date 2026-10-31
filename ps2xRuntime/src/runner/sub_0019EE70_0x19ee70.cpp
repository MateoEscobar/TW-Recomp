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

// Function: sub_0019EE70
// Address: 0x19ee70 - 0x19eea0
void sub_0019EE70_0x19ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EE70_0x19ee70");
#endif

    ctx->pc = 0x19ee70u;

    // 0x19ee70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19ee74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19ee78: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x19ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x19ee7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ee80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ee84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EE84u;
    {
        const bool branch_taken_0x19ee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ee84) {
            ctx->pc = 0x19EE94u;
            goto label_19ee94;
        }
    }
    ctx->pc = 0x19EE8Cu;
    // 0x19ee8c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x19ee90: 0x24423ba8  addiu       $v0, $v0, 0x3BA8
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15272));
label_19ee94:
    // 0x19ee94: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE9Cu;
    // 0x19ee9c: 0x0  nop
    ctx->pc = 0x19ee9cu;
    // NOP
    ctx->pc = 0x19eea0u;
}
