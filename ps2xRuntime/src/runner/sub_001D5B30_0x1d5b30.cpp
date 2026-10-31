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

// Function: sub_001D5B30
// Address: 0x1d5b30 - 0x1d5bc8
void sub_001D5B30_0x1d5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5B30_0x1d5b30");
#endif

    switch (ctx->pc) {
        case 0x1d5b30u: goto label_1d5b30;
        case 0x1d5b34u: goto label_1d5b34;
        case 0x1d5b38u: goto label_1d5b38;
        case 0x1d5b3cu: goto label_1d5b3c;
        case 0x1d5b40u: goto label_1d5b40;
        case 0x1d5b44u: goto label_1d5b44;
        case 0x1d5b48u: goto label_1d5b48;
        case 0x1d5b4cu: goto label_1d5b4c;
        case 0x1d5b50u: goto label_1d5b50;
        case 0x1d5b54u: goto label_1d5b54;
        case 0x1d5b58u: goto label_1d5b58;
        case 0x1d5b5cu: goto label_1d5b5c;
        case 0x1d5b60u: goto label_1d5b60;
        case 0x1d5b64u: goto label_1d5b64;
        case 0x1d5b68u: goto label_1d5b68;
        case 0x1d5b6cu: goto label_1d5b6c;
        case 0x1d5b70u: goto label_1d5b70;
        case 0x1d5b74u: goto label_1d5b74;
        case 0x1d5b78u: goto label_1d5b78;
        case 0x1d5b7cu: goto label_1d5b7c;
        case 0x1d5b80u: goto label_1d5b80;
        case 0x1d5b84u: goto label_1d5b84;
        case 0x1d5b88u: goto label_1d5b88;
        case 0x1d5b8cu: goto label_1d5b8c;
        case 0x1d5b90u: goto label_1d5b90;
        case 0x1d5b94u: goto label_1d5b94;
        case 0x1d5b98u: goto label_1d5b98;
        case 0x1d5b9cu: goto label_1d5b9c;
        case 0x1d5ba0u: goto label_1d5ba0;
        case 0x1d5ba4u: goto label_1d5ba4;
        case 0x1d5ba8u: goto label_1d5ba8;
        case 0x1d5bacu: goto label_1d5bac;
        case 0x1d5bb0u: goto label_1d5bb0;
        case 0x1d5bb4u: goto label_1d5bb4;
        case 0x1d5bb8u: goto label_1d5bb8;
        case 0x1d5bbcu: goto label_1d5bbc;
        case 0x1d5bc0u: goto label_1d5bc0;
        case 0x1d5bc4u: goto label_1d5bc4;
        default: break;
    }

    ctx->pc = 0x1d5b30u;

label_1d5b30:
    // 0x1d5b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d5b34:
    // 0x1d5b34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d5b38:
    // 0x1d5b38: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d5b3c:
    // 0x1d5b3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d5b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b40:
    // 0x1d5b40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d5b44:
    // 0x1d5b44: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1d5b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1d5b48:
    // 0x1d5b48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d5b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d5b4c:
    // 0x1d5b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b50:
    // 0x1d5b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d5b54:
    // 0x1d5b54: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1d5b54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1d5b58:
    // 0x1d5b58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d5b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5b5c:
    // 0x1d5b5c: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_1d5b60:
    if (ctx->pc == 0x1D5B60u) {
        ctx->pc = 0x1D5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B5Cu;
        // 0x1d5b60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B64u;
        goto label_1d5b64;
    }
    ctx->pc = 0x1D5B5Cu;
    {
        const bool branch_taken_0x1d5b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b5c) {
            ctx->pc = 0x1D5B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5B5Cu;
            // 0x1d5b60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5B90u;
            goto label_1d5b90;
        }
    }
    ctx->pc = 0x1D5B64u;
label_1d5b64:
    // 0x1d5b64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d5b68:
    // 0x1d5b68: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1d5b6c:
    // 0x1d5b6c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1d5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1d5b70:
    // 0x1d5b70: 0x60f809  jalr        $v1
