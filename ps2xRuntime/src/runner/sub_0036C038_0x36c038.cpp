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

// Function: sub_0036C038
// Address: 0x36c038 - 0x36c068
void sub_0036C038_0x36c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C038_0x36c038");
#endif

    switch (ctx->pc) {
        case 0x36c04cu: goto label_36c04c;
        case 0x36c054u: goto label_36c054;
        default: break;
    }

    ctx->pc = 0x36c038u;

    // 0x36c038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c044: 0xc102488  jal         func_409220
    ctx->pc = 0x36C044u;
    SET_GPR_U32(ctx, 31, 0x36C04Cu);
    ctx->pc = 0x36C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C044u;
    // 0x36c048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36C044u, 0x36C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C04Cu;
label_36c04c:
    // 0x36c04c: 0xc107b3a  jal         func_41ECE8
    ctx->pc = 0x36C04Cu;
    SET_GPR_U32(ctx, 31, 0x36C054u);
    ctx->pc = 0x36C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C04Cu;
    // 0x36c050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ECE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ECE8u, 0x36C04Cu, 0x36C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C054u;
label_36c054:
    // 0x36c054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c05c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C05Cu;
        // 0x36c060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C064u;
    // 0x36c064: 0x0  nop
    ctx->pc = 0x36c064u;
    // NOP
    ctx->pc = 0x36c068u;
}
