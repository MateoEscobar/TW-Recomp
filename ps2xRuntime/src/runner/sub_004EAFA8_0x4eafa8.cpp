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

// Function: sub_004EAFA8
// Address: 0x4eafa8 - 0x4eb040
void sub_004EAFA8_0x4eafa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAFA8_0x4eafa8");
#endif

    switch (ctx->pc) {
        case 0x4eafa8u: goto label_4eafa8;
        case 0x4eafacu: goto label_4eafac;
        case 0x4eafb0u: goto label_4eafb0;
        case 0x4eafb4u: goto label_4eafb4;
        case 0x4eafb8u: goto label_4eafb8;
        case 0x4eafbcu: goto label_4eafbc;
        case 0x4eafc0u: goto label_4eafc0;
        case 0x4eafc4u: goto label_4eafc4;
        case 0x4eafc8u: goto label_4eafc8;
        case 0x4eafccu: goto label_4eafcc;
        case 0x4eafd0u: goto label_4eafd0;
        case 0x4eafd4u: goto label_4eafd4;
        case 0x4eafd8u: goto label_4eafd8;
        case 0x4eafdcu: goto label_4eafdc;
        case 0x4eafe0u: goto label_4eafe0;
        case 0x4eafe4u: goto label_4eafe4;
        case 0x4eafe8u: goto label_4eafe8;
        case 0x4eafecu: goto label_4eafec;
        case 0x4eaff0u: goto label_4eaff0;
        case 0x4eaff4u: goto label_4eaff4;
        case 0x4eaff8u: goto label_4eaff8;
        case 0x4eaffcu: goto label_4eaffc;
        case 0x4eb000u: goto label_4eb000;
        case 0x4eb004u: goto label_4eb004;
        case 0x4eb008u: goto label_4eb008;
        case 0x4eb00cu: goto label_4eb00c;
        case 0x4eb010u: goto label_4eb010;
        case 0x4eb014u: goto label_4eb014;
        case 0x4eb018u: goto label_4eb018;
        case 0x4eb01cu: goto label_4eb01c;
        case 0x4eb020u: goto label_4eb020;
        case 0x4eb024u: goto label_4eb024;
        case 0x4eb028u: goto label_4eb028;
        case 0x4eb02cu: goto label_4eb02c;
        case 0x4eb030u: goto label_4eb030;
        case 0x4eb034u: goto label_4eb034;
        case 0x4eb038u: goto label_4eb038;
        case 0x4eb03cu: goto label_4eb03c;
        default: break;
    }

    ctx->pc = 0x4eafa8u;

label_4eafa8:
    // 0x4eafa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eafa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eafac:
    // 0x4eafac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eafacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eafb0:
    // 0x4eafb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eafb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eafb4:
    // 0x4eafb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eafb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eafb8:
    // 0x4eafb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eafb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eafbc:
    // 0x4eafbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eafbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eafc0:
    // 0x4eafc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eafc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eafc4:
    // 0x4eafc4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4eafc8:
    if (ctx->pc == 0x4EAFC8u) {
        ctx->pc = 0x4EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFC4u;
        // 0x4eafc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAFCCu;
        goto label_4eafcc;
    }
    ctx->pc = 0x4EAFC4u;
    {
        const bool branch_taken_0x4eafc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFC4u;
        // 0x4eafc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eafc4) {
            ctx->pc = 0x4EB024u;
            goto label_4eb024;
        }
    }
    ctx->pc = 0x4EAFCCu;
label_4eafcc:
    // 0x4eafcc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4eafccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eafd0:
    // 0x4eafd0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4eafd4:
    if (ctx->pc == 0x4EAFD4u) {
        ctx->pc = 0x4EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFD0u;
        // 0x4eafd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAFD8u;
        goto label_4eafd8;
    }
    ctx->pc = 0x4EAFD0u;
    {
        const bool branch_taken_0x4eafd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFD0u;
        // 0x4eafd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eafd0) {
            ctx->pc = 0x4EAFFCu;
            goto label_4eaffc;
        }
    }
    ctx->pc = 0x4EAFD8u;
label_4eafd8:
    // 0x4eafd8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4eafd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4eafdc:
    // 0x4eafdc: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4eafdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4eafe0:
    // 0x4eafe0: 0x24c67848  addiu       $a2, $a2, 0x7848
    ctx->pc = 0x4eafe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30792));
label_4eafe4:
    // 0x4eafe4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4eafe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4eafe8:
    // 0x4eafe8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eafec:
    // 0x4eafec: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eafecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eaff0:
    // 0x4eaff0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eaff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eaff4:
    // 0x4eaff4: 0x60f809  jalr        $v1
label_4eaff8:
    if (ctx->pc == 0x4EAFF8u) {
        ctx->pc = 0x4EAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFF4u;
        // 0x4eaff8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAFFCu;
        goto label_4eaffc;
    }
    ctx->pc = 0x4EAFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAFFCu);
        ctx->pc = 0x4EAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFF4u;
        // 0x4eaff8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAFF4u, 0x4EAFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAFFCu;
label_4eaffc:
    // 0x4eaffc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eaffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eb000:
    // 0x4eb000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eb000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb004:
    // 0x4eb004: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eb004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eb008:
    // 0x4eb008: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eb008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eb00c:
    // 0x4eb00c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eb00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eb010:
    // 0x4eb010: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eb010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eb014:
    // 0x4eb014: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eb014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eb018:
    // 0x4eb018: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eb018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eb01c:
    // 0x4eb01c: 0x60f809  jalr        $v1
label_4eb020:
    if (ctx->pc == 0x4EB020u) {
        ctx->pc = 0x4EB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB01Cu;
        // 0x4eb020: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB024u;
        goto label_4eb024;
    }
    ctx->pc = 0x4EB01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EB024u);
        ctx->pc = 0x4EB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB01Cu;
        // 0x4eb020: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB01Cu, 0x4EB024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EB024u;
label_4eb024:
    // 0x4eb024: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eb024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eb028:
    // 0x4eb028: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eb028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eb02c:
    // 0x4eb02c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eb02cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eb030:
    // 0x4eb030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eb034:
    // 0x4eb034: 0x3e00008  jr          $ra
label_4eb038:
    if (ctx->pc == 0x4EB038u) {
        ctx->pc = 0x4EB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB034u;
        // 0x4eb038: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB03Cu;
        goto label_4eb03c;
    }
    ctx->pc = 0x4EB034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB034u;
        // 0x4eb038: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB03Cu;
label_4eb03c:
    // 0x4eb03c: 0x0  nop
    ctx->pc = 0x4eb03cu;
    // NOP
    ctx->pc = 0x4eb040u;
}
