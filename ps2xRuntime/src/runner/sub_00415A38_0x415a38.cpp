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

// Function: sub_00415A38
// Address: 0x415a38 - 0x415af0
void sub_00415A38_0x415a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415A38_0x415a38");
#endif

    switch (ctx->pc) {
        case 0x415a38u: goto label_415a38;
        case 0x415a3cu: goto label_415a3c;
        case 0x415a40u: goto label_415a40;
        case 0x415a44u: goto label_415a44;
        case 0x415a48u: goto label_415a48;
        case 0x415a4cu: goto label_415a4c;
        case 0x415a50u: goto label_415a50;
        case 0x415a54u: goto label_415a54;
        case 0x415a58u: goto label_415a58;
        case 0x415a5cu: goto label_415a5c;
        case 0x415a60u: goto label_415a60;
        case 0x415a64u: goto label_415a64;
        case 0x415a68u: goto label_415a68;
        case 0x415a6cu: goto label_415a6c;
        case 0x415a70u: goto label_415a70;
        case 0x415a74u: goto label_415a74;
        case 0x415a78u: goto label_415a78;
        case 0x415a7cu: goto label_415a7c;
        case 0x415a80u: goto label_415a80;
        case 0x415a84u: goto label_415a84;
        case 0x415a88u: goto label_415a88;
        case 0x415a8cu: goto label_415a8c;
        case 0x415a90u: goto label_415a90;
        case 0x415a94u: goto label_415a94;
        case 0x415a98u: goto label_415a98;
        case 0x415a9cu: goto label_415a9c;
        case 0x415aa0u: goto label_415aa0;
        case 0x415aa4u: goto label_415aa4;
        case 0x415aa8u: goto label_415aa8;
        case 0x415aacu: goto label_415aac;
        case 0x415ab0u: goto label_415ab0;
        case 0x415ab4u: goto label_415ab4;
        case 0x415ab8u: goto label_415ab8;
        case 0x415abcu: goto label_415abc;
        case 0x415ac0u: goto label_415ac0;
        case 0x415ac4u: goto label_415ac4;
        case 0x415ac8u: goto label_415ac8;
        case 0x415accu: goto label_415acc;
        case 0x415ad0u: goto label_415ad0;
        case 0x415ad4u: goto label_415ad4;
        case 0x415ad8u: goto label_415ad8;
        case 0x415adcu: goto label_415adc;
        case 0x415ae0u: goto label_415ae0;
        case 0x415ae4u: goto label_415ae4;
        case 0x415ae8u: goto label_415ae8;
        case 0x415aecu: goto label_415aec;
        default: break;
    }

    ctx->pc = 0x415a38u;

label_415a38:
    // 0x415a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x415a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_415a3c:
    // 0x415a3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x415a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_415a40:
    // 0x415a40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x415a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_415a44:
    // 0x415a44: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x415a44u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_415a48:
    // 0x415a48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x415a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_415a4c:
    // 0x415a4c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x415a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_415a50:
    // 0x415a50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x415a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_415a54:
    // 0x415a54: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x415a54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_415a58:
    // 0x415a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_415a5c:
    // 0x415a5c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x415a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415a60:
    // 0x415a60: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x415a60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_415a64:
    // 0x415a64: 0x26109508  addiu       $s0, $s0, -0x6AF8
    ctx->pc = 0x415a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939912));
label_415a68:
    // 0x415a68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x415a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_415a6c:
    // 0x415a6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x415a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415a70:
    // 0x415a70: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x415a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_415a74:
    // 0x415a74: 0x24070169  addiu       $a3, $zero, 0x169
    ctx->pc = 0x415a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
label_415a78:
    // 0x415a78: 0x8c45485c  lw          $a1, 0x485C($v0)
    ctx->pc = 0x415a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18524)));
label_415a7c:
    // 0x415a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x415a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415a80:
    // 0x415a80: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x415a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_415a84:
    // 0x415a84: 0x8c68005c  lw          $t0, 0x5C($v1)
    ctx->pc = 0x415a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_415a88:
    // 0x415a88: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x415a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_415a8c:
    // 0x415a8c: 0xad604858  sw          $zero, 0x4858($t3)
    ctx->pc = 0x415a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 18520), GPR_U32(ctx, 0));
