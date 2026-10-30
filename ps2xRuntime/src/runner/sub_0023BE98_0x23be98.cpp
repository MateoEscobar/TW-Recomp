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

// Function: sub_0023BE98
// Address: 0x23be98 - 0x23bf00
void sub_0023BE98_0x23be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BE98_0x23be98");
#endif

    switch (ctx->pc) {
        case 0x23bec0u: goto label_23bec0;
        case 0x23beccu: goto label_23becc;
        case 0x23bedcu: goto label_23bedc;
        case 0x23bee4u: goto label_23bee4;
        default: break;
    }

    ctx->pc = 0x23be98u;

    // 0x23be98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23be98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23be9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23bea0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23bea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bea8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x23bea8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x23beac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23beb0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x23beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x23beb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23beb8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x23BEB8u;
    SET_GPR_U32(ctx, 31, 0x23BEC0u);
    ctx->pc = 0x23BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BEB8u;
    // 0x23bebc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x23BEB8u, 0x23BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEC0u;
label_23bec0:
    // 0x23bec0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x23bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x23bec4: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x23BEC4u;
    SET_GPR_U32(ctx, 31, 0x23BECCu);
    ctx->pc = 0x23BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BEC4u;
    // 0x23bec8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x23BEC4u, 0x23BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BECCu;
label_23becc:
    // 0x23becc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x23beccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x23bed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23bed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bed4: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x23BED4u;
    SET_GPR_U32(ctx, 31, 0x23BEDCu);
    ctx->pc = 0x23BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BED4u;
    // 0x23bed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x23BED4u, 0x23BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEDCu;
label_23bedc:
    // 0x23bedc: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x23BEDCu;
    SET_GPR_U32(ctx, 31, 0x23BEE4u);
    ctx->pc = 0x23BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BEDCu;
    // 0x23bee0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x23BEDCu, 0x23BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEE4u;
label_23bee4:
    // 0x23bee4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23bee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bee8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23bee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23beec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23beecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bef4: 0x3e00008  jr          $ra
    ctx->pc = 0x23BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF4u;
        // 0x23bef8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BEFCu;
    // 0x23befc: 0x0  nop
    ctx->pc = 0x23befcu;
    // NOP
    ctx->pc = 0x23bf00u;
}
