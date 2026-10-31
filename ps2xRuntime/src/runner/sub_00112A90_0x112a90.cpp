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

// Function: sub_00112A90
// Address: 0x112a90 - 0x112b10
void sub_00112A90_0x112a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A90_0x112a90");
#endif

    switch (ctx->pc) {
        case 0x112a90u: goto label_112a90;
        case 0x112a94u: goto label_112a94;
        case 0x112a98u: goto label_112a98;
        case 0x112a9cu: goto label_112a9c;
        case 0x112aa0u: goto label_112aa0;
        case 0x112aa4u: goto label_112aa4;
        case 0x112aa8u: goto label_112aa8;
        case 0x112aacu: goto label_112aac;
        case 0x112ab0u: goto label_112ab0;
        case 0x112ab4u: goto label_112ab4;
        case 0x112ab8u: goto label_112ab8;
        case 0x112abcu: goto label_112abc;
        case 0x112ac0u: goto label_112ac0;
        case 0x112ac4u: goto label_112ac4;
        case 0x112ac8u: goto label_112ac8;
        case 0x112accu: goto label_112acc;
        case 0x112ad0u: goto label_112ad0;
        case 0x112ad4u: goto label_112ad4;
        case 0x112ad8u: goto label_112ad8;
        case 0x112adcu: goto label_112adc;
        case 0x112ae0u: goto label_112ae0;
        case 0x112ae4u: goto label_112ae4;
        case 0x112ae8u: goto label_112ae8;
        case 0x112aecu: goto label_112aec;
        case 0x112af0u: goto label_112af0;
        case 0x112af4u: goto label_112af4;
        case 0x112af8u: goto label_112af8;
        case 0x112afcu: goto label_112afc;
        case 0x112b00u: goto label_112b00;
        case 0x112b04u: goto label_112b04;
        case 0x112b08u: goto label_112b08;
        case 0x112b0cu: goto label_112b0c;
        default: break;
    }

    ctx->pc = 0x112a90u;

label_112a90:
    // 0x112a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_112a94:
    // 0x112a94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x112a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_112a98:
    // 0x112a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_112a9c:
    // 0x112a9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112aa0:
    // 0x112aa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x112aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_112aa4:
    // 0x112aa4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x112aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_112aa8:
    // 0x112aa8: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_112aac:
    if (ctx->pc == 0x112AACu) {
        ctx->pc = 0x112AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA8u;
        // 0x112aac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AB0u;
        goto label_112ab0;
    }
    ctx->pc = 0x112AA8u;
    {
        const bool branch_taken_0x112aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112aa8) {
            ctx->pc = 0x112AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112AA8u;
            // 0x112aac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112B00u;
            goto label_112b00;
        }
    }
    ctx->pc = 0x112AB0u;
label_112ab0:
    // 0x112ab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_112ab4:
    // 0x112ab4: 0x0  nop
    ctx->pc = 0x112ab4u;
    // NOP
label_112ab8:
    // 0x112ab8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x112ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_112abc:
    // 0x112abc: 0xc043d5e  jal         func_10F578
label_112ac0:
    if (ctx->pc == 0x112AC0u) {
        ctx->pc = 0x112AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112ABCu;
        // 0x112ac0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AC4u;
        goto label_112ac4;
    }
    ctx->pc = 0x112ABCu;
    SET_GPR_U32(ctx, 31, 0x112AC4u);
    ctx->pc = 0x112AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112ABCu;
    // 0x112ac0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x112ABCu, 0x112AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AC4u;
label_112ac4:
    // 0x112ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_112ac8:
    if (ctx->pc == 0x112AC8u) {
        ctx->pc = 0x112AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AC4u;
        // 0x112ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112ACCu;
        goto label_112acc;
    }
    ctx->pc = 0x112AC4u;
    {
        const bool branch_taken_0x112ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AC4u;
        // 0x112ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ac4) {
            ctx->pc = 0x112AD8u;
            goto label_112ad8;
        }
    }
    ctx->pc = 0x112ACCu;
label_112acc:
    // 0x112acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112ad0:
    // 0x112ad0: 0xc044740  jal         func_111D00
label_112ad4:
    if (ctx->pc == 0x112AD4u) {
        ctx->pc = 0x112AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AD0u;
        // 0x112ad4: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AD8u;
        goto label_112ad8;
    }
    ctx->pc = 0x112AD0u;
    SET_GPR_U32(ctx, 31, 0x112AD8u);
    ctx->pc = 0x112AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AD0u;
    // 0x112ad4: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D00u, 0x112AD0u, 0x112AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AD8u;
label_112ad8:
    // 0x112ad8: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_112adc:
    if (ctx->pc == 0x112ADCu) {
        ctx->pc = 0x112ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AD8u;
        // 0x112adc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AE0u;
        goto label_112ae0;
    }
    ctx->pc = 0x112AD8u;
    {
        const bool branch_taken_0x112ad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112ad8) {
            ctx->pc = 0x112ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112AD8u;
            // 0x112adc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ab8;
        }
    }
    ctx->pc = 0x112AE0u;
label_112ae0:
    // 0x112ae0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x112ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_112ae4:
    // 0x112ae4: 0x8c45bce4  lw          $a1, -0x431C($v0)
    ctx->pc = 0x112ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_112ae8:
    // 0x112ae8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x112ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_112aec:
    // 0x112aec: 0x84640168  lh          $a0, 0x168($v1)
    ctx->pc = 0x112aecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 360)));
label_112af0:
    // 0x112af0: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x112af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
label_112af4:
    // 0x112af4: 0x40f809  jalr        $v0
label_112af8:
    if (ctx->pc == 0x112AF8u) {
        ctx->pc = 0x112AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AF4u;
        // 0x112af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AFCu;
        goto label_112afc;
    }
    ctx->pc = 0x112AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112AFCu);
        ctx->pc = 0x112AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AF4u;
        // 0x112af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112AF4u, 0x112AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112AFCu;
label_112afc:
    // 0x112afc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x112afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_112b00:
    // 0x112b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x112b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_112b04:
    // 0x112b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_112b08:
    // 0x112b08: 0x3e00008  jr          $ra
label_112b0c:
    if (ctx->pc == 0x112B0Cu) {
        ctx->pc = 0x112B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B08u;
        // 0x112b0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B10u;
        goto label_fallthrough_0x112b08;
    }
    ctx->pc = 0x112B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B08u;
        // 0x112b0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x112b08:
    ctx->pc = 0x112B10u;
}
