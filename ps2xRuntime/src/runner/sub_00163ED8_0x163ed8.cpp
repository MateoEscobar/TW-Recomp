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

// Function: sub_00163ED8
// Address: 0x163ed8 - 0x163f10
void sub_00163ED8_0x163ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163ED8_0x163ed8");
#endif

    switch (ctx->pc) {
        case 0x163ee8u: goto label_163ee8;
        default: break;
    }

    ctx->pc = 0x163ed8u;

    // 0x163ed8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x163ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163edc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x163edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x163ee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ee4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x163ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163ee8:
    // 0x163ee8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x163ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x163eec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x163eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x163ef0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x163ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163ef4: 0x0  nop
    ctx->pc = 0x163ef4u;
    // NOP
    // 0x163ef8: 0x14a4fffb  bne         $a1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x163EF8u;
    {
        const bool branch_taken_0x163ef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x163EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EF8u;
        // 0x163efc: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ef8) {
            ctx->pc = 0x163EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163ee8;
        }
    }
    ctx->pc = 0x163F00u;
    // 0x163f00: 0x3e00008  jr          $ra
    ctx->pc = 0x163F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163F08u;
    // 0x163f08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x163f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163f0c: 0x0  nop
    ctx->pc = 0x163f0cu;
    // NOP
    ctx->pc = 0x163f10u;
}
