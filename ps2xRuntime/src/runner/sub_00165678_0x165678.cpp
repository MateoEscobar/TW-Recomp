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

// Function: sub_00165678
// Address: 0x165678 - 0x165738
void sub_00165678_0x165678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165678_0x165678");
#endif

    switch (ctx->pc) {
        case 0x1656a0u: goto label_1656a0;
        case 0x1656b4u: goto label_1656b4;
        case 0x1656e4u: goto label_1656e4;
        case 0x1656f4u: goto label_1656f4;
        case 0x165714u: goto label_165714;
        default: break;
    }

    ctx->pc = 0x165678u;

    // 0x165678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16567c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x165680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x165680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165684: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x165684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x165688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16568c: 0x26640044  addiu       $a0, $s3, 0x44
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x165690: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x165690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x165694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165698: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165698u;
    SET_GPR_U32(ctx, 31, 0x1656A0u);
    ctx->pc = 0x16569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165698u;
    // 0x16569c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165698u, 0x1656A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656A0u;
label_1656a0:
    // 0x1656a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1656a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656a4: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1656A4u;
    {
        const bool branch_taken_0x1656a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656a4) {
            ctx->pc = 0x1656A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656A4u;
            // 0x1656a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1656C0u;
            goto label_1656c0;
        }
    }
    ctx->pc = 0x1656ACu;
    // 0x1656ac: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x1656ACu;
    SET_GPR_U32(ctx, 31, 0x1656B4u);
    ctx->pc = 0x1656B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656ACu;
    // 0x1656b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x1656ACu, 0x1656B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656B4u;
label_1656b4:
    // 0x1656b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1656b8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1656B8u;
    {
        const bool branch_taken_0x1656b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1656b8) {
            ctx->pc = 0x1656BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656B8u;
            // 0x1656bc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1656C0u;
            goto label_1656c0;
        }
    }
    ctx->pc = 0x1656C0u;
label_1656c0:
    // 0x1656c0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1656C0u;
    {
        const bool branch_taken_0x1656c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656C0u;
        // 0x1656c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656c0) {
            ctx->pc = 0x165704u;
            goto label_165704;
        }
    }
    ctx->pc = 0x1656C8u;
    // 0x1656c8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x1656c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1656cc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1656ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1656d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1656D0u;
    {
        const bool branch_taken_0x1656d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656D0u;
        // 0x1656d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656d0) {
            ctx->pc = 0x165704u;
            goto label_165704;
        }
    }
    ctx->pc = 0x1656D8u;
    // 0x1656d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1656d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656dc: 0xc088edc  jal         func_223B70
    ctx->pc = 0x1656DCu;
    SET_GPR_U32(ctx, 31, 0x1656E4u);
    ctx->pc = 0x1656E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656DCu;
    // 0x1656e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x1656DCu, 0x1656E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656E4u;
label_1656e4:
    // 0x1656e4: 0x50510006  beql        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1656E4u;
    {
        const bool branch_taken_0x1656e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1656e4) {
            ctx->pc = 0x1656E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656E4u;
            // 0x1656e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165700u;
            goto label_165700;
        }
    }
    ctx->pc = 0x1656ECu;
    // 0x1656ec: 0xc089f98  jal         func_227E60
    ctx->pc = 0x1656ECu;
    SET_GPR_U32(ctx, 31, 0x1656F4u);
    ctx->pc = 0x1656F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656ECu;
    // 0x1656f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x1656ECu, 0x1656F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656F4u;
label_1656f4:
    // 0x1656f4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1656F4u;
    {
        const bool branch_taken_0x1656f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1656F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656F4u;
        // 0x1656f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656f4) {
            ctx->pc = 0x165704u;
            goto label_165704;
        }
    }
    ctx->pc = 0x1656FCu;
    // 0x1656fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165700:
    // 0x165700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165704:
    // 0x165704: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165704u;
    {
        const bool branch_taken_0x165704 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x165708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165704u;
        // 0x165708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165704) {
            ctx->pc = 0x16571Cu;
            goto label_16571c;
        }
    }
    ctx->pc = 0x16570Cu;
    // 0x16570c: 0xc0595ce  jal         func_165738
    ctx->pc = 0x16570Cu;
    SET_GPR_U32(ctx, 31, 0x165714u);
    ctx->pc = 0x165710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16570Cu;
    // 0x165710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165738u, 0x16570Cu, 0x165714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165714u;
label_165714:
    // 0x165714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165718: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x165718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16571c:
    // 0x16571c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16571cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165720: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x165720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165728: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x165728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16572c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16572cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165730: 0x3e00008  jr          $ra
    ctx->pc = 0x165730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165730u;
        // 0x165734: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165738u;
}
