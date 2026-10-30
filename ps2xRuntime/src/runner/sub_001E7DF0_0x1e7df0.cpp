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

// Function: sub_001E7DF0
// Address: 0x1e7df0 - 0x1e7e58
void sub_001E7DF0_0x1e7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7DF0_0x1e7df0");
#endif

    switch (ctx->pc) {
        case 0x1e7e20u: goto label_1e7e20;
        case 0x1e7e38u: goto label_1e7e38;
        case 0x1e7e44u: goto label_1e7e44;
        default: break;
    }

    ctx->pc = 0x1e7df0u;

    // 0x1e7df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7df4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7df8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e7dfc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e7e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e04: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x1e7e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1e7e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7e0c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1e7e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1e7e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e14: 0xa202018c  sb          $v0, 0x18C($s0)
    ctx->pc = 0x1e7e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 396), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7e18: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x1E7E18u;
    SET_GPR_U32(ctx, 31, 0x1E7E20u);
    ctx->pc = 0x1E7E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E18u;
    // 0x1e7e1c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1E7E18u, 0x1E7E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E20u;
label_1e7e20:
    // 0x1e7e20: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x1e7e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1e7e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e2c: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1e7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1e7e30: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1E7E30u;
    SET_GPR_U32(ctx, 31, 0x1E7E38u);
    ctx->pc = 0x1E7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E30u;
    // 0x1e7e34: 0xa20301b1  sb          $v1, 0x1B1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1E7E30u, 0x1E7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E38u;
label_1e7e38:
    // 0x1e7e38: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e7e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e3c: 0xc07a4cc  jal         func_1E9330
    ctx->pc = 0x1E7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E44u);
    ctx->pc = 0x1E7E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E3Cu;
    // 0x1e7e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9330u, 0x1E7E3Cu, 0x1E7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E44u;
label_1e7e44:
    // 0x1e7e44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e7e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7e48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e7e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E50u;
        // 0x1e7e54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7E58u;
}
