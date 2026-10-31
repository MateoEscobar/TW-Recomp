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

// Function: sub_001B5CF0
// Address: 0x1b5cf0 - 0x1b5d38
void sub_001B5CF0_0x1b5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5CF0_0x1b5cf0");
#endif

    switch (ctx->pc) {
        case 0x1b5d2cu: goto label_1b5d2c;
        default: break;
    }

    ctx->pc = 0x1b5cf0u;

    // 0x1b5cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5cf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b5cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5cfc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1b5cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b5d00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b5d04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d08: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1b5d08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b5d0c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b5d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b5d10: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1b5d10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5d14: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1b5d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1b5d18: 0xa3a60000  sb          $a2, 0x0($sp)
    ctx->pc = 0x1b5d18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b5d1c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x1b5d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5d20: 0xa3a70002  sb          $a3, 0x2($sp)
    ctx->pc = 0x1b5d20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b5d24: 0xc06cf56  jal         func_1B3D58
    ctx->pc = 0x1B5D24u;
    SET_GPR_U32(ctx, 31, 0x1B5D2Cu);
    ctx->pc = 0x1B5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D24u;
    // 0x1b5d28: 0xa3a80003  sb          $t0, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D58u, 0x1B5D24u, 0x1B5D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D2Cu;
label_1b5d2c:
    // 0x1b5d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D30u;
        // 0x1b5d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5D38u;
}
