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

// Function: sub_0037CC68
// Address: 0x37cc68 - 0x37cce0
void sub_0037CC68_0x37cc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CC68_0x37cc68");
#endif

    switch (ctx->pc) {
        case 0x37cc88u: goto label_37cc88;
        case 0x37cc90u: goto label_37cc90;
        case 0x37cc98u: goto label_37cc98;
        case 0x37cca4u: goto label_37cca4;
        case 0x37ccbcu: goto label_37ccbc;
        case 0x37ccc8u: goto label_37ccc8;
        default: break;
    }

    ctx->pc = 0x37cc68u;

    // 0x37cc68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37cc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37cc6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cc70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37cc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37cc74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37cc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37cc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cc80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CC80u;
    SET_GPR_U32(ctx, 31, 0x37CC88u);
    ctx->pc = 0x37CC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC80u;
    // 0x37cc84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CC80u, 0x37CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC88u;
label_37cc88:
    // 0x37cc88: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CC88u;
    SET_GPR_U32(ctx, 31, 0x37CC90u);
    ctx->pc = 0x37CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC88u;
    // 0x37cc8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CC88u, 0x37CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC90u;
label_37cc90:
    // 0x37cc90: 0xc1089d6  jal         func_422758
    ctx->pc = 0x37CC90u;
    SET_GPR_U32(ctx, 31, 0x37CC98u);
    ctx->pc = 0x37CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC90u;
    // 0x37cc94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422758u, 0x37CC90u, 0x37CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC98u;
label_37cc98:
    // 0x37cc98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37cc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc9c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37CC9Cu;
    SET_GPR_U32(ctx, 31, 0x37CCA4u);
    ctx->pc = 0x37CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC9Cu;
    // 0x37cca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37CC9Cu, 0x37CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCA4u;
label_37cca4:
    // 0x37cca4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37CCA4u;
    {
        const bool branch_taken_0x37cca4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCA4u;
        // 0x37cca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cca4) {
            ctx->pc = 0x37CCC0u;
            goto label_37ccc0;
        }
    }
    ctx->pc = 0x37CCACu;
    // 0x37ccac: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37ccacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37ccb0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37ccb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37ccb4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37CCB4u;
    SET_GPR_U32(ctx, 31, 0x37CCBCu);
    ctx->pc = 0x37CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CCB4u;
    // 0x37ccb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37CCB4u, 0x37CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCBCu;
label_37ccbc:
    // 0x37ccbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37ccc0:
    // 0x37ccc0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37CCC0u;
    SET_GPR_U32(ctx, 31, 0x37CCC8u);
    ctx->pc = 0x37CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CCC0u;
    // 0x37ccc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37CCC0u, 0x37CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCC8u;
label_37ccc8:
    // 0x37ccc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37ccc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ccd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37ccd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ccd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ccd8: 0x3e00008  jr          $ra
    ctx->pc = 0x37CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCD8u;
        // 0x37ccdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CCE0u;
}
