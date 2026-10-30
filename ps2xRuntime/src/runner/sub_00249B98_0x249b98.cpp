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

// Function: sub_00249B98
// Address: 0x249b98 - 0x249bf8
void sub_00249B98_0x249b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249B98_0x249b98");
#endif

    switch (ctx->pc) {
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        case 0x249be0u: goto label_249be0;
        case 0x249be4u: goto label_249be4;
        case 0x249be8u: goto label_249be8;
        case 0x249becu: goto label_249bec;
        case 0x249bf0u: goto label_249bf0;
        case 0x249bf4u: goto label_249bf4;
        default: break;
    }

    ctx->pc = 0x249b98u;

label_249b98:
    // 0x249b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_249b9c:
    // 0x249b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x249b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_249ba0:
    // 0x249ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_249ba4:
    // 0x249ba4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x249ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249ba8:
    // 0x249ba8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x249ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_249bac:
    // 0x249bac: 0x0  nop
    ctx->pc = 0x249bacu;
    // NOP
label_249bb0:
    // 0x249bb0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x249bb0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_249bb4:
    // 0x249bb4: 0xc0e402c  jal         func_3900B0
label_249bb8:
    if (ctx->pc == 0x249BB8u) {
        ctx->pc = 0x249BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BB4u;
        // 0x249bb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BBCu;
        goto label_249bbc;
    }
    ctx->pc = 0x249BB4u;
    SET_GPR_U32(ctx, 31, 0x249BBCu);
    ctx->pc = 0x249BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BB4u;
    // 0x249bb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x249BB4u, 0x249BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BBCu;
label_249bbc:
    // 0x249bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x249bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249bc0:
    // 0x249bc0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_249bc4:
    if (ctx->pc == 0x249BC4u) {
        ctx->pc = 0x249BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BC0u;
        // 0x249bc4: 0x2a02003c  slti        $v0, $s0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BC8u;
        goto label_249bc8;
    }
    ctx->pc = 0x249BC0u;
    {
        const bool branch_taken_0x249bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x249BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BC0u;
        // 0x249bc4: 0x2a02003c  slti        $v0, $s0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249bc0) {
            ctx->pc = 0x249BE0u;
            goto label_249be0;
        }
    }
    ctx->pc = 0x249BC8u;
label_249bc8:
    // 0x249bc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x249bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_249bcc:
    // 0x249bcc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x249bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_249bd0:
    // 0x249bd0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x249bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_249bd4:
    // 0x249bd4: 0x60f809  jalr        $v1
label_249bd8:
    if (ctx->pc == 0x249BD8u) {
        ctx->pc = 0x249BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BD4u;
        // 0x249bd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BDCu;
        goto label_249bdc;
    }
    ctx->pc = 0x249BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249BDCu);
        ctx->pc = 0x249BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BD4u;
        // 0x249bd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249BD4u, 0x249BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249BDCu;
label_249bdc:
    // 0x249bdc: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x249bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
label_249be0:
    // 0x249be0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_249be4:
    if (ctx->pc == 0x249BE4u) {
        ctx->pc = 0x249BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BE0u;
        // 0x249be4: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BE8u;
        goto label_249be8;
    }
    ctx->pc = 0x249BE0u;
    {
        const bool branch_taken_0x249be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249be0) {
            ctx->pc = 0x249BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249BE0u;
            // 0x249be4: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249bb0;
        }
    }
    ctx->pc = 0x249BE8u;
label_249be8:
    // 0x249be8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x249be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_249bec:
    // 0x249bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249bf0:
    // 0x249bf0: 0x3e00008  jr          $ra
label_249bf4:
    if (ctx->pc == 0x249BF4u) {
        ctx->pc = 0x249BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BF0u;
        // 0x249bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BF8u;
        goto label_fallthrough_0x249bf0;
    }
    ctx->pc = 0x249BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BF0u;
        // 0x249bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249bf0:
    ctx->pc = 0x249BF8u;
}
