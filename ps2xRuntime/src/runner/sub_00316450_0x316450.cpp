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

// Function: sub_00316450
// Address: 0x316450 - 0x3164e0
void sub_00316450_0x316450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316450_0x316450");
#endif

    switch (ctx->pc) {
        case 0x31647cu: goto label_31647c;
        case 0x316490u: goto label_316490;
        case 0x3164b4u: goto label_3164b4;
        case 0x3164c0u: goto label_3164c0;
        default: break;
    }

    ctx->pc = 0x316450u;

    // 0x316450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x316450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x316454: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31645c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x31645cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316460: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x316460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x316464: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x316464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316468: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x316468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31646c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x316470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316474: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316474u;
    SET_GPR_U32(ctx, 31, 0x31647Cu);
    ctx->pc = 0x316478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316474u;
    // 0x316478: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316474u, 0x31647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31647Cu;
label_31647c:
    // 0x31647c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31647cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316480: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316480u;
    {
        const bool branch_taken_0x316480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316480u;
        // 0x316484: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316480) {
            ctx->pc = 0x3164C4u;
            goto label_3164c4;
        }
    }
    ctx->pc = 0x316488u;
    // 0x316488: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316488u;
    SET_GPR_U32(ctx, 31, 0x316490u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316488u, 0x316490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316490u;
label_316490:
    // 0x316490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316494: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x316494u;
    {
        const bool branch_taken_0x316494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316494u;
        // 0x316498: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316494) {
            ctx->pc = 0x3164B4u;
            goto label_3164b4;
        }
    }
    ctx->pc = 0x31649Cu;
    // 0x31649c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x31649cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x3164a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3164a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3164a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3164a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164ac: 0xc0c3d34  jal         func_30F4D0
    ctx->pc = 0x3164ACu;
    SET_GPR_U32(ctx, 31, 0x3164B4u);
    ctx->pc = 0x3164B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164ACu;
    // 0x3164b0: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F4D0u, 0x3164ACu, 0x3164B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164B4u;
label_3164b4:
    // 0x3164b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3164b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164b8: 0xc059590  jal         func_165640
    ctx->pc = 0x3164B8u;
    SET_GPR_U32(ctx, 31, 0x3164C0u);
    ctx->pc = 0x3164BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164B8u;
    // 0x3164bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x3164B8u, 0x3164C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164C0u;
label_3164c0:
    // 0x3164c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3164c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3164c4:
    // 0x3164c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3164c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3164c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3164c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3164cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3164ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3164d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3164d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3164d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3164D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3164D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164D4u;
        // 0x3164d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3164D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3164DCu;
    // 0x3164dc: 0x0  nop
    ctx->pc = 0x3164dcu;
    // NOP
    ctx->pc = 0x3164e0u;
}
