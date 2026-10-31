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

// Function: sub_0035A188
// Address: 0x35a188 - 0x35a1c0
void sub_0035A188_0x35a188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A188_0x35a188");
#endif

    switch (ctx->pc) {
        case 0x35a19cu: goto label_35a19c;
        case 0x35a1a4u: goto label_35a1a4;
        case 0x35a1acu: goto label_35a1ac;
        default: break;
    }

    ctx->pc = 0x35a188u;

    // 0x35a188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a18c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a194: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A194u;
    SET_GPR_U32(ctx, 31, 0x35A19Cu);
    ctx->pc = 0x35A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A194u;
    // 0x35a198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A194u, 0x35A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A19Cu;
label_35a19c:
    // 0x35a19c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35A19Cu;
    SET_GPR_U32(ctx, 31, 0x35A1A4u);
    ctx->pc = 0x35A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A19Cu;
    // 0x35a1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35A19Cu, 0x35A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1A4u;
label_35a1a4:
    // 0x35a1a4: 0xc08cf10  jal         func_233C40
    ctx->pc = 0x35A1A4u;
    SET_GPR_U32(ctx, 31, 0x35A1ACu);
    ctx->pc = 0x35A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1A4u;
    // 0x35a1a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C40u, 0x35A1A4u, 0x35A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1ACu;
label_35a1ac:
    // 0x35a1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A1B4u;
        // 0x35a1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A1BCu;
    // 0x35a1bc: 0x0  nop
    ctx->pc = 0x35a1bcu;
    // NOP
    ctx->pc = 0x35a1c0u;
}
