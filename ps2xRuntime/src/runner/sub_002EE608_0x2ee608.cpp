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

// Function: sub_002EE608
// Address: 0x2ee608 - 0x2ee6e0
void sub_002EE608_0x2ee608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE608_0x2ee608");
#endif

    switch (ctx->pc) {
        case 0x2ee63cu: goto label_2ee63c;
        case 0x2ee658u: goto label_2ee658;
        case 0x2ee66cu: goto label_2ee66c;
        case 0x2ee67cu: goto label_2ee67c;
        case 0x2ee690u: goto label_2ee690;
        case 0x2ee6c4u: goto label_2ee6c4;
        default: break;
    }

    ctx->pc = 0x2ee608u;

    // 0x2ee608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ee608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ee60c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ee60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ee610: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ee610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ee614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee61c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ee61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ee620: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ee620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ee624: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x2ee624u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ee628: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ee628u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee62c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ee62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2ee630: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ee630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ee634: 0xc089998  jal         func_226660
    ctx->pc = 0x2EE634u;
    SET_GPR_U32(ctx, 31, 0x2EE63Cu);
    ctx->pc = 0x2EE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE634u;
    // 0x2ee638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EE634u, 0x2EE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE63Cu;
label_2ee63c:
    // 0x2ee63c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EE63Cu;
    {
        const bool branch_taken_0x2ee63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee63c) {
            ctx->pc = 0x2EE640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE63Cu;
            // 0x2ee640: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE684u;
            goto label_2ee684;
        }
    }
    ctx->pc = 0x2EE644u;
    // 0x2ee644: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EE644u;
    {
        const bool branch_taken_0x2ee644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE644u;
        // 0x2ee648: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee644) {
            ctx->pc = 0x2EE6C4u;
            goto label_2ee6c4;
        }
    }
    ctx->pc = 0x2EE64Cu;
    // 0x2ee64c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ee64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ee650: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2EE650u;
    SET_GPR_U32(ctx, 31, 0x2EE658u);
    ctx->pc = 0x2EE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE650u;
    // 0x2ee654: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EE650u, 0x2EE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE658u;
label_2ee658:
    // 0x2ee658: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2ee658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2ee65c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EE65Cu;
    {
        const bool branch_taken_0x2ee65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE65Cu;
        // 0x2ee660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee65c) {
            ctx->pc = 0x2EE6C4u;
            goto label_2ee6c4;
        }
    }
    ctx->pc = 0x2EE664u;
    // 0x2ee664: 0xc0bb93c  jal         func_2EE4F0
    ctx->pc = 0x2EE664u;
    SET_GPR_U32(ctx, 31, 0x2EE66Cu);
    ctx->pc = 0x2EE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE664u;
    // 0x2ee668: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F0u, 0x2EE664u, 0x2EE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE66Cu;
label_2ee66c:
    // 0x2ee66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee670: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ee670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee674: 0xc0bb8f4  jal         func_2EE3D0
    ctx->pc = 0x2EE674u;
    SET_GPR_U32(ctx, 31, 0x2EE67Cu);
    ctx->pc = 0x2EE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE674u;
    // 0x2ee678: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE3D0u, 0x2EE674u, 0x2EE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE67Cu;
label_2ee67c:
    // 0x2ee67c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE67Cu;
    {
        const bool branch_taken_0x2ee67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE67Cu;
        // 0x2ee680: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee67c) {
            ctx->pc = 0x2EE6C8u;
            goto label_2ee6c8;
        }
    }
    ctx->pc = 0x2EE684u;
label_2ee684:
    // 0x2ee684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ee684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee688: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2EE688u;
    SET_GPR_U32(ctx, 31, 0x2EE690u);
    ctx->pc = 0x2EE68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE688u;
    // 0x2ee68c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2EE688u, 0x2EE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE690u;
label_2ee690:
    // 0x2ee690: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE690u;
    {
        const bool branch_taken_0x2ee690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee690) {
            ctx->pc = 0x2EE694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE690u;
            // 0x2ee694: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6C8u;
            goto label_2ee6c8;
        }
    }
    ctx->pc = 0x2EE698u;
    // 0x2ee698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ee698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ee69c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee6a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ee6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ee6a4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ee6a4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ee6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2ee6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ee6b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee6b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ee6b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6bc: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2EE6BCu;
    SET_GPR_U32(ctx, 31, 0x2EE6C4u);
    ctx->pc = 0x2EE6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE6BCu;
    // 0x2ee6c0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EE6BCu, 0x2EE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6C4u;
label_2ee6c4:
    // 0x2ee6c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ee6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee6c8:
    // 0x2ee6c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ee6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee6d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ee6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6D8u;
        // 0x2ee6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE6E0u;
}
