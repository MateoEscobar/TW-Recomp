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

// Function: sub_00223C50
// Address: 0x223c50 - 0x223cb0
void sub_00223C50_0x223c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223C50_0x223c50");
#endif

    switch (ctx->pc) {
        case 0x223c68u: goto label_223c68;
        case 0x223c7cu: goto label_223c7c;
        case 0x223c8cu: goto label_223c8c;
        default: break;
    }

    ctx->pc = 0x223c50u;

    // 0x223c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223c54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223c60: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x223C60u;
    SET_GPR_U32(ctx, 31, 0x223C68u);
    ctx->pc = 0x223C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C60u;
    // 0x223c64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x223C60u, 0x223C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C68u;
label_223c68:
    // 0x223c68: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x223c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x223c6c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x223C6Cu;
    {
        const bool branch_taken_0x223c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C6Cu;
        // 0x223c70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c6c) {
            ctx->pc = 0x223C94u;
            goto label_223c94;
        }
    }
    ctx->pc = 0x223C74u;
    // 0x223c74: 0xc08a05a  jal         func_228168
    ctx->pc = 0x223C74u;
    SET_GPR_U32(ctx, 31, 0x223C7Cu);
    ctx->pc = 0x223C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C74u;
    // 0x223c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x223C74u, 0x223C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C7Cu;
label_223c7c:
    // 0x223c7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223C7Cu;
    {
        const bool branch_taken_0x223c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C7Cu;
        // 0x223c80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c7c) {
            ctx->pc = 0x223C98u;
            goto label_223c98;
        }
    }
    ctx->pc = 0x223C84u;
    // 0x223c84: 0xc087502  jal         func_21D408
    ctx->pc = 0x223C84u;
    SET_GPR_U32(ctx, 31, 0x223C8Cu);
    ctx->pc = 0x223C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C84u;
    // 0x223c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x223C84u, 0x223C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C8Cu;
label_223c8c:
    // 0x223c8c: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x223c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
    // 0x223c90: 0x2c710001  sltiu       $s1, $v1, 0x1
    ctx->pc = 0x223c90u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_223c94:
    // 0x223c94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x223c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223c98:
    // 0x223c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x223c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x223CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CA4u;
        // 0x223ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223CACu;
    // 0x223cac: 0x0  nop
    ctx->pc = 0x223cacu;
    // NOP
    ctx->pc = 0x223cb0u;
}
