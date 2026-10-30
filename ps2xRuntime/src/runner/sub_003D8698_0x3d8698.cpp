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

// Function: sub_003D8698
// Address: 0x3d8698 - 0x3d8730
void sub_003D8698_0x3d8698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8698_0x3d8698");
#endif

    switch (ctx->pc) {
        case 0x3d8698u: goto label_3d8698;
        case 0x3d869cu: goto label_3d869c;
        case 0x3d86a0u: goto label_3d86a0;
        case 0x3d86a4u: goto label_3d86a4;
        case 0x3d86a8u: goto label_3d86a8;
        case 0x3d86acu: goto label_3d86ac;
        case 0x3d86b0u: goto label_3d86b0;
        case 0x3d86b4u: goto label_3d86b4;
        case 0x3d86b8u: goto label_3d86b8;
        case 0x3d86bcu: goto label_3d86bc;
        case 0x3d86c0u: goto label_3d86c0;
        case 0x3d86c4u: goto label_3d86c4;
        case 0x3d86c8u: goto label_3d86c8;
        case 0x3d86ccu: goto label_3d86cc;
        case 0x3d86d0u: goto label_3d86d0;
        case 0x3d86d4u: goto label_3d86d4;
        case 0x3d86d8u: goto label_3d86d8;
        case 0x3d86dcu: goto label_3d86dc;
        case 0x3d86e0u: goto label_3d86e0;
        case 0x3d86e4u: goto label_3d86e4;
        case 0x3d86e8u: goto label_3d86e8;
        case 0x3d86ecu: goto label_3d86ec;
        case 0x3d86f0u: goto label_3d86f0;
        case 0x3d86f4u: goto label_3d86f4;
        case 0x3d86f8u: goto label_3d86f8;
        case 0x3d86fcu: goto label_3d86fc;
        case 0x3d8700u: goto label_3d8700;
        case 0x3d8704u: goto label_3d8704;
        case 0x3d8708u: goto label_3d8708;
        case 0x3d870cu: goto label_3d870c;
        case 0x3d8710u: goto label_3d8710;
        case 0x3d8714u: goto label_3d8714;
        case 0x3d8718u: goto label_3d8718;
        case 0x3d871cu: goto label_3d871c;
        case 0x3d8720u: goto label_3d8720;
        case 0x3d8724u: goto label_3d8724;
        case 0x3d8728u: goto label_3d8728;
        case 0x3d872cu: goto label_3d872c;
        default: break;
    }

    ctx->pc = 0x3d8698u;

label_3d8698:
    // 0x3d8698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d8698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d869c:
    // 0x3d869c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d86a0:
    // 0x3d86a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d86a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d86a4:
    // 0x3d86a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d86a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d86a8:
    // 0x3d86a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d86a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d86ac:
    // 0x3d86ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d86acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d86b0:
    // 0x3d86b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d86b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3d86b4:
    // 0x3d86b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d86b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d86b8:
    // 0x3d86b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d86b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d86bc:
    // 0x3d86bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d86c0:
    // 0x3d86c0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d86c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d86c4:
    // 0x3d86c4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d86c8:
    // 0x3d86c8: 0x40f809  jalr        $v0
label_3d86cc:
    if (ctx->pc == 0x3D86CCu) {
        ctx->pc = 0x3D86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86C8u;
        // 0x3d86cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D86D0u;
        goto label_3d86d0;
    }
    ctx->pc = 0x3D86C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D86D0u);
        ctx->pc = 0x3D86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86C8u;
        // 0x3d86cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D86C8u, 0x3D86D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D86D0u;
label_3d86d0:
    // 0x3d86d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d86d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d86d4:
    // 0x3d86d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3d86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d86d8:
    // 0x3d86d8: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_3d86dc:
    if (ctx->pc == 0x3D86DCu) {
        ctx->pc = 0x3D86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86D8u;
        // 0x3d86dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D86E0u;
        goto label_3d86e0;
    }
    ctx->pc = 0x3D86D8u;
    {
        const bool branch_taken_0x3d86d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86D8u;
        // 0x3d86dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d86d8) {
            ctx->pc = 0x3D8718u;
            goto label_3d8718;
        }
    }
    ctx->pc = 0x3D86E0u;
label_3d86e0:
    // 0x3d86e0: 0xc0ea146  jal         func_3A8518
label_3d86e4:
    if (ctx->pc == 0x3D86E4u) {
        ctx->pc = 0x3D86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86E0u;
        // 0x3d86e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D86E8u;
        goto label_3d86e8;
    }
    ctx->pc = 0x3D86E0u;
    SET_GPR_U32(ctx, 31, 0x3D86E8u);
    ctx->pc = 0x3D86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D86E0u;
    // 0x3d86e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D86E0u, 0x3D86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D86E8u;
label_3d86e8:
    // 0x3d86e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3d86ec:
    if (ctx->pc == 0x3D86ECu) {
        ctx->pc = 0x3D86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86E8u;
        // 0x3d86ec: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D86F0u;
        goto label_3d86f0;
    }
    ctx->pc = 0x3D86E8u;
    {
        const bool branch_taken_0x3d86e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d86e8) {
            ctx->pc = 0x3D86ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D86E8u;
            // 0x3d86ec: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8704u;
            goto label_3d8704;
        }
    }
    ctx->pc = 0x3D86F0u;
label_3d86f0:
    // 0x3d86f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d86f4:
    // 0x3d86f4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3d86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3d86f8:
    // 0x3d86f8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d86fc:
    // 0x3d86fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d8700:
    if (ctx->pc == 0x3D8700u) {
        ctx->pc = 0x3D8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86FCu;
        // 0x3d8700: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8704u;
        goto label_3d8704;
    }
    ctx->pc = 0x3D86FCu;
    {
        const bool branch_taken_0x3d86fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86FCu;
        // 0x3d8700: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d86fc) {
            ctx->pc = 0x3D8710u;
            goto label_3d8710;
        }
    }
    ctx->pc = 0x3D8704u;
label_3d8704:
    // 0x3d8704: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d8708:
    // 0x3d8708: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d8708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d870c:
    // 0x3d870c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3d870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3d8710:
    // 0x3d8710: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d8710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d8714:
    // 0x3d8714: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d8714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8718:
    // 0x3d8718: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d8718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d871c:
    // 0x3d871c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d871cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8720:
    // 0x3d8720: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d8720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8724:
    // 0x3d8724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8728:
    // 0x3d8728: 0x3e00008  jr          $ra
label_3d872c:
    if (ctx->pc == 0x3D872Cu) {
        ctx->pc = 0x3D872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8728u;
        // 0x3d872c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8730u;
        goto label_fallthrough_0x3d8728;
    }
    ctx->pc = 0x3D8728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8728u;
        // 0x3d872c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d8728:
    ctx->pc = 0x3D8730u;
}
