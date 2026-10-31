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

// Function: sub_002BEE08
// Address: 0x2bee08 - 0x2bee78
void sub_002BEE08_0x2bee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEE08_0x2bee08");
#endif

    switch (ctx->pc) {
        case 0x2bee08u: goto label_2bee08;
        case 0x2bee0cu: goto label_2bee0c;
        case 0x2bee10u: goto label_2bee10;
        case 0x2bee14u: goto label_2bee14;
        case 0x2bee18u: goto label_2bee18;
        case 0x2bee1cu: goto label_2bee1c;
        case 0x2bee20u: goto label_2bee20;
        case 0x2bee24u: goto label_2bee24;
        case 0x2bee28u: goto label_2bee28;
        case 0x2bee2cu: goto label_2bee2c;
        case 0x2bee30u: goto label_2bee30;
        case 0x2bee34u: goto label_2bee34;
        case 0x2bee38u: goto label_2bee38;
        case 0x2bee3cu: goto label_2bee3c;
        case 0x2bee40u: goto label_2bee40;
        case 0x2bee44u: goto label_2bee44;
        case 0x2bee48u: goto label_2bee48;
        case 0x2bee4cu: goto label_2bee4c;
        case 0x2bee50u: goto label_2bee50;
        case 0x2bee54u: goto label_2bee54;
        case 0x2bee58u: goto label_2bee58;
        case 0x2bee5cu: goto label_2bee5c;
        case 0x2bee60u: goto label_2bee60;
        case 0x2bee64u: goto label_2bee64;
        case 0x2bee68u: goto label_2bee68;
        case 0x2bee6cu: goto label_2bee6c;
        case 0x2bee70u: goto label_2bee70;
        case 0x2bee74u: goto label_2bee74;
        default: break;
    }

    ctx->pc = 0x2bee08u;

label_2bee08:
    // 0x2bee08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bee0c:
    // 0x2bee0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2bee10:
    // 0x2bee10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bee14:
    // 0x2bee14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bee14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bee18:
    // 0x2bee18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bee1c:
    // 0x2bee1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bee20:
    // 0x2bee20: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2bee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2bee24:
    // 0x2bee24: 0xc05959e  jal         func_165678
label_2bee28:
    if (ctx->pc == 0x2BEE28u) {
        ctx->pc = 0x2BEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE24u;
        // 0x2bee28: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE2Cu;
        goto label_2bee2c;
    }
    ctx->pc = 0x2BEE24u;
    SET_GPR_U32(ctx, 31, 0x2BEE2Cu);
    ctx->pc = 0x2BEE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE24u;
    // 0x2bee28: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2BEE24u, 0x2BEE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE2Cu;
label_2bee2c:
    // 0x2bee2c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2bee30:
    if (ctx->pc == 0x2BEE30u) {
        ctx->pc = 0x2BEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE2Cu;
        // 0x2bee30: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE34u;
        goto label_2bee34;
    }
    ctx->pc = 0x2BEE2Cu;
    {
        const bool branch_taken_0x2bee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee2c) {
            ctx->pc = 0x2BEE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEE2Cu;
            // 0x2bee30: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE50u;
            goto label_2bee50;
        }
    }
    ctx->pc = 0x2BEE34u;
label_2bee34:
    // 0x2bee34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bee38:
    // 0x2bee38: 0xc08750a  jal         func_21D428
label_2bee3c:
    if (ctx->pc == 0x2BEE3Cu) {
        ctx->pc = 0x2BEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE38u;
        // 0x2bee3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE40u;
        goto label_2bee40;
    }
    ctx->pc = 0x2BEE38u;
    SET_GPR_U32(ctx, 31, 0x2BEE40u);
    ctx->pc = 0x2BEE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE38u;
    // 0x2bee3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2BEE38u, 0x2BEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE40u;
label_2bee40:
    // 0x2bee40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bee44:
    // 0x2bee44: 0xc0a580a  jal         func_296028
label_2bee48:
    if (ctx->pc == 0x2BEE48u) {
        ctx->pc = 0x2BEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE44u;
        // 0x2bee48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE4Cu;
        goto label_2bee4c;
    }
    ctx->pc = 0x2BEE44u;
    SET_GPR_U32(ctx, 31, 0x2BEE4Cu);
    ctx->pc = 0x2BEE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE44u;
    // 0x2bee48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2BEE44u, 0x2BEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE4Cu;
label_2bee4c:
    // 0x2bee4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2bee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2bee50:
    // 0x2bee50: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2bee50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2bee54:
    // 0x2bee54: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2bee54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2bee58:
    // 0x2bee58: 0x60f809  jalr        $v1
label_2bee5c:
    if (ctx->pc == 0x2BEE5Cu) {
        ctx->pc = 0x2BEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE58u;
        // 0x2bee5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE60u;
        goto label_2bee60;
    }
    ctx->pc = 0x2BEE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BEE60u);
        ctx->pc = 0x2BEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE58u;
        // 0x2bee5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEE58u, 0x2BEE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEE60u;
label_2bee60:
    // 0x2bee60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bee64:
    // 0x2bee64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bee64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bee68:
    // 0x2bee68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bee6c:
    // 0x2bee6c: 0x3e00008  jr          $ra
label_2bee70:
    if (ctx->pc == 0x2BEE70u) {
        ctx->pc = 0x2BEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE6Cu;
        // 0x2bee70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE74u;
        goto label_2bee74;
    }
    ctx->pc = 0x2BEE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE6Cu;
        // 0x2bee70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEE74u;
label_2bee74:
    // 0x2bee74: 0x0  nop
    ctx->pc = 0x2bee74u;
    // NOP
    ctx->pc = 0x2bee78u;
}
