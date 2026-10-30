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

// Function: sub_00440648
// Address: 0x440648 - 0x440688
void sub_00440648_0x440648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440648_0x440648");
#endif

    switch (ctx->pc) {
        case 0x440670u: goto label_440670;
        default: break;
    }

    ctx->pc = 0x440648u;

    // 0x440648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x440648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44064c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x44064cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440650: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x440650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x440654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x440654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x440658: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x440658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x44065c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x44065cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x440660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x440660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x440664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440668: 0xc10ffb6  jal         func_43FED8
    ctx->pc = 0x440668u;
    SET_GPR_U32(ctx, 31, 0x440670u);
    ctx->pc = 0x44066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440668u;
    // 0x44066c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FED8u, 0x440668u, 0x440670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440670u;
label_440670:
    // 0x440670: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x440670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x440674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440678: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x440678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x44067c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x44067cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440680: 0x3e00008  jr          $ra
    ctx->pc = 0x440680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440680u;
        // 0x440684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440688u;
}
