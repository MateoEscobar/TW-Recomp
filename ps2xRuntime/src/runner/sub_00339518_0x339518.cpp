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

// Function: sub_00339518
// Address: 0x339518 - 0x3395b8
void sub_00339518_0x339518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339518_0x339518");
#endif

    switch (ctx->pc) {
        case 0x339550u: goto label_339550;
        case 0x33956cu: goto label_33956c;
        case 0x339584u: goto label_339584;
        case 0x33959cu: goto label_33959c;
        default: break;
    }

    ctx->pc = 0x339518u;

label_339518:
    // 0x339518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33951c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x339520: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x339520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x339524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x339524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339528: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x339528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33952c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33952cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339534: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339534u;
    {
        const bool branch_taken_0x339534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x339538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339534u;
        // 0x339538: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339534) {
            ctx->pc = 0x339544u;
            goto label_339544;
        }
    }
    ctx->pc = 0x33953Cu;
    // 0x33953c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33953Cu;
    {
        const bool branch_taken_0x33953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33953Cu;
        // 0x339540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33953c) {
            ctx->pc = 0x33959Cu;
            goto label_33959c;
        }
    }
    ctx->pc = 0x339544u;
label_339544:
    // 0x339544: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x339544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x339548: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x339548u;
    SET_GPR_U32(ctx, 31, 0x339550u);
    ctx->pc = 0x33954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339548u;
    // 0x33954c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x339548u, 0x339550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339550u;
label_339550:
    // 0x339550: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x339550u;
    {
        const bool branch_taken_0x339550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339550) {
            ctx->pc = 0x339554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339550u;
            // 0x339554: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339560u;
            goto label_339560;
        }
    }
    ctx->pc = 0x339558u;
    // 0x339558: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x339558u;
    {
        const bool branch_taken_0x339558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339558u;
        // 0x33955c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339558) {
            ctx->pc = 0x33959Cu;
            goto label_33959c;
        }
    }
    ctx->pc = 0x339560u;
label_339560:
    // 0x339560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339564: 0xc0ce546  jal         func_339518
    ctx->pc = 0x339564u;
    SET_GPR_U32(ctx, 31, 0x33956Cu);
    ctx->pc = 0x339568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339564u;
    // 0x339568: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339518u;
    goto label_339518;
    ctx->pc = 0x33956Cu;
label_33956c:
    // 0x33956c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x33956Cu;
    {
        const bool branch_taken_0x33956c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33956c) {
            ctx->pc = 0x339570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33956Cu;
            // 0x339570: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3395A0u;
            goto label_3395a0;
        }
    }
    ctx->pc = 0x339574u;
    // 0x339574: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x339574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x339578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33957c: 0xc0ce546  jal         func_339518
    ctx->pc = 0x33957Cu;
    SET_GPR_U32(ctx, 31, 0x339584u);
    ctx->pc = 0x339580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33957Cu;
    // 0x339580: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339518u;
    goto label_339518;
    ctx->pc = 0x339584u;
label_339584:
    // 0x339584: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x339584u;
    {
        const bool branch_taken_0x339584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339584) {
            ctx->pc = 0x339588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339584u;
            // 0x339588: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3395A0u;
            goto label_3395a0;
        }
    }
    ctx->pc = 0x33958Cu;
    // 0x33958c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x33958cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x339590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339594: 0xc0ce546  jal         func_339518
    ctx->pc = 0x339594u;
    SET_GPR_U32(ctx, 31, 0x33959Cu);
    ctx->pc = 0x339598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339594u;
    // 0x339598: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339518u;
    goto label_339518;
    ctx->pc = 0x33959Cu;
label_33959c:
    // 0x33959c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33959cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3395a0:
    // 0x3395a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3395a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3395a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3395a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3395a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3395a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3395ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3395ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3395B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395ACu;
        // 0x3395b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3395ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3395B4u;
    // 0x3395b4: 0x0  nop
    ctx->pc = 0x3395b4u;
    // NOP
    ctx->pc = 0x3395b8u;
}
