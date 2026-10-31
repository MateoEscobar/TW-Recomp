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

// Function: sub_0030ECD0
// Address: 0x30ecd0 - 0x30ed40
void sub_0030ECD0_0x30ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ECD0_0x30ecd0");
#endif

    switch (ctx->pc) {
        case 0x30ece8u: goto label_30ece8;
        case 0x30ed08u: goto label_30ed08;
        case 0x30ed14u: goto label_30ed14;
        case 0x30ed20u: goto label_30ed20;
        case 0x30ed30u: goto label_30ed30;
        default: break;
    }

    ctx->pc = 0x30ecd0u;

    // 0x30ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ecd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30ecd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ecdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ece0: 0xc05959e  jal         func_165678
    ctx->pc = 0x30ECE0u;
    SET_GPR_U32(ctx, 31, 0x30ECE8u);
    ctx->pc = 0x30ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ECE0u;
    // 0x30ece4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30ECE0u, 0x30ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ECE8u;
label_30ece8:
    // 0x30ece8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ecec: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30ECECu;
    {
        const bool branch_taken_0x30ecec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ecec) {
            ctx->pc = 0x30ECF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30ECECu;
            // 0x30ecf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30ED18u;
            goto label_30ed18;
        }
    }
    ctx->pc = 0x30ECF4u;
    // 0x30ecf4: 0x8602004c  lh          $v0, 0x4C($s0)
    ctx->pc = 0x30ecf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x30ecf8: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30ECF8u;
    {
        const bool branch_taken_0x30ecf8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30ecf8) {
            ctx->pc = 0x30ECFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30ECF8u;
            // 0x30ecfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30ED18u;
            goto label_30ed18;
        }
    }
    ctx->pc = 0x30ED00u;
    // 0x30ed00: 0xc08750a  jal         func_21D428
    ctx->pc = 0x30ED00u;
    SET_GPR_U32(ctx, 31, 0x30ED08u);
    ctx->pc = 0x30ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED00u;
    // 0x30ed04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x30ED00u, 0x30ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED08u;
label_30ed08:
    // 0x30ed08: 0x8605004c  lh          $a1, 0x4C($s0)
    ctx->pc = 0x30ed08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x30ed0c: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x30ED0Cu;
    SET_GPR_U32(ctx, 31, 0x30ED14u);
    ctx->pc = 0x30ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED0Cu;
    // 0x30ed10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x30ED0Cu, 0x30ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED14u;
label_30ed14:
    // 0x30ed14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30ed18:
    // 0x30ed18: 0xc059646  jal         func_165918
    ctx->pc = 0x30ED18u;
    SET_GPR_U32(ctx, 31, 0x30ED20u);
    ctx->pc = 0x30ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED18u;
    // 0x30ed1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x30ED18u, 0x30ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED20u;
label_30ed20:
    // 0x30ed20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ed24: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x30ed24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x30ed28: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x30ED28u;
    SET_GPR_U32(ctx, 31, 0x30ED30u);
    ctx->pc = 0x30ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED28u;
    // 0x30ed2c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x30ED28u, 0x30ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED30u;
label_30ed30:
    // 0x30ed30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30ed30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ed34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ed34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ed38: 0x3e00008  jr          $ra
    ctx->pc = 0x30ED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED38u;
        // 0x30ed3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ED38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ED40u;
}
