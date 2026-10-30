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

// Function: sub_0036C098
// Address: 0x36c098 - 0x36c0c8
void sub_0036C098_0x36c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C098_0x36c098");
#endif

    switch (ctx->pc) {
        case 0x36c0acu: goto label_36c0ac;
        case 0x36c0b4u: goto label_36c0b4;
        default: break;
    }

    ctx->pc = 0x36c098u;

    // 0x36c098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c09c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c0a4: 0xc102488  jal         func_409220
    ctx->pc = 0x36C0A4u;
    SET_GPR_U32(ctx, 31, 0x36C0ACu);
    ctx->pc = 0x36C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C0A4u;
    // 0x36c0a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36C0A4u, 0x36C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C0ACu;
label_36c0ac:
    // 0x36c0ac: 0xc107b4e  jal         func_41ED38
    ctx->pc = 0x36C0ACu;
    SET_GPR_U32(ctx, 31, 0x36C0B4u);
    ctx->pc = 0x36C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C0ACu;
    // 0x36c0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ED38u, 0x36C0ACu, 0x36C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C0B4u;
label_36c0b4:
    // 0x36c0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c0b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36C0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C0BCu;
        // 0x36c0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C0C4u;
    // 0x36c0c4: 0x0  nop
    ctx->pc = 0x36c0c4u;
    // NOP
    ctx->pc = 0x36c0c8u;
}
