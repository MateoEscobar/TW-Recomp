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

// Function: sub_004404E0
// Address: 0x4404e0 - 0x440520
void sub_004404E0_0x4404e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004404E0_0x4404e0");
#endif

    switch (ctx->pc) {
        case 0x440508u: goto label_440508;
        default: break;
    }

    ctx->pc = 0x4404e0u;

    // 0x4404e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4404e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4404e4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4404e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4404e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4404e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4404ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4404ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4404f0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x4404f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x4404f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4404f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4404f8: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x4404f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x4404fc: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x4404fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x440500: 0xc10ffb6  jal         func_43FED8
    ctx->pc = 0x440500u;
    SET_GPR_U32(ctx, 31, 0x440508u);
    ctx->pc = 0x440504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440500u;
    // 0x440504: 0x8ca9002c  lw          $t1, 0x2C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FED8u, 0x440500u, 0x440508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440508u;
label_440508:
    // 0x440508: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x440508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x44050c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44050cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440510: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x440510u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x440514: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x440514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440518: 0x3e00008  jr          $ra
    ctx->pc = 0x440518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440518u;
        // 0x44051c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440520u;
}
