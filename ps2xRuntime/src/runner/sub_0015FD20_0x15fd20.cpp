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

// Function: sub_0015FD20
// Address: 0x15fd20 - 0x15fde0
void sub_0015FD20_0x15fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FD20_0x15fd20");
#endif

    switch (ctx->pc) {
        case 0x15fd20u: goto label_15fd20;
        case 0x15fd24u: goto label_15fd24;
        case 0x15fd28u: goto label_15fd28;
        case 0x15fd2cu: goto label_15fd2c;
        case 0x15fd30u: goto label_15fd30;
        case 0x15fd34u: goto label_15fd34;
        case 0x15fd38u: goto label_15fd38;
        case 0x15fd3cu: goto label_15fd3c;
        case 0x15fd40u: goto label_15fd40;
        case 0x15fd44u: goto label_15fd44;
        case 0x15fd48u: goto label_15fd48;
        case 0x15fd4cu: goto label_15fd4c;
        case 0x15fd50u: goto label_15fd50;
        case 0x15fd54u: goto label_15fd54;
        case 0x15fd58u: goto label_15fd58;
        case 0x15fd5cu: goto label_15fd5c;
        case 0x15fd60u: goto label_15fd60;
        case 0x15fd64u: goto label_15fd64;
        case 0x15fd68u: goto label_15fd68;
        case 0x15fd6cu: goto label_15fd6c;
        case 0x15fd70u: goto label_15fd70;
        case 0x15fd74u: goto label_15fd74;
        case 0x15fd78u: goto label_15fd78;
        case 0x15fd7cu: goto label_15fd7c;
        case 0x15fd80u: goto label_15fd80;
        case 0x15fd84u: goto label_15fd84;
        case 0x15fd88u: goto label_15fd88;
        case 0x15fd8cu: goto label_15fd8c;
        case 0x15fd90u: goto label_15fd90;
        case 0x15fd94u: goto label_15fd94;
        case 0x15fd98u: goto label_15fd98;
        case 0x15fd9cu: goto label_15fd9c;
        case 0x15fda0u: goto label_15fda0;
        case 0x15fda4u: goto label_15fda4;
        case 0x15fda8u: goto label_15fda8;
        case 0x15fdacu: goto label_15fdac;
        case 0x15fdb0u: goto label_15fdb0;
        case 0x15fdb4u: goto label_15fdb4;
        case 0x15fdb8u: goto label_15fdb8;
        case 0x15fdbcu: goto label_15fdbc;
        case 0x15fdc0u: goto label_15fdc0;
        case 0x15fdc4u: goto label_15fdc4;
        case 0x15fdc8u: goto label_15fdc8;
        case 0x15fdccu: goto label_15fdcc;
        case 0x15fdd0u: goto label_15fdd0;
        case 0x15fdd4u: goto label_15fdd4;
        case 0x15fdd8u: goto label_15fdd8;
        case 0x15fddcu: goto label_15fddc;
        default: break;
    }

    ctx->pc = 0x15fd20u;

label_15fd20:
    // 0x15fd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15fd24:
    // 0x15fd24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15fd28:
    // 0x15fd28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15fd2c:
    // 0x15fd2c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x15fd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_15fd30:
    // 0x15fd30: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15fd30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15fd34:
    // 0x15fd34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15fd38:
    // 0x15fd38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15fd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15fd3c:
    // 0x15fd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15fd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fd40:
    // 0x15fd40: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x15fd40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_15fd44:
    // 0x15fd44: 0x24c6fce8  addiu       $a2, $a2, -0x318
    ctx->pc = 0x15fd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966504));
label_15fd48:
    // 0x15fd48: 0x8c45c7b0  lw          $a1, -0x3850($v0)
    ctx->pc = 0x15fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952880)));
label_15fd4c:
    // 0x15fd4c: 0x2407013e  addiu       $a3, $zero, 0x13E
    ctx->pc = 0x15fd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_15fd50:
    // 0x15fd50: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x15fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_15fd54:
    // 0x15fd54: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x15fd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_15fd58:
    // 0x15fd58: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x15fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_15fd5c:
    // 0x15fd5c: 0x40f809  jalr        $v0
