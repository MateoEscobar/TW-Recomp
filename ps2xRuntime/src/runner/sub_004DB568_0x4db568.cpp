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

// Function: sub_004DB568
// Address: 0x4db568 - 0x4db598
void sub_004DB568_0x4db568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB568_0x4db568");
#endif

    switch (ctx->pc) {
        case 0x4db57cu: goto label_4db57c;
        case 0x4db58cu: goto label_4db58c;
        default: break;
    }

    ctx->pc = 0x4db568u;

    // 0x4db568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4db56c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4db56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x4db570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4db574: 0xc136b7c  jal         func_4DADF0
    ctx->pc = 0x4DB574u;
    SET_GPR_U32(ctx, 31, 0x4DB57Cu);
    ctx->pc = 0x4DB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB574u;
    // 0x4db578: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x4DB574u, 0x4DB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB57Cu;
label_4db57c:
    // 0x4db57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4db57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4db580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4db580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db584: 0xc0e409a  jal         func_390268
    ctx->pc = 0x4DB584u;
    SET_GPR_U32(ctx, 31, 0x4DB58Cu);
    ctx->pc = 0x4DB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB584u;
    // 0x4db588: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x4DB584u, 0x4DB58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB58Cu;
label_4db58c:
    // 0x4db58c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db590: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB590u;
        // 0x4db594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB598u;
}
