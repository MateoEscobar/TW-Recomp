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

// Function: sub_00328A30
// Address: 0x328a30 - 0x328ad0
void sub_00328A30_0x328a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328A30_0x328a30");
#endif

    switch (ctx->pc) {
        case 0x328a30u: goto label_328a30;
        case 0x328a34u: goto label_328a34;
        case 0x328a38u: goto label_328a38;
        case 0x328a3cu: goto label_328a3c;
        case 0x328a40u: goto label_328a40;
        case 0x328a44u: goto label_328a44;
        case 0x328a48u: goto label_328a48;
        case 0x328a4cu: goto label_328a4c;
        case 0x328a50u: goto label_328a50;
        case 0x328a54u: goto label_328a54;
        case 0x328a58u: goto label_328a58;
        case 0x328a5cu: goto label_328a5c;
        case 0x328a60u: goto label_328a60;
        case 0x328a64u: goto label_328a64;
        case 0x328a68u: goto label_328a68;
        case 0x328a6cu: goto label_328a6c;
        case 0x328a70u: goto label_328a70;
        case 0x328a74u: goto label_328a74;
        case 0x328a78u: goto label_328a78;
        case 0x328a7cu: goto label_328a7c;
        case 0x328a80u: goto label_328a80;
        case 0x328a84u: goto label_328a84;
        case 0x328a88u: goto label_328a88;
        case 0x328a8cu: goto label_328a8c;
        case 0x328a90u: goto label_328a90;
        case 0x328a94u: goto label_328a94;
        case 0x328a98u: goto label_328a98;
        case 0x328a9cu: goto label_328a9c;
        case 0x328aa0u: goto label_328aa0;
        case 0x328aa4u: goto label_328aa4;
        case 0x328aa8u: goto label_328aa8;
        case 0x328aacu: goto label_328aac;
        case 0x328ab0u: goto label_328ab0;
        case 0x328ab4u: goto label_328ab4;
        case 0x328ab8u: goto label_328ab8;
        case 0x328abcu: goto label_328abc;
        case 0x328ac0u: goto label_328ac0;
        case 0x328ac4u: goto label_328ac4;
        case 0x328ac8u: goto label_328ac8;
        case 0x328accu: goto label_328acc;
        default: break;
    }

    ctx->pc = 0x328a30u;

label_328a30:
    // 0x328a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x328a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_328a34:
    // 0x328a34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x328a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_328a38:
    // 0x328a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_328a3c:
    // 0x328a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328a40:
    // 0x328a40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x328a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_328a44:
    // 0x328a44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x328a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_328a48:
    // 0x328a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_328a4c:
    // 0x328a4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x328a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_328a50:
    // 0x328a50: 0x8651000e  lh          $s1, 0xE($s2)
    ctx->pc = 0x328a50u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_328a54:
    // 0x328a54: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x328a54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_328a58:
    // 0x328a58: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x328a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_328a5c:
    // 0x328a5c: 0xc0ca1dc  jal         func_328770
label_328a60:
    if (ctx->pc == 0x328A60u) {
        ctx->pc = 0x328A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A5Cu;
        // 0x328a60: 0x26250014  addiu       $a1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A64u;
        goto label_328a64;
    }
    ctx->pc = 0x328A5Cu;
    SET_GPR_U32(ctx, 31, 0x328A64u);
    ctx->pc = 0x328A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A5Cu;
    // 0x328a60: 0x26250014  addiu       $a1, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x328A5Cu, 0x328A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A64u;
label_328a64:
    // 0x328a64: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
label_328a68:
    if (ctx->pc == 0x328A68u) {
        ctx->pc = 0x328A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A64u;
        // 0x328a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A6Cu;
        goto label_328a6c;
    }
    ctx->pc = 0x328A64u;
    {
        const bool branch_taken_0x328a64 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x328A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A64u;
        // 0x328a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a64) {
            ctx->pc = 0x328A98u;
            goto label_328a98;
        }
    }
    ctx->pc = 0x328A6Cu;
label_328a6c:
    // 0x328a6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x328a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328a70:
    // 0x328a70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x328a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328a74:
    // 0x328a74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x328a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_328a78:
    // 0x328a78: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x328a78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_328a7c:
    // 0x328a7c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x328a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_328a80:
    // 0x328a80: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x328a80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_328a84:
    // 0x328a84: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x328a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_328a88:
    // 0x328a88: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x328a88u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
label_328a8c:
    // 0x328a8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x328a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_328a90:
    // 0x328a90: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
label_328a94:
    if (ctx->pc == 0x328A94u) {
        ctx->pc = 0x328A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A90u;
        // 0x328a94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A98u;
        goto label_328a98;
    }
    ctx->pc = 0x328A90u;
    {
        const bool branch_taken_0x328a90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x328A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A90u;
        // 0x328a94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a90) {
            ctx->pc = 0x328A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328a70;
        }
    }
    ctx->pc = 0x328A98u;
label_328a98:
    // 0x328a98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x328a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_328a9c:
    // 0x328a9c: 0x40f809  jalr        $v0
label_328aa0:
    if (ctx->pc == 0x328AA0u) {
        ctx->pc = 0x328AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A9Cu;
        // 0x328aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AA4u;
        goto label_328aa4;
    }
    ctx->pc = 0x328A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328AA4u);
        ctx->pc = 0x328AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A9Cu;
        // 0x328aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328A9Cu, 0x328AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328AA4u;
label_328aa4:
    // 0x328aa4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x328aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328aa8:
    // 0x328aa8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x328aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_328aac:
    // 0x328aac: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x328aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
label_328ab0:
    // 0x328ab0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x328ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_328ab4:
    // 0x328ab4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x328ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_328ab8:
    // 0x328ab8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x328ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_328abc:
    // 0x328abc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_328ac0:
    // 0x328ac0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x328ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_328ac4:
    // 0x328ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328ac8:
    // 0x328ac8: 0x3e00008  jr          $ra
label_328acc:
    if (ctx->pc == 0x328ACCu) {
        ctx->pc = 0x328ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AC8u;
        // 0x328acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AD0u;
        goto label_fallthrough_0x328ac8;
    }
    ctx->pc = 0x328AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AC8u;
        // 0x328acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x328ac8:
    ctx->pc = 0x328AD0u;
}
