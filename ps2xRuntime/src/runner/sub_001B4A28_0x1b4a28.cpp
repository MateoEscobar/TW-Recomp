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

// Function: sub_001B4A28
// Address: 0x1b4a28 - 0x1b4a88
void sub_001B4A28_0x1b4a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4A28_0x1b4a28");
#endif

    switch (ctx->pc) {
        case 0x1b4a5cu: goto label_1b4a5c;
        case 0x1b4a68u: goto label_1b4a68;
        default: break;
    }

    ctx->pc = 0x1b4a28u;

    // 0x1b4a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4a2c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b4a30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b4a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b4a34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4a38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b4a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a40: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4A40u;
    {
        const bool branch_taken_0x1b4a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A40u;
        // 0x1b4a44: 0x24519e80  addiu       $s1, $v0, -0x6180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a40) {
            ctx->pc = 0x1B4A4Cu;
            goto label_1b4a4c;
        }
    }
    ctx->pc = 0x1B4A48u;
    // 0x1b4a48: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1b4a48u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1b4a4c:
    // 0x1b4a4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b4a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4a54: 0xc06906c  jal         func_1A41B0
    ctx->pc = 0x1B4A54u;
    SET_GPR_U32(ctx, 31, 0x1B4A5Cu);
    ctx->pc = 0x1B4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A54u;
    // 0x1b4a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41B0u, 0x1B4A54u, 0x1B4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A5Cu;
label_1b4a5c:
    // 0x1b4a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a60: 0xc0690c4  jal         func_1A4310
    ctx->pc = 0x1B4A60u;
    SET_GPR_U32(ctx, 31, 0x1B4A68u);
    ctx->pc = 0x1B4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A60u;
    // 0x1b4a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4310u, 0x1B4A60u, 0x1B4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A68u;
label_1b4a68:
    // 0x1b4a68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b4a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A74u;
        // 0x1b4a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4A7Cu;
    // 0x1b4a7c: 0x0  nop
    ctx->pc = 0x1b4a7cu;
    // NOP
    // 0x1b4a80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4a84: 0x0  nop
    ctx->pc = 0x1b4a84u;
    // NOP
    ctx->pc = 0x1b4a88u;
}
