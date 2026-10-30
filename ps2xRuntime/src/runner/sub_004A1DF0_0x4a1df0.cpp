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

// Function: sub_004A1DF0
// Address: 0x4a1df0 - 0x4a1e40
void sub_004A1DF0_0x4a1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1DF0_0x4a1df0");
#endif

    switch (ctx->pc) {
        case 0x4a1e34u: goto label_4a1e34;
        default: break;
    }

    ctx->pc = 0x4a1df0u;

    // 0x4a1df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a1df4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a1df8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4a1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x4a1dfc: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x4a1dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x4a1e00: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x4a1e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x4a1e04: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x4a1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x4a1e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a1e0c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a1e10: 0x24841e48  addiu       $a0, $a0, 0x1E48
    ctx->pc = 0x4a1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7752));
    // 0x4a1e14: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x4a1e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x4a1e18: 0x24c61f00  addiu       $a2, $a2, 0x1F00
    ctx->pc = 0x4a1e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7936));
    // 0x4a1e1c: 0x24421f70  addiu       $v0, $v0, 0x1F70
    ctx->pc = 0x4a1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8048));
    // 0x4a1e20: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x4a1e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70AD4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AD4Cu, _value); } while (0);
    // 0x4a1e24: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x4a1e24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x70AD40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AD40u, _value); } while (0);
    // 0x4a1e28: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x4a1e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x70AD44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AD44u, _value); } while (0);
    // 0x4a1e2c: 0xc127ee2  jal         func_49FB88
    ctx->pc = 0x4A1E2Cu;
    SET_GPR_U32(ctx, 31, 0x4A1E34u);
    ctx->pc = 0x4A1E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1E2Cu;
    // 0x4a1e30: 0xac660030  sw          $a2, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB88u, 0x4A1E2Cu, 0x4A1E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1E34u;
label_4a1e34:
    // 0x4a1e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1e38: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E38u;
        // 0x4a1e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1E40u;
}
