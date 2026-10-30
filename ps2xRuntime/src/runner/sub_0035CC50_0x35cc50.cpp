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

// Function: sub_0035CC50
// Address: 0x35cc50 - 0x35ccf0
void sub_0035CC50_0x35cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CC50_0x35cc50");
#endif

    switch (ctx->pc) {
        case 0x35cc7cu: goto label_35cc7c;
        case 0x35cc84u: goto label_35cc84;
        case 0x35cc98u: goto label_35cc98;
        case 0x35cca0u: goto label_35cca0;
        case 0x35ccb4u: goto label_35ccb4;
        case 0x35ccbcu: goto label_35ccbc;
        case 0x35ccccu: goto label_35cccc;
        default: break;
    }

    ctx->pc = 0x35cc50u;

    // 0x35cc50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35cc54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cc58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35cc5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35cc60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35cc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35cc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35cc6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35cc70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cc74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CC74u;
    SET_GPR_U32(ctx, 31, 0x35CC7Cu);
    ctx->pc = 0x35CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC74u;
    // 0x35cc78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CC74u, 0x35CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC7Cu;
label_35cc7c:
    // 0x35cc7c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CC7Cu;
    SET_GPR_U32(ctx, 31, 0x35CC84u);
    ctx->pc = 0x35CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC7Cu;
    // 0x35cc80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CC7Cu, 0x35CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC84u;
label_35cc84:
    // 0x35cc84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35cc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35cc88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35cc90: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CC90u;
    SET_GPR_U32(ctx, 31, 0x35CC98u);
    ctx->pc = 0x35CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC90u;
    // 0x35cc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CC90u, 0x35CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC98u;
label_35cc98:
    // 0x35cc98: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CC98u;
    SET_GPR_U32(ctx, 31, 0x35CCA0u);
    ctx->pc = 0x35CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC98u;
    // 0x35cc9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CC98u, 0x35CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CCA0u;
label_35cca0:
    // 0x35cca0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35cca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cca4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35cca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ccac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CCACu;
    SET_GPR_U32(ctx, 31, 0x35CCB4u);
    ctx->pc = 0x35CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CCACu;
    // 0x35ccb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CCACu, 0x35CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CCB4u;
label_35ccb4:
    // 0x35ccb4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CCB4u;
    SET_GPR_U32(ctx, 31, 0x35CCBCu);
    ctx->pc = 0x35CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CCB4u;
    // 0x35ccb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CCB4u, 0x35CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CCBCu;
label_35ccbc:
    // 0x35ccbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35ccbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ccc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35ccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ccc4: 0xc08e36c  jal         func_238DB0
    ctx->pc = 0x35CCC4u;
    SET_GPR_U32(ctx, 31, 0x35CCCCu);
    ctx->pc = 0x35CCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CCC4u;
    // 0x35ccc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238DB0u, 0x35CCC4u, 0x35CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CCCCu;
label_35cccc:
    // 0x35cccc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35ccccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35ccd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ccd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ccd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35ccd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ccd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35ccd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ccdc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35ccdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cce4: 0x3e00008  jr          $ra
    ctx->pc = 0x35CCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CCE4u;
        // 0x35cce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CCECu;
    // 0x35ccec: 0x0  nop
    ctx->pc = 0x35ccecu;
    // NOP
    ctx->pc = 0x35ccf0u;
}
