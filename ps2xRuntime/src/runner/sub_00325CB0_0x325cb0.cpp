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

// Function: sub_00325CB0
// Address: 0x325cb0 - 0x325d30
void sub_00325CB0_0x325cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325CB0_0x325cb0");
#endif

    switch (ctx->pc) {
        case 0x325cccu: goto label_325ccc;
        case 0x325cd8u: goto label_325cd8;
        case 0x325d04u: goto label_325d04;
        case 0x325d14u: goto label_325d14;
        default: break;
    }

    ctx->pc = 0x325cb0u;

    // 0x325cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325cb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x325cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325cbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x325cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x325cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325cc4: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x325CC4u;
    SET_GPR_U32(ctx, 31, 0x325CCCu);
    ctx->pc = 0x325CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325CC4u;
    // 0x325cc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x325CC4u, 0x325CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325CCCu;
label_325ccc:
    // 0x325ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325cd0: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x325CD0u;
    SET_GPR_U32(ctx, 31, 0x325CD8u);
    ctx->pc = 0x325CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325CD0u;
    // 0x325cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x325CD0u, 0x325CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325CD8u;
label_325cd8:
    // 0x325cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325cdc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x325CDCu;
    {
        const bool branch_taken_0x325cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x325CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CDCu;
        // 0x325ce0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cdc) {
            ctx->pc = 0x325D18u;
            goto label_325d18;
        }
    }
    ctx->pc = 0x325CE4u;
    // 0x325ce4: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x325ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x325ce8: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x325ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x325cec: 0x26104b48  addiu       $s0, $s0, 0x4B48
    ctx->pc = 0x325cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19272));
    // 0x325cf0: 0x24c64a90  addiu       $a2, $a2, 0x4A90
    ctx->pc = 0x325cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19088));
    // 0x325cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325cf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325cfc: 0xc0c91b0  jal         func_3246C0
    ctx->pc = 0x325CFCu;
    SET_GPR_U32(ctx, 31, 0x325D04u);
    ctx->pc = 0x325D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325CFCu;
    // 0x325d00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3246C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3246C0u, 0x325CFCu, 0x325D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D04u;
label_325d04:
    // 0x325d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x325d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d0c: 0xc0c9224  jal         func_324890
    ctx->pc = 0x325D0Cu;
    SET_GPR_U32(ctx, 31, 0x325D14u);
    ctx->pc = 0x325D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D0Cu;
    // 0x325d10: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324890u, 0x325D0Cu, 0x325D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D14u;
label_325d14:
    // 0x325d14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x325d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_325d18:
    // 0x325d18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x325d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325d24: 0x3e00008  jr          $ra
    ctx->pc = 0x325D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D24u;
        // 0x325d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325D2Cu;
    // 0x325d2c: 0x0  nop
    ctx->pc = 0x325d2cu;
    // NOP
    ctx->pc = 0x325d30u;
}
