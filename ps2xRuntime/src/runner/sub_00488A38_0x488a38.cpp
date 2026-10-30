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

// Function: sub_00488A38
// Address: 0x488a38 - 0x488ad8
void sub_00488A38_0x488a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488A38_0x488a38");
#endif

    switch (ctx->pc) {
        case 0x488a38u: goto label_488a38;
        case 0x488a3cu: goto label_488a3c;
        case 0x488a40u: goto label_488a40;
        case 0x488a44u: goto label_488a44;
        case 0x488a48u: goto label_488a48;
        case 0x488a4cu: goto label_488a4c;
        case 0x488a50u: goto label_488a50;
        case 0x488a54u: goto label_488a54;
        case 0x488a58u: goto label_488a58;
        case 0x488a5cu: goto label_488a5c;
        case 0x488a60u: goto label_488a60;
        case 0x488a64u: goto label_488a64;
        case 0x488a68u: goto label_488a68;
        case 0x488a6cu: goto label_488a6c;
        case 0x488a70u: goto label_488a70;
        case 0x488a74u: goto label_488a74;
        case 0x488a78u: goto label_488a78;
        case 0x488a7cu: goto label_488a7c;
        case 0x488a80u: goto label_488a80;
        case 0x488a84u: goto label_488a84;
        case 0x488a88u: goto label_488a88;
        case 0x488a8cu: goto label_488a8c;
        case 0x488a90u: goto label_488a90;
        case 0x488a94u: goto label_488a94;
        case 0x488a98u: goto label_488a98;
        case 0x488a9cu: goto label_488a9c;
        case 0x488aa0u: goto label_488aa0;
        case 0x488aa4u: goto label_488aa4;
        case 0x488aa8u: goto label_488aa8;
        case 0x488aacu: goto label_488aac;
        case 0x488ab0u: goto label_488ab0;
        case 0x488ab4u: goto label_488ab4;
        case 0x488ab8u: goto label_488ab8;
        case 0x488abcu: goto label_488abc;
        case 0x488ac0u: goto label_488ac0;
        case 0x488ac4u: goto label_488ac4;
        case 0x488ac8u: goto label_488ac8;
        case 0x488accu: goto label_488acc;
        case 0x488ad0u: goto label_488ad0;
        case 0x488ad4u: goto label_488ad4;
        default: break;
    }

    ctx->pc = 0x488a38u;

label_488a38:
    // 0x488a38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x488a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_488a3c:
    // 0x488a3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x488a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_488a40:
    // 0x488a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_488a44:
    // 0x488a44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x488a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_488a48:
    // 0x488a48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x488a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488a4c:
    // 0x488a4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x488a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_488a50:
    // 0x488a50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_488a54:
    // 0x488a54: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x488a54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_488a58:
    // 0x488a58: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x488a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_488a5c:
    // 0x488a5c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x488a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_488a60:
    // 0x488a60: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x488a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_488a64:
    // 0x488a64: 0x40f809  jalr        $v0
label_488a68:
    if (ctx->pc == 0x488A68u) {
        ctx->pc = 0x488A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A64u;
        // 0x488a68: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488A6Cu;
        goto label_488a6c;
    }
    ctx->pc = 0x488A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488A6Cu);
        ctx->pc = 0x488A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A64u;
        // 0x488a68: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488A64u, 0x488A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488A6Cu;
label_488a6c:
    // 0x488a6c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x488a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_488a70:
    // 0x488a70: 0x40f809  jalr        $v0
label_488a74:
    if (ctx->pc == 0x488A74u) {
        ctx->pc = 0x488A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A70u;
        // 0x488a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488A78u;
        goto label_488a78;
    }
    ctx->pc = 0x488A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488A78u);
        ctx->pc = 0x488A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A70u;
        // 0x488a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488A70u, 0x488A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488A78u;
label_488a78:
    // 0x488a78: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x488a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_488a7c:
    // 0x488a7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_488a80:
    if (ctx->pc == 0x488A80u) {
        ctx->pc = 0x488A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A7Cu;
        // 0x488a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488A84u;
        goto label_488a84;
    }
    ctx->pc = 0x488A7Cu;
    {
        const bool branch_taken_0x488a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x488A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A7Cu;
        // 0x488a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488a7c) {
            ctx->pc = 0x488AB8u;
            goto label_488ab8;
        }
    }
    ctx->pc = 0x488A84u;
label_488a84:
    // 0x488a84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x488a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_488a88:
    // 0x488a88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x488a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_488a8c:
    // 0x488a8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x488a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_488a90:
    // 0x488a90: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x488a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_488a94:
    // 0x488a94: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x488a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_488a98:
    // 0x488a98: 0x80a8001f  lb          $t0, 0x1F($a1)
    ctx->pc = 0x488a98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_488a9c:
    // 0x488a9c: 0xc11eff2  jal         func_47BFC8
label_488aa0:
    if (ctx->pc == 0x488AA0u) {
        ctx->pc = 0x488AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A9Cu;
        // 0x488aa0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x488AA4u;
        goto label_488aa4;
    }
    ctx->pc = 0x488A9Cu;
    SET_GPR_U32(ctx, 31, 0x488AA4u);
    ctx->pc = 0x488AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488A9Cu;
    // 0x488aa0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x488A9Cu, 0x488AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488AA4u;
label_488aa4:
    // 0x488aa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x488aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_488aa8:
    // 0x488aa8: 0xc11f024  jal         func_47C090
label_488aac:
    if (ctx->pc == 0x488AACu) {
        ctx->pc = 0x488AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488AA8u;
        // 0x488aac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488AB0u;
        goto label_488ab0;
    }
    ctx->pc = 0x488AA8u;
    SET_GPR_U32(ctx, 31, 0x488AB0u);
    ctx->pc = 0x488AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488AA8u;
    // 0x488aac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x488AA8u, 0x488AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488AB0u;
label_488ab0:
    // 0x488ab0: 0xa240002f  sb          $zero, 0x2F($s2)
    ctx->pc = 0x488ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 0));
label_488ab4:
    // 0x488ab4: 0x0  nop
    ctx->pc = 0x488ab4u;
    // NOP
label_488ab8:
    // 0x488ab8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x488ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_488abc:
    // 0x488abc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x488abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_488ac0:
    // 0x488ac0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x488ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488ac4:
    // 0x488ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488ac8:
    // 0x488ac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_488acc:
    // 0x488acc: 0x3e00008  jr          $ra
label_488ad0:
    if (ctx->pc == 0x488AD0u) {
        ctx->pc = 0x488AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488ACCu;
        // 0x488ad0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488AD4u;
        goto label_488ad4;
    }
    ctx->pc = 0x488ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488ACCu;
        // 0x488ad0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488AD4u;
label_488ad4:
    // 0x488ad4: 0x0  nop
    ctx->pc = 0x488ad4u;
    // NOP
    ctx->pc = 0x488ad8u;
}
