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

// Function: sub_004EBD20
// Address: 0x4ebd20 - 0x4ebda0
void sub_004EBD20_0x4ebd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBD20_0x4ebd20");
#endif

    switch (ctx->pc) {
        case 0x4ebd20u: goto label_4ebd20;
        case 0x4ebd24u: goto label_4ebd24;
        case 0x4ebd28u: goto label_4ebd28;
        case 0x4ebd2cu: goto label_4ebd2c;
        case 0x4ebd30u: goto label_4ebd30;
        case 0x4ebd34u: goto label_4ebd34;
        case 0x4ebd38u: goto label_4ebd38;
        case 0x4ebd3cu: goto label_4ebd3c;
        case 0x4ebd40u: goto label_4ebd40;
        case 0x4ebd44u: goto label_4ebd44;
        case 0x4ebd48u: goto label_4ebd48;
        case 0x4ebd4cu: goto label_4ebd4c;
        case 0x4ebd50u: goto label_4ebd50;
        case 0x4ebd54u: goto label_4ebd54;
        case 0x4ebd58u: goto label_4ebd58;
        case 0x4ebd5cu: goto label_4ebd5c;
        case 0x4ebd60u: goto label_4ebd60;
        case 0x4ebd64u: goto label_4ebd64;
        case 0x4ebd68u: goto label_4ebd68;
        case 0x4ebd6cu: goto label_4ebd6c;
        case 0x4ebd70u: goto label_4ebd70;
        case 0x4ebd74u: goto label_4ebd74;
        case 0x4ebd78u: goto label_4ebd78;
        case 0x4ebd7cu: goto label_4ebd7c;
        case 0x4ebd80u: goto label_4ebd80;
        case 0x4ebd84u: goto label_4ebd84;
        case 0x4ebd88u: goto label_4ebd88;
        case 0x4ebd8cu: goto label_4ebd8c;
        case 0x4ebd90u: goto label_4ebd90;
        case 0x4ebd94u: goto label_4ebd94;
        case 0x4ebd98u: goto label_4ebd98;
        case 0x4ebd9cu: goto label_4ebd9c;
        default: break;
    }

    ctx->pc = 0x4ebd20u;

label_4ebd20:
    // 0x4ebd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebd24:
    // 0x4ebd24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebd28:
    // 0x4ebd28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebd2c:
    // 0x4ebd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebd30:
    // 0x4ebd30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebd34:
    // 0x4ebd34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebd38:
    // 0x4ebd38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebd3c:
    // 0x4ebd3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebd40:
    if (ctx->pc == 0x4EBD40u) {
        ctx->pc = 0x4EBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD3Cu;
        // 0x4ebd40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBD44u;
        goto label_4ebd44;
    }
    ctx->pc = 0x4EBD3Cu;
    {
        const bool branch_taken_0x4ebd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD3Cu;
        // 0x4ebd40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebd3c) {
            ctx->pc = 0x4EBD84u;
            goto label_4ebd84;
        }
    }
    ctx->pc = 0x4EBD44u;
label_4ebd44:
    // 0x4ebd44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebd48:
    // 0x4ebd48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebd4c:
    // 0x4ebd4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebd4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebd50:
    // 0x4ebd50: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebd54:
    // 0x4ebd54: 0x60f809  jalr        $v1
label_4ebd58:
    if (ctx->pc == 0x4EBD58u) {
        ctx->pc = 0x4EBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD54u;
        // 0x4ebd58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBD5Cu;
        goto label_4ebd5c;
    }
    ctx->pc = 0x4EBD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBD5Cu);
        ctx->pc = 0x4EBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD54u;
        // 0x4ebd58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBD54u, 0x4EBD5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBD5Cu;
label_4ebd5c:
    // 0x4ebd5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebd60:
    // 0x4ebd60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebd64:
    // 0x4ebd64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebd64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebd68:
    // 0x4ebd68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebd6c:
    // 0x4ebd6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebd70:
    // 0x4ebd70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebd74:
    // 0x4ebd74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebd74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebd78:
    // 0x4ebd78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebd7c:
    // 0x4ebd7c: 0x60f809  jalr        $v1
label_4ebd80:
    if (ctx->pc == 0x4EBD80u) {
        ctx->pc = 0x4EBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD7Cu;
        // 0x4ebd80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBD84u;
        goto label_4ebd84;
    }
    ctx->pc = 0x4EBD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBD84u);
        ctx->pc = 0x4EBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD7Cu;
        // 0x4ebd80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBD7Cu, 0x4EBD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBD84u;
label_4ebd84:
    // 0x4ebd84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebd88:
    // 0x4ebd88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebd88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebd8c:
    // 0x4ebd8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebd8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebd90:
    // 0x4ebd90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebd94:
    // 0x4ebd94: 0x3e00008  jr          $ra
label_4ebd98:
    if (ctx->pc == 0x4EBD98u) {
        ctx->pc = 0x4EBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD94u;
        // 0x4ebd98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBD9Cu;
        goto label_4ebd9c;
    }
    ctx->pc = 0x4EBD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBD94u;
        // 0x4ebd98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBD9Cu;
label_4ebd9c:
    // 0x4ebd9c: 0x0  nop
    ctx->pc = 0x4ebd9cu;
    // NOP
    ctx->pc = 0x4ebda0u;
}
