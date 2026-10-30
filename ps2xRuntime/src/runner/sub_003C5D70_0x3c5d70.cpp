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

// Function: sub_003C5D70
// Address: 0x3c5d70 - 0x3c5de0
void sub_003C5D70_0x3c5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5D70_0x3c5d70");
#endif

    switch (ctx->pc) {
        case 0x3c5d98u: goto label_3c5d98;
        case 0x3c5da4u: goto label_3c5da4;
        case 0x3c5db0u: goto label_3c5db0;
        case 0x3c5dc0u: goto label_3c5dc0;
        case 0x3c5dc8u: goto label_3c5dc8;
        default: break;
    }

    ctx->pc = 0x3c5d70u;

    // 0x3c5d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c5d74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c5d78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c5d7c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c5d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c5d88: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5d90: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5D90u;
    SET_GPR_U32(ctx, 31, 0x3C5D98u);
    ctx->pc = 0x3C5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D90u;
    // 0x3c5d94: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5D90u, 0x3C5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D98u;
label_3c5d98:
    // 0x3c5d98: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5d9c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5D9Cu;
    SET_GPR_U32(ctx, 31, 0x3C5DA4u);
    ctx->pc = 0x3C5DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D9Cu;
    // 0x3c5da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5D9Cu, 0x3C5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5DA4u;
label_3c5da4:
    // 0x3c5da4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5da8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5DA8u;
    SET_GPR_U32(ctx, 31, 0x3C5DB0u);
    ctx->pc = 0x3C5DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5DA8u;
    // 0x3c5dac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5DA8u, 0x3C5DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5DB0u;
label_3c5db0:
    // 0x3c5db0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5db4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5db8: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5DB8u;
    SET_GPR_U32(ctx, 31, 0x3C5DC0u);
    ctx->pc = 0x3C5DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5DB8u;
    // 0x3c5dbc: 0x24a53c08  addiu       $a1, $a1, 0x3C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5DB8u, 0x3C5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5DC0u;
label_3c5dc0:
    // 0x3c5dc0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5DC0u;
    SET_GPR_U32(ctx, 31, 0x3C5DC8u);
    ctx->pc = 0x3C5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5DC0u;
    // 0x3c5dc4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5DC0u, 0x3C5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5DC8u;
label_3c5dc8:
    // 0x3c5dc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c5dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5dcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c5dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5dd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c5dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DD8u;
        // 0x3c5ddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5DE0u;
}
