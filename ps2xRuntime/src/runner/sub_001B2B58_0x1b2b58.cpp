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

// Function: sub_001B2B58
// Address: 0x1b2b58 - 0x1b2bf0
void sub_001B2B58_0x1b2b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2B58_0x1b2b58");
#endif

    switch (ctx->pc) {
        case 0x1b2b7cu: goto label_1b2b7c;
        case 0x1b2b8cu: goto label_1b2b8c;
        case 0x1b2ba8u: goto label_1b2ba8;
        case 0x1b2bb4u: goto label_1b2bb4;
        case 0x1b2bc4u: goto label_1b2bc4;
        default: break;
    }

    ctx->pc = 0x1b2b58u;

    // 0x1b2b58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b2b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2b60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b2b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b2b68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b2b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b2b6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2b74: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1B2B74u;
    SET_GPR_U32(ctx, 31, 0x1B2B7Cu);
    ctx->pc = 0x1B2B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B74u;
    // 0x1b2b78: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1B2B74u, 0x1B2B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B7Cu;
label_1b2b7c:
    // 0x1b2b7c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B2B7Cu;
    {
        const bool branch_taken_0x1b2b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B7Cu;
        // 0x1b2b80: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b7c) {
            ctx->pc = 0x1B2BDCu;
            goto label_1b2bdc;
        }
    }
    ctx->pc = 0x1B2B84u;
    // 0x1b2b84: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1B2B84u;
    SET_GPR_U32(ctx, 31, 0x1B2B8Cu);
    ctx->pc = 0x1B2B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B84u;
    // 0x1b2b88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1B2B84u, 0x1B2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B8Cu;
label_1b2b8c:
    // 0x1b2b8c: 0x9042006c  lbu         $v0, 0x6C($v0)
    ctx->pc = 0x1b2b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1b2b90: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B2B90u;
    {
        const bool branch_taken_0x1b2b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b90) {
            ctx->pc = 0x1B2B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2B90u;
            // 0x1b2b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2B98u;
            goto label_1b2b98;
        }
    }
    ctx->pc = 0x1B2B98u;
label_1b2b98:
    // 0x1b2b98: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1b2b98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b9c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2B9Cu;
    {
        const bool branch_taken_0x1b2b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B9Cu;
        // 0x1b2ba0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b9c) {
            ctx->pc = 0x1B2BD8u;
            goto label_1b2bd8;
        }
    }
    ctx->pc = 0x1B2BA4u;
    // 0x1b2ba4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2ba8:
    // 0x1b2ba8: 0x264415d0  addiu       $a0, $s2, 0x15D0
    ctx->pc = 0x1b2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    // 0x1b2bac: 0xc071442  jal         func_1C5108
    ctx->pc = 0x1B2BACu;
    SET_GPR_U32(ctx, 31, 0x1B2BB4u);
    ctx->pc = 0x1B2BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BACu;
    // 0x1b2bb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5108u, 0x1B2BACu, 0x1B2BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BB4u;
label_1b2bb4:
    // 0x1b2bb4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2bb8: 0x26443f10  addiu       $a0, $s2, 0x3F10
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    // 0x1b2bbc: 0xc071442  jal         func_1C5108
    ctx->pc = 0x1B2BBCu;
    SET_GPR_U32(ctx, 31, 0x1B2BC4u);
    ctx->pc = 0x1B2BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BBCu;
    // 0x1b2bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5108u, 0x1B2BBCu, 0x1B2BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BC4u;
label_1b2bc4:
    // 0x1b2bc4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b2bc8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1b2bc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2bcc: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1b2bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b2bd0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B2BD0u;
    {
        const bool branch_taken_0x1b2bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BD0u;
        // 0x1b2bd4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bd0) {
            ctx->pc = 0x1B2BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2ba8;
        }
    }
    ctx->pc = 0x1B2BD8u;
label_1b2bd8:
    // 0x1b2bd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b2bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2bdc:
    // 0x1b2bdc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b2bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b2be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BE8u;
        // 0x1b2bec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2BF0u;
}
