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

// Function: sub_00113BC8
// Address: 0x113bc8 - 0x113c00
void sub_00113BC8_0x113bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113BC8_0x113bc8");
#endif

    switch (ctx->pc) {
        case 0x113bf4u: goto label_113bf4;
        default: break;
    }

    ctx->pc = 0x113bc8u;

    // 0x113bc8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x113bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x113bcc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x113bd0: 0x8c67aa84  lw          $a3, -0x557C($v1)
    ctx->pc = 0x113bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113bd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113bd8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x113bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113bdc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x113bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113be0: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x113be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x113be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113be8: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x113bec: 0xc04355c  jal         func_10D570
    ctx->pc = 0x113BECu;
    SET_GPR_U32(ctx, 31, 0x113BF4u);
    ctx->pc = 0x113BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BECu;
    // 0x113bf0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D570u, 0x113BECu, 0x113BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BF4u;
label_113bf4:
    // 0x113bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x113BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BF8u;
        // 0x113bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C00u;
}
