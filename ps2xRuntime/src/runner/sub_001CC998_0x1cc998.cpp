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

// Function: sub_001CC998
// Address: 0x1cc998 - 0x1cca08
void sub_001CC998_0x1cc998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC998_0x1cc998");
#endif

    switch (ctx->pc) {
        case 0x1cc9bcu: goto label_1cc9bc;
        case 0x1cc9d0u: goto label_1cc9d0;
        case 0x1cc9e0u: goto label_1cc9e0;
        case 0x1cc9ecu: goto label_1cc9ec;
        default: break;
    }

    ctx->pc = 0x1cc998u;

    // 0x1cc998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc99c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cc99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cc9a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cc9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cc9a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cc9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cc9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cc9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc9b4: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CC9B4u;
    SET_GPR_U32(ctx, 31, 0x1CC9BCu);
    ctx->pc = 0x1CC9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9B4u;
    // 0x1cc9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CC9B4u, 0x1CC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9BCu;
label_1cc9bc:
    // 0x1cc9bc: 0x2651007d  addiu       $s1, $s2, 0x7D
    ctx->pc = 0x1cc9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 125));
    // 0x1cc9c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cc9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9c8: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CC9C8u;
    SET_GPR_U32(ctx, 31, 0x1CC9D0u);
    ctx->pc = 0x1CC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9C8u;
    // 0x1cc9cc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CC9C8u, 0x1CC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9D0u;
label_1cc9d0:
    // 0x1cc9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9d8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1CC9D8u;
    SET_GPR_U32(ctx, 31, 0x1CC9E0u);
    ctx->pc = 0x1CC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9D8u;
    // 0x1cc9dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CC9D8u, 0x1CC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9E0u;
label_1cc9e0:
    // 0x1cc9e0: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x1cc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1cc9e4: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1CC9E4u;
    SET_GPR_U32(ctx, 31, 0x1CC9ECu);
    ctx->pc = 0x1CC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9E4u;
    // 0x1cc9e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CC9E4u, 0x1CC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9ECu;
label_1cc9ec:
    // 0x1cc9ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cc9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc9f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cc9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc9f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cc9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9FCu;
        // 0x1cca00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA04u;
    // 0x1cca04: 0x0  nop
    ctx->pc = 0x1cca04u;
    // NOP
    ctx->pc = 0x1cca08u;
}
