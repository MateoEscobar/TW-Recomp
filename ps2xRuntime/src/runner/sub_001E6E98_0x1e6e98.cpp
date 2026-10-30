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

// Function: sub_001E6E98
// Address: 0x1e6e98 - 0x1e6ef0
void sub_001E6E98_0x1e6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6E98_0x1e6e98");
#endif

    switch (ctx->pc) {
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6ec0u: goto label_1e6ec0;
        case 0x1e6ec8u: goto label_1e6ec8;
        default: break;
    }

    ctx->pc = 0x1e6e98u;

    // 0x1e6e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6ea4: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1E6EA4u;
    SET_GPR_U32(ctx, 31, 0x1E6EACu);
    ctx->pc = 0x1E6EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EA4u;
    // 0x1e6ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1E6EA4u, 0x1E6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EACu;
label_1e6eac:
    // 0x1e6eac: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e6eb0: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1e6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1e6eb4: 0x2463c7e8  addiu       $v1, $v1, -0x3818
    ctx->pc = 0x1e6eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952936));
    // 0x1e6eb8: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E6EB8u;
    SET_GPR_U32(ctx, 31, 0x1E6EC0u);
    ctx->pc = 0x1E6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EB8u;
    // 0x1e6ebc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E6EB8u, 0x1E6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EC0u;
label_1e6ec0:
    // 0x1e6ec0: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E6EC0u;
    SET_GPR_U32(ctx, 31, 0x1E6EC8u);
    ctx->pc = 0x1E6EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EC0u;
    // 0x1e6ec4: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E6EC0u, 0x1E6EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EC8u;
label_1e6ec8:
    // 0x1e6ec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e6ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ecc: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1e6eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x1e6ed0: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1e6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x1e6ed4: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x1e6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x1e6ed8: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x1e6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x1e6edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EE4u;
        // 0x1e6ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6EECu;
    // 0x1e6eec: 0x0  nop
    ctx->pc = 0x1e6eecu;
    // NOP
    ctx->pc = 0x1e6ef0u;
}
