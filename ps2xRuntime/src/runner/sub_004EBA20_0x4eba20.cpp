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

// Function: sub_004EBA20
// Address: 0x4eba20 - 0x4ebaa0
void sub_004EBA20_0x4eba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBA20_0x4eba20");
#endif

    switch (ctx->pc) {
        case 0x4eba20u: goto label_4eba20;
        case 0x4eba24u: goto label_4eba24;
        case 0x4eba28u: goto label_4eba28;
        case 0x4eba2cu: goto label_4eba2c;
        case 0x4eba30u: goto label_4eba30;
        case 0x4eba34u: goto label_4eba34;
        case 0x4eba38u: goto label_4eba38;
        case 0x4eba3cu: goto label_4eba3c;
        case 0x4eba40u: goto label_4eba40;
        case 0x4eba44u: goto label_4eba44;
        case 0x4eba48u: goto label_4eba48;
        case 0x4eba4cu: goto label_4eba4c;
        case 0x4eba50u: goto label_4eba50;
        case 0x4eba54u: goto label_4eba54;
        case 0x4eba58u: goto label_4eba58;
        case 0x4eba5cu: goto label_4eba5c;
        case 0x4eba60u: goto label_4eba60;
        case 0x4eba64u: goto label_4eba64;
        case 0x4eba68u: goto label_4eba68;
        case 0x4eba6cu: goto label_4eba6c;
        case 0x4eba70u: goto label_4eba70;
        case 0x4eba74u: goto label_4eba74;
        case 0x4eba78u: goto label_4eba78;
        case 0x4eba7cu: goto label_4eba7c;
        case 0x4eba80u: goto label_4eba80;
        case 0x4eba84u: goto label_4eba84;
        case 0x4eba88u: goto label_4eba88;
        case 0x4eba8cu: goto label_4eba8c;
        case 0x4eba90u: goto label_4eba90;
        case 0x4eba94u: goto label_4eba94;
        case 0x4eba98u: goto label_4eba98;
        case 0x4eba9cu: goto label_4eba9c;
        default: break;
    }

    ctx->pc = 0x4eba20u;

label_4eba20:
    // 0x4eba20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eba24:
    // 0x4eba24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eba28:
    // 0x4eba28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eba2c:
    // 0x4eba2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eba30:
    // 0x4eba30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eba34:
    // 0x4eba34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eba34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eba38:
    // 0x4eba38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eba3c:
    // 0x4eba3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4eba40:
    if (ctx->pc == 0x4EBA40u) {
        ctx->pc = 0x4EBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA3Cu;
        // 0x4eba40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBA44u;
        goto label_4eba44;
    }
    ctx->pc = 0x4EBA3Cu;
    {
        const bool branch_taken_0x4eba3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA3Cu;
        // 0x4eba40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eba3c) {
            ctx->pc = 0x4EBA84u;
            goto label_4eba84;
        }
    }
    ctx->pc = 0x4EBA44u;
label_4eba44:
    // 0x4eba44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4eba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4eba48:
    // 0x4eba48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4eba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eba4c:
    // 0x4eba4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4eba4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4eba50:
    // 0x4eba50: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4eba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4eba54:
    // 0x4eba54: 0x60f809  jalr        $v1
label_4eba58:
    if (ctx->pc == 0x4EBA58u) {
        ctx->pc = 0x4EBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA54u;
        // 0x4eba58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBA5Cu;
        goto label_4eba5c;
    }
    ctx->pc = 0x4EBA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBA5Cu);
        ctx->pc = 0x4EBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA54u;
        // 0x4eba58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBA54u, 0x4EBA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBA5Cu;
label_4eba5c:
    // 0x4eba5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eba60:
    // 0x4eba60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eba60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eba64:
    // 0x4eba64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eba64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eba68:
    // 0x4eba68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eba68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eba6c:
    // 0x4eba6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eba6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eba70:
    // 0x4eba70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eba74:
    // 0x4eba74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eba74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eba78:
    // 0x4eba78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eba7c:
    // 0x4eba7c: 0x60f809  jalr        $v1
label_4eba80:
    if (ctx->pc == 0x4EBA80u) {
        ctx->pc = 0x4EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA7Cu;
        // 0x4eba80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBA84u;
        goto label_4eba84;
    }
    ctx->pc = 0x4EBA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBA84u);
        ctx->pc = 0x4EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA7Cu;
        // 0x4eba80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBA7Cu, 0x4EBA84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBA84u;
label_4eba84:
    // 0x4eba84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eba84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eba88:
    // 0x4eba88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eba88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eba8c:
    // 0x4eba8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eba8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eba90:
    // 0x4eba90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eba94:
    // 0x4eba94: 0x3e00008  jr          $ra
label_4eba98:
    if (ctx->pc == 0x4EBA98u) {
        ctx->pc = 0x4EBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA94u;
        // 0x4eba98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBA9Cu;
        goto label_4eba9c;
    }
    ctx->pc = 0x4EBA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA94u;
        // 0x4eba98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBA9Cu;
label_4eba9c:
    // 0x4eba9c: 0x0  nop
    ctx->pc = 0x4eba9cu;
    // NOP
    ctx->pc = 0x4ebaa0u;
}
