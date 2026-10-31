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

// Function: sub_002D6E10
// Address: 0x2d6e10 - 0x2d6ef0
void sub_002D6E10_0x2d6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6E10_0x2d6e10");
#endif

    switch (ctx->pc) {
        case 0x2d6e10u: goto label_2d6e10;
        case 0x2d6e14u: goto label_2d6e14;
        case 0x2d6e18u: goto label_2d6e18;
        case 0x2d6e1cu: goto label_2d6e1c;
        case 0x2d6e20u: goto label_2d6e20;
        case 0x2d6e24u: goto label_2d6e24;
        case 0x2d6e28u: goto label_2d6e28;
        case 0x2d6e2cu: goto label_2d6e2c;
        case 0x2d6e30u: goto label_2d6e30;
        case 0x2d6e34u: goto label_2d6e34;
        case 0x2d6e38u: goto label_2d6e38;
        case 0x2d6e3cu: goto label_2d6e3c;
        case 0x2d6e40u: goto label_2d6e40;
        case 0x2d6e44u: goto label_2d6e44;
        case 0x2d6e48u: goto label_2d6e48;
        case 0x2d6e4cu: goto label_2d6e4c;
        case 0x2d6e50u: goto label_2d6e50;
        case 0x2d6e54u: goto label_2d6e54;
        case 0x2d6e58u: goto label_2d6e58;
        case 0x2d6e5cu: goto label_2d6e5c;
        case 0x2d6e60u: goto label_2d6e60;
        case 0x2d6e64u: goto label_2d6e64;
        case 0x2d6e68u: goto label_2d6e68;
        case 0x2d6e6cu: goto label_2d6e6c;
        case 0x2d6e70u: goto label_2d6e70;
        case 0x2d6e74u: goto label_2d6e74;
        case 0x2d6e78u: goto label_2d6e78;
        case 0x2d6e7cu: goto label_2d6e7c;
        case 0x2d6e80u: goto label_2d6e80;
        case 0x2d6e84u: goto label_2d6e84;
        case 0x2d6e88u: goto label_2d6e88;
        case 0x2d6e8cu: goto label_2d6e8c;
        case 0x2d6e90u: goto label_2d6e90;
        case 0x2d6e94u: goto label_2d6e94;
        case 0x2d6e98u: goto label_2d6e98;
        case 0x2d6e9cu: goto label_2d6e9c;
        case 0x2d6ea0u: goto label_2d6ea0;
        case 0x2d6ea4u: goto label_2d6ea4;
        case 0x2d6ea8u: goto label_2d6ea8;
        case 0x2d6eacu: goto label_2d6eac;
        case 0x2d6eb0u: goto label_2d6eb0;
        case 0x2d6eb4u: goto label_2d6eb4;
        case 0x2d6eb8u: goto label_2d6eb8;
        case 0x2d6ebcu: goto label_2d6ebc;
        case 0x2d6ec0u: goto label_2d6ec0;
        case 0x2d6ec4u: goto label_2d6ec4;
        case 0x2d6ec8u: goto label_2d6ec8;
        case 0x2d6eccu: goto label_2d6ecc;
        case 0x2d6ed0u: goto label_2d6ed0;
        case 0x2d6ed4u: goto label_2d6ed4;
        case 0x2d6ed8u: goto label_2d6ed8;
        case 0x2d6edcu: goto label_2d6edc;
        case 0x2d6ee0u: goto label_2d6ee0;
        case 0x2d6ee4u: goto label_2d6ee4;
        case 0x2d6ee8u: goto label_2d6ee8;
        case 0x2d6eecu: goto label_2d6eec;
        default: break;
    }

    ctx->pc = 0x2d6e10u;

label_2d6e10:
    // 0x2d6e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d6e14:
    // 0x2d6e14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d6e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2d6e18:
    // 0x2d6e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d6e1c:
    // 0x2d6e1c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d6e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2d6e20:
    // 0x2d6e20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d6e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2d6e24:
    // 0x2d6e24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d6e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e28:
    // 0x2d6e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6e2c:
    // 0x2d6e2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6e30:
    // 0x2d6e30: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d6e34:
    // 0x2d6e34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6e38:
    // 0x2d6e38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d6e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d6e3c:
    // 0x2d6e3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d6e40:
    // 0x2d6e40: 0x40f809  jalr        $v0
label_2d6e44:
    if (ctx->pc == 0x2D6E44u) {
        ctx->pc = 0x2D6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E40u;
        // 0x2d6e44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E48u;
        goto label_2d6e48;
    }
    ctx->pc = 0x2D6E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6E48u);
        ctx->pc = 0x2D6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E40u;
        // 0x2d6e44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6E40u, 0x2D6E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6E48u;
label_2d6e48:
    // 0x2d6e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e4c:
    // 0x2d6e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e50:
    // 0x2d6e50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2d6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2d6e54:
    // 0x2d6e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e58:
    // 0x2d6e58: 0x24520840  addiu       $s2, $v0, 0x840
    ctx->pc = 0x2d6e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_2d6e5c:
    // 0x2d6e5c: 0xc071462  jal         func_1C5188
label_2d6e60:
    if (ctx->pc == 0x2D6E60u) {
        ctx->pc = 0x2D6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E5Cu;
        // 0x2d6e60: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E64u;
        goto label_2d6e64;
    }
    ctx->pc = 0x2D6E5Cu;
    SET_GPR_U32(ctx, 31, 0x2D6E64u);
    ctx->pc = 0x2D6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E5Cu;
    // 0x2d6e60: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x2D6E5Cu, 0x2D6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E64u;
