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

// Function: sub_001CFF98
// Address: 0x1cff98 - 0x1d0000
void sub_001CFF98_0x1cff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFF98_0x1cff98");
#endif

    switch (ctx->pc) {
        case 0x1cffd4u: goto label_1cffd4;
        case 0x1cffe0u: goto label_1cffe0;
        case 0x1cffecu: goto label_1cffec;
        default: break;
    }

    ctx->pc = 0x1cff98u;

    // 0x1cff98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cff9c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cffa0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cffa4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cffa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cffac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cffacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffb4: 0x2442b270  addiu       $v0, $v0, -0x4D90
    ctx->pc = 0x1cffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947440));
    // 0x1cffb8: 0x2463b298  addiu       $v1, $v1, -0x4D68
    ctx->pc = 0x1cffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
    // 0x1cffbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cffbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffc0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1cffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1cffc4: 0x26045a00  addiu       $a0, $s0, 0x5A00
    ctx->pc = 0x1cffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23040));
    // 0x1cffc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cffcc: 0xc074fde  jal         func_1D3F78
    ctx->pc = 0x1CFFCCu;
    SET_GPR_U32(ctx, 31, 0x1CFFD4u);
    ctx->pc = 0x1CFFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFCCu;
    // 0x1cffd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F78u, 0x1CFFCCu, 0x1CFFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFD4u;
label_1cffd4:
    // 0x1cffd4: 0x26045930  addiu       $a0, $s0, 0x5930
    ctx->pc = 0x1cffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22832));
    // 0x1cffd8: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1CFFD8u;
    SET_GPR_U32(ctx, 31, 0x1CFFE0u);
    ctx->pc = 0x1CFFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFD8u;
    // 0x1cffdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1CFFD8u, 0x1CFFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFE0u;
label_1cffe0:
    // 0x1cffe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffe4: 0xc13a178  jal         func_4E85E0
    ctx->pc = 0x1CFFE4u;
    SET_GPR_U32(ctx, 31, 0x1CFFECu);
    ctx->pc = 0x1CFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFE4u;
    // 0x1cffe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E85E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E85E0u, 0x1CFFE4u, 0x1CFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFECu;
label_1cffec:
    // 0x1cffec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cffecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cfff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFF8u;
        // 0x1cfffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0000u;
}
