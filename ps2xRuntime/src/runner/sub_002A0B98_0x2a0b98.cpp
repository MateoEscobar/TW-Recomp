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

// Function: sub_002A0B98
// Address: 0x2a0b98 - 0x2a0c00
void sub_002A0B98_0x2a0b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0B98_0x2a0b98");
#endif

    switch (ctx->pc) {
        case 0x2a0b98u: goto label_2a0b98;
        case 0x2a0b9cu: goto label_2a0b9c;
        case 0x2a0ba0u: goto label_2a0ba0;
        case 0x2a0ba4u: goto label_2a0ba4;
        case 0x2a0ba8u: goto label_2a0ba8;
        case 0x2a0bacu: goto label_2a0bac;
        case 0x2a0bb0u: goto label_2a0bb0;
        case 0x2a0bb4u: goto label_2a0bb4;
        case 0x2a0bb8u: goto label_2a0bb8;
        case 0x2a0bbcu: goto label_2a0bbc;
        case 0x2a0bc0u: goto label_2a0bc0;
        case 0x2a0bc4u: goto label_2a0bc4;
        case 0x2a0bc8u: goto label_2a0bc8;
        case 0x2a0bccu: goto label_2a0bcc;
        case 0x2a0bd0u: goto label_2a0bd0;
        case 0x2a0bd4u: goto label_2a0bd4;
        case 0x2a0bd8u: goto label_2a0bd8;
        case 0x2a0bdcu: goto label_2a0bdc;
        case 0x2a0be0u: goto label_2a0be0;
        case 0x2a0be4u: goto label_2a0be4;
        case 0x2a0be8u: goto label_2a0be8;
        case 0x2a0becu: goto label_2a0bec;
        case 0x2a0bf0u: goto label_2a0bf0;
        case 0x2a0bf4u: goto label_2a0bf4;
        case 0x2a0bf8u: goto label_2a0bf8;
        case 0x2a0bfcu: goto label_2a0bfc;
        default: break;
    }

    ctx->pc = 0x2a0b98u;

label_2a0b98:
    // 0x2a0b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a0b9c:
    // 0x2a0b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a0b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a0ba0:
    // 0x2a0ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a0ba4:
    // 0x2a0ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ba8:
    // 0x2a0ba8: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2a0ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2a0bac:
    // 0x2a0bac: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2a0bb0:
    if (ctx->pc == 0x2A0BB0u) {
        ctx->pc = 0x2A0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BACu;
        // 0x2a0bb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0BB4u;
        goto label_2a0bb4;
    }
    ctx->pc = 0x2A0BACu;
    {
        const bool branch_taken_0x2a0bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0bac) {
            ctx->pc = 0x2A0BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0BACu;
            // 0x2a0bb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0BECu;
            goto label_2a0bec;
        }
    }
    ctx->pc = 0x2A0BB4u;
label_2a0bb4:
    // 0x2a0bb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a0bb8:
    // 0x2a0bb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a0bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0bbc:
    // 0x2a0bbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0bc0:
    // 0x2a0bc0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0bc4:
    // 0x2a0bc4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0bc8:
    // 0x2a0bc8: 0x40f809  jalr        $v0
label_2a0bcc:
    if (ctx->pc == 0x2A0BCCu) {
        ctx->pc = 0x2A0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BC8u;
        // 0x2a0bcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0BD0u;
        goto label_2a0bd0;
    }
    ctx->pc = 0x2A0BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0BD0u);
        ctx->pc = 0x2A0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BC8u;
        // 0x2a0bcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0BC8u, 0x2A0BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0BD0u;
label_2a0bd0:
    // 0x2a0bd0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2a0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2a0bd4:
    // 0x2a0bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0bd8:
    // 0x2a0bd8: 0xc0ab742  jal         func_2ADD08
label_2a0bdc:
    if (ctx->pc == 0x2A0BDCu) {
        ctx->pc = 0x2A0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BD8u;
        // 0x2a0bdc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0BE0u;
        goto label_2a0be0;
    }
    ctx->pc = 0x2A0BD8u;
    SET_GPR_U32(ctx, 31, 0x2A0BE0u);
    ctx->pc = 0x2A0BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BD8u;
    // 0x2a0bdc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x2A0BD8u, 0x2A0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BE0u;
label_2a0be0:
    // 0x2a0be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0be4:
    // 0x2a0be4: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2a0be4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0be8:
    // 0x2a0be8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a0be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0bec:
    // 0x2a0bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0bf0:
    // 0x2a0bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0bf4:
    // 0x2a0bf4: 0x3e00008  jr          $ra
label_2a0bf8:
    if (ctx->pc == 0x2A0BF8u) {
        ctx->pc = 0x2A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BF4u;
        // 0x2a0bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0BFCu;
        goto label_2a0bfc;
    }
    ctx->pc = 0x2A0BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0BF4u;
        // 0x2a0bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0BFCu;
label_2a0bfc:
    // 0x2a0bfc: 0x0  nop
    ctx->pc = 0x2a0bfcu;
    // NOP
    ctx->pc = 0x2a0c00u;
}
