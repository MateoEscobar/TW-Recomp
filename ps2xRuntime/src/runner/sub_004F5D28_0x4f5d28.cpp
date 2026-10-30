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

// Function: sub_004F5D28
// Address: 0x4f5d28 - 0x4f5d70
void sub_004F5D28_0x4f5d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5D28_0x4f5d28");
#endif

    switch (ctx->pc) {
        case 0x4f5d3cu: goto label_4f5d3c;
        default: break;
    }

    ctx->pc = 0x4f5d28u;

    // 0x4f5d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f5d2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f5d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4f5d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5d34: 0xc13d726  jal         func_4F5C98
    ctx->pc = 0x4F5D34u;
    SET_GPR_U32(ctx, 31, 0x4F5D3Cu);
    ctx->pc = 0x4F5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5D34u;
    // 0x4f5d38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5C98u, 0x4F5D34u, 0x4F5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5D3Cu;
label_4f5d3c:
    // 0x4f5d3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4f5d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5d40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f5d44: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F5D44u;
    {
        const bool branch_taken_0x4f5d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5D44u;
        // 0x4f5d48: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5d44) {
            ctx->pc = 0x4F5D5Cu;
            goto label_4f5d5c;
        }
    }
    ctx->pc = 0x4F5D4Cu;
    // 0x4f5d4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f5d50: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x4f5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x4f5d54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4f5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4f5d58: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4f5d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4f5d5c:
    // 0x4f5d5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f5d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5d64: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5D64u;
        // 0x4f5d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5D6Cu;
    // 0x4f5d6c: 0x0  nop
    ctx->pc = 0x4f5d6cu;
    // NOP
    ctx->pc = 0x4f5d70u;
}
