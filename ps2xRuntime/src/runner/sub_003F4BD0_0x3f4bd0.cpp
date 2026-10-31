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

// Function: sub_003F4BD0
// Address: 0x3f4bd0 - 0x3f4c20
void sub_003F4BD0_0x3f4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4BD0_0x3f4bd0");
#endif

    switch (ctx->pc) {
        case 0x3f4bf0u: goto label_3f4bf0;
        case 0x3f4c00u: goto label_3f4c00;
        case 0x3f4c08u: goto label_3f4c08;
        default: break;
    }

    ctx->pc = 0x3f4bd0u;

    // 0x3f4bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f4bd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f4bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f4bdc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f4bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3f4be0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f4be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f4be8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3F4BE8u;
    SET_GPR_U32(ctx, 31, 0x3F4BF0u);
    ctx->pc = 0x3F4BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4BE8u;
    // 0x3f4bec: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F4BE8u, 0x3F4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4BF0u;
label_3f4bf0:
    // 0x3f4bf0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3f4bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bf8: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3F4BF8u;
    SET_GPR_U32(ctx, 31, 0x3F4C00u);
    ctx->pc = 0x3F4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4BF8u;
    // 0x3f4bfc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3F4BF8u, 0x3F4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C00u;
label_3f4c00:
    // 0x3f4c00: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3F4C00u;
    SET_GPR_U32(ctx, 31, 0x3F4C08u);
    ctx->pc = 0x3F4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C00u;
    // 0x3f4c04: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F4C00u, 0x3F4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C08u;
label_3f4c08:
    // 0x3f4c08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f4c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f4c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4c14: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C14u;
        // 0x3f4c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4C1Cu;
    // 0x3f4c1c: 0x0  nop
    ctx->pc = 0x3f4c1cu;
    // NOP
    ctx->pc = 0x3f4c20u;
}
