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

// Function: sub_00373788
// Address: 0x373788 - 0x373808
void sub_00373788_0x373788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373788_0x373788");
#endif

    switch (ctx->pc) {
        case 0x3737a8u: goto label_3737a8;
        case 0x3737b0u: goto label_3737b0;
        case 0x3737bcu: goto label_3737bc;
        case 0x3737c8u: goto label_3737c8;
        case 0x3737e0u: goto label_3737e0;
        case 0x3737ecu: goto label_3737ec;
        default: break;
    }

    ctx->pc = 0x373788u;

    // 0x373788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37378c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373798: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37379c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3737a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3737A0u;
    SET_GPR_U32(ctx, 31, 0x3737A8u);
    ctx->pc = 0x3737A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737A0u;
    // 0x3737a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3737A0u, 0x3737A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737A8u;
label_3737a8:
    // 0x3737a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3737A8u;
    SET_GPR_U32(ctx, 31, 0x3737B0u);
    ctx->pc = 0x3737ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737A8u;
    // 0x3737ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3737A8u, 0x3737B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737B0u;
label_3737b0:
    // 0x3737b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3737b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3737b4: 0xc05a95e  jal         func_16A578
    ctx->pc = 0x3737B4u;
    SET_GPR_U32(ctx, 31, 0x3737BCu);
    ctx->pc = 0x3737B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737B4u;
    // 0x3737b8: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A578u, 0x3737B4u, 0x3737BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737BCu;
label_3737bc:
    // 0x3737bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3737bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737c0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3737C0u;
    SET_GPR_U32(ctx, 31, 0x3737C8u);
    ctx->pc = 0x3737C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737C0u;
    // 0x3737c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3737C0u, 0x3737C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737C8u;
label_3737c8:
    // 0x3737c8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3737C8u;
    {
        const bool branch_taken_0x3737c8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3737CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3737C8u;
        // 0x3737cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3737c8) {
            ctx->pc = 0x3737E4u;
            goto label_3737e4;
        }
    }
    ctx->pc = 0x3737D0u;
    // 0x3737d0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3737d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3737d4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3737d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3737d8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3737D8u;
    SET_GPR_U32(ctx, 31, 0x3737E0u);
    ctx->pc = 0x3737DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737D8u;
    // 0x3737dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3737D8u, 0x3737E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737E0u;
label_3737e0:
    // 0x3737e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3737e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3737e4:
    // 0x3737e4: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3737E4u;
    SET_GPR_U32(ctx, 31, 0x3737ECu);
    ctx->pc = 0x3737E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737E4u;
    // 0x3737e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3737E4u, 0x3737ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737ECu;
label_3737ec:
    // 0x3737ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3737ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3737f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3737f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3737f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3737f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3737f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3737f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3737fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3737FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3737FCu;
        // 0x373800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3737FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373804u;
    // 0x373804: 0x0  nop
    ctx->pc = 0x373804u;
    // NOP
    ctx->pc = 0x373808u;
}
