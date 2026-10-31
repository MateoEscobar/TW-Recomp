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

// Function: sub_0041ADF8
// Address: 0x41adf8 - 0x41ae30
void sub_0041ADF8_0x41adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041ADF8_0x41adf8");
#endif

    switch (ctx->pc) {
        case 0x41ae18u: goto label_41ae18;
        default: break;
    }

    ctx->pc = 0x41adf8u;

    // 0x41adf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41adfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41adfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ae00: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x41AE00u;
    {
        const bool branch_taken_0x41ae00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE00u;
        // 0x41ae04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae00) {
            ctx->pc = 0x41AE20u;
            goto label_41ae20;
        }
    }
    ctx->pc = 0x41AE08u;
    // 0x41ae08: 0x244402bc  addiu       $a0, $v0, 0x2BC
    ctx->pc = 0x41ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
    // 0x41ae0c: 0xa04002db  sb          $zero, 0x2DB($v0)
    ctx->pc = 0x41ae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 731), (uint8_t)GPR_U32(ctx, 0));
    // 0x41ae10: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41AE10u;
    SET_GPR_U32(ctx, 31, 0x41AE18u);
    ctx->pc = 0x41AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AE10u;
    // 0x41ae14: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41AE10u, 0x41AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AE18u;
label_41ae18:
    // 0x41ae18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41AE18u;
    {
        const bool branch_taken_0x41ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE18u;
        // 0x41ae1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae18) {
            ctx->pc = 0x41AE28u;
            goto label_41ae28;
        }
    }
    ctx->pc = 0x41AE20u;
label_41ae20:
    // 0x41ae20: 0xa04002bc  sb          $zero, 0x2BC($v0)
    ctx->pc = 0x41ae20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 700), (uint8_t)GPR_U32(ctx, 0));
    // 0x41ae24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ae24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41ae28:
    // 0x41ae28: 0x3e00008  jr          $ra
    ctx->pc = 0x41AE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE28u;
        // 0x41ae2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AE30u;
}
