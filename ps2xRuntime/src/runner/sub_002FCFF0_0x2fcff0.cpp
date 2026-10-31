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

// Function: sub_002FCFF0
// Address: 0x2fcff0 - 0x2fd068
void sub_002FCFF0_0x2fcff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCFF0_0x2fcff0");
#endif

    switch (ctx->pc) {
        case 0x2fd028u: goto label_2fd028;
        case 0x2fd040u: goto label_2fd040;
        default: break;
    }

    ctx->pc = 0x2fcff0u;

    // 0x2fcff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fcff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fcff4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fcff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2fcff8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fcff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fcffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fcffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fd000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fd004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fd008: 0x8c46b734  lw          $a2, -0x48CC($v0)
    ctx->pc = 0x2fd008u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B734u));
    // 0x2fd00c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2fd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fd010: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x2fd010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2fd014: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2fd014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fd018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fd018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fd01c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2fd01cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd020: 0xc0bf44a  jal         func_2FD128
    ctx->pc = 0x2FD020u;
    SET_GPR_U32(ctx, 31, 0x2FD028u);
    ctx->pc = 0x2FD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD020u;
    // 0x2fd024: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD128u, 0x2FD020u, 0x2FD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD028u;
label_2fd028:
    // 0x2fd028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fd028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd02c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fd02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fd030: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD030u;
    {
        const bool branch_taken_0x2fd030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD030u;
        // 0x2fd034: 0xa2020024  sb          $v0, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd030) {
            ctx->pc = 0x2FD040u;
            goto label_2fd040;
        }
    }
    ctx->pc = 0x2FD038u;
    // 0x2fd038: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2FD038u;
    SET_GPR_U32(ctx, 31, 0x2FD040u);
    ctx->pc = 0x2FD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD038u;
    // 0x2fd03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2FD038u, 0x2FD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD040u;
label_2fd040:
    // 0x2fd040: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fd040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fd044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fd044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd04c: 0x9083000b  lbu         $v1, 0xB($a0)
    ctx->pc = 0x2fd04cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x2fd050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd054: 0xa2030025  sb          $v1, 0x25($s0)
    ctx->pc = 0x2fd054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fd058: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fd058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd05c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD05Cu;
        // 0x2fd060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD064u;
    // 0x2fd064: 0x0  nop
    ctx->pc = 0x2fd064u;
    // NOP
    ctx->pc = 0x2fd068u;
}
