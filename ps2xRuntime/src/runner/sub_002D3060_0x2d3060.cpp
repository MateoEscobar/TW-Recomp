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

// Function: sub_002D3060
// Address: 0x2d3060 - 0x2d3150
void sub_002D3060_0x2d3060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3060_0x2d3060");
#endif

    switch (ctx->pc) {
        case 0x2d3098u: goto label_2d3098;
        case 0x2d30e8u: goto label_2d30e8;
        case 0x2d30f8u: goto label_2d30f8;
        case 0x2d312cu: goto label_2d312c;
        default: break;
    }

    ctx->pc = 0x2d3060u;

    // 0x2d3060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d3060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d3064: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d3064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d3068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d3068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d306c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d306cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3070: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d3070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d3074: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d3074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3078: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d3078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d307c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3084: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x2d3084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d3088: 0x1072000e  beq         $v1, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2D3088u;
    {
        const bool branch_taken_0x2d3088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3088u;
        // 0x2d308c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3088) {
            ctx->pc = 0x2D30C4u;
            goto label_2d30c4;
        }
    }
    ctx->pc = 0x2D3090u;
    // 0x2d3090: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2D3090u;
    SET_GPR_U32(ctx, 31, 0x2D3098u);
    ctx->pc = 0x2D3094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3090u;
    // 0x2d3094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D3090u, 0x2D3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3098u;
label_2d3098:
    // 0x2d3098: 0x10520026  beq         $v0, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D3098u;
    {
        const bool branch_taken_0x2d3098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3098u;
        // 0x2d309c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3098) {
            ctx->pc = 0x2D3134u;
            goto label_2d3134;
        }
    }
    ctx->pc = 0x2D30A0u;
    // 0x2d30a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d30a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d30a4: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d30a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d30a8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2d30a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d30ac: 0x10520021  beq         $v0, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D30ACu;
    {
        const bool branch_taken_0x2d30ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30ACu;
        // 0x2d30b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30ac) {
            ctx->pc = 0x2D3134u;
            goto label_2d3134;
        }
    }
    ctx->pc = 0x2D30B4u;
    // 0x2d30b4: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x2d30b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2d30b8: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D30B8u;
    {
        const bool branch_taken_0x2d30b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d30b8) {
            ctx->pc = 0x2D30BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D30B8u;
            // 0x2d30bc: 0x8e220488  lw          $v0, 0x488($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D30CCu;
            goto label_2d30cc;
        }
    }
    ctx->pc = 0x2D30C0u;
    // 0x2d30c0: 0xa2120015  sb          $s2, 0x15($s0)
    ctx->pc = 0x2d30c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 18));
label_2d30c4:
    // 0x2d30c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D30C4u;
    {
        const bool branch_taken_0x2d30c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30C4u;
        // 0x2d30c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30c4) {
            ctx->pc = 0x2D3134u;
            goto label_2d3134;
        }
    }
    ctx->pc = 0x2D30CCu;
label_2d30cc:
    // 0x2d30cc: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2d30ccu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d30d0: 0x16720018  bne         $s3, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D30D0u;
    {
        const bool branch_taken_0x2d30d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30D0u;
        // 0x2d30d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30d0) {
            ctx->pc = 0x2D3134u;
            goto label_2d3134;
        }
    }
    ctx->pc = 0x2D30D8u;
    // 0x2d30d8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2d30d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2d30dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30e0: 0xc089998  jal         func_226660
    ctx->pc = 0x2D30E0u;
    SET_GPR_U32(ctx, 31, 0x2D30E8u);
    ctx->pc = 0x2D30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30E0u;
    // 0x2d30e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D30E0u, 0x2D30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30E8u;
label_2d30e8:
    // 0x2d30e8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D30E8u;
    {
        const bool branch_taken_0x2d30e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30E8u;
        // 0x2d30ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30e8) {
            ctx->pc = 0x2D3134u;
            goto label_2d3134;
        }
    }
    ctx->pc = 0x2D30F0u;
    // 0x2d30f0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D30F0u;
    SET_GPR_U32(ctx, 31, 0x2D30F8u);
    ctx->pc = 0x2D30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30F0u;
    // 0x2d30f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D30F0u, 0x2D30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30F8u;
label_2d30f8:
    // 0x2d30f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D30F8u;
    {
        const bool branch_taken_0x2d30f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30F8u;
        // 0x2d30fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30f8) {
            ctx->pc = 0x2D312Cu;
            goto label_2d312c;
        }
    }
    ctx->pc = 0x2D3100u;
    // 0x2d3100: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d3100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d3104: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d3104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d3108: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d310c: 0x92080017  lbu         $t0, 0x17($s0)
    ctx->pc = 0x2d310cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x2d3110: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d3110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2d3114: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d3114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3118: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d3118u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d311c: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x2d311cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2d3120: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3124: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2D3124u;
    SET_GPR_U32(ctx, 31, 0x2D312Cu);
    ctx->pc = 0x2D3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3124u;
    // 0x2d3128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D3124u, 0x2D312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D312Cu;
label_2d312c:
    // 0x2d312c: 0xa2130016  sb          $s3, 0x16($s0)
    ctx->pc = 0x2d312cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 19));
    // 0x2d3130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3134:
    // 0x2d3134: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d3134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3138: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d3138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d313c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d313cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3140: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d3140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3148: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3148u;
        // 0x2d314c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3150u;
}
