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

// Function: sub_00239788
// Address: 0x239788 - 0x239850
void sub_00239788_0x239788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239788_0x239788");
#endif

    switch (ctx->pc) {
        case 0x2397b8u: goto label_2397b8;
        case 0x2397dcu: goto label_2397dc;
        case 0x2397e4u: goto label_2397e4;
        case 0x2397f8u: goto label_2397f8;
        case 0x23981cu: goto label_23981c;
        case 0x239824u: goto label_239824;
        default: break;
    }

    ctx->pc = 0x239788u;

    // 0x239788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23978c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x239790: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x239790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x239794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x239794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23979c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x23979cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2397a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2397a4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2397a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2397a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2397ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2397acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2397B0u;
    SET_GPR_U32(ctx, 31, 0x2397B8u);
    ctx->pc = 0x2397B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397B0u;
    // 0x2397b4: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2397B0u, 0x2397B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397B8u;
label_2397b8:
    // 0x2397b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2397B8u;
    {
        const bool branch_taken_0x2397b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397B8u;
        // 0x2397bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397b8) {
            ctx->pc = 0x2397ECu;
            goto label_2397ec;
        }
    }
    ctx->pc = 0x2397C0u;
    // 0x2397c0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2397c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2397c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2397c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2397c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2397ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2397d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397d4: 0xc08e568  jal         func_2395A0
    ctx->pc = 0x2397D4u;
    SET_GPR_U32(ctx, 31, 0x2397DCu);
    ctx->pc = 0x2397D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397D4u;
    // 0x2397d8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x2397D4u, 0x2397DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397DCu;
label_2397dc:
    // 0x2397dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2397DCu;
    SET_GPR_U32(ctx, 31, 0x2397E4u);
    ctx->pc = 0x2397E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397DCu;
    // 0x2397e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2397DCu, 0x2397E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397E4u;
label_2397e4:
    // 0x2397e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2397e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2397e8: 0xac43018c  sw          $v1, 0x18C($v0)
    ctx->pc = 0x2397e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 396), GPR_U32(ctx, 3));
label_2397ec:
    // 0x2397ec: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x2397ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2397f0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2397F0u;
    SET_GPR_U32(ctx, 31, 0x2397F8u);
    ctx->pc = 0x2397F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397F0u;
    // 0x2397f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2397F0u, 0x2397F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397F8u;
label_2397f8:
    // 0x2397f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2397F8u;
    {
        const bool branch_taken_0x2397f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397F8u;
        // 0x2397fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397f8) {
            ctx->pc = 0x23982Cu;
            goto label_23982c;
        }
    }
    ctx->pc = 0x239800u;
    // 0x239800: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x239800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x239804: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x239804u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x239808: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x239808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23980c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23980cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239810: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239814: 0xc08e568  jal         func_2395A0
    ctx->pc = 0x239814u;
    SET_GPR_U32(ctx, 31, 0x23981Cu);
    ctx->pc = 0x239818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239814u;
    // 0x239818: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x239814u, 0x23981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23981Cu;
label_23981c:
    // 0x23981c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23981Cu;
    SET_GPR_U32(ctx, 31, 0x239824u);
    ctx->pc = 0x239820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23981Cu;
    // 0x239820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23981Cu, 0x239824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239824u;
label_239824:
    // 0x239824: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x239824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239828: 0xac43018c  sw          $v1, 0x18C($v0)
    ctx->pc = 0x239828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 396), GPR_U32(ctx, 3));
label_23982c:
    // 0x23982c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23982cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239830: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x239830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23983c: 0x3e00008  jr          $ra
    ctx->pc = 0x23983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23983Cu;
        // 0x239840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239844u;
    // 0x239844: 0x0  nop
    ctx->pc = 0x239844u;
    // NOP
    // 0x239848: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x239848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23984c: 0x0  nop
    ctx->pc = 0x23984cu;
    // NOP
    ctx->pc = 0x239850u;
}
