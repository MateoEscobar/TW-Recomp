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

// Function: sub_002EFB48
// Address: 0x2efb48 - 0x2efbe8
void sub_002EFB48_0x2efb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFB48_0x2efb48");
#endif

    switch (ctx->pc) {
        case 0x2efb48u: goto label_2efb48;
        case 0x2efb4cu: goto label_2efb4c;
        case 0x2efb50u: goto label_2efb50;
        case 0x2efb54u: goto label_2efb54;
        case 0x2efb58u: goto label_2efb58;
        case 0x2efb5cu: goto label_2efb5c;
        case 0x2efb60u: goto label_2efb60;
        case 0x2efb64u: goto label_2efb64;
        case 0x2efb68u: goto label_2efb68;
        case 0x2efb6cu: goto label_2efb6c;
        case 0x2efb70u: goto label_2efb70;
        case 0x2efb74u: goto label_2efb74;
        case 0x2efb78u: goto label_2efb78;
        case 0x2efb7cu: goto label_2efb7c;
        case 0x2efb80u: goto label_2efb80;
        case 0x2efb84u: goto label_2efb84;
        case 0x2efb88u: goto label_2efb88;
        case 0x2efb8cu: goto label_2efb8c;
        case 0x2efb90u: goto label_2efb90;
        case 0x2efb94u: goto label_2efb94;
        case 0x2efb98u: goto label_2efb98;
        case 0x2efb9cu: goto label_2efb9c;
        case 0x2efba0u: goto label_2efba0;
        case 0x2efba4u: goto label_2efba4;
        case 0x2efba8u: goto label_2efba8;
        case 0x2efbacu: goto label_2efbac;
        case 0x2efbb0u: goto label_2efbb0;
        case 0x2efbb4u: goto label_2efbb4;
        case 0x2efbb8u: goto label_2efbb8;
        case 0x2efbbcu: goto label_2efbbc;
        case 0x2efbc0u: goto label_2efbc0;
        case 0x2efbc4u: goto label_2efbc4;
        case 0x2efbc8u: goto label_2efbc8;
        case 0x2efbccu: goto label_2efbcc;
        case 0x2efbd0u: goto label_2efbd0;
        case 0x2efbd4u: goto label_2efbd4;
        case 0x2efbd8u: goto label_2efbd8;
        case 0x2efbdcu: goto label_2efbdc;
        case 0x2efbe0u: goto label_2efbe0;
        case 0x2efbe4u: goto label_2efbe4;
        default: break;
    }

    ctx->pc = 0x2efb48u;

label_2efb48:
    // 0x2efb48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2efb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2efb4c:
    // 0x2efb4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2efb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efb50:
    // 0x2efb50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2efb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2efb54:
    // 0x2efb54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2efb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2efb58:
    // 0x2efb58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2efb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efb5c:
    // 0x2efb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2efb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2efb60:
    // 0x2efb60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2efb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2efb64:
    // 0x2efb64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2efb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2efb68:
    // 0x2efb68: 0x244503c8  addiu       $a1, $v0, 0x3C8
    ctx->pc = 0x2efb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
label_2efb6c:
    // 0x2efb6c: 0x0  nop
    ctx->pc = 0x2efb6cu;
    // NOP
label_2efb70:
    // 0x2efb70: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2efb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2efb74:
    // 0x2efb74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2efb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2efb78:
    // 0x2efb78: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x2efb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_2efb7c:
    // 0x2efb7c: 0x2cc30007  sltiu       $v1, $a2, 0x7
    ctx->pc = 0x2efb7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2efb80:
    // 0x2efb80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2efb80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2efb84:
    // 0x2efb84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2efb88:
    if (ctx->pc == 0x2EFB88u) {
        ctx->pc = 0x2EFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB84u;
        // 0x2efb88: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFB8Cu;
        goto label_2efb8c;
    }
    ctx->pc = 0x2EFB84u;
    {
        const bool branch_taken_0x2efb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB84u;
        // 0x2efb88: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb84) {
            ctx->pc = 0x2EFB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efb70;
        }
    }
    ctx->pc = 0x2EFB8Cu;
label_2efb8c:
    // 0x2efb8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2efb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2efb90:
    // 0x2efb90: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x2efb90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2efb94:
    // 0x2efb94: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2efb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2efb98:
    // 0x2efb98: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_2efb9c:
    if (ctx->pc == 0x2EFB9Cu) {
        ctx->pc = 0x2EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB98u;
        // 0x2efb9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBA0u;
        goto label_2efba0;
    }
    ctx->pc = 0x2EFB98u;
    {
        const bool branch_taken_0x2efb98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB98u;
        // 0x2efb9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb98) {
            ctx->pc = 0x2EFBD4u;
            goto label_2efbd4;
        }
    }
    ctx->pc = 0x2EFBA0u;
label_2efba0:
    // 0x2efba0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2efba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2efba4:
    // 0x2efba4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2efba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2efba8:
    // 0x2efba8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2efba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2efbac:
    // 0x2efbac: 0x40f809  jalr        $v0
label_2efbb0:
    if (ctx->pc == 0x2EFBB0u) {
        ctx->pc = 0x2EFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBACu;
        // 0x2efbb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBB4u;
        goto label_2efbb4;
    }
    ctx->pc = 0x2EFBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EFBB4u);
        ctx->pc = 0x2EFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBACu;
        // 0x2efbb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFBACu, 0x2EFBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFBB4u;
label_2efbb4:
    // 0x2efbb4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2efbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2efbb8:
    // 0x2efbb8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2efbbc:
    if (ctx->pc == 0x2EFBBCu) {
        ctx->pc = 0x2EFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBB8u;
        // 0x2efbbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBC0u;
        goto label_2efbc0;
    }
    ctx->pc = 0x2EFBB8u;
    {
        const bool branch_taken_0x2efbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBB8u;
        // 0x2efbbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbb8) {
            ctx->pc = 0x2EFBD4u;
            goto label_2efbd4;
        }
    }
    ctx->pc = 0x2EFBC0u;
label_2efbc0:
    // 0x2efbc0: 0xc05904e  jal         func_164138
label_2efbc4:
    if (ctx->pc == 0x2EFBC4u) {
        ctx->pc = 0x2EFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBC0u;
        // 0x2efbc4: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBC8u;
        goto label_2efbc8;
    }
    ctx->pc = 0x2EFBC0u;
    SET_GPR_U32(ctx, 31, 0x2EFBC8u);
    ctx->pc = 0x2EFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBC0u;
    // 0x2efbc4: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164138u, 0x2EFBC0u, 0x2EFBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBC8u;
label_2efbc8:
    // 0x2efbc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2efbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2efbcc:
    // 0x2efbcc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2efbccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2efbd0:
    // 0x2efbd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2efbd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efbd4:
    // 0x2efbd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2efbd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2efbd8:
    // 0x2efbd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2efbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2efbdc:
    // 0x2efbdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2efbe0:
    // 0x2efbe0: 0x3e00008  jr          $ra
label_2efbe4:
    if (ctx->pc == 0x2EFBE4u) {
        ctx->pc = 0x2EFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBE0u;
        // 0x2efbe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFBE8u;
        goto label_fallthrough_0x2efbe0;
    }
    ctx->pc = 0x2EFBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBE0u;
        // 0x2efbe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2efbe0:
    ctx->pc = 0x2EFBE8u;
}
