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

// Function: sub_003A4B00
// Address: 0x3a4b00 - 0x3a4b30
void sub_003A4B00_0x3a4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4B00_0x3a4b00");
#endif

    switch (ctx->pc) {
        case 0x3a4b10u: goto label_3a4b10;
        default: break;
    }

    ctx->pc = 0x3a4b00u;

    // 0x3a4b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4b08: 0xc094314  jal         func_250C50
    ctx->pc = 0x3A4B08u;
    SET_GPR_U32(ctx, 31, 0x3A4B10u);
    ctx->pc = 0x3A4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4B08u;
    // 0x3a4b0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250C50u, 0x3A4B08u, 0x3A4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B10u;
label_3a4b10:
    // 0x3a4b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b18: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B18u;
        // 0x3a4b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4B20u;
    // 0x3a4b20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a4b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a4b24: 0x0  nop
    ctx->pc = 0x3a4b24u;
    // NOP
    // 0x3a4b28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a4b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a4b2c: 0x0  nop
    ctx->pc = 0x3a4b2cu;
    // NOP
    ctx->pc = 0x3a4b30u;
}
