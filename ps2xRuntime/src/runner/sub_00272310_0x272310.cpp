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

// Function: sub_00272310
// Address: 0x272310 - 0x2723a8
void sub_00272310_0x272310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272310_0x272310");
#endif

    switch (ctx->pc) {
        case 0x27232cu: goto label_27232c;
        case 0x272344u: goto label_272344;
        case 0x272354u: goto label_272354;
        case 0x272360u: goto label_272360;
        case 0x27236cu: goto label_27236c;
        case 0x272394u: goto label_272394;
        default: break;
    }

    ctx->pc = 0x272310u;

    // 0x272310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272318: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x272318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27231c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x272320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272324: 0xc0e409a  jal         func_390268
    ctx->pc = 0x272324u;
    SET_GPR_U32(ctx, 31, 0x27232Cu);
    ctx->pc = 0x272328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272324u;
    // 0x272328: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x272324u, 0x27232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27232Cu;
label_27232c:
    // 0x27232c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27232cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272330: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272330u;
    {
        const bool branch_taken_0x272330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x272334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272330u;
        // 0x272334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272330) {
            ctx->pc = 0x27234Cu;
            goto label_27234c;
        }
    }
    ctx->pc = 0x272338u;
    // 0x272338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27233c: 0xc08af38  jal         func_22BCE0
    ctx->pc = 0x27233Cu;
    SET_GPR_U32(ctx, 31, 0x272344u);
    ctx->pc = 0x272340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27233Cu;
    // 0x272340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x27233Cu, 0x272344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272344u;
label_272344:
    // 0x272344: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x272344u;
    {
        const bool branch_taken_0x272344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272344u;
        // 0x272348: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272344) {
            ctx->pc = 0x272398u;
            goto label_272398;
        }
    }
    ctx->pc = 0x27234Cu;
label_27234c:
    // 0x27234c: 0xc08af70  jal         func_22BDC0
    ctx->pc = 0x27234Cu;
    SET_GPR_U32(ctx, 31, 0x272354u);
    ctx->pc = 0x272350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27234Cu;
    // 0x272350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x27234Cu, 0x272354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272354u;
label_272354:
    // 0x272354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272358: 0xc08af38  jal         func_22BCE0
    ctx->pc = 0x272358u;
    SET_GPR_U32(ctx, 31, 0x272360u);
    ctx->pc = 0x27235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272358u;
    // 0x27235c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x272358u, 0x272360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272360u;
label_272360:
    // 0x272360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272364: 0xc08aff4  jal         func_22BFD0
    ctx->pc = 0x272364u;
    SET_GPR_U32(ctx, 31, 0x27236Cu);
    ctx->pc = 0x272368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272364u;
    // 0x272368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFD0u, 0x272364u, 0x27236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27236Cu;
label_27236c:
    // 0x27236c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27236cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x272370: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x272370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x272374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272378: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x272378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27237c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272380: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x272380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x272384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272384u;
    {
        const bool branch_taken_0x272384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272384u;
        // 0x272388: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272384) {
            ctx->pc = 0x272398u;
            goto label_272398;
        }
    }
    ctx->pc = 0x27238Cu;
    // 0x27238c: 0xc09c51c  jal         func_271470
    ctx->pc = 0x27238Cu;
    SET_GPR_U32(ctx, 31, 0x272394u);
    ctx->pc = 0x272390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27238Cu;
    // 0x272390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x27238Cu, 0x272394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272394u;
label_272394:
    // 0x272394: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x272394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_272398:
    // 0x272398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27239c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27239cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2723a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2723A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2723A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723A0u;
        // 0x2723a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2723A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2723A8u;
}
