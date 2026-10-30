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

// Function: sub_004B0A80
// Address: 0x4b0a80 - 0x4b0ad0
void sub_004B0A80_0x4b0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0A80_0x4b0a80");
#endif

    switch (ctx->pc) {
        case 0x4b0aa8u: goto label_4b0aa8;
        case 0x4b0ab0u: goto label_4b0ab0;
        default: break;
    }

    ctx->pc = 0x4b0a80u;

    // 0x4b0a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b0a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b0a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0a94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b0a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b0a98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0A98u;
    {
        const bool branch_taken_0x4b0a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0a98) {
            ctx->pc = 0x4B0AA8u;
            goto label_4b0aa8;
        }
    }
    ctx->pc = 0x4B0AA0u;
    // 0x4b0aa0: 0xc12c258  jal         func_4B0960
    ctx->pc = 0x4B0AA0u;
    SET_GPR_U32(ctx, 31, 0x4B0AA8u);
    ctx->pc = 0x4B0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0960u, 0x4B0AA0u, 0x4B0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0AA8u;
label_4b0aa8:
    // 0x4b0aa8: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x4B0AA8u;
    SET_GPR_U32(ctx, 31, 0x4B0AB0u);
    ctx->pc = 0x4B0AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0AA8u;
    // 0x4b0aac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4B0AA8u, 0x4B0AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0AB0u;
label_4b0ab0:
    // 0x4b0ab0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x4b0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x4b0ab4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4b0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x4b0ab8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4b0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x4b0abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0AC4u;
        // 0x4b0ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0ACCu;
    // 0x4b0acc: 0x0  nop
    ctx->pc = 0x4b0accu;
    // NOP
    ctx->pc = 0x4b0ad0u;
}
