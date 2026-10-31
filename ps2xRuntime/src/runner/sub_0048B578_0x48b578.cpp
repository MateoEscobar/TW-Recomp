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

// Function: sub_0048B578
// Address: 0x48b578 - 0x48b620
void sub_0048B578_0x48b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B578_0x48b578");
#endif

    switch (ctx->pc) {
        case 0x48b5b8u: goto label_48b5b8;
        case 0x48b5ccu: goto label_48b5cc;
        case 0x48b5f4u: goto label_48b5f4;
        default: break;
    }

    ctx->pc = 0x48b578u;

label_48b578:
    // 0x48b578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48b578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48b57c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x48b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x48b580: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x48b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x48b584: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x48b584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b588: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x48b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x48b58c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48b58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b590: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48b590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x48b594: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x48b594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b598: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x48b598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x48b59c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x48B59Cu;
    {
        const bool branch_taken_0x48b59c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B59Cu;
        // 0x48b5a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b59c) {
            ctx->pc = 0x48B5FCu;
            goto label_48b5fc;
        }
    }
    ctx->pc = 0x48B5A4u;
    // 0x48b5a4: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x48B5A4u;
    {
        const bool branch_taken_0x48b5a4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x48B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B5A4u;
        // 0x48b5a8: 0x24f4ffff  addiu       $s4, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b5a4) {
            ctx->pc = 0x48B5E4u;
            goto label_48b5e4;
        }
    }
    ctx->pc = 0x48B5ACu;
    // 0x48b5ac: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x48b5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x48b5b0: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x48b5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x48b5b4: 0x0  nop
    ctx->pc = 0x48b5b4u;
    // NOP
label_48b5b8:
    // 0x48b5b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x48b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48b5bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x48b5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b5c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x48b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b5c4: 0xc122d5e  jal         func_48B578
    ctx->pc = 0x48B5C4u;
    SET_GPR_U32(ctx, 31, 0x48B5CCu);
    ctx->pc = 0x48B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B5C4u;
    // 0x48b5c8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B578u;
    goto label_48b578;
    ctx->pc = 0x48B5CCu;
label_48b5cc:
    // 0x48b5cc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x48b5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x48b5d0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x48b5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x48b5d4: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x48B5D4u;
    {
        const bool branch_taken_0x48b5d4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x48B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B5D4u;
        // 0x48b5d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b5d4) {
            ctx->pc = 0x48B5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b5b8;
        }
    }
    ctx->pc = 0x48B5DCu;
    // 0x48b5dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48B5DCu;
    {
        const bool branch_taken_0x48b5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B5DCu;
        // 0x48b5e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b5dc) {
            ctx->pc = 0x48B600u;
            goto label_48b600;
        }
    }
    ctx->pc = 0x48B5E4u;
label_48b5e4:
    // 0x48b5e4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x48b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x48b5e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48b5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b5ec: 0xc1225d4  jal         func_489750
    ctx->pc = 0x48B5ECu;
    SET_GPR_U32(ctx, 31, 0x48B5F4u);
    ctx->pc = 0x48B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B5ECu;
    // 0x48b5f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489750u, 0x48B5ECu, 0x48B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B5F4u;
label_48b5f4:
    // 0x48b5f4: 0xa2300018  sb          $s0, 0x18($s1)
    ctx->pc = 0x48b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 16));
    // 0x48b5f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48b5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_48b5fc:
    // 0x48b5fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48b5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48b600:
    // 0x48b600: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x48b600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48b604: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x48b604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48b608: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48b608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48b60c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x48b60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48b610: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x48b610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b618: 0x3e00008  jr          $ra
    ctx->pc = 0x48B618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B618u;
        // 0x48b61c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B620u;
}
