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

// Function: sub_004A94C8
// Address: 0x4a94c8 - 0x4a9540
void sub_004A94C8_0x4a94c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A94C8_0x4a94c8");
#endif

    switch (ctx->pc) {
        case 0x4a9500u: goto label_4a9500;
        default: break;
    }

    ctx->pc = 0x4a94c8u;

    // 0x4a94c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a94c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a94cc: 0xaf858a98  sw          $a1, -0x7568($gp)
    ctx->pc = 0x4a94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937240), GPR_U32(ctx, 5));
    // 0x4a94d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a94d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a94d4: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x4a94d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x4a94d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a94d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a94dc: 0x8f8587ec  lw          $a1, -0x7814($gp)
    ctx->pc = 0x4a94dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936556)));
    // 0x4a94e0: 0x8f8787f0  lw          $a3, -0x7810($gp)
    ctx->pc = 0x4a94e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
    // 0x4a94e4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4a94e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4a94e8: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x4a94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4a94ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a94f0: 0x25080568  addiu       $t0, $t0, 0x568
    ctx->pc = 0x4a94f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1384));
    // 0x4a94f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a94f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a94f8: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x4A94F8u;
    SET_GPR_U32(ctx, 31, 0x4A9500u);
    ctx->pc = 0x4A94FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A94F8u;
    // 0x4a94fc: 0x35290412  ori         $t1, $t1, 0x412 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1042);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x4A94F8u, 0x4A9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9500u;
label_4a9500:
    // 0x4a9500: 0x8f848a98  lw          $a0, -0x7568($gp)
    ctx->pc = 0x4a9500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937240)));
    // 0x4a9504: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a9504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a9508: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a9508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a950c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a9510: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A9510u;
    {
        const bool branch_taken_0x4a9510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9510u;
        // 0x4a9514: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9510) {
            ctx->pc = 0x4A952Cu;
            goto label_4a952c;
        }
    }
    ctx->pc = 0x4A9518u;
    // 0x4a9518: 0x8f838a9c  lw          $v1, -0x7564($gp)
    ctx->pc = 0x4a9518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937244)));
    // 0x4a951c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a9520: 0xaf838a9c  sw          $v1, -0x7564($gp)
    ctx->pc = 0x4a9520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937244), GPR_U32(ctx, 3));
    // 0x4a9524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A9524u;
    {
        const bool branch_taken_0x4a9524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9524u;
        // 0x4a9528: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9524) {
            ctx->pc = 0x4A9530u;
            goto label_4a9530;
        }
    }
    ctx->pc = 0x4A952Cu;
label_4a952c:
    // 0x4a952c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a952cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a9530:
    // 0x4a9530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a9530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9538: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9538u;
        // 0x4a953c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9540u;
}
