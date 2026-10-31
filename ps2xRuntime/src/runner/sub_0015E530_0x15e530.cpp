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

// Function: sub_0015E530
// Address: 0x15e530 - 0x15e5c8
void sub_0015E530_0x15e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E530_0x15e530");
#endif

    switch (ctx->pc) {
        case 0x15e564u: goto label_15e564;
        case 0x15e588u: goto label_15e588;
        default: break;
    }

    ctx->pc = 0x15e530u;

    // 0x15e530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e534: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15e534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15e538: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15e53c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15e540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15e544: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15E544u;
    {
        const bool branch_taken_0x15e544 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E544u;
        // 0x15e548: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e544) {
            ctx->pc = 0x15E5B0u;
            goto label_15e5b0;
        }
    }
    ctx->pc = 0x15E54Cu;
    // 0x15e54c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15E54Cu;
    {
        const bool branch_taken_0x15e54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E54Cu;
        // 0x15e550: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e54c) {
            ctx->pc = 0x15E5B0u;
            goto label_15e5b0;
        }
    }
    ctx->pc = 0x15E554u;
    // 0x15e554: 0x261065c0  addiu       $s0, $s0, 0x65C0
    ctx->pc = 0x15e554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26048));
    // 0x15e558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e55c: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15E55Cu;
    SET_GPR_U32(ctx, 31, 0x15E564u);
    ctx->pc = 0x15E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E55Cu;
    // 0x15e560: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15E55Cu, 0x15E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E564u;
label_15e564:
    // 0x15e564: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x15e568: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x15e56c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15e570: 0x24428730  addiu       $v0, $v0, -0x78D0
    ctx->pc = 0x15e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936368));
    // 0x15e574: 0x2463a9c8  addiu       $v1, $v1, -0x5638
    ctx->pc = 0x15e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945224));
    // 0x15e578: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x15e578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x15e57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e580: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x15E580u;
    SET_GPR_U32(ctx, 31, 0x15E588u);
    ctx->pc = 0x15E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E580u;
    // 0x15e584: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x15E580u, 0x15E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E588u;
label_15e588:
    // 0x15e588: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15e588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15e58c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x15e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x15e590: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x15e590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
    // 0x15e594: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x15e594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x15e598: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x15e598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x15e59c: 0x2484dad0  addiu       $a0, $a0, -0x2530
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957776));
    // 0x15e5a0: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x15e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x15e5a4: 0x2442db80  addiu       $v0, $v0, -0x2480
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957952));
    // 0x15e5a8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x15e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x15e5ac: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x15e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_15e5b0:
    // 0x15e5b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15e5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e5b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15e5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15e5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5C0u;
        // 0x15e5c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E5C8u;
}
