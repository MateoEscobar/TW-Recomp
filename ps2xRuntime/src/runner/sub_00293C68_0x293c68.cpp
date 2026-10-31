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

// Function: sub_00293C68
// Address: 0x293c68 - 0x293cd0
void sub_00293C68_0x293c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293C68_0x293c68");
#endif

    switch (ctx->pc) {
        case 0x293c90u: goto label_293c90;
        case 0x293ca4u: goto label_293ca4;
        default: break;
    }

    ctx->pc = 0x293c68u;

    // 0x293c68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x293c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x293c6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293c70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x293c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x293c74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x293c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x293c78: 0x2450eaf0  addiu       $s0, $v0, -0x1510
    ctx->pc = 0x293c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x293c7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x293c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x293c80: 0x26116900  addiu       $s1, $s0, 0x6900
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 26880));
    // 0x293c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293c88: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x293c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293c8c: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x293c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6CED34u));
label_293c90:
    // 0x293c90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x293c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x293c94: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x293C94u;
    {
        const bool branch_taken_0x293c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x293c94) {
            ctx->pc = 0x293C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293C94u;
            // 0x293c98: 0x26100280  addiu       $s0, $s0, 0x280 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293CA8u;
            goto label_293ca8;
        }
    }
    ctx->pc = 0x293C9Cu;
    // 0x293c9c: 0xc0a55b4  jal         func_2956D0
    ctx->pc = 0x293C9Cu;
    SET_GPR_U32(ctx, 31, 0x293CA4u);
    ctx->pc = 0x293CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C9Cu;
    // 0x293ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x293C9Cu, 0x293CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CA4u;
label_293ca4:
    // 0x293ca4: 0x26100280  addiu       $s0, $s0, 0x280
    ctx->pc = 0x293ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_293ca8:
    // 0x293ca8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x293ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x293cac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x293CACu;
    {
        const bool branch_taken_0x293cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293cac) {
            ctx->pc = 0x293CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CACu;
            // 0x293cb0: 0x8e020244  lw          $v0, 0x244($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293c90;
        }
    }
    ctx->pc = 0x293CB4u;
    // 0x293cb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x293cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293cb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x293cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293cbc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x293cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x293CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CC4u;
        // 0x293cc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293CCCu;
    // 0x293ccc: 0x0  nop
    ctx->pc = 0x293cccu;
    // NOP
    ctx->pc = 0x293cd0u;
}
