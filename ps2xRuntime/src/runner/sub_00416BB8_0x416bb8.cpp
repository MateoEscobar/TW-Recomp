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

// Function: sub_00416BB8
// Address: 0x416bb8 - 0x416be0
void sub_00416BB8_0x416bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416BB8_0x416bb8");
#endif

    switch (ctx->pc) {
        case 0x416bccu: goto label_416bcc;
        case 0x416bd4u: goto label_416bd4;
        default: break;
    }

    ctx->pc = 0x416bb8u;

    // 0x416bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x416bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x416bbc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x416bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x416bc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x416bc4: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x416BC4u;
    SET_GPR_U32(ctx, 31, 0x416BCCu);
    ctx->pc = 0x416BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416BC4u;
    // 0x416bc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x416BC4u, 0x416BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416BCCu;
label_416bcc:
    // 0x416bcc: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x416BCCu;
    SET_GPR_U32(ctx, 31, 0x416BD4u);
    ctx->pc = 0x416BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416BCCu;
    // 0x416bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x416BCCu, 0x416BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416BD4u;
label_416bd4:
    // 0x416bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x416bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x416BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416BD8u;
        // 0x416bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416BE0u;
}
