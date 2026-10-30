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

// Function: sub_00415C48
// Address: 0x415c48 - 0x415ce8
void sub_00415C48_0x415c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415C48_0x415c48");
#endif

    switch (ctx->pc) {
        case 0x415c48u: goto label_415c48;
        case 0x415c4cu: goto label_415c4c;
        case 0x415c50u: goto label_415c50;
        case 0x415c54u: goto label_415c54;
        case 0x415c58u: goto label_415c58;
        case 0x415c5cu: goto label_415c5c;
        case 0x415c60u: goto label_415c60;
        case 0x415c64u: goto label_415c64;
        case 0x415c68u: goto label_415c68;
        case 0x415c6cu: goto label_415c6c;
        case 0x415c70u: goto label_415c70;
        case 0x415c74u: goto label_415c74;
        case 0x415c78u: goto label_415c78;
        case 0x415c7cu: goto label_415c7c;
        case 0x415c80u: goto label_415c80;
        case 0x415c84u: goto label_415c84;
        case 0x415c88u: goto label_415c88;
        case 0x415c8cu: goto label_415c8c;
        case 0x415c90u: goto label_415c90;
        case 0x415c94u: goto label_415c94;
        case 0x415c98u: goto label_415c98;
        case 0x415c9cu: goto label_415c9c;
        case 0x415ca0u: goto label_415ca0;
        case 0x415ca4u: goto label_415ca4;
        case 0x415ca8u: goto label_415ca8;
        case 0x415cacu: goto label_415cac;
        case 0x415cb0u: goto label_415cb0;
        case 0x415cb4u: goto label_415cb4;
        case 0x415cb8u: goto label_415cb8;
        case 0x415cbcu: goto label_415cbc;
        case 0x415cc0u: goto label_415cc0;
        case 0x415cc4u: goto label_415cc4;
        case 0x415cc8u: goto label_415cc8;
        case 0x415cccu: goto label_415ccc;
        case 0x415cd0u: goto label_415cd0;
        case 0x415cd4u: goto label_415cd4;
        case 0x415cd8u: goto label_415cd8;
        case 0x415cdcu: goto label_415cdc;
        case 0x415ce0u: goto label_415ce0;
        case 0x415ce4u: goto label_415ce4;
        default: break;
    }

    ctx->pc = 0x415c48u;

label_415c48:
    // 0x415c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x415c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_415c4c:
    // 0x415c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x415c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_415c50:
    // 0x415c50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x415c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_415c54:
    // 0x415c54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x415c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415c58:
    // 0x415c58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x415c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_415c5c:
    // 0x415c5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x415c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415c60:
    // 0x415c60: 0x10000015  b           . + 4 + (0x15 << 2)
label_415c64:
    if (ctx->pc == 0x415C64u) {
        ctx->pc = 0x415C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C60u;
        // 0x415c64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C68u;
        goto label_415c68;
    }
    ctx->pc = 0x415C60u;
    {
        const bool branch_taken_0x415c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C60u;
        // 0x415c64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415c60) {
            ctx->pc = 0x415CB8u;
            goto label_415cb8;
        }
    }
    ctx->pc = 0x415C68u;
label_415c68:
    // 0x415c68: 0xc105774  jal         func_415DD0
label_415c6c:
    if (ctx->pc == 0x415C6Cu) {
        ctx->pc = 0x415C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C68u;
        // 0x415c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C70u;
        goto label_415c70;
    }
    ctx->pc = 0x415C68u;
    SET_GPR_U32(ctx, 31, 0x415C70u);
    ctx->pc = 0x415C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415C68u;
    // 0x415c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x415C68u, 0x415C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415C70u;
label_415c70:
    // 0x415c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x415c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415c74:
    // 0x415c74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x415c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_415c78:
    // 0x415c78: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x415c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_415c7c:
    // 0x415c7c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x415c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_415c80:
    // 0x415c80: 0x40f809  jalr        $v0
