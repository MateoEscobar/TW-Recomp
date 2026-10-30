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

// Function: sub_00471A38
// Address: 0x471a38 - 0x471ae0
void sub_00471A38_0x471a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471A38_0x471a38");
#endif

    switch (ctx->pc) {
        case 0x471a38u: goto label_471a38;
        case 0x471a3cu: goto label_471a3c;
        case 0x471a40u: goto label_471a40;
        case 0x471a44u: goto label_471a44;
        case 0x471a48u: goto label_471a48;
        case 0x471a4cu: goto label_471a4c;
        case 0x471a50u: goto label_471a50;
        case 0x471a54u: goto label_471a54;
        case 0x471a58u: goto label_471a58;
        case 0x471a5cu: goto label_471a5c;
        case 0x471a60u: goto label_471a60;
        case 0x471a64u: goto label_471a64;
        case 0x471a68u: goto label_471a68;
        case 0x471a6cu: goto label_471a6c;
        case 0x471a70u: goto label_471a70;
        case 0x471a74u: goto label_471a74;
        case 0x471a78u: goto label_471a78;
        case 0x471a7cu: goto label_471a7c;
        case 0x471a80u: goto label_471a80;
        case 0x471a84u: goto label_471a84;
        case 0x471a88u: goto label_471a88;
        case 0x471a8cu: goto label_471a8c;
        case 0x471a90u: goto label_471a90;
        case 0x471a94u: goto label_471a94;
        case 0x471a98u: goto label_471a98;
        case 0x471a9cu: goto label_471a9c;
        case 0x471aa0u: goto label_471aa0;
        case 0x471aa4u: goto label_471aa4;
        case 0x471aa8u: goto label_471aa8;
        case 0x471aacu: goto label_471aac;
        case 0x471ab0u: goto label_471ab0;
        case 0x471ab4u: goto label_471ab4;
        case 0x471ab8u: goto label_471ab8;
        case 0x471abcu: goto label_471abc;
        case 0x471ac0u: goto label_471ac0;
        case 0x471ac4u: goto label_471ac4;
        case 0x471ac8u: goto label_471ac8;
        case 0x471accu: goto label_471acc;
        case 0x471ad0u: goto label_471ad0;
        case 0x471ad4u: goto label_471ad4;
        case 0x471ad8u: goto label_471ad8;
        case 0x471adcu: goto label_471adc;
        default: break;
    }

    ctx->pc = 0x471a38u;

label_471a38:
    // 0x471a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x471a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_471a3c:
    // 0x471a3c: 0x8f8288f8  lw          $v0, -0x7708($gp)
    ctx->pc = 0x471a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471a40:
    // 0x471a40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x471a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_471a44:
    // 0x471a44: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x471a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_471a48:
    // 0x471a48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x471a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_471a4c:
    // 0x471a4c: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x471a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_471a50:
    // 0x471a50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x471a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_471a54:
    // 0x471a54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x471a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_471a58:
    // 0x471a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_471a5c:
    // 0x471a5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x471a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471a60:
    // 0x471a60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x471a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_471a64:
    // 0x471a64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x471a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471a68:
    // 0x471a68: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x471a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_471a6c:
    // 0x471a6c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x471a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_471a70:
    // 0x471a70: 0x40f809  jalr        $v0
label_471a74:
    if (ctx->pc == 0x471A74u) {
        ctx->pc = 0x471A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471A70u;
        // 0x471a74: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x471A78u;
        goto label_471a78;
    }
    ctx->pc = 0x471A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471A78u);
        ctx->pc = 0x471A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471A70u;
        // 0x471a74: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471A70u, 0x471A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471A78u;
label_471a78:
    // 0x471a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x471a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_471a7c:
    // 0x471a7c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_471a80:
    if (ctx->pc == 0x471A80u) {
        ctx->pc = 0x471A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471A7Cu;
        // 0x471a80: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471A84u;
        goto label_471a84;
    }
    ctx->pc = 0x471A7Cu;
    {
        const bool branch_taken_0x471a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x471A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471A7Cu;
        // 0x471a80: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471a7c) {
            ctx->pc = 0x471AC8u;
            goto label_471ac8;
        }
    }
    ctx->pc = 0x471A84u;
label_471a84:
    // 0x471a84: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x471a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_471a88:
    // 0x471a88: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x471a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
label_471a8c:
    // 0x471a8c: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x471a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_471a90:
    // 0x471a90: 0x8f8288f8  lw          $v0, -0x7708($gp)
    ctx->pc = 0x471a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471a94:
    // 0x471a94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x471a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_471a98:
    // 0x471a98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x471a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471a9c:
    // 0x471a9c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x471a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_471aa0:
    // 0x471aa0: 0x8f8288f8  lw          $v0, -0x7708($gp)
    ctx->pc = 0x471aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471aa4:
    // 0x471aa4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x471aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_471aa8:
    // 0x471aa8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x471aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_471aac:
    // 0x471aac: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x471aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471ab0:
    // 0x471ab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x471ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_471ab4:
    // 0x471ab4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x471ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_471ab8:
    // 0x471ab8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x471ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_471abc:
    // 0x471abc: 0x8f8288f8  lw          $v0, -0x7708($gp)
    ctx->pc = 0x471abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471ac0:
    // 0x471ac0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x471ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_471ac4:
    // 0x471ac4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x471ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_471ac8:
    // 0x471ac8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x471ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471acc:
    // 0x471acc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x471accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471ad0:
    // 0x471ad0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x471ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471ad4:
    // 0x471ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_471ad8:
    // 0x471ad8: 0x3e00008  jr          $ra
label_471adc:
    if (ctx->pc == 0x471ADCu) {
        ctx->pc = 0x471ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471AD8u;
        // 0x471adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471AE0u;
        goto label_fallthrough_0x471ad8;
    }
    ctx->pc = 0x471AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471AD8u;
        // 0x471adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471ad8:
    ctx->pc = 0x471AE0u;
}
