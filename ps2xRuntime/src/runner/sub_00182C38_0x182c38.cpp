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

// Function: sub_00182C38
// Address: 0x182c38 - 0x182ca0
void sub_00182C38_0x182c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182C38_0x182c38");
#endif

    switch (ctx->pc) {
        case 0x182c60u: goto label_182c60;
        case 0x182c70u: goto label_182c70;
        case 0x182c80u: goto label_182c80;
        default: break;
    }

    ctx->pc = 0x182c38u;

    // 0x182c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x182c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x182c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182c50: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x182c54: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x182c54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x182c58: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x182C58u;
    SET_GPR_U32(ctx, 31, 0x182C60u);
    ctx->pc = 0x182C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C58u;
    // 0x182c5c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181F40u, 0x182C58u, 0x182C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C60u;
label_182c60:
    // 0x182c60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182C60u;
    {
        const bool branch_taken_0x182c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C60u;
        // 0x182c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c60) {
            ctx->pc = 0x182C88u;
            goto label_182c88;
        }
    }
    ctx->pc = 0x182C68u;
    // 0x182c68: 0xc065dba  jal         func_1976E8
    ctx->pc = 0x182C68u;
    SET_GPR_U32(ctx, 31, 0x182C70u);
    ctx->pc = 0x182C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C68u;
    // 0x182c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1976E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1976E8u, 0x182C68u, 0x182C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C70u;
label_182c70:
    // 0x182c70: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x182c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    // 0x182c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x182c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c78: 0xc061f4a  jal         func_187D28
    ctx->pc = 0x182C78u;
    SET_GPR_U32(ctx, 31, 0x182C80u);
    ctx->pc = 0x182C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C78u;
    // 0x182c7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x182C78u, 0x182C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C80u;
label_182c80:
    // 0x182c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x182C80u;
    {
        const bool branch_taken_0x182c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C80u;
        // 0x182c84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c80) {
            ctx->pc = 0x182C8Cu;
            goto label_182c8c;
        }
    }
    ctx->pc = 0x182C88u;
label_182c88:
    // 0x182c88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x182c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_182c8c:
    // 0x182c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182c94: 0x3e00008  jr          $ra
    ctx->pc = 0x182C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C94u;
        // 0x182c98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182C9Cu;
    // 0x182c9c: 0x0  nop
    ctx->pc = 0x182c9cu;
    // NOP
    ctx->pc = 0x182ca0u;
}
