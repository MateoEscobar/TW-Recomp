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

// Function: sub_00335F70
// Address: 0x335f70 - 0x335fa0
void sub_00335F70_0x335f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335F70_0x335f70");
#endif

    switch (ctx->pc) {
        case 0x335f84u: goto label_335f84;
        case 0x335f90u: goto label_335f90;
        default: break;
    }

    ctx->pc = 0x335f70u;

    // 0x335f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335f74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x335f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335f7c: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x335F7Cu;
    SET_GPR_U32(ctx, 31, 0x335F84u);
    ctx->pc = 0x335F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F7Cu;
    // 0x335f80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x335F7Cu, 0x335F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F84u;
label_335f84:
    // 0x335f84: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x335f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x335f88: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x335F88u;
    SET_GPR_U32(ctx, 31, 0x335F90u);
    ctx->pc = 0x335F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F88u;
    // 0x335f8c: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x335F88u, 0x335F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F90u;
label_335f90:
    // 0x335f90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335f94: 0x3e00008  jr          $ra
    ctx->pc = 0x335F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F94u;
        // 0x335f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335F9Cu;
    // 0x335f9c: 0x0  nop
    ctx->pc = 0x335f9cu;
    // NOP
    ctx->pc = 0x335fa0u;
}