label_15fd60:
    if (ctx->pc == 0x15FD60u) {
        ctx->pc = 0x15FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD5Cu;
        // 0x15fd60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FD64u;
        goto label_15fd64;
    }
    ctx->pc = 0x15FD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FD64u);
        ctx->pc = 0x15FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD5Cu;
        // 0x15fd60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FD5Cu, 0x15FD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FD64u;
label_15fd64:
    // 0x15fd64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15fd68:
    // 0x15fd68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15fd6c:
    // 0x15fd6c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15fd70:
    if (ctx->pc == 0x15FD70u) {
        ctx->pc = 0x15FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD6Cu;
        // 0x15fd70: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FD74u;
        goto label_15fd74;
    }
    ctx->pc = 0x15FD6Cu;
    {
        const bool branch_taken_0x15fd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD6Cu;
        // 0x15fd70: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd6c) {
            ctx->pc = 0x15FD7Cu;
            goto label_15fd7c;
        }
    }
    ctx->pc = 0x15FD74u;
label_15fd74:
    // 0x15fd74: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15fd78:
    // 0x15fd78: 0xac405db8  sw          $zero, 0x5DB8($v0)
    ctx->pc = 0x15fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23992), GPR_U32(ctx, 0));
label_15fd7c:
    // 0x15fd7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15fd80:
    // 0x15fd80: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15fd84:
    // 0x15fd84: 0xac626d70  sw          $v0, 0x6D70($v1)
    ctx->pc = 0x15fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28016), GPR_U32(ctx, 2));
label_15fd88:
    // 0x15fd88: 0xc071afa  jal         func_1C6BE8
label_15fd8c:
    if (ctx->pc == 0x15FD8Cu) {
        ctx->pc = 0x15FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD88u;
        // 0x15fd8c: 0x24846830  addiu       $a0, $a0, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FD90u;
        goto label_15fd90;
    }
    ctx->pc = 0x15FD88u;
    SET_GPR_U32(ctx, 31, 0x15FD90u);
    ctx->pc = 0x15FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FD88u;
    // 0x15fd8c: 0x24846830  addiu       $a0, $a0, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6BE8u, 0x15FD88u, 0x15FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD90u;
label_15fd90:
    // 0x15fd90: 0x8e2727e4  lw          $a3, 0x27E4($s1)
    ctx->pc = 0x15fd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_15fd94:
    // 0x15fd94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x15fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_15fd98:
    // 0x15fd98: 0x8c45b9b8  lw          $a1, -0x4648($v0)
    ctx->pc = 0x15fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
label_15fd9c:
    // 0x15fd9c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x15fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15fda0:
    // 0x15fda0: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x15fda0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_15fda4:
    // 0x15fda4: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x15fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_15fda8:
    // 0x15fda8: 0xc0f809  jalr        $a2
label_15fdac:
    if (ctx->pc == 0x15FDACu) {
        ctx->pc = 0x15FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDA8u;
        // 0x15fdac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDB0u;
        goto label_15fdb0;
    }
    ctx->pc = 0x15FDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15FDB0u);
        ctx->pc = 0x15FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDA8u;
        // 0x15fdac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FDA8u, 0x15FDB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FDB0u;
label_15fdb0:
    // 0x15fdb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15fdb4:
    // 0x15fdb4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_15fdb8:
    // 0x15fdb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15fdbc:
    // 0x15fdbc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15fdbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15fdc0:
    // 0x15fdc0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15fdc4:
    // 0x15fdc4: 0x40f809  jalr        $v0
label_15fdc8:
    if (ctx->pc == 0x15FDC8u) {
        ctx->pc = 0x15FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDC4u;
        // 0x15fdc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDCCu;
        goto label_15fdcc;
    }
    ctx->pc = 0x15FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FDCCu);
        ctx->pc = 0x15FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDC4u;
        // 0x15fdc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FDC4u, 0x15FDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FDCCu;
label_15fdcc:
    // 0x15fdcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15fdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fdd0:
    // 0x15fdd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fdd4:
    // 0x15fdd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15fdd8:
    // 0x15fdd8: 0x3e00008  jr          $ra
label_15fddc:
    if (ctx->pc == 0x15FDDCu) {
        ctx->pc = 0x15FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDD8u;
        // 0x15fddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDE0u;
        goto label_fallthrough_0x15fdd8;
    }
    ctx->pc = 0x15FDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDD8u;
        // 0x15fddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15fdd8:
    ctx->pc = 0x15FDE0u;
}