label_1d5b74:
    if (ctx->pc == 0x1D5B74u) {
        ctx->pc = 0x1D5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B70u;
        // 0x1d5b74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B78u;
        goto label_1d5b78;
    }
    ctx->pc = 0x1D5B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D5B78u);
        ctx->pc = 0x1D5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B70u;
        // 0x1d5b74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B70u, 0x1D5B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5B78u;
label_1d5b78:
    // 0x1d5b78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5b7c:
    // 0x1d5b7c: 0x26656038  addiu       $a1, $s3, 0x6038
    ctx->pc = 0x1d5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24632));
label_1d5b80:
    // 0x1d5b80: 0xc13a14a  jal         func_4E8528
label_1d5b84:
    if (ctx->pc == 0x1D5B84u) {
        ctx->pc = 0x1D5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B80u;
        // 0x1d5b84: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B88u;
        goto label_1d5b88;
    }
    ctx->pc = 0x1D5B80u;
    SET_GPR_U32(ctx, 31, 0x1D5B88u);
    ctx->pc = 0x1D5B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B80u;
    // 0x1d5b84: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8528u, 0x1D5B80u, 0x1D5B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B88u;
label_1d5b88:
    // 0x1d5b88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d5b8c:
    // 0x1d5b8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d5b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d5b90:
    // 0x1d5b90: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1d5b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1d5b94:
    // 0x1d5b94: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1d5b98:
    if (ctx->pc == 0x1D5B98u) {
        ctx->pc = 0x1D5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B94u;
        // 0x1d5b98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B9Cu;
        goto label_1d5b9c;
    }
    ctx->pc = 0x1D5B94u;
    {
        const bool branch_taken_0x1d5b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B94u;
        // 0x1d5b98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b94) {
            ctx->pc = 0x1D5B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b58;
        }
    }
    ctx->pc = 0x1D5B9Cu;
label_1d5b9c:
    // 0x1d5b9c: 0xc06e4a4  jal         func_1B9290
label_1d5ba0:
    if (ctx->pc == 0x1D5BA0u) {
        ctx->pc = 0x1D5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B9Cu;
        // 0x1d5ba0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5BA4u;
        goto label_1d5ba4;
    }
    ctx->pc = 0x1D5B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5BA4u);
    ctx->pc = 0x1D5BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B9Cu;
    // 0x1d5ba0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1D5B9Cu, 0x1D5BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BA4u;
label_1d5ba4:
    // 0x1d5ba4: 0xc075a42  jal         func_1D6908
label_1d5ba8:
    if (ctx->pc == 0x1D5BA8u) {
        ctx->pc = 0x1D5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BA4u;
        // 0x1d5ba8: 0x26440220  addiu       $a0, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5BACu;
        goto label_1d5bac;
    }
    ctx->pc = 0x1D5BA4u;
    SET_GPR_U32(ctx, 31, 0x1D5BACu);
    ctx->pc = 0x1D5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BA4u;
    // 0x1d5ba8: 0x26440220  addiu       $a0, $s2, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6908u, 0x1D5BA4u, 0x1D5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BACu;
label_1d5bac:
    // 0x1d5bac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d5bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d5bb0:
    // 0x1d5bb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d5bb4:
    // 0x1d5bb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5bb8:
    // 0x1d5bb8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d5bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5bbc:
    // 0x1d5bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5bc0:
    // 0x1d5bc0: 0x3e00008  jr          $ra
label_1d5bc4:
    if (ctx->pc == 0x1D5BC4u) {
        ctx->pc = 0x1D5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BC0u;
        // 0x1d5bc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5BC8u;
        goto label_fallthrough_0x1d5bc0;
    }
    ctx->pc = 0x1D5BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BC0u;
        // 0x1d5bc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d5bc0:
    ctx->pc = 0x1D5BC8u;
}
