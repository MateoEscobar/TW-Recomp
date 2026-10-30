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

// Function: sub_001B3E20
// Address: 0x1b3e20 - 0x1b3e78
void sub_001B3E20_0x1b3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3E20_0x1b3e20");
#endif

    switch (ctx->pc) {
        case 0x1b3e64u: goto label_1b3e64;
        default: break;
    }

    ctx->pc = 0x1b3e20u;

    // 0x1b3e20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b3e24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3e28: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b3e28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e2c: 0x344277bc  ori         $v0, $v0, 0x77BC
    ctx->pc = 0x1b3e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30652);
    // 0x1b3e30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3e34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3e38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B3E38u;
    {
        const bool branch_taken_0x1b3e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E38u;
        // 0x1b3e3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e38) {
            ctx->pc = 0x1B3E68u;
            goto label_1b3e68;
        }
    }
    ctx->pc = 0x1B3E40u;
    // 0x1b3e40: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1b3e40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1b3e44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3e48: 0x361077bc  ori         $s0, $s0, 0x77BC
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30652);
    // 0x1b3e4c: 0x34048a10  ori         $a0, $zero, 0x8A10
    ctx->pc = 0x1b3e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
    // 0x1b3e50: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b3e54: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3e58: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b3e5c: 0xc073970  jal         func_1CE5C0
    ctx->pc = 0x1B3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B3E64u);
    ctx->pc = 0x1B3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E5Cu;
    // 0x1b3e60: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5C0u, 0x1B3E5Cu, 0x1B3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E64u;
label_1b3e64:
    // 0x1b3e64: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b3e68:
    // 0x1b3e68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3e70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E70u;
        // 0x1b3e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E78u;
}
