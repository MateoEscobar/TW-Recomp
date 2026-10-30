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

// Function: sub_003596E0
// Address: 0x3596e0 - 0x359780
void sub_003596E0_0x3596e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003596E0_0x3596e0");
#endif

    switch (ctx->pc) {
        case 0x359708u: goto label_359708;
        case 0x359710u: goto label_359710;
        case 0x359724u: goto label_359724;
        case 0x359738u: goto label_359738;
        case 0x35974cu: goto label_35974c;
        case 0x359760u: goto label_359760;
        default: break;
    }

    ctx->pc = 0x3596e0u;

    // 0x3596e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3596e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3596e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3596e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3596e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3596e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3596ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3596ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3596f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3596f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3596f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3596f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3596f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3596fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3596fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359700: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359700u;
    SET_GPR_U32(ctx, 31, 0x359708u);
    ctx->pc = 0x359704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359700u;
    // 0x359704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359700u, 0x359708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359708u;
label_359708:
    // 0x359708: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359708u;
    SET_GPR_U32(ctx, 31, 0x359710u);
    ctx->pc = 0x35970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359708u;
    // 0x35970c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359708u, 0x359710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359710u;
label_359710:
    // 0x359710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x359710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359718: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35971c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35971Cu;
    SET_GPR_U32(ctx, 31, 0x359724u);
    ctx->pc = 0x359720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35971Cu;
    // 0x359720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35971Cu, 0x359724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359724u;
label_359724:
    // 0x359724: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x359724u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35972c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x359730: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359730u;
    SET_GPR_U32(ctx, 31, 0x359738u);
    ctx->pc = 0x359734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359730u;
    // 0x359734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359730u, 0x359738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359738u;
label_359738:
    // 0x359738: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x359738u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35973c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35973cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359740: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x359740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x359744: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359744u;
    SET_GPR_U32(ctx, 31, 0x35974Cu);
    ctx->pc = 0x359748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359744u;
    // 0x359748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359744u, 0x35974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35974Cu;
label_35974c:
    // 0x35974c: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x35974cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x359750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359754: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x359754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359758: 0xc08d83e  jal         func_2360F8
    ctx->pc = 0x359758u;
    SET_GPR_U32(ctx, 31, 0x359760u);
    ctx->pc = 0x35975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359758u;
    // 0x35975c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2360F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2360F8u, 0x359758u, 0x359760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359760u;
label_359760:
    // 0x359760: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x359760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x359764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359768: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x359768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35976c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35976cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359770: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x359770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359778: 0x3e00008  jr          $ra
    ctx->pc = 0x359778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359778u;
        // 0x35977c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359780u;
}
