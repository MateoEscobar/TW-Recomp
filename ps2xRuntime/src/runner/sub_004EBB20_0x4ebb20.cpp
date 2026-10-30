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

// Function: sub_004EBB20
// Address: 0x4ebb20 - 0x4ebba0
void sub_004EBB20_0x4ebb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBB20_0x4ebb20");
#endif

    switch (ctx->pc) {
        case 0x4ebb20u: goto label_4ebb20;
        case 0x4ebb24u: goto label_4ebb24;
        case 0x4ebb28u: goto label_4ebb28;
        case 0x4ebb2cu: goto label_4ebb2c;
        case 0x4ebb30u: goto label_4ebb30;
        case 0x4ebb34u: goto label_4ebb34;
        case 0x4ebb38u: goto label_4ebb38;
        case 0x4ebb3cu: goto label_4ebb3c;
        case 0x4ebb40u: goto label_4ebb40;
        case 0x4ebb44u: goto label_4ebb44;
        case 0x4ebb48u: goto label_4ebb48;
        case 0x4ebb4cu: goto label_4ebb4c;
        case 0x4ebb50u: goto label_4ebb50;
        case 0x4ebb54u: goto label_4ebb54;
        case 0x4ebb58u: goto label_4ebb58;
        case 0x4ebb5cu: goto label_4ebb5c;
        case 0x4ebb60u: goto label_4ebb60;
        case 0x4ebb64u: goto label_4ebb64;
        case 0x4ebb68u: goto label_4ebb68;
        case 0x4ebb6cu: goto label_4ebb6c;
        case 0x4ebb70u: goto label_4ebb70;
        case 0x4ebb74u: goto label_4ebb74;
        case 0x4ebb78u: goto label_4ebb78;
        case 0x4ebb7cu: goto label_4ebb7c;
        case 0x4ebb80u: goto label_4ebb80;
        case 0x4ebb84u: goto label_4ebb84;
        case 0x4ebb88u: goto label_4ebb88;
        case 0x4ebb8cu: goto label_4ebb8c;
        case 0x4ebb90u: goto label_4ebb90;
        case 0x4ebb94u: goto label_4ebb94;
        case 0x4ebb98u: goto label_4ebb98;
        case 0x4ebb9cu: goto label_4ebb9c;
        default: break;
    }

    ctx->pc = 0x4ebb20u;

label_4ebb20:
    // 0x4ebb20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebb24:
    // 0x4ebb24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebb28:
    // 0x4ebb28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebb2c:
    // 0x4ebb2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebb30:
    // 0x4ebb30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebb34:
    // 0x4ebb34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebb38:
    // 0x4ebb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebb3c:
    // 0x4ebb3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebb40:
    if (ctx->pc == 0x4EBB40u) {
        ctx->pc = 0x4EBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB3Cu;
        // 0x4ebb40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBB44u;
        goto label_4ebb44;
    }
    ctx->pc = 0x4EBB3Cu;
    {
        const bool branch_taken_0x4ebb3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB3Cu;
        // 0x4ebb40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebb3c) {
            ctx->pc = 0x4EBB84u;
            goto label_4ebb84;
        }
    }
    ctx->pc = 0x4EBB44u;
label_4ebb44:
    // 0x4ebb44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebb48:
    // 0x4ebb48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebb4c:
    // 0x4ebb4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebb4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebb50:
    // 0x4ebb50: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebb54:
    // 0x4ebb54: 0x60f809  jalr        $v1
label_4ebb58:
    if (ctx->pc == 0x4EBB58u) {
        ctx->pc = 0x4EBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB54u;
        // 0x4ebb58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBB5Cu;
        goto label_4ebb5c;
    }
    ctx->pc = 0x4EBB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBB5Cu);
        ctx->pc = 0x4EBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB54u;
        // 0x4ebb58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBB54u, 0x4EBB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBB5Cu;
label_4ebb5c:
    // 0x4ebb5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebb60:
    // 0x4ebb60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebb64:
    // 0x4ebb64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebb64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebb68:
    // 0x4ebb68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebb6c:
    // 0x4ebb6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebb70:
    // 0x4ebb70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebb74:
    // 0x4ebb74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebb78:
    // 0x4ebb78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebb7c:
    // 0x4ebb7c: 0x60f809  jalr        $v1
label_4ebb80:
    if (ctx->pc == 0x4EBB80u) {
        ctx->pc = 0x4EBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB7Cu;
        // 0x4ebb80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBB84u;
        goto label_4ebb84;
    }
    ctx->pc = 0x4EBB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBB84u);
        ctx->pc = 0x4EBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB7Cu;
        // 0x4ebb80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBB7Cu, 0x4EBB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBB84u;
label_4ebb84:
    // 0x4ebb84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebb88:
    // 0x4ebb88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebb8c:
    // 0x4ebb8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebb90:
    // 0x4ebb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebb94:
    // 0x4ebb94: 0x3e00008  jr          $ra
label_4ebb98:
    if (ctx->pc == 0x4EBB98u) {
        ctx->pc = 0x4EBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB94u;
        // 0x4ebb98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBB9Cu;
        goto label_4ebb9c;
    }
    ctx->pc = 0x4EBB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB94u;
        // 0x4ebb98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBB9Cu;
label_4ebb9c:
    // 0x4ebb9c: 0x0  nop
    ctx->pc = 0x4ebb9cu;
    // NOP
    ctx->pc = 0x4ebba0u;
}
