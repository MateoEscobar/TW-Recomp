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

// Function: sub_00332CF8
// Address: 0x332cf8 - 0x332d28
void sub_00332CF8_0x332cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332CF8_0x332cf8");
#endif

    switch (ctx->pc) {
        case 0x332d14u: goto label_332d14;
        default: break;
    }

    ctx->pc = 0x332cf8u;

    // 0x332cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332cfc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x332cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d00: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x332d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332d08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x332d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d0c: 0xc0ccac4  jal         func_332B10
    ctx->pc = 0x332D0Cu;
    SET_GPR_U32(ctx, 31, 0x332D14u);
    ctx->pc = 0x332D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D0Cu;
    // 0x332d10: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332B10u, 0x332D0Cu, 0x332D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D14u;
label_332d14:
    // 0x332d14: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x332d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x332D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D1Cu;
        // 0x332d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332D24u;
    // 0x332d24: 0x0  nop
    ctx->pc = 0x332d24u;
    // NOP
    ctx->pc = 0x332d28u;
}
