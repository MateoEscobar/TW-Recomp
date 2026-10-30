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

// Function: sub_001A3C00
// Address: 0x1a3c00 - 0x1a3c48
void sub_001A3C00_0x1a3c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3C00_0x1a3c00");
#endif

    switch (ctx->pc) {
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c34u: goto label_1a3c34;
        default: break;
    }

    ctx->pc = 0x1a3c00u;

    // 0x1a3c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3c04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a3c14: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3C14u;
    {
        const bool branch_taken_0x1a3c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c14) {
            ctx->pc = 0x1A3C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3C14u;
            // 0x1a3c18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3C38u;
            goto label_1a3c38;
        }
    }
    ctx->pc = 0x1A3C1Cu;
    // 0x1a3c1c: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1A3C1Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C24u);
    ctx->pc = 0x1A3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C1Cu;
    // 0x1a3c20: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1A3C1Cu, 0x1A3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C24u;
label_1a3c24:
    // 0x1a3c24: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1A3C24u;
    SET_GPR_U32(ctx, 31, 0x1A3C2Cu);
    ctx->pc = 0x1A3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C24u;
    // 0x1a3c28: 0x26040240  addiu       $a0, $s0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1A3C24u, 0x1A3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C2Cu;
label_1a3c2c:
    // 0x1a3c2c: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1A3C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C34u);
    ctx->pc = 0x1A3C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C2Cu;
    // 0x1a3c30: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1A3C2Cu, 0x1A3C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C34u;
label_1a3c34:
    // 0x1a3c34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3c38:
    // 0x1a3c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3C44u;
    // 0x1a3c44: 0x0  nop
    ctx->pc = 0x1a3c44u;
    // NOP
    ctx->pc = 0x1a3c48u;
}
