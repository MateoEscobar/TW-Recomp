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

// Function: sub_004EBC20
// Address: 0x4ebc20 - 0x4ebca0
void sub_004EBC20_0x4ebc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBC20_0x4ebc20");
#endif

    switch (ctx->pc) {
        case 0x4ebc20u: goto label_4ebc20;
        case 0x4ebc24u: goto label_4ebc24;
        case 0x4ebc28u: goto label_4ebc28;
        case 0x4ebc2cu: goto label_4ebc2c;
        case 0x4ebc30u: goto label_4ebc30;
        case 0x4ebc34u: goto label_4ebc34;
        case 0x4ebc38u: goto label_4ebc38;
        case 0x4ebc3cu: goto label_4ebc3c;
        case 0x4ebc40u: goto label_4ebc40;
        case 0x4ebc44u: goto label_4ebc44;
        case 0x4ebc48u: goto label_4ebc48;
        case 0x4ebc4cu: goto label_4ebc4c;
        case 0x4ebc50u: goto label_4ebc50;
        case 0x4ebc54u: goto label_4ebc54;
        case 0x4ebc58u: goto label_4ebc58;
        case 0x4ebc5cu: goto label_4ebc5c;
        case 0x4ebc60u: goto label_4ebc60;
        case 0x4ebc64u: goto label_4ebc64;
        case 0x4ebc68u: goto label_4ebc68;
        case 0x4ebc6cu: goto label_4ebc6c;
        case 0x4ebc70u: goto label_4ebc70;
        case 0x4ebc74u: goto label_4ebc74;
        case 0x4ebc78u: goto label_4ebc78;
        case 0x4ebc7cu: goto label_4ebc7c;
        case 0x4ebc80u: goto label_4ebc80;
        case 0x4ebc84u: goto label_4ebc84;
        case 0x4ebc88u: goto label_4ebc88;
        case 0x4ebc8cu: goto label_4ebc8c;
        case 0x4ebc90u: goto label_4ebc90;
        case 0x4ebc94u: goto label_4ebc94;
        case 0x4ebc98u: goto label_4ebc98;
        case 0x4ebc9cu: goto label_4ebc9c;
        default: break;
    }

    ctx->pc = 0x4ebc20u;

label_4ebc20:
    // 0x4ebc20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebc24:
    // 0x4ebc24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebc28:
    // 0x4ebc28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebc2c:
    // 0x4ebc2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebc30:
    // 0x4ebc30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebc34:
    // 0x4ebc34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebc38:
    // 0x4ebc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebc3c:
    // 0x4ebc3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebc40:
    if (ctx->pc == 0x4EBC40u) {
        ctx->pc = 0x4EBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC3Cu;
        // 0x4ebc40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBC44u;
        goto label_4ebc44;
    }
    ctx->pc = 0x4EBC3Cu;
    {
        const bool branch_taken_0x4ebc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC3Cu;
        // 0x4ebc40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebc3c) {
            ctx->pc = 0x4EBC84u;
            goto label_4ebc84;
        }
    }
    ctx->pc = 0x4EBC44u;
label_4ebc44:
    // 0x4ebc44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebc48:
    // 0x4ebc48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebc4c:
    // 0x4ebc4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebc4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebc50:
    // 0x4ebc50: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebc54:
    // 0x4ebc54: 0x60f809  jalr        $v1
label_4ebc58:
    if (ctx->pc == 0x4EBC58u) {
        ctx->pc = 0x4EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC54u;
        // 0x4ebc58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBC5Cu;
        goto label_4ebc5c;
    }
    ctx->pc = 0x4EBC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBC5Cu);
        ctx->pc = 0x4EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC54u;
        // 0x4ebc58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBC54u, 0x4EBC5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBC5Cu;
label_4ebc5c:
    // 0x4ebc5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebc60:
    // 0x4ebc60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebc64:
    // 0x4ebc64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebc64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebc68:
    // 0x4ebc68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebc6c:
    // 0x4ebc6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebc70:
    // 0x4ebc70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebc74:
    // 0x4ebc74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebc74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebc78:
    // 0x4ebc78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebc7c:
    // 0x4ebc7c: 0x60f809  jalr        $v1
label_4ebc80:
    if (ctx->pc == 0x4EBC80u) {
        ctx->pc = 0x4EBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC7Cu;
        // 0x4ebc80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBC84u;
        goto label_4ebc84;
    }
    ctx->pc = 0x4EBC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBC84u);
        ctx->pc = 0x4EBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC7Cu;
        // 0x4ebc80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBC7Cu, 0x4EBC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBC84u;
label_4ebc84:
    // 0x4ebc84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebc88:
    // 0x4ebc88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebc88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebc8c:
    // 0x4ebc8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebc8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebc90:
    // 0x4ebc90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebc94:
    // 0x4ebc94: 0x3e00008  jr          $ra
label_4ebc98:
    if (ctx->pc == 0x4EBC98u) {
        ctx->pc = 0x4EBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC94u;
        // 0x4ebc98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBC9Cu;
        goto label_4ebc9c;
    }
    ctx->pc = 0x4EBC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC94u;
        // 0x4ebc98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBC9Cu;
label_4ebc9c:
    // 0x4ebc9c: 0x0  nop
    ctx->pc = 0x4ebc9cu;
    // NOP
    ctx->pc = 0x4ebca0u;
}
