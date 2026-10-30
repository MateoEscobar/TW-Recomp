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

// Function: sub_001E77A0
// Address: 0x1e77a0 - 0x1e7808
void sub_001E77A0_0x1e77a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E77A0_0x1e77a0");
#endif

    switch (ctx->pc) {
        case 0x1e77c4u: goto label_1e77c4;
        case 0x1e77d8u: goto label_1e77d8;
        case 0x1e77e0u: goto label_1e77e0;
        default: break;
    }

    ctx->pc = 0x1e77a0u;

    // 0x1e77a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e77a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e77a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e77a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e77a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e77acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e77b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e77b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e77b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e77b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e77b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e77bc: 0xc07a4a6  jal         func_1E9298
    ctx->pc = 0x1E77BCu;
    SET_GPR_U32(ctx, 31, 0x1E77C4u);
    ctx->pc = 0x1E77C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77BCu;
    // 0x1e77c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9298u, 0x1E77BCu, 0x1E77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77C4u;
label_1e77c4:
    // 0x1e77c4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e77c8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e77c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1e77cc: 0x2463cae0  addiu       $v1, $v1, -0x3520
    ctx->pc = 0x1e77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953696));
    // 0x1e77d0: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1E77D0u;
    SET_GPR_U32(ctx, 31, 0x1E77D8u);
    ctx->pc = 0x1E77D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77D0u;
    // 0x1e77d4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1E77D0u, 0x1E77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77D8u;
label_1e77d8:
    // 0x1e77d8: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E77D8u;
    SET_GPR_U32(ctx, 31, 0x1E77E0u);
    ctx->pc = 0x1E77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77D8u;
    // 0x1e77dc: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E77D8u, 0x1E77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77E0u;
label_1e77e0:
    // 0x1e77e0: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x1e77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    // 0x1e77e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e77e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77e8: 0xae120064  sw          $s2, 0x64($s0)
    ctx->pc = 0x1e77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 18));
    // 0x1e77ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e77ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e77f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e77f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e77f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e77f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e77f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e77f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e77fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E77FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77FCu;
        // 0x1e7800: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E77FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7804u;
    // 0x1e7804: 0x0  nop
    ctx->pc = 0x1e7804u;
    // NOP
    ctx->pc = 0x1e7808u;
}