label_2d6e64:
    // 0x2d6e64: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d6e64u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2d6e68:
    // 0x2d6e68: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2d6e6c:
    if (ctx->pc == 0x2D6E6Cu) {
        ctx->pc = 0x2D6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E68u;
        // 0x2d6e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E70u;
        goto label_2d6e70;
    }
    ctx->pc = 0x2D6E68u;
    {
        const bool branch_taken_0x2d6e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E68u;
        // 0x2d6e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e68) {
            ctx->pc = 0x2D6E98u;
            goto label_2d6e98;
        }
    }
    ctx->pc = 0x2D6E70u;
label_2d6e70:
    // 0x2d6e70: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x2d6e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_2d6e74:
    // 0x2d6e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e78:
    // 0x2d6e78: 0x34c680ff  ori         $a2, $a2, 0x80FF
    ctx->pc = 0x2d6e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33023);
label_2d6e7c:
    // 0x2d6e7c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2d6e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2d6e80:
    // 0x2d6e80: 0xc06ca64  jal         func_1B2990
label_2d6e84:
    if (ctx->pc == 0x2D6E84u) {
        ctx->pc = 0x2D6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E80u;
        // 0x2d6e84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E88u;
        goto label_2d6e88;
    }
    ctx->pc = 0x2D6E80u;
    SET_GPR_U32(ctx, 31, 0x2D6E88u);
    ctx->pc = 0x2D6E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E80u;
    // 0x2d6e84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x2D6E80u, 0x2D6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E88u;
label_2d6e88:
    // 0x2d6e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e8c:
    // 0x2d6e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e90:
    // 0x2d6e90: 0xc06ccb8  jal         func_1B32E0
label_2d6e94:
    if (ctx->pc == 0x2D6E94u) {
        ctx->pc = 0x2D6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E90u;
        // 0x2d6e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E98u;
        goto label_2d6e98;
    }
    ctx->pc = 0x2D6E90u;
    SET_GPR_U32(ctx, 31, 0x2D6E98u);
    ctx->pc = 0x2D6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E90u;
    // 0x2d6e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2D6E90u, 0x2D6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E98u;
label_2d6e98:
    // 0x2d6e98: 0xc089000  jal         func_224000
label_2d6e9c:
    if (ctx->pc == 0x2D6E9Cu) {
        ctx->pc = 0x2D6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E98u;
        // 0x2d6e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6EA0u;
        goto label_2d6ea0;
    }
    ctx->pc = 0x2D6E98u;
    SET_GPR_U32(ctx, 31, 0x2D6EA0u);
    ctx->pc = 0x2D6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E98u;
    // 0x2d6e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2D6E98u, 0x2D6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EA0u;
label_2d6ea0:
    // 0x2d6ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6ea4:
    // 0x2d6ea4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2d6ea8:
    if (ctx->pc == 0x2D6EA8u) {
        ctx->pc = 0x2D6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EA4u;
        // 0x2d6ea8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6EACu;
        goto label_2d6eac;
    }
    ctx->pc = 0x2D6EA4u;
    {
        const bool branch_taken_0x2d6ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d6ea4) {
            ctx->pc = 0x2D6EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6EA4u;
            // 0x2d6ea8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6EB8u;
            goto label_2d6eb8;
        }
    }
    ctx->pc = 0x2D6EACu;
label_2d6eac:
    // 0x2d6eac: 0xc095fce  jal         func_257F38
label_2d6eb0:
    if (ctx->pc == 0x2D6EB0u) {
        ctx->pc = 0x2D6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EACu;
        // 0x2d6eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6EB4u;
        goto label_2d6eb4;
    }
    ctx->pc = 0x2D6EACu;
    SET_GPR_U32(ctx, 31, 0x2D6EB4u);
    ctx->pc = 0x2D6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EACu;
    // 0x2d6eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2D6EACu, 0x2D6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EB4u;
label_2d6eb4:
    // 0x2d6eb4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6eb8:
    // 0x2d6eb8: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2d6eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2d6ebc:
    // 0x2d6ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6ec0:
    // 0x2d6ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6ec4:
    // 0x2d6ec4: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2d6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2d6ec8:
    // 0x2d6ec8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6ecc:
    // 0x2d6ecc: 0xc087612  jal         func_21D848
label_2d6ed0:
    if (ctx->pc == 0x2D6ED0u) {
        ctx->pc = 0x2D6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6ECCu;
        // 0x2d6ed0: 0xac660144  sw          $a2, 0x144($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6ED4u;
        goto label_2d6ed4;
    }
    ctx->pc = 0x2D6ECCu;
    SET_GPR_U32(ctx, 31, 0x2D6ED4u);
    ctx->pc = 0x2D6ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6ECCu;
    // 0x2d6ed0: 0xac660144  sw          $a2, 0x144($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D6ECCu, 0x2D6ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6ED4u;
label_2d6ed4:
    // 0x2d6ed4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d6ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d6ed8:
    // 0x2d6ed8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d6ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6edc:
    // 0x2d6edc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6ee0:
    // 0x2d6ee0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d6ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6ee4:
    // 0x2d6ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6ee8:
    // 0x2d6ee8: 0x3e00008  jr          $ra
label_2d6eec:
    if (ctx->pc == 0x2D6EECu) {
        ctx->pc = 0x2D6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EE8u;
        // 0x2d6eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6EF0u;
        goto label_fallthrough_0x2d6ee8;
    }
    ctx->pc = 0x2D6EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EE8u;
        // 0x2d6eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6ee8:
    ctx->pc = 0x2D6EF0u;
}
