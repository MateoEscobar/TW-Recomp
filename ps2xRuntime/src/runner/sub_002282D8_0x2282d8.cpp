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

// Function: sub_002282D8
// Address: 0x2282d8 - 0x228340
void sub_002282D8_0x2282d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002282D8_0x2282d8");
#endif

    switch (ctx->pc) {
        case 0x2282fcu: goto label_2282fc;
        case 0x228320u: goto label_228320;
        default: break;
    }

    ctx->pc = 0x2282d8u;

    // 0x2282d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2282dc: 0x3c052fef  lui         $a1, 0x2FEF
    ctx->pc = 0x2282dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
    // 0x2282e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2282e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2282e4: 0x34a5efff  ori         $a1, $a1, 0xEFFF
    ctx->pc = 0x2282e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    // 0x2282e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2282e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2282ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2282ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2282f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2282f4: 0xc089998  jal         func_226660
    ctx->pc = 0x2282F4u;
    SET_GPR_U32(ctx, 31, 0x2282FCu);
    ctx->pc = 0x2282F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2282F4u;
    // 0x2282f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2282F4u, 0x2282FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282FCu;
label_2282fc:
    // 0x2282fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2282FCu;
    {
        const bool branch_taken_0x2282fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282FCu;
        // 0x228300: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282fc) {
            ctx->pc = 0x228328u;
            goto label_228328;
        }
    }
    ctx->pc = 0x228304u;
    // 0x228304: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x228304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x228308: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x228308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x22830c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x22830cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x228310: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x228310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x228314: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x228314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x228318: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228318u;
    SET_GPR_U32(ctx, 31, 0x228320u);
    ctx->pc = 0x22831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228318u;
    // 0x22831c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228318u, 0x228320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228320u;
label_228320:
    // 0x228320: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x228320u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x228324: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_228328:
    // 0x228328: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22832c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22832cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228334: 0x3e00008  jr          $ra
    ctx->pc = 0x228334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228334u;
        // 0x228338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22833Cu;
    // 0x22833c: 0x0  nop
    ctx->pc = 0x22833cu;
    // NOP
    ctx->pc = 0x228340u;
}
