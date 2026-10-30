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

// Function: sub_0043BCA0
// Address: 0x43bca0 - 0x43bd88
void sub_0043BCA0_0x43bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BCA0_0x43bca0");
#endif

    switch (ctx->pc) {
        case 0x43bd10u: goto label_43bd10;
        case 0x43bd28u: goto label_43bd28;
        case 0x43bd40u: goto label_43bd40;
        case 0x43bd5cu: goto label_43bd5c;
        default: break;
    }

    ctx->pc = 0x43bca0u;

    // 0x43bca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x43bca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43bca8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x43bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x43bcac: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x43bcacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x43bcb0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x43bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x43bcb4: 0x8e227228  lw          $v0, 0x7228($s1)
    ctx->pc = 0x43bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x517228u));
    // 0x43bcb8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x43bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x43bcbc: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x43BCBCu;
    {
        const bool branch_taken_0x43bcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x43BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCBCu;
        // 0x43bcc0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bcbc) {
            ctx->pc = 0x43BCE8u;
            goto label_43bce8;
        }
    }
    ctx->pc = 0x43BCC4u;
    // 0x43bcc4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x43bcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x43bcc8: 0x8e02722c  lw          $v0, 0x722C($s0)
    ctx->pc = 0x43bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51722Cu));
    // 0x43bccc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x43BCCCu;
    {
        const bool branch_taken_0x43bccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x43BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCCCu;
        // 0x43bcd0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bccc) {
            ctx->pc = 0x43BCECu;
            goto label_43bcec;
        }
    }
    ctx->pc = 0x43BCD4u;
    // 0x43bcd4: 0x8e427230  lw          $v0, 0x7230($s2)
    ctx->pc = 0x43bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29232)));
    // 0x43bcd8: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x43BCD8u;
    {
        const bool branch_taken_0x43bcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x43BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCD8u;
        // 0x43bcdc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bcd8) {
            ctx->pc = 0x43BD70u;
            goto label_43bd70;
        }
    }
    ctx->pc = 0x43BCE0u;
    // 0x43bce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43BCE0u;
    {
        const bool branch_taken_0x43bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCE0u;
        // 0x43bce4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bce0) {
            ctx->pc = 0x43BCF4u;
            goto label_43bcf4;
        }
    }
    ctx->pc = 0x43BCE8u;
label_43bce8:
    // 0x43bce8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x43bce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_43bcec:
    // 0x43bcec: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x43bcecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x43bcf0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43bcf4:
    // 0x43bcf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43bcf8: 0x2442d308  addiu       $v0, $v0, -0x2CF8
    ctx->pc = 0x43bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955784));
    // 0x43bcfc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x43bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x43bd00: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x43bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x43bd04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43bd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd08: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x43BD08u;
    SET_GPR_U32(ctx, 31, 0x43BD10u);
    ctx->pc = 0x43BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BD08u;
    // 0x43bd0c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x43BD08u, 0x43BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BD10u;
label_43bd10:
    // 0x43bd10: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x43bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x43bd14: 0xae227228  sw          $v0, 0x7228($s1)
    ctx->pc = 0x43bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29224), GPR_U32(ctx, 2));
    // 0x43bd18: 0x2463d318  addiu       $v1, $v1, -0x2CE8
    ctx->pc = 0x43bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955800));
    // 0x43bd1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43bd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd20: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x43BD20u;
    SET_GPR_U32(ctx, 31, 0x43BD28u);
    ctx->pc = 0x43BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BD20u;
    // 0x43bd24: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x43BD20u, 0x43BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BD28u;
label_43bd28:
    // 0x43bd28: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x43bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x43bd2c: 0xae02722c  sw          $v0, 0x722C($s0)
    ctx->pc = 0x43bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29228), GPR_U32(ctx, 2));
    // 0x43bd30: 0x2463d328  addiu       $v1, $v1, -0x2CD8
    ctx->pc = 0x43bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955816));
    // 0x43bd34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43bd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd38: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x43BD38u;
    SET_GPR_U32(ctx, 31, 0x43BD40u);
    ctx->pc = 0x43BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BD38u;
    // 0x43bd3c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x43BD38u, 0x43BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BD40u;
label_43bd40:
    // 0x43bd40: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x43bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x43bd44: 0xae427230  sw          $v0, 0x7230($s2)
    ctx->pc = 0x43bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29232), GPR_U32(ctx, 2));
    // 0x43bd48: 0x2463d338  addiu       $v1, $v1, -0x2CC8
    ctx->pc = 0x43bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955832));
    // 0x43bd4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43bd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd50: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x43bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x43bd54: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x43BD54u;
    SET_GPR_U32(ctx, 31, 0x43BD5Cu);
    ctx->pc = 0x43BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BD54u;
    // 0x43bd58: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x43BD54u, 0x43BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BD5Cu;
label_43bd5c:
    // 0x43bd5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x43bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x43bd60: 0xac627220  sw          $v0, 0x7220($v1)
    ctx->pc = 0x43bd60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x517220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x517220u, _value); } while (0);
    // 0x43bd64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x43bd68: 0xac407234  sw          $zero, 0x7234($v0)
    ctx->pc = 0x43bd68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x517234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x517234u, _value); } while (0);
    // 0x43bd6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x43bd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_43bd70:
    // 0x43bd70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x43bd70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43bd74: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x43bd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43bd78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x43bd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43bd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x43BD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BD7Cu;
        // 0x43bd80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BD84u;
    // 0x43bd84: 0x0  nop
    ctx->pc = 0x43bd84u;
    // NOP
    ctx->pc = 0x43bd88u;
}
