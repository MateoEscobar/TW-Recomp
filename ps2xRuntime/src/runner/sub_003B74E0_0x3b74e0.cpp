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

// Function: sub_003B74E0
// Address: 0x3b74e0 - 0x3b7538
void sub_003B74E0_0x3b74e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B74E0_0x3b74e0");
#endif

    switch (ctx->pc) {
        case 0x3b74e0u: goto label_3b74e0;
        case 0x3b74e4u: goto label_3b74e4;
        case 0x3b74e8u: goto label_3b74e8;
        case 0x3b74ecu: goto label_3b74ec;
        case 0x3b74f0u: goto label_3b74f0;
        case 0x3b74f4u: goto label_3b74f4;
        case 0x3b74f8u: goto label_3b74f8;
        case 0x3b74fcu: goto label_3b74fc;
        case 0x3b7500u: goto label_3b7500;
        case 0x3b7504u: goto label_3b7504;
        case 0x3b7508u: goto label_3b7508;
        case 0x3b750cu: goto label_3b750c;
        case 0x3b7510u: goto label_3b7510;
        case 0x3b7514u: goto label_3b7514;
        case 0x3b7518u: goto label_3b7518;
        case 0x3b751cu: goto label_3b751c;
        case 0x3b7520u: goto label_3b7520;
        case 0x3b7524u: goto label_3b7524;
        case 0x3b7528u: goto label_3b7528;
        case 0x3b752cu: goto label_3b752c;
        case 0x3b7530u: goto label_3b7530;
        case 0x3b7534u: goto label_3b7534;
        default: break;
    }

    ctx->pc = 0x3b74e0u;

label_3b74e0:
    // 0x3b74e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b74e4:
    // 0x3b74e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b74e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b74e8:
    // 0x3b74e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b74e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b74ec:
    // 0x3b74ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b74ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b74f0:
    // 0x3b74f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b74f4:
    // 0x3b74f4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b74f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b74f8:
    // 0x3b74f8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b74fc:
    // 0x3b74fc: 0x40f809  jalr        $v0
label_3b7500:
    if (ctx->pc == 0x3B7500u) {
        ctx->pc = 0x3B7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74FCu;
        // 0x3b7500: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7504u;
        goto label_3b7504;
    }
    ctx->pc = 0x3B74FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B7504u);
        ctx->pc = 0x3B7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74FCu;
        // 0x3b7500: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B74FCu, 0x3B7504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7504u;
label_3b7504:
    // 0x3b7504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b7504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7508:
    // 0x3b7508: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3b7508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b750c:
    // 0x3b750c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b7510:
    // 0x3b7510: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3b7514:
    if (ctx->pc == 0x3B7514u) {
        ctx->pc = 0x3B7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7510u;
        // 0x3b7514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7518u;
        goto label_3b7518;
    }
    ctx->pc = 0x3B7510u;
    {
        const bool branch_taken_0x3b7510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7510u;
        // 0x3b7514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7510) {
            ctx->pc = 0x3B7528u;
            goto label_3b7528;
        }
    }
    ctx->pc = 0x3B7518u;
label_3b7518:
    // 0x3b7518: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3b7518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b751c:
    // 0x3b751c: 0xc0e858c  jal         func_3A1630
label_3b7520:
    if (ctx->pc == 0x3B7520u) {
        ctx->pc = 0x3B7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B751Cu;
        // 0x3b7520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7524u;
        goto label_3b7524;
    }
    ctx->pc = 0x3B751Cu;
    SET_GPR_U32(ctx, 31, 0x3B7524u);
    ctx->pc = 0x3B7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B751Cu;
    // 0x3b7520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B751Cu, 0x3B7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7524u;
label_3b7524:
    // 0x3b7524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b7524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7528:
    // 0x3b7528: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b7528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b752c:
    // 0x3b752c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b752cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7530:
    // 0x3b7530: 0x3e00008  jr          $ra
label_3b7534:
    if (ctx->pc == 0x3B7534u) {
        ctx->pc = 0x3B7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7530u;
        // 0x3b7534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7538u;
        goto label_fallthrough_0x3b7530;
    }
    ctx->pc = 0x3B7530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7530u;
        // 0x3b7534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b7530:
    ctx->pc = 0x3B7538u;
}
