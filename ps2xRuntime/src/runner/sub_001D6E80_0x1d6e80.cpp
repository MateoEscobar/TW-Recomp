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

// Function: sub_001D6E80
// Address: 0x1d6e80 - 0x1d6ef8
void sub_001D6E80_0x1d6e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6E80_0x1d6e80");
#endif

    switch (ctx->pc) {
        case 0x1d6eb0u: goto label_1d6eb0;
        case 0x1d6ebcu: goto label_1d6ebc;
        case 0x1d6ec8u: goto label_1d6ec8;
        case 0x1d6ee4u: goto label_1d6ee4;
        default: break;
    }

    ctx->pc = 0x1d6e80u;

    // 0x1d6e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6e84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d6e88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6e8c: 0x2442bb38  addiu       $v0, $v0, -0x44C8
    ctx->pc = 0x1d6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949688));
    // 0x1d6e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6e9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d6e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d6ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d6ea4: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x1d6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x1d6ea8: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D6EA8u;
    SET_GPR_U32(ctx, 31, 0x1D6EB0u);
    ctx->pc = 0x1D6EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EA8u;
    // 0x1d6eac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D6EA8u, 0x1D6EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EB0u;
label_1d6eb0:
    // 0x1d6eb0: 0x26040430  addiu       $a0, $s0, 0x430
    ctx->pc = 0x1d6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    // 0x1d6eb4: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D6EB4u;
    SET_GPR_U32(ctx, 31, 0x1D6EBCu);
    ctx->pc = 0x1D6EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EB4u;
    // 0x1d6eb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D6EB4u, 0x1D6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EBCu;
label_1d6ebc:
    // 0x1d6ebc: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x1d6ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1d6ec0: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D6EC0u;
    SET_GPR_U32(ctx, 31, 0x1D6EC8u);
    ctx->pc = 0x1D6EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EC0u;
    // 0x1d6ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D6EC0u, 0x1D6EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EC8u;
label_1d6ec8:
    // 0x1d6ec8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d6ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ed0: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x1d6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x1d6ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d6ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ed8: 0xae0202b8  sw          $v0, 0x2B8($s0)
    ctx->pc = 0x1d6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
    // 0x1d6edc: 0xc07590c  jal         func_1D6430
    ctx->pc = 0x1D6EDCu;
    SET_GPR_U32(ctx, 31, 0x1D6EE4u);
    ctx->pc = 0x1D6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EDCu;
    // 0x1d6ee0: 0xae020328  sw          $v0, 0x328($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6430u, 0x1D6EDCu, 0x1D6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EE4u;
label_1d6ee4:
    // 0x1d6ee4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EF0u;
        // 0x1d6ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6EF8u;
}
