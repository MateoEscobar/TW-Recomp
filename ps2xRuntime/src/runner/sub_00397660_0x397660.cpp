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

// Function: sub_00397660
// Address: 0x397660 - 0x3976c8
void sub_00397660_0x397660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397660_0x397660");
#endif

    switch (ctx->pc) {
        case 0x397684u: goto label_397684;
        case 0x397690u: goto label_397690;
        case 0x397698u: goto label_397698;
        case 0x3976a8u: goto label_3976a8;
        case 0x3976b0u: goto label_3976b0;
        default: break;
    }

    ctx->pc = 0x397660u;

    // 0x397660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397664: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x397664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x397668: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x397668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x39766c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x39766cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x397670: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x397674: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397674u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x397678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39767c: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39767Cu;
    SET_GPR_U32(ctx, 31, 0x397684u);
    ctx->pc = 0x397680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39767Cu;
    // 0x397680: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39767Cu, 0x397684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397684u;
label_397684:
    // 0x397684: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x397688: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x397688u;
    SET_GPR_U32(ctx, 31, 0x397690u);
    ctx->pc = 0x39768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397688u;
    // 0x39768c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x397688u, 0x397690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397690u;
label_397690:
    // 0x397690: 0xc0e4060  jal         func_390180
    ctx->pc = 0x397690u;
    SET_GPR_U32(ctx, 31, 0x397698u);
    ctx->pc = 0x397694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397690u;
    // 0x397694: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x397690u, 0x397698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397698u;
label_397698:
    // 0x397698: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39769c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x39769cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3976a0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3976A0u;
    SET_GPR_U32(ctx, 31, 0x3976A8u);
    ctx->pc = 0x3976A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3976A0u;
    // 0x3976a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3976A0u, 0x3976A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3976A8u;
label_3976a8:
    // 0x3976a8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3976A8u;
    SET_GPR_U32(ctx, 31, 0x3976B0u);
    ctx->pc = 0x3976ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3976A8u;
    // 0x3976ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3976A8u, 0x3976B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3976B0u;
label_3976b0:
    // 0x3976b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3976b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3976b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3976b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3976b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3976b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3976bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3976BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3976C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976BCu;
        // 0x3976c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3976BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3976C4u;
    // 0x3976c4: 0x0  nop
    ctx->pc = 0x3976c4u;
    // NOP
    ctx->pc = 0x3976c8u;
}
