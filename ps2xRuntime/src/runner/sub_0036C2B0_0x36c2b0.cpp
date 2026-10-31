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

// Function: sub_0036C2B0
// Address: 0x36c2b0 - 0x36c378
void sub_0036C2B0_0x36c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C2B0_0x36c2b0");
#endif

    switch (ctx->pc) {
        case 0x36c2e0u: goto label_36c2e0;
        case 0x36c2e8u: goto label_36c2e8;
        case 0x36c2fcu: goto label_36c2fc;
        case 0x36c304u: goto label_36c304;
        case 0x36c318u: goto label_36c318;
        case 0x36c320u: goto label_36c320;
        case 0x36c334u: goto label_36c334;
        case 0x36c33cu: goto label_36c33c;
        case 0x36c350u: goto label_36c350;
        default: break;
    }

    ctx->pc = 0x36c2b0u;

    // 0x36c2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36c2b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c2b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36c2bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36c2c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36c2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36c2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36c2cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36c2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36c2d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36c2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c2d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C2D8u;
    SET_GPR_U32(ctx, 31, 0x36C2E0u);
    ctx->pc = 0x36C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2D8u;
    // 0x36c2dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C2D8u, 0x36C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2E0u;
label_36c2e0:
    // 0x36c2e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C2E0u;
    SET_GPR_U32(ctx, 31, 0x36C2E8u);
    ctx->pc = 0x36C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2E0u;
    // 0x36c2e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C2E0u, 0x36C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2E8u;
label_36c2e8:
    // 0x36c2e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36c2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36c2ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36c2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c2f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C2F4u;
    SET_GPR_U32(ctx, 31, 0x36C2FCu);
    ctx->pc = 0x36C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2F4u;
    // 0x36c2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C2F4u, 0x36C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2FCu;
label_36c2fc:
    // 0x36c2fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C2FCu;
    SET_GPR_U32(ctx, 31, 0x36C304u);
    ctx->pc = 0x36C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2FCu;
    // 0x36c300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C2FCu, 0x36C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C304u;
label_36c304:
    // 0x36c304: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36c304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c308: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36c308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c30c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c310: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C310u;
    SET_GPR_U32(ctx, 31, 0x36C318u);
    ctx->pc = 0x36C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C310u;
    // 0x36c314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C310u, 0x36C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C318u;
label_36c318:
    // 0x36c318: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C318u;
    SET_GPR_U32(ctx, 31, 0x36C320u);
    ctx->pc = 0x36C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C318u;
    // 0x36c31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C318u, 0x36C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C320u;
label_36c320:
    // 0x36c320: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36c320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c324: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36c324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c32c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C32Cu;
    SET_GPR_U32(ctx, 31, 0x36C334u);
    ctx->pc = 0x36C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C32Cu;
    // 0x36c330: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C32Cu, 0x36C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C334u;
label_36c334:
    // 0x36c334: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C334u;
    SET_GPR_U32(ctx, 31, 0x36C33Cu);
    ctx->pc = 0x36C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C334u;
    // 0x36c338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C334u, 0x36C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C33Cu;
label_36c33c:
    // 0x36c33c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36c33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c340: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36c340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36c344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c348: 0xc1075e2  jal         func_41D788
    ctx->pc = 0x36C348u;
    SET_GPR_U32(ctx, 31, 0x36C350u);
    ctx->pc = 0x36C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C348u;
    // 0x36c34c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D788u, 0x36C348u, 0x36C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C350u;
label_36c350:
    // 0x36c350: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36c350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36c354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c358: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36c358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36c35c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36c35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c360: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36c360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c364: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36c364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c36c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C36Cu;
        // 0x36c370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C374u;
    // 0x36c374: 0x0  nop
    ctx->pc = 0x36c374u;
    // NOP
    ctx->pc = 0x36c378u;
}
