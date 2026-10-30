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

// Function: sub_00163C08
// Address: 0x163c08 - 0x163c48
void sub_00163C08_0x163c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163C08_0x163c08");
#endif

    switch (ctx->pc) {
        case 0x163c2cu: goto label_163c2c;
        case 0x163c38u: goto label_163c38;
        default: break;
    }

    ctx->pc = 0x163c08u;

    // 0x163c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163c0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x163c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x163c10: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x163C10u;
    {
        const bool branch_taken_0x163c10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x163C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C10u;
        // 0x163c14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c10) {
            ctx->pc = 0x163C38u;
            goto label_163c38;
        }
    }
    ctx->pc = 0x163C18u;
    // 0x163c18: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x163C18u;
    {
        const bool branch_taken_0x163c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C18u;
        // 0x163c1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c18) {
            ctx->pc = 0x163C3Cu;
            goto label_163c3c;
        }
    }
    ctx->pc = 0x163C20u;
    // 0x163c20: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x163c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x163c24: 0xc058938  jal         func_1624E0
    ctx->pc = 0x163C24u;
    SET_GPR_U32(ctx, 31, 0x163C2Cu);
    ctx->pc = 0x163C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C24u;
    // 0x163c28: 0x24846da8  addiu       $a0, $a0, 0x6DA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1624E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1624E0u, 0x163C24u, 0x163C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C2Cu;
label_163c2c:
    // 0x163c2c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x163c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x163c30: 0xc05860c  jal         func_161830
    ctx->pc = 0x163C30u;
    SET_GPR_U32(ctx, 31, 0x163C38u);
    ctx->pc = 0x163C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C30u;
    // 0x163c34: 0x24846dc8  addiu       $a0, $a0, 0x6DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161830u, 0x163C30u, 0x163C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C38u;
label_163c38:
    // 0x163c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163c3c:
    // 0x163c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x163C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C3Cu;
        // 0x163c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C44u;
    // 0x163c44: 0x0  nop
    ctx->pc = 0x163c44u;
    // NOP
    ctx->pc = 0x163c48u;
}
