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

// Function: sub_0028CE60
// Address: 0x28ce60 - 0x28ceb8
void sub_0028CE60_0x28ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CE60_0x28ce60");
#endif

    switch (ctx->pc) {
        case 0x28ce88u: goto label_28ce88;
        default: break;
    }

    ctx->pc = 0x28ce60u;

    // 0x28ce60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ce64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28ce68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ce6c: 0x58600  sll         $s0, $a1, 24
    ctx->pc = 0x28ce6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x28ce70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ce74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ce74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce78: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x28ce78u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x28ce7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ce80: 0xc08a200  jal         func_228800
    ctx->pc = 0x28CE80u;
    SET_GPR_U32(ctx, 31, 0x28CE88u);
    ctx->pc = 0x28CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE80u;
    // 0x28ce84: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28CE80u, 0x28CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE88u;
label_28ce88:
    // 0x28ce88: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x28ce88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x28ce8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ce90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ce90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce94: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x28ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x28ce98: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x28ce98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28ce9c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x28ce9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x28cea0: 0xa230000c  sb          $s0, 0xC($s1)
    ctx->pc = 0x28cea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 16));
    // 0x28cea4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28cea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28cea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ceac: 0x3e00008  jr          $ra
    ctx->pc = 0x28CEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEACu;
        // 0x28ceb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CEB4u;
    // 0x28ceb4: 0x0  nop
    ctx->pc = 0x28ceb4u;
    // NOP
    ctx->pc = 0x28ceb8u;
}
