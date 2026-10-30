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

// Function: sub_00379BE8
// Address: 0x379be8 - 0x379c20
void sub_00379BE8_0x379be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379BE8_0x379be8");
#endif

    switch (ctx->pc) {
        case 0x379bfcu: goto label_379bfc;
        case 0x379c04u: goto label_379c04;
        case 0x379c0cu: goto label_379c0c;
        default: break;
    }

    ctx->pc = 0x379be8u;

    // 0x379be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x379be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x379bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379bf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379BF4u;
    SET_GPR_U32(ctx, 31, 0x379BFCu);
    ctx->pc = 0x379BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379BF4u;
    // 0x379bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379BF4u, 0x379BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379BFCu;
label_379bfc:
    // 0x379bfc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379BFCu;
    SET_GPR_U32(ctx, 31, 0x379C04u);
    ctx->pc = 0x379C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379BFCu;
    // 0x379c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379BFCu, 0x379C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C04u;
label_379c04:
    // 0x379c04: 0xc0e5ce8  jal         func_3973A0
    ctx->pc = 0x379C04u;
    SET_GPR_U32(ctx, 31, 0x379C0Cu);
    ctx->pc = 0x379C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C04u;
    // 0x379c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3973A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973A0u, 0x379C04u, 0x379C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C0Cu;
label_379c0c:
    // 0x379c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379c10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c14: 0x3e00008  jr          $ra
    ctx->pc = 0x379C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C14u;
        // 0x379c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379C1Cu;
    // 0x379c1c: 0x0  nop
    ctx->pc = 0x379c1cu;
    // NOP
    ctx->pc = 0x379c20u;
}
