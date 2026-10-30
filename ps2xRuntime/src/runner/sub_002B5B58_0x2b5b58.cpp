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

// Function: sub_002B5B58
// Address: 0x2b5b58 - 0x2b5b98
void sub_002B5B58_0x2b5b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B58_0x2b5b58");
#endif

    switch (ctx->pc) {
        case 0x2b5b74u: goto label_2b5b74;
        default: break;
    }

    ctx->pc = 0x2b5b58u;

    // 0x2b5b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5b5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b5b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b5b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5b64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5b68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b5b68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5b6c: 0xc088e60  jal         func_223980
    ctx->pc = 0x2B5B6Cu;
    SET_GPR_U32(ctx, 31, 0x2B5B74u);
    ctx->pc = 0x2B5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B6Cu;
    // 0x2b5b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2B5B6Cu, 0x2B5B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B74u;
label_2b5b74:
    // 0x2b5b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5b78: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5B78u;
    {
        const bool branch_taken_0x2b5b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5b78) {
            ctx->pc = 0x2B5B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5B78u;
            // 0x2b5b7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5B8Cu;
            goto label_2b5b8c;
        }
    }
    ctx->pc = 0x2B5B80u;
    // 0x2b5b80: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2b5b84: 0xa4400148  sh          $zero, 0x148($v0)
    ctx->pc = 0x2b5b84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b5b88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b5b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5b8c:
    // 0x2b5b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B90u;
        // 0x2b5b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B98u;
}
