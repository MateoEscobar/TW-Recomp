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

// Function: sub_0026D110
// Address: 0x26d110 - 0x26d150
void sub_0026D110_0x26d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D110_0x26d110");
#endif

    switch (ctx->pc) {
        case 0x26d128u: goto label_26d128;
        case 0x26d13cu: goto label_26d13c;
        default: break;
    }

    ctx->pc = 0x26d110u;

    // 0x26d110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26d114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26d118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26d118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d11c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d120: 0xc0e409a  jal         func_390268
    ctx->pc = 0x26D120u;
    SET_GPR_U32(ctx, 31, 0x26D128u);
    ctx->pc = 0x26D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D120u;
    // 0x26d124: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26D120u, 0x26D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D128u;
label_26d128:
    // 0x26d128: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D128u;
    {
        const bool branch_taken_0x26d128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d128) {
            ctx->pc = 0x26D12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D128u;
            // 0x26d12c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D140u;
            goto label_26d140;
        }
    }
    ctx->pc = 0x26D130u;
    // 0x26d130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d134: 0xc08af70  jal         func_22BDC0
    ctx->pc = 0x26D134u;
    SET_GPR_U32(ctx, 31, 0x26D13Cu);
    ctx->pc = 0x26D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D134u;
    // 0x26d138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x26D134u, 0x26D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D13Cu;
label_26d13c:
    // 0x26d13c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26d13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26d140:
    // 0x26d140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d144: 0x3e00008  jr          $ra
    ctx->pc = 0x26D144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D144u;
        // 0x26d148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D14Cu;
    // 0x26d14c: 0x0  nop
    ctx->pc = 0x26d14cu;
    // NOP
    ctx->pc = 0x26d150u;
}
