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

// Function: sub_003ECF78
// Address: 0x3ecf78 - 0x3ed008
void sub_003ECF78_0x3ecf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECF78_0x3ecf78");
#endif

    switch (ctx->pc) {
        case 0x3ecf78u: goto label_3ecf78;
        case 0x3ecf7cu: goto label_3ecf7c;
        case 0x3ecf80u: goto label_3ecf80;
        case 0x3ecf84u: goto label_3ecf84;
        case 0x3ecf88u: goto label_3ecf88;
        case 0x3ecf8cu: goto label_3ecf8c;
        case 0x3ecf90u: goto label_3ecf90;
        case 0x3ecf94u: goto label_3ecf94;
        case 0x3ecf98u: goto label_3ecf98;
        case 0x3ecf9cu: goto label_3ecf9c;
        case 0x3ecfa0u: goto label_3ecfa0;
        case 0x3ecfa4u: goto label_3ecfa4;
        case 0x3ecfa8u: goto label_3ecfa8;
        case 0x3ecfacu: goto label_3ecfac;
        case 0x3ecfb0u: goto label_3ecfb0;
        case 0x3ecfb4u: goto label_3ecfb4;
        case 0x3ecfb8u: goto label_3ecfb8;
        case 0x3ecfbcu: goto label_3ecfbc;
        case 0x3ecfc0u: goto label_3ecfc0;
        case 0x3ecfc4u: goto label_3ecfc4;
        case 0x3ecfc8u: goto label_3ecfc8;
        case 0x3ecfccu: goto label_3ecfcc;
        case 0x3ecfd0u: goto label_3ecfd0;
        case 0x3ecfd4u: goto label_3ecfd4;
        case 0x3ecfd8u: goto label_3ecfd8;
        case 0x3ecfdcu: goto label_3ecfdc;
        case 0x3ecfe0u: goto label_3ecfe0;
        case 0x3ecfe4u: goto label_3ecfe4;
        case 0x3ecfe8u: goto label_3ecfe8;
        case 0x3ecfecu: goto label_3ecfec;
        case 0x3ecff0u: goto label_3ecff0;
        case 0x3ecff4u: goto label_3ecff4;
        case 0x3ecff8u: goto label_3ecff8;
        case 0x3ecffcu: goto label_3ecffc;
        case 0x3ed000u: goto label_3ed000;
        case 0x3ed004u: goto label_3ed004;
        default: break;
    }

    ctx->pc = 0x3ecf78u;

label_3ecf78:
    // 0x3ecf78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ecf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ecf7c:
    // 0x3ecf7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ecf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ecf80:
    // 0x3ecf80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ecf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ecf84:
    // 0x3ecf84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ecf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ecf88:
    // 0x3ecf88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ecf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ecf8c:
    // 0x3ecf8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ecf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ecf90:
    // 0x3ecf90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ecf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ecf94:
    // 0x3ecf94: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ecf94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ecf98:
    // 0x3ecf98: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ecf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ecf9c:
    // 0x3ecf9c: 0x40f809  jalr        $v0
label_3ecfa0:
    if (ctx->pc == 0x3ECFA0u) {
        ctx->pc = 0x3ECFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF9Cu;
        // 0x3ecfa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECFA4u;
        goto label_3ecfa4;
    }
    ctx->pc = 0x3ECF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ECFA4u);
        ctx->pc = 0x3ECFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF9Cu;
        // 0x3ecfa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECF9Cu, 0x3ECFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECFA4u;
label_3ecfa4:
    // 0x3ecfa4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3ecfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3ecfa8:
    // 0x3ecfa8: 0xc0e858c  jal         func_3A1630
label_3ecfac:
    if (ctx->pc == 0x3ECFACu) {
        ctx->pc = 0x3ECFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFA8u;
        // 0x3ecfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECFB0u;
        goto label_3ecfb0;
    }
    ctx->pc = 0x3ECFA8u;
    SET_GPR_U32(ctx, 31, 0x3ECFB0u);
    ctx->pc = 0x3ECFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECFA8u;
    // 0x3ecfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ECFA8u, 0x3ECFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECFB0u;
label_3ecfb0:
    // 0x3ecfb0: 0xc0ea14c  jal         func_3A8530
label_3ecfb4:
    if (ctx->pc == 0x3ECFB4u) {
        ctx->pc = 0x3ECFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFB0u;
        // 0x3ecfb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECFB8u;
        goto label_3ecfb8;
    }
    ctx->pc = 0x3ECFB0u;
    SET_GPR_U32(ctx, 31, 0x3ECFB8u);
    ctx->pc = 0x3ECFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECFB0u;
    // 0x3ecfb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ECFB0u, 0x3ECFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECFB8u;
label_3ecfb8:
    // 0x3ecfb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ecfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ecfbc:
    // 0x3ecfbc: 0xc0ea12a  jal         func_3A84A8
label_3ecfc0:
    if (ctx->pc == 0x3ECFC0u) {
        ctx->pc = 0x3ECFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFBCu;
        // 0x3ecfc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECFC4u;
        goto label_3ecfc4;
    }
    ctx->pc = 0x3ECFBCu;
    SET_GPR_U32(ctx, 31, 0x3ECFC4u);
    ctx->pc = 0x3ECFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECFBCu;
    // 0x3ecfc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ECFBCu, 0x3ECFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECFC4u;
label_3ecfc4:
    // 0x3ecfc4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ecfc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ecfc8:
    // 0x3ecfc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ecfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecfcc:
    // 0x3ecfcc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ecfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ecfd0:
    // 0x3ecfd0: 0xc0ea12a  jal         func_3A84A8
label_3ecfd4:
    if (ctx->pc == 0x3ECFD4u) {
        ctx->pc = 0x3ECFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFD0u;
        // 0x3ecfd4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECFD8u;
        goto label_3ecfd8;
    }
    ctx->pc = 0x3ECFD0u;
    SET_GPR_U32(ctx, 31, 0x3ECFD8u);
    ctx->pc = 0x3ECFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECFD0u;
    // 0x3ecfd4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ECFD0u, 0x3ECFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECFD8u;
label_3ecfd8:
    // 0x3ecfd8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3ecfd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ecfdc:
    // 0x3ecfdc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3ecfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ecfe0:
    // 0x3ecfe0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ecfe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ecfe4:
    // 0x3ecfe4: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3ecfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3ecfe8:
    // 0x3ecfe8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3ecfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3ecfec:
    // 0x3ecfec: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ecfecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ecff0:
    // 0x3ecff0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ecff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ecff4:
    // 0x3ecff4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ecff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ecff8:
    // 0x3ecff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ecff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ecffc:
    // 0x3ecffc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3ecffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3ed000:
    // 0x3ed000: 0x3e00008  jr          $ra
label_3ed004:
    if (ctx->pc == 0x3ED004u) {
        ctx->pc = 0x3ED004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED000u;
        // 0x3ed004: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED008u;
        goto label_fallthrough_0x3ed000;
    }
    ctx->pc = 0x3ED000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED000u;
        // 0x3ed004: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ed000:
    ctx->pc = 0x3ED008u;
}
