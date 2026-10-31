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

// Function: sub_004338C8
// Address: 0x4338c8 - 0x433928
void sub_004338C8_0x4338c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004338C8_0x4338c8");
#endif

    switch (ctx->pc) {
        case 0x433908u: goto label_433908;
        default: break;
    }

    ctx->pc = 0x4338c8u;

    // 0x4338c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4338c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4338cc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4338ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4338d0: 0x8c4869ec  lw          $t0, 0x69EC($v0)
    ctx->pc = 0x4338d0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5169ECu));
    // 0x4338d4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4338d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4338d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4338d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4338dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4338dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4338e0: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x4338e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x4338e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4338e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4338e8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4338e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4338ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4338ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4338f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4338f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4338f4: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x4338f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4338f8: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x4338f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x4338fc: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x4338fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x433900: 0xc10d9c4  jal         func_436710
    ctx->pc = 0x433900u;
    SET_GPR_U32(ctx, 31, 0x433908u);
    ctx->pc = 0x433904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433900u;
    // 0x433904: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436710u, 0x433900u, 0x433908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433908u;
label_433908:
    // 0x433908: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x433908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43390c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x43390cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x433910: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x433910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x433914: 0x3e00008  jr          $ra
    ctx->pc = 0x433914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433914u;
        // 0x433918: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43391Cu;
    // 0x43391c: 0x0  nop
    ctx->pc = 0x43391cu;
    // NOP
    // 0x433920: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x433920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x433924: 0x0  nop
    ctx->pc = 0x433924u;
    // NOP
    ctx->pc = 0x433928u;
}
