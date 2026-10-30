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

// Function: sub_00307548
// Address: 0x307548 - 0x3075c8
void sub_00307548_0x307548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307548_0x307548");
#endif

    switch (ctx->pc) {
        case 0x30756cu: goto label_30756c;
        case 0x307580u: goto label_307580;
        case 0x3075a0u: goto label_3075a0;
        case 0x3075acu: goto label_3075ac;
        default: break;
    }

    ctx->pc = 0x307548u;

    // 0x307548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30754c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30754cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x307550: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x307550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x307554: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x307554u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x307558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x307558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30755c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x307560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307564: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x307564u;
    SET_GPR_U32(ctx, 31, 0x30756Cu);
    ctx->pc = 0x307568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307564u;
    // 0x307568: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x307564u, 0x30756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30756Cu;
label_30756c:
    // 0x30756c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30756cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307570: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x307570u;
    {
        const bool branch_taken_0x307570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307570u;
        // 0x307574: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307570) {
            ctx->pc = 0x3075B0u;
            goto label_3075b0;
        }
    }
    ctx->pc = 0x307578u;
    // 0x307578: 0xc0c1956  jal         func_306558
    ctx->pc = 0x307578u;
    SET_GPR_U32(ctx, 31, 0x307580u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x307578u, 0x307580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307580u;
label_307580:
    // 0x307580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307584: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307584u;
    {
        const bool branch_taken_0x307584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307584u;
        // 0x307588: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307584) {
            ctx->pc = 0x3075A0u;
            goto label_3075a0;
        }
    }
    ctx->pc = 0x30758Cu;
    // 0x30758c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x30758cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x307590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x307594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307598: 0xc0c1d72  jal         func_3075C8
    ctx->pc = 0x307598u;
    SET_GPR_U32(ctx, 31, 0x3075A0u);
    ctx->pc = 0x30759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307598u;
    // 0x30759c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3075C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3075C8u, 0x307598u, 0x3075A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075A0u;
label_3075a0:
    // 0x3075a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3075a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075a4: 0xc059590  jal         func_165640
    ctx->pc = 0x3075A4u;
    SET_GPR_U32(ctx, 31, 0x3075ACu);
    ctx->pc = 0x3075A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075A4u;
    // 0x3075a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x3075A4u, 0x3075ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075ACu;
label_3075ac:
    // 0x3075ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3075acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3075b0:
    // 0x3075b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3075b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3075b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3075b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3075b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3075b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3075bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3075BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3075C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075BCu;
        // 0x3075c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3075BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3075C4u;
    // 0x3075c4: 0x0  nop
    ctx->pc = 0x3075c4u;
    // NOP
    ctx->pc = 0x3075c8u;
}
