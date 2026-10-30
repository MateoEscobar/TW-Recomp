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

// Function: sub_0040CDD8
// Address: 0x40cdd8 - 0x40ce30
void sub_0040CDD8_0x40cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CDD8_0x40cdd8");
#endif

    switch (ctx->pc) {
        case 0x40ce04u: goto label_40ce04;
        case 0x40ce18u: goto label_40ce18;
        default: break;
    }

    ctx->pc = 0x40cdd8u;

    // 0x40cdd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40cdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40cddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40cde0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40cde4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40cde8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x40cde8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x40cdec: 0x2611ffc0  addiu       $s1, $s0, -0x40
    ctx->pc = 0x40cdecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x40cdf0: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x40cdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x40cdf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40cdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cdf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40cdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cdfc: 0xc109b1e  jal         func_426C78
    ctx->pc = 0x40CDFCu;
    SET_GPR_U32(ctx, 31, 0x40CE04u);
    ctx->pc = 0x40CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CDFCu;
    // 0x40ce00: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C78u, 0x40CDFCu, 0x40CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE04u;
label_40ce04:
    // 0x40ce04: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x40ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x40ce08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40ce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ce0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x40ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x40ce10: 0xc11b404  jal         func_46D010
    ctx->pc = 0x40CE10u;
    SET_GPR_U32(ctx, 31, 0x40CE18u);
    ctx->pc = 0x40CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE10u;
    // 0x40ce14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x40CE10u, 0x40CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE18u;
label_40ce18:
    // 0x40ce18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40ce18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40ce1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40ce1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40ce20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40ce20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ce24: 0x3e00008  jr          $ra
    ctx->pc = 0x40CE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CE24u;
        // 0x40ce28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CE2Cu;
    // 0x40ce2c: 0x0  nop
    ctx->pc = 0x40ce2cu;
    // NOP
    ctx->pc = 0x40ce30u;
}
