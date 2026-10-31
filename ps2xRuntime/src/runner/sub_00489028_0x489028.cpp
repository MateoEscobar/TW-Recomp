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

// Function: sub_00489028
// Address: 0x489028 - 0x489088
void sub_00489028_0x489028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489028_0x489028");
#endif

    switch (ctx->pc) {
        case 0x489060u: goto label_489060;
        default: break;
    }

    ctx->pc = 0x489028u;

    // 0x489028: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x489028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48902c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48902cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x489030: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x489030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489034: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x489034u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489038: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x489038u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48903c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x48903cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489040: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x489040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x489044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489048: 0x2484ec08  addiu       $a0, $a0, -0x13F8
    ctx->pc = 0x489048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962184));
    // 0x48904c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48904cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489050: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x489050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489054: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x489054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489058: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x489058u;
    SET_GPR_U32(ctx, 31, 0x489060u);
    ctx->pc = 0x48905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489058u;
    // 0x48905c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x489058u, 0x489060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489060u;
label_489060:
    // 0x489060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489064: 0x3e00008  jr          $ra
    ctx->pc = 0x489064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489064u;
        // 0x489068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48906Cu;
    // 0x48906c: 0x0  nop
    ctx->pc = 0x48906cu;
    // NOP
    // 0x489070: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x489070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x489074: 0x0  nop
    ctx->pc = 0x489074u;
    // NOP
    // 0x489078: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x489078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48907c: 0x0  nop
    ctx->pc = 0x48907cu;
    // NOP
    // 0x489080: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x489080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x489084: 0x0  nop
    ctx->pc = 0x489084u;
    // NOP
    ctx->pc = 0x489088u;
}
