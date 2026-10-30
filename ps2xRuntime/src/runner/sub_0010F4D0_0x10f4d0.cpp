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

// Function: sub_0010F4D0
// Address: 0x10f4d0 - 0x10f520
void sub_0010F4D0_0x10f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F4D0_0x10f4d0");
#endif

    switch (ctx->pc) {
        case 0x10f510u: goto label_10f510;
        default: break;
    }

    ctx->pc = 0x10f4d0u;

    // 0x10f4d0: 0x3c07005a  lui         $a3, 0x5A
    ctx->pc = 0x10f4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)90 << 16));
    // 0x10f4d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10f4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f4dc: 0x94e68a98  lhu         $a2, -0x7568($a3)
    ctx->pc = 0x10f4dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x598A98u));
    // 0x10f4e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f4e4: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x10f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x10f4e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10f4ec: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x10f4ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x10f4f0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x10f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10f4f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10f4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f4fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f500: 0xa4e28a98  sh          $v0, -0x7568($a3)
    ctx->pc = 0x10f500u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294937240), (uint16_t)GPR_U32(ctx, 2));
    // 0x10f504: 0xa7a60000  sh          $a2, 0x0($sp)
    ctx->pc = 0x10f504u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x10f508: 0xc043d56  jal         func_10F558
    ctx->pc = 0x10F508u;
    SET_GPR_U32(ctx, 31, 0x10F510u);
    ctx->pc = 0x10F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F508u;
    // 0x10f50c: 0xa7a30002  sh          $v1, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F558u, 0x10F508u, 0x10F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F510u;
label_10f510:
    // 0x10f510: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f518: 0x3e00008  jr          $ra
    ctx->pc = 0x10F518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F518u;
        // 0x10f51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F520u;
}