label_415a90:
    // 0x415a90: 0x100f809  jalr        $t0
label_415a94:
    if (ctx->pc == 0x415A94u) {
        ctx->pc = 0x415A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A90u;
        // 0x415a94: 0xad204854  sw          $zero, 0x4854($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 18516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A98u;
        goto label_415a98;
    }
    ctx->pc = 0x415A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x415A98u);
        ctx->pc = 0x415A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A90u;
        // 0x415a94: 0xad204854  sw          $zero, 0x4854($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 18516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415A90u, 0x415A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415A98u;
label_415a98:
    // 0x415a98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x415a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_415a9c:
    // 0x415a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415aa0:
    // 0x415aa0: 0x8c444860  lw          $a0, 0x4860($v0)
    ctx->pc = 0x415aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18528)));
label_415aa4:
    // 0x415aa4: 0xc13d882  jal         func_4F6208
label_415aa8:
    if (ctx->pc == 0x415AA8u) {
        ctx->pc = 0x415AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AA4u;
        // 0x415aa8: 0x2406016c  addiu       $a2, $zero, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AACu;
        goto label_415aac;
    }
    ctx->pc = 0x415AA4u;
    SET_GPR_U32(ctx, 31, 0x415AACu);
    ctx->pc = 0x415AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415AA4u;
    // 0x415aa8: 0x2406016c  addiu       $a2, $zero, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6208u, 0x415AA4u, 0x415AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415AACu;
label_415aac:
    // 0x415aac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x415aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_415ab0:
    // 0x415ab0: 0x2450d870  addiu       $s0, $v0, -0x2790
    ctx->pc = 0x415ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
label_415ab4:
    // 0x415ab4: 0x0  nop
    ctx->pc = 0x415ab4u;
    // NOP
label_415ab8:
    // 0x415ab8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x415ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_415abc:
    // 0x415abc: 0x26459508  addiu       $a1, $s2, -0x6AF8
    ctx->pc = 0x415abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939912));
label_415ac0:
    // 0x415ac0: 0x24060172  addiu       $a2, $zero, 0x172
    ctx->pc = 0x415ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_415ac4:
    // 0x415ac4: 0xc13d894  jal         func_4F6250
label_415ac8:
    if (ctx->pc == 0x415AC8u) {
        ctx->pc = 0x415AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AC4u;
        // 0x415ac8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415ACCu;
        goto label_415acc;
    }
    ctx->pc = 0x415AC4u;
    SET_GPR_U32(ctx, 31, 0x415ACCu);
    ctx->pc = 0x415AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415AC4u;
    // 0x415ac8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6250u, 0x415AC4u, 0x415ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415ACCu;
label_415acc:
    // 0x415acc: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x415accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_415ad0:
    // 0x415ad0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_415ad4:
    if (ctx->pc == 0x415AD4u) {
        ctx->pc = 0x415AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AD0u;
        // 0x415ad4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AD8u;
        goto label_415ad8;
    }
    ctx->pc = 0x415AD0u;
    {
        const bool branch_taken_0x415ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AD0u;
        // 0x415ad4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ad0) {
            ctx->pc = 0x415AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415ab8;
        }
    }
    ctx->pc = 0x415AD8u;
label_415ad8:
    // 0x415ad8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x415ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415adc:
    // 0x415adc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x415adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415ae0:
    // 0x415ae0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x415ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415ae4:
    // 0x415ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_415ae8:
    // 0x415ae8: 0x3e00008  jr          $ra
label_415aec:
    if (ctx->pc == 0x415AECu) {
        ctx->pc = 0x415AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AE8u;
        // 0x415aec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AF0u;
        goto label_fallthrough_0x415ae8;
    }
    ctx->pc = 0x415AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AE8u;
        // 0x415aec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x415ae8:
    ctx->pc = 0x415AF0u;
}
