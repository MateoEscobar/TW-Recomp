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

// Function: sub_004D7840
// Address: 0x4d7840 - 0x4d7928
void sub_004D7840_0x4d7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7840_0x4d7840");
#endif

    switch (ctx->pc) {
        case 0x4d7884u: goto label_4d7884;
        case 0x4d78a4u: goto label_4d78a4;
        case 0x4d78bcu: goto label_4d78bc;
        case 0x4d78d4u: goto label_4d78d4;
        case 0x4d78f0u: goto label_4d78f0;
        case 0x4d7908u: goto label_4d7908;
        default: break;
    }

    ctx->pc = 0x4d7840u;

label_4d7840:
    // 0x4d7840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d7844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d7848: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d7848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d784c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7850: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d7854: 0x118083  sra         $s0, $s1, 2
    ctx->pc = 0x4d7854u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 2));
    // 0x4d7858: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4d7858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d785c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7860: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x4d7860u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4d7864: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d7864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d7868: 0x2663023  subu        $a2, $s3, $a2
    ctx->pc = 0x4d7868u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x4d786c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4d786cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7870: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d7870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d7874: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d7874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7878: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d7878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4d787c: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D787Cu;
    SET_GPR_U32(ctx, 31, 0x4D7884u);
    ctx->pc = 0x4D7880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D787Cu;
    // 0x4d7880: 0x2863021  addu        $a2, $s4, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D787Cu, 0x4D7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7884u;
label_4d7884:
    // 0x4d7884: 0x2a220201  slti        $v0, $s1, 0x201
    ctx->pc = 0x4d7884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x4d7888: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4D7888u;
    {
        const bool branch_taken_0x4d7888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7888u;
        // 0x4d788c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7888) {
            ctx->pc = 0x4D78F8u;
            goto label_4d78f8;
        }
    }
    ctx->pc = 0x4D7890u;
    // 0x4d7890: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d7890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7898: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d7898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d789c: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D789Cu;
    SET_GPR_U32(ctx, 31, 0x4D78A4u);
    ctx->pc = 0x4D78A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D789Cu;
    // 0x4d78a0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    goto label_4d7840;
    ctx->pc = 0x4D78A4u;
label_4d78a4:
    // 0x4d78a4: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4d78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d78a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d78a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78ac: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4d78acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x4d78b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d78b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78b4: 0xc1353de  jal         func_4D4F78
    ctx->pc = 0x4D78B4u;
    SET_GPR_U32(ctx, 31, 0x4D78BCu);
    ctx->pc = 0x4D78B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D78B4u;
    // 0x4d78b8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D4F78u, 0x4D78B4u, 0x4D78BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D78BCu;
label_4d78bc:
    // 0x4d78bc: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x4d78bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d78c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d78c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78c4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4d78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x4d78c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d78c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78cc: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D78CCu;
    SET_GPR_U32(ctx, 31, 0x4D78D4u);
    ctx->pc = 0x4D78D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D78CCu;
    // 0x4d78d0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    goto label_4d7840;
    ctx->pc = 0x4D78D4u;
label_4d78d4:
    // 0x4d78d4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4d78d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4d78d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d78d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78dc: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x4d78dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d78e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d78e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4d78e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78e8: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D78E8u;
    SET_GPR_U32(ctx, 31, 0x4D78F0u);
    ctx->pc = 0x4D78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D78E8u;
    // 0x4d78ec: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    goto label_4d7840;
    ctx->pc = 0x4D78F0u;
label_4d78f0:
    // 0x4d78f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D78F0u;
    {
        const bool branch_taken_0x4d78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D78F0u;
        // 0x4d78f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d78f0) {
            ctx->pc = 0x4D790Cu;
            goto label_4d790c;
        }
    }
    ctx->pc = 0x4D78F8u;
label_4d78f8:
    // 0x4d78f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d78f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d78fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d78fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7900: 0xc135462  jal         func_4D5188
    ctx->pc = 0x4D7900u;
    SET_GPR_U32(ctx, 31, 0x4D7908u);
    ctx->pc = 0x4D7904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7900u;
    // 0x4d7904: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5188u, 0x4D7900u, 0x4D7908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7908u;
label_4d7908:
    // 0x4d7908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d790c:
    // 0x4d790c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d790cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d7910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7914: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7918: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d7918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d791c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d791cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d7920: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7920u;
        // 0x4d7924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7928u;
}
