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

// Function: sub_00373118
// Address: 0x373118 - 0x373148
void sub_00373118_0x373118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373118_0x373118");
#endif

    switch (ctx->pc) {
        case 0x37312cu: goto label_37312c;
        case 0x373134u: goto label_373134;
        default: break;
    }

    ctx->pc = 0x373118u;

    // 0x373118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37311c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373124: 0xc102488  jal         func_409220
    ctx->pc = 0x373124u;
    SET_GPR_U32(ctx, 31, 0x37312Cu);
    ctx->pc = 0x373128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373124u;
    // 0x373128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x373124u, 0x37312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37312Cu;
label_37312c:
    // 0x37312c: 0xc04505e  jal         func_114178
    ctx->pc = 0x37312Cu;
    SET_GPR_U32(ctx, 31, 0x373134u);
    ctx->pc = 0x373130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37312Cu;
    // 0x373130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114178u, 0x37312Cu, 0x373134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373134u;
label_373134:
    // 0x373134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37313c: 0x3e00008  jr          $ra
    ctx->pc = 0x37313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37313Cu;
        // 0x373140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37313Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373144u;
    // 0x373144: 0x0  nop
    ctx->pc = 0x373144u;
    // NOP
    ctx->pc = 0x373148u;
}
