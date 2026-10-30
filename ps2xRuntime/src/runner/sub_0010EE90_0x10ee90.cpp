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

// Function: sub_0010EE90
// Address: 0x10ee90 - 0x10ef18
void sub_0010EE90_0x10ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EE90_0x10ee90");
#endif

    switch (ctx->pc) {
        case 0x10ee90u: goto label_10ee90;
        case 0x10ee94u: goto label_10ee94;
        case 0x10ee98u: goto label_10ee98;
        case 0x10ee9cu: goto label_10ee9c;
        case 0x10eea0u: goto label_10eea0;
        case 0x10eea4u: goto label_10eea4;
        case 0x10eea8u: goto label_10eea8;
        case 0x10eeacu: goto label_10eeac;
        case 0x10eeb0u: goto label_10eeb0;
        case 0x10eeb4u: goto label_10eeb4;
        case 0x10eeb8u: goto label_10eeb8;
        case 0x10eebcu: goto label_10eebc;
        case 0x10eec0u: goto label_10eec0;
        case 0x10eec4u: goto label_10eec4;
        case 0x10eec8u: goto label_10eec8;
        case 0x10eeccu: goto label_10eecc;
        case 0x10eed0u: goto label_10eed0;
        case 0x10eed4u: goto label_10eed4;
        case 0x10eed8u: goto label_10eed8;
        case 0x10eedcu: goto label_10eedc;
        case 0x10eee0u: goto label_10eee0;
        case 0x10eee4u: goto label_10eee4;
        case 0x10eee8u: goto label_10eee8;
        case 0x10eeecu: goto label_10eeec;
        case 0x10eef0u: goto label_10eef0;
        case 0x10eef4u: goto label_10eef4;
        case 0x10eef8u: goto label_10eef8;
        case 0x10eefcu: goto label_10eefc;
        case 0x10ef00u: goto label_10ef00;
        case 0x10ef04u: goto label_10ef04;
        case 0x10ef08u: goto label_10ef08;
        case 0x10ef0cu: goto label_10ef0c;
        case 0x10ef10u: goto label_10ef10;
        case 0x10ef14u: goto label_10ef14;
        default: break;
    }

    ctx->pc = 0x10ee90u;

label_10ee90:
    // 0x10ee90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10ee94:
    // 0x10ee94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_10ee98:
    // 0x10ee98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_10ee9c:
    // 0x10ee9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ee9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10eea0:
    // 0x10eea0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_10eea4:
    // 0x10eea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10eea8:
    // 0x10eea8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10eeac:
    // 0x10eeac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_10eeb0:
    if (ctx->pc == 0x10EEB0u) {
        ctx->pc = 0x10EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEACu;
        // 0x10eeb0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEB4u;
        goto label_10eeb4;
    }
    ctx->pc = 0x10EEACu;
    {
        const bool branch_taken_0x10eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEACu;
        // 0x10eeb0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eeac) {
            ctx->pc = 0x10EF04u;
            goto label_10ef04;
        }
    }
    ctx->pc = 0x10EEB4u;
label_10eeb4:
    // 0x10eeb4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10eeb8:
    // 0x10eeb8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10eebc:
    if (ctx->pc == 0x10EEBCu) {
        ctx->pc = 0x10EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEB8u;
        // 0x10eebc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEC0u;
        goto label_10eec0;
    }
    ctx->pc = 0x10EEB8u;
    {
        const bool branch_taken_0x10eeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEB8u;
        // 0x10eebc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eeb8) {
            ctx->pc = 0x10EEFCu;
            goto label_10eefc;
        }
    }
    ctx->pc = 0x10EEC0u;
label_10eec0:
    // 0x10eec0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x10eec0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_10eec4:
    // 0x10eec4: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x10eec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10eec8:
    // 0x10eec8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_10eecc:
    // 0x10eecc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10eed0:
    // 0x10eed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10eed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10eed4:
    // 0x10eed4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10eed8:
    // 0x10eed8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_10eedc:
    // 0x10eedc: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x10eedcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_10eee0:
    // 0x10eee0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x10eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_10eee4:
    // 0x10eee4: 0x60f809  jalr        $v1
label_10eee8:
    if (ctx->pc == 0x10EEE8u) {
        ctx->pc = 0x10EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEE4u;
        // 0x10eee8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEECu;
        goto label_10eeec;
    }
    ctx->pc = 0x10EEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EEECu);
        ctx->pc = 0x10EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEE4u;
        // 0x10eee8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EEE4u, 0x10EEECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EEECu;
label_10eeec:
    // 0x10eeec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10eef0:
    // 0x10eef0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10eef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10eef4:
    // 0x10eef4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_10eef8:
    if (ctx->pc == 0x10EEF8u) {
        ctx->pc = 0x10EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF4u;
        // 0x10eef8: 0x8e46bce4  lw          $a2, -0x431C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEFCu;
        goto label_10eefc;
    }
    ctx->pc = 0x10EEF4u;
    {
        const bool branch_taken_0x10eef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF4u;
        // 0x10eef8: 0x8e46bce4  lw          $a2, -0x431C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eef4) {
            ctx->pc = 0x10EEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eec8;
        }
    }
    ctx->pc = 0x10EEFCu;
label_10eefc:
    // 0x10eefc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_10ef00:
    // 0x10ef00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10ef00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10ef04:
    // 0x10ef04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10ef04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10ef08:
    // 0x10ef08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10ef08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ef0c:
    // 0x10ef0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ef0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ef10:
    // 0x10ef10: 0x3e00008  jr          $ra
label_10ef14:
    if (ctx->pc == 0x10EF14u) {
        ctx->pc = 0x10EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF10u;
        // 0x10ef14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF18u;
        goto label_fallthrough_0x10ef10;
    }
    ctx->pc = 0x10EF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF10u;
        // 0x10ef14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ef10:
    ctx->pc = 0x10EF18u;
}
