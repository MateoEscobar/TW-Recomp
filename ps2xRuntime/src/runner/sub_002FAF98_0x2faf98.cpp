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

// Function: sub_002FAF98
// Address: 0x2faf98 - 0x2fb000
void sub_002FAF98_0x2faf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAF98_0x2faf98");
#endif

    switch (ctx->pc) {
        case 0x2faf98u: goto label_2faf98;
        case 0x2faf9cu: goto label_2faf9c;
        case 0x2fafa0u: goto label_2fafa0;
        case 0x2fafa4u: goto label_2fafa4;
        case 0x2fafa8u: goto label_2fafa8;
        case 0x2fafacu: goto label_2fafac;
        case 0x2fafb0u: goto label_2fafb0;
        case 0x2fafb4u: goto label_2fafb4;
        case 0x2fafb8u: goto label_2fafb8;
        case 0x2fafbcu: goto label_2fafbc;
        case 0x2fafc0u: goto label_2fafc0;
        case 0x2fafc4u: goto label_2fafc4;
        case 0x2fafc8u: goto label_2fafc8;
        case 0x2fafccu: goto label_2fafcc;
        case 0x2fafd0u: goto label_2fafd0;
        case 0x2fafd4u: goto label_2fafd4;
        case 0x2fafd8u: goto label_2fafd8;
        case 0x2fafdcu: goto label_2fafdc;
        case 0x2fafe0u: goto label_2fafe0;
        case 0x2fafe4u: goto label_2fafe4;
        case 0x2fafe8u: goto label_2fafe8;
        case 0x2fafecu: goto label_2fafec;
        case 0x2faff0u: goto label_2faff0;
        case 0x2faff4u: goto label_2faff4;
        case 0x2faff8u: goto label_2faff8;
        case 0x2faffcu: goto label_2faffc;
        default: break;
    }

    ctx->pc = 0x2faf98u;

label_2faf98:
    // 0x2faf98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2faf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2faf9c:
    // 0x2faf9c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2faf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2fafa0:
    // 0x2fafa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fafa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2fafa4:
    // 0x2fafa4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2fafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2fafa8:
    // 0x2fafa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fafa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fafac:
    // 0x2fafac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fafacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fafb0:
    // 0x2fafb0: 0x24422ea0  addiu       $v0, $v0, 0x2EA0
    ctx->pc = 0x2fafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11936));
label_2fafb4:
    // 0x2fafb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fafb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2fafb8:
    // 0x2fafb8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2fafbc:
    // 0x2fafbc: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x2fafbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
label_2fafc0:
    // 0x2fafc0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2fafc4:
    // 0x2fafc4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2fafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2fafc8:
    // 0x2fafc8: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2fafc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_2fafcc:
    // 0x2fafcc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_2fafd0:
    if (ctx->pc == 0x2FAFD0u) {
        ctx->pc = 0x2FAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFCCu;
        // 0x2fafd0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFD4u;
        goto label_2fafd4;
    }
    ctx->pc = 0x2FAFCCu;
    {
        const bool branch_taken_0x2fafcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFCCu;
        // 0x2fafd0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafcc) {
            ctx->pc = 0x2FAFECu;
            goto label_2fafec;
        }
    }
    ctx->pc = 0x2FAFD4u;
label_2fafd4:
    // 0x2fafd4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fafd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fafd8:
    // 0x2fafd8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2fafd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2fafdc:
    // 0x2fafdc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2fafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fafe0:
    // 0x2fafe0: 0x40f809  jalr        $v0
label_2fafe4:
    if (ctx->pc == 0x2FAFE4u) {
        ctx->pc = 0x2FAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFE0u;
        // 0x2fafe4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFE8u;
        goto label_2fafe8;
    }
    ctx->pc = 0x2FAFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FAFE8u);
        ctx->pc = 0x2FAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFE0u;
        // 0x2fafe4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAFE0u, 0x2FAFE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FAFE8u;
label_2fafe8:
    // 0x2fafe8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2fafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2fafec:
    // 0x2fafec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fafecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2faff0:
    // 0x2faff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2faff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2faff4:
    // 0x2faff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2faff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2faff8:
    // 0x2faff8: 0x3e00008  jr          $ra
label_2faffc:
    if (ctx->pc == 0x2FAFFCu) {
        ctx->pc = 0x2FAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFF8u;
        // 0x2faffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB000u;
        goto label_fallthrough_0x2faff8;
    }
    ctx->pc = 0x2FAFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFF8u;
        // 0x2faffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2faff8:
    ctx->pc = 0x2FB000u;
}