label_415c84:
    if (ctx->pc == 0x415C84u) {
        ctx->pc = 0x415C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C80u;
        // 0x415c84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C88u;
        goto label_415c88;
    }
    ctx->pc = 0x415C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415C88u);
        ctx->pc = 0x415C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C80u;
        // 0x415c84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415C80u, 0x415C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415C88u;
label_415c88:
    // 0x415c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x415c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415c8c:
    // 0x415c8c: 0xc10c313  jal         func_430C4C
label_415c90:
    if (ctx->pc == 0x415C90u) {
        ctx->pc = 0x415C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C8Cu;
        // 0x415c90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C94u;
        goto label_415c94;
    }
    ctx->pc = 0x415C8Cu;
    SET_GPR_U32(ctx, 31, 0x415C94u);
    ctx->pc = 0x415C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415C8Cu;
    // 0x415c90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x415C8Cu, 0x415C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415C94u;
label_415c94:
    // 0x415c94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_415c98:
    if (ctx->pc == 0x415C98u) {
        ctx->pc = 0x415C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C94u;
        // 0x415c98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C9Cu;
        goto label_415c9c;
    }
    ctx->pc = 0x415C94u;
    {
        const bool branch_taken_0x415c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C94u;
        // 0x415c98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415c94) {
            ctx->pc = 0x415CB8u;
            goto label_415cb8;
        }
    }
    ctx->pc = 0x415C9Cu;
label_415c9c:
    // 0x415c9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x415c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_415ca0:
    // 0x415ca0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x415ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_415ca4:
    // 0x415ca4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x415ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_415ca8:
    // 0x415ca8: 0x40f809  jalr        $v0
label_415cac:
    if (ctx->pc == 0x415CACu) {
        ctx->pc = 0x415CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CA8u;
        // 0x415cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415CB0u;
        goto label_415cb0;
    }
    ctx->pc = 0x415CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415CB0u);
        ctx->pc = 0x415CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CA8u;
        // 0x415cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415CA8u, 0x415CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415CB0u;
label_415cb0:
    // 0x415cb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_415cb4:
    if (ctx->pc == 0x415CB4u) {
        ctx->pc = 0x415CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CB0u;
        // 0x415cb4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415CB8u;
        goto label_415cb8;
    }
    ctx->pc = 0x415CB0u;
    {
        const bool branch_taken_0x415cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CB0u;
        // 0x415cb4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415cb0) {
            ctx->pc = 0x415CD4u;
            goto label_415cd4;
        }
    }
    ctx->pc = 0x415CB8u;
label_415cb8:
    // 0x415cb8: 0xc10574c  jal         func_415D30
label_415cbc:
    if (ctx->pc == 0x415CBCu) {
        ctx->pc = 0x415CC0u;
        goto label_415cc0;
    }
    ctx->pc = 0x415CB8u;
    SET_GPR_U32(ctx, 31, 0x415CC0u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x415CB8u, 0x415CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415CC0u;
label_415cc0:
    // 0x415cc0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x415cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_415cc4:
    // 0x415cc4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_415cc8:
    if (ctx->pc == 0x415CC8u) {
        ctx->pc = 0x415CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CC4u;
        // 0x415cc8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415CCCu;
        goto label_415ccc;
    }
    ctx->pc = 0x415CC4u;
    {
        const bool branch_taken_0x415cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CC4u;
        // 0x415cc8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415cc4) {
            ctx->pc = 0x415C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415c68;
        }
    }
    ctx->pc = 0x415CCCu;
label_415ccc:
    // 0x415ccc: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x415cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_415cd0:
    // 0x415cd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x415cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415cd4:
    // 0x415cd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x415cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415cd8:
    // 0x415cd8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x415cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415cdc:
    // 0x415cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_415ce0:
    // 0x415ce0: 0x3e00008  jr          $ra
label_415ce4:
    if (ctx->pc == 0x415CE4u) {
        ctx->pc = 0x415CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CE0u;
        // 0x415ce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415CE8u;
        goto label_fallthrough_0x415ce0;
    }
    ctx->pc = 0x415CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415CE0u;
        // 0x415ce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x415ce0:
    ctx->pc = 0x415CE8u;
}
