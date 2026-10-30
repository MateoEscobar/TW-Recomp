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

// Function: sub_003712D8
// Address: 0x3712d8 - 0x371348
void sub_003712D8_0x3712d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003712D8_0x3712d8");
#endif

    switch (ctx->pc) {
        case 0x3712f8u: goto label_3712f8;
        case 0x371300u: goto label_371300;
        case 0x371318u: goto label_371318;
        case 0x371320u: goto label_371320;
        case 0x37132cu: goto label_37132c;
        default: break;
    }

    ctx->pc = 0x3712d8u;

    // 0x3712d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3712d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3712dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3712dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3712e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3712e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3712e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3712e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3712e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3712ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3712ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3712f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3712F0u;
    SET_GPR_U32(ctx, 31, 0x3712F8u);
    ctx->pc = 0x3712F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712F0u;
    // 0x3712f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3712F0u, 0x3712F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712F8u;
label_3712f8:
    // 0x3712f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3712F8u;
    SET_GPR_U32(ctx, 31, 0x371300u);
    ctx->pc = 0x3712FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712F8u;
    // 0x3712fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3712F8u, 0x371300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371300u;
label_371300:
    // 0x371300: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x371300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x371304: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x371304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x371308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x371308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37130c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371310: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371310u;
    SET_GPR_U32(ctx, 31, 0x371318u);
    ctx->pc = 0x371314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371310u;
    // 0x371314: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371310u, 0x371318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371318u;
label_371318:
    // 0x371318: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371318u;
    SET_GPR_U32(ctx, 31, 0x371320u);
    ctx->pc = 0x37131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371318u;
    // 0x37131c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371318u, 0x371320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371320u;
label_371320:
    // 0x371320: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x371320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371324: 0xc044d58  jal         func_113560
    ctx->pc = 0x371324u;
    SET_GPR_U32(ctx, 31, 0x37132Cu);
    ctx->pc = 0x371328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371324u;
    // 0x371328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113560u, 0x371324u, 0x37132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37132Cu;
label_37132c:
    // 0x37132c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37132cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37133c: 0x3e00008  jr          $ra
    ctx->pc = 0x37133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37133Cu;
        // 0x371340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37133Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371344u;
    // 0x371344: 0x0  nop
    ctx->pc = 0x371344u;
    // NOP
    ctx->pc = 0x371348u;
}
