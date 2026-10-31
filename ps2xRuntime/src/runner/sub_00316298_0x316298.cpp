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

// Function: sub_00316298
// Address: 0x316298 - 0x316350
void sub_00316298_0x316298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316298_0x316298");
#endif

    switch (ctx->pc) {
        case 0x3162dcu: goto label_3162dc;
        case 0x3162f0u: goto label_3162f0;
        case 0x316318u: goto label_316318;
        case 0x316324u: goto label_316324;
        default: break;
    }

    ctx->pc = 0x316298u;

    // 0x316298: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x316298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31629c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x31629cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3162a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3162a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3162a4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3162a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3162a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3162a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3162ac: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3162acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162b0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3162b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3162b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3162b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162b8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3162b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3162bc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3162bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162c0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3162c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3162c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3162c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3162c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3162cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3162ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3162d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3162d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3162d4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3162D4u;
    SET_GPR_U32(ctx, 31, 0x3162DCu);
    ctx->pc = 0x3162D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162D4u;
    // 0x3162d8: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3162D4u, 0x3162DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162DCu;
label_3162dc:
    // 0x3162dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3162dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162e0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3162E0u;
    {
        const bool branch_taken_0x3162e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162E0u;
        // 0x3162e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162e0) {
            ctx->pc = 0x316328u;
            goto label_316328;
        }
    }
    ctx->pc = 0x3162E8u;
    // 0x3162e8: 0xc0c1956  jal         func_306558
    ctx->pc = 0x3162E8u;
    SET_GPR_U32(ctx, 31, 0x3162F0u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x3162E8u, 0x3162F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162F0u;
label_3162f0:
    // 0x3162f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3162f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162f4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3162F4u;
    {
        const bool branch_taken_0x3162f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162F4u;
        // 0x3162f8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162f4) {
            ctx->pc = 0x316318u;
            goto label_316318;
        }
    }
    ctx->pc = 0x3162FCu;
    // 0x3162fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3162fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316300: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x316300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316304: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x316304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316308: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x316308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31630c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316310: 0xc0c5d04  jal         func_317410
    ctx->pc = 0x316310u;
    SET_GPR_U32(ctx, 31, 0x316318u);
    ctx->pc = 0x316314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316310u;
    // 0x316314: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317410u, 0x316310u, 0x316318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316318u;
label_316318:
    // 0x316318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31631c: 0xc059590  jal         func_165640
    ctx->pc = 0x31631Cu;
    SET_GPR_U32(ctx, 31, 0x316324u);
    ctx->pc = 0x316320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31631Cu;
    // 0x316320: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x31631Cu, 0x316324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316324u;
label_316324:
    // 0x316324: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x316324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_316328:
    // 0x316328: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x316328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31632c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31632cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316330: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x316330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316334: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x316334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316338: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x316338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31633c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31633cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316344: 0x3e00008  jr          $ra
    ctx->pc = 0x316344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316344u;
        // 0x316348: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31634Cu;
    // 0x31634c: 0x0  nop
    ctx->pc = 0x31634cu;
    // NOP
    ctx->pc = 0x316350u;
}
