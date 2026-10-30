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

// Function: sub_0023A258
// Address: 0x23a258 - 0x23a2c0
void sub_0023A258_0x23a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A258_0x23a258");
#endif

    switch (ctx->pc) {
        case 0x23a274u: goto label_23a274;
        case 0x23a27cu: goto label_23a27c;
        default: break;
    }

    ctx->pc = 0x23a258u;

    // 0x23a258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a25c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23a260: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a26c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A26Cu;
    SET_GPR_U32(ctx, 31, 0x23A274u);
    ctx->pc = 0x23A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A26Cu;
    // 0x23a270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A26Cu, 0x23A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A274u;
label_23a274:
    // 0x23a274: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A274u;
    SET_GPR_U32(ctx, 31, 0x23A27Cu);
    ctx->pc = 0x23A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A274u;
    // 0x23a278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A274u, 0x23A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A27Cu;
label_23a27c:
    // 0x23a27c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a280: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23A280u;
    {
        const bool branch_taken_0x23a280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a280) {
            ctx->pc = 0x23A284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A280u;
            // 0x23a284: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A2B4u;
            goto label_23a2b4;
        }
    }
    ctx->pc = 0x23A288u;
    // 0x23a288: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A288u;
    {
        const bool branch_taken_0x23a288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A288u;
        // 0x23a28c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a288) {
            ctx->pc = 0x23A29Cu;
            goto label_23a29c;
        }
    }
    ctx->pc = 0x23A290u;
    // 0x23a290: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23a290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23a294: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A294u;
    {
        const bool branch_taken_0x23a294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A294u;
        // 0x23a298: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a294) {
            ctx->pc = 0x23A2ACu;
            goto label_23a2ac;
        }
    }
    ctx->pc = 0x23A29Cu;
label_23a29c:
    // 0x23a29c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23a29cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23a2a0: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x23a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x23a2a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23a2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23a2a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23a2ac:
    // 0x23a2ac: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x23a2acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x23a2b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23a2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a2b4:
    // 0x23a2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2B8u;
        // 0x23a2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A2C0u;
}
