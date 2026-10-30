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

// Function: sub_001CCEB8
// Address: 0x1cceb8 - 0x1ccf10
void sub_001CCEB8_0x1cceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCEB8_0x1cceb8");
#endif

    switch (ctx->pc) {
        case 0x1ccedcu: goto label_1ccedc;
        case 0x1cceecu: goto label_1cceec;
        case 0x1ccefcu: goto label_1ccefc;
        default: break;
    }

    ctx->pc = 0x1cceb8u;

    // 0x1cceb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ccebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ccebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ccec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ccec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ccec4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ccec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ccec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cced0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cced4: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CCED4u;
    SET_GPR_U32(ctx, 31, 0x1CCEDCu);
    ctx->pc = 0x1CCED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCED4u;
    // 0x1cced8: 0x26310540  addiu       $s1, $s1, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCED4u, 0x1CCEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEDCu;
label_1ccedc:
    // 0x1ccedc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ccedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ccee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccee4: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CCEE4u;
    SET_GPR_U32(ctx, 31, 0x1CCEECu);
    ctx->pc = 0x1CCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEE4u;
    // 0x1ccee8: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCEE4u, 0x1CCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEECu;
label_1cceec:
    // 0x1cceec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1CCEF4u;
    SET_GPR_U32(ctx, 31, 0x1CCEFCu);
    ctx->pc = 0x1CCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEF4u;
    // 0x1ccef8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CCEF4u, 0x1CCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEFCu;
label_1ccefc:
    // 0x1ccefc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ccefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ccf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf08: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF08u;
        // 0x1ccf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF10u;
}
