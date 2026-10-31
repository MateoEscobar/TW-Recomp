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

// Function: sub_0042F020
// Address: 0x42f020 - 0x42f050
void sub_0042F020_0x42f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F020_0x42f020");
#endif

    switch (ctx->pc) {
        case 0x42f034u: goto label_42f034;
        default: break;
    }

    ctx->pc = 0x42f020u;

    // 0x42f020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42f028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42f02c: 0xc10bbde  jal         func_42EF78
    ctx->pc = 0x42F02Cu;
    SET_GPR_U32(ctx, 31, 0x42F034u);
    ctx->pc = 0x42F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F02Cu;
    // 0x42f030: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF78u, 0x42F02Cu, 0x42F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F034u;
label_42f034:
    // 0x42f034: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x42f034u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x42f038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f03c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f044: 0x3e00008  jr          $ra
    ctx->pc = 0x42F044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F044u;
        // 0x42f048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F04Cu;
    // 0x42f04c: 0x0  nop
    ctx->pc = 0x42f04cu;
    // NOP
    ctx->pc = 0x42f050u;
}
