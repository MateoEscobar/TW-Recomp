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

// Function: sub_0014A440
// Address: 0x14a440 - 0x14a4b8
void sub_0014A440_0x14a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A440_0x14a440");
#endif

    switch (ctx->pc) {
        case 0x14a46cu: goto label_14a46c;
        case 0x14a480u: goto label_14a480;
        case 0x14a490u: goto label_14a490;
        default: break;
    }

    ctx->pc = 0x14a440u;

    // 0x14a440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14a444: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14a448: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14a448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a44c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14a450: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14a454: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14a454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a45c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14a45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a464: 0xc052862  jal         func_14A188
    ctx->pc = 0x14A464u;
    SET_GPR_U32(ctx, 31, 0x14A46Cu);
    ctx->pc = 0x14A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A464u;
    // 0x14a468: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A188u, 0x14A464u, 0x14A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A46Cu;
label_14a46c:
    // 0x14a46c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x14a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x14a470: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A470u;
    {
        const bool branch_taken_0x14a470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A470u;
        // 0x14a474: 0xae710004  sw          $s1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a470) {
            ctx->pc = 0x14A488u;
            goto label_14a488;
        }
    }
    ctx->pc = 0x14A478u;
    // 0x14a478: 0xc05288a  jal         func_14A228
    ctx->pc = 0x14A478u;
    SET_GPR_U32(ctx, 31, 0x14A480u);
    ctx->pc = 0x14A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A478u;
    // 0x14a47c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A228u, 0x14A478u, 0x14A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A480u;
label_14a480:
    // 0x14a480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A480u;
    {
        const bool branch_taken_0x14a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A480u;
        // 0x14a484: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a480) {
            ctx->pc = 0x14A494u;
            goto label_14a494;
        }
    }
    ctx->pc = 0x14A488u;
label_14a488:
    // 0x14a488: 0xc0528d6  jal         func_14A358
    ctx->pc = 0x14A488u;
    SET_GPR_U32(ctx, 31, 0x14A490u);
    ctx->pc = 0x14A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A488u;
    // 0x14a48c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A358u, 0x14A488u, 0x14A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A490u;
label_14a490:
    // 0x14a490: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14a490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14a494:
    // 0x14a494: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14a494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a49c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14a49cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4A4u;
        // 0x14a4a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A4ACu;
    // 0x14a4ac: 0x0  nop
    ctx->pc = 0x14a4acu;
    // NOP
    // 0x14a4b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a4b4: 0x0  nop
    ctx->pc = 0x14a4b4u;
    // NOP
    ctx->pc = 0x14a4b8u;
}
