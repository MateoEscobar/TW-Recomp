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

// Function: sub_001D2E80
// Address: 0x1d2e80 - 0x1d2f10
void sub_001D2E80_0x1d2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2E80_0x1d2e80");
#endif

    switch (ctx->pc) {
        case 0x1d2eb0u: goto label_1d2eb0;
        case 0x1d2ebcu: goto label_1d2ebc;
        case 0x1d2ec8u: goto label_1d2ec8;
        case 0x1d2ed4u: goto label_1d2ed4;
        case 0x1d2ee0u: goto label_1d2ee0;
        case 0x1d2eecu: goto label_1d2eec;
        case 0x1d2ef8u: goto label_1d2ef8;
        default: break;
    }

    ctx->pc = 0x1d2e80u;

    // 0x1d2e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2e84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d2e88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2e8c: 0x2442b658  addiu       $v0, $v0, -0x49A8
    ctx->pc = 0x1d2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948440));
    // 0x1d2e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2e9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d2e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d2ea4: 0x26040640  addiu       $a0, $s0, 0x640
    ctx->pc = 0x1d2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1d2ea8: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1D2EA8u;
    SET_GPR_U32(ctx, 31, 0x1D2EB0u);
    ctx->pc = 0x1D2EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EA8u;
    // 0x1d2eac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1D2EA8u, 0x1D2EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EB0u;
label_1d2eb0:
    // 0x1d2eb0: 0x26040450  addiu       $a0, $s0, 0x450
    ctx->pc = 0x1d2eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x1d2eb4: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1D2EB4u;
    SET_GPR_U32(ctx, 31, 0x1D2EBCu);
    ctx->pc = 0x1D2EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EB4u;
    // 0x1d2eb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1D2EB4u, 0x1D2EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EBCu;
label_1d2ebc:
    // 0x1d2ebc: 0x26040380  addiu       $a0, $s0, 0x380
    ctx->pc = 0x1d2ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    // 0x1d2ec0: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1D2EC0u;
    SET_GPR_U32(ctx, 31, 0x1D2EC8u);
    ctx->pc = 0x1D2EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EC0u;
    // 0x1d2ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1D2EC0u, 0x1D2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EC8u;
label_1d2ec8:
    // 0x1d2ec8: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x1d2ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x1d2ecc: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D2ECCu;
    SET_GPR_U32(ctx, 31, 0x1D2ED4u);
    ctx->pc = 0x1D2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2ECCu;
    // 0x1d2ed0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D2ECCu, 0x1D2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2ED4u;
label_1d2ed4:
    // 0x1d2ed4: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x1d2ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1d2ed8: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D2ED8u;
    SET_GPR_U32(ctx, 31, 0x1D2EE0u);
    ctx->pc = 0x1D2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2ED8u;
    // 0x1d2edc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D2ED8u, 0x1D2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EE0u;
label_1d2ee0:
    // 0x1d2ee0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d2ee4: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D2EE4u;
    SET_GPR_U32(ctx, 31, 0x1D2EECu);
    ctx->pc = 0x1D2EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EE4u;
    // 0x1d2ee8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D2EE4u, 0x1D2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EECu;
label_1d2eec:
    // 0x1d2eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ef0: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1D2EF0u;
    SET_GPR_U32(ctx, 31, 0x1D2EF8u);
    ctx->pc = 0x1D2EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EF0u;
    // 0x1d2ef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1D2EF0u, 0x1D2EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EF8u;
label_1d2ef8:
    // 0x1d2ef8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d2ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F04u;
        // 0x1d2f08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2F0Cu;
    // 0x1d2f0c: 0x0  nop
    ctx->pc = 0x1d2f0cu;
    // NOP
    ctx->pc = 0x1d2f10u;
}
