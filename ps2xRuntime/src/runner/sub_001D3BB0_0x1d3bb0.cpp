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

// Function: sub_001D3BB0
// Address: 0x1d3bb0 - 0x1d3c18
void sub_001D3BB0_0x1d3bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3BB0_0x1d3bb0");
#endif

    switch (ctx->pc) {
        case 0x1d3bd4u: goto label_1d3bd4;
        case 0x1d3bf0u: goto label_1d3bf0;
        default: break;
    }

    ctx->pc = 0x1d3bb0u;

    // 0x1d3bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3bb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d3bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d3bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d3bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d3bc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d3bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d3bc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3bcc: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1D3BCCu;
    SET_GPR_U32(ctx, 31, 0x1D3BD4u);
    ctx->pc = 0x1D3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BCCu;
    // 0x1d3bd0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1D3BCCu, 0x1D3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BD4u;
label_1d3bd4:
    // 0x1d3bd4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d3bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d3bd8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1d3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1d3bdc: 0x2463b818  addiu       $v1, $v1, -0x47E8
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948888));
    // 0x1d3be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3be4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d3be8: 0xc074f10  jal         func_1D3C40
    ctx->pc = 0x1D3BE8u;
    SET_GPR_U32(ctx, 31, 0x1D3BF0u);
    ctx->pc = 0x1D3BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BE8u;
    // 0x1d3bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C40u, 0x1D3BE8u, 0x1D3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BF0u;
label_1d3bf0:
    // 0x1d3bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3bf4: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x1d3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x1d3bf8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d3bfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d3bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d3c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3c04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d3c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3c08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d3c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C10u;
        // 0x1d3c14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C18u;
}
