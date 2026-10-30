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

// Function: sub_0029A268
// Address: 0x29a268 - 0x29a300
void sub_0029A268_0x29a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A268_0x29a268");
#endif

    switch (ctx->pc) {
        case 0x29a290u: goto label_29a290;
        case 0x29a2c0u: goto label_29a2c0;
        case 0x29a2ccu: goto label_29a2cc;
        default: break;
    }

    ctx->pc = 0x29a268u;

    // 0x29a268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a26c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29a26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29a270: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29a274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a278: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29a27c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29a27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a284: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29a284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a288: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29A288u;
    SET_GPR_U32(ctx, 31, 0x29A290u);
    ctx->pc = 0x29A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A288u;
    // 0x29a28c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29A288u, 0x29A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A290u;
label_29a290:
    // 0x29a290: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29A290u;
    {
        const bool branch_taken_0x29a290 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A290u;
        // 0x29a294: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a290) {
            ctx->pc = 0x29A2ECu;
            goto label_29a2ec;
        }
    }
    ctx->pc = 0x29A298u;
    // 0x29a298: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29a298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a29c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a2a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x29a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29a2a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29a2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A2A8u;
    {
        const bool branch_taken_0x29a2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2A8u;
        // 0x29a2ac: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2a8) {
            ctx->pc = 0x29A2B8u;
            goto label_29a2b8;
        }
    }
    ctx->pc = 0x29A2B0u;
    // 0x29a2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29a2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a2b8:
    // 0x29a2b8: 0xc08750a  jal         func_21D428
    ctx->pc = 0x29A2B8u;
    SET_GPR_U32(ctx, 31, 0x29A2C0u);
    ctx->pc = 0x29A2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2B8u;
    // 0x29a2bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x29A2B8u, 0x29A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2C0u;
label_29a2c0:
    // 0x29a2c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29a2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2c4: 0xc0a580a  jal         func_296028
    ctx->pc = 0x29A2C4u;
    SET_GPR_U32(ctx, 31, 0x29A2CCu);
    ctx->pc = 0x29A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2C4u;
    // 0x29a2c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x29A2C4u, 0x29A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2CCu;
label_29a2cc:
    // 0x29a2cc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x29a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x29a2d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29a2d4: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x29a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x29a2d8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x29a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x29a2dc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x29a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x29a2e0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x29a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x29a2e4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x29a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x29a2e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29a2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29a2ec:
    // 0x29a2ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29a2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a2f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29a2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2F8u;
        // 0x29a2fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A300u;
}
