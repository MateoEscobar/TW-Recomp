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

// Function: sub_003710F8
// Address: 0x3710f8 - 0x371130
void sub_003710F8_0x3710f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003710F8_0x3710f8");
#endif

    switch (ctx->pc) {
        case 0x37110cu: goto label_37110c;
        case 0x371114u: goto label_371114;
        case 0x37111cu: goto label_37111c;
        default: break;
    }

    ctx->pc = 0x3710f8u;

    // 0x3710f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3710f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3710fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3710fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371104: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371104u;
    SET_GPR_U32(ctx, 31, 0x37110Cu);
    ctx->pc = 0x371108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371104u;
    // 0x371108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371104u, 0x37110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37110Cu;
label_37110c:
    // 0x37110c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37110Cu;
    SET_GPR_U32(ctx, 31, 0x371114u);
    ctx->pc = 0x371110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37110Cu;
    // 0x371110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37110Cu, 0x371114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371114u;
label_371114:
    // 0x371114: 0xc044cec  jal         func_1133B0
    ctx->pc = 0x371114u;
    SET_GPR_U32(ctx, 31, 0x37111Cu);
    ctx->pc = 0x371118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371114u;
    // 0x371118: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1133B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1133B0u, 0x371114u, 0x37111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37111Cu;
label_37111c:
    // 0x37111c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37111cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371124: 0x3e00008  jr          $ra
    ctx->pc = 0x371124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371124u;
        // 0x371128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37112Cu;
    // 0x37112c: 0x0  nop
    ctx->pc = 0x37112cu;
    // NOP
    ctx->pc = 0x371130u;
}
