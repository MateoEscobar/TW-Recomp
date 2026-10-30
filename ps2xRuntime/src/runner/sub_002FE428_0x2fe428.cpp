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

// Function: sub_002FE428
// Address: 0x2fe428 - 0x2fe4b0
void sub_002FE428_0x2fe428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE428_0x2fe428");
#endif

    switch (ctx->pc) {
        case 0x2fe444u: goto label_2fe444;
        default: break;
    }

    ctx->pc = 0x2fe428u;

    // 0x2fe428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fe42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fe430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe434: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fe434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe438: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2fe438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe43c: 0xc08a112  jal         func_228448
    ctx->pc = 0x2FE43Cu;
    SET_GPR_U32(ctx, 31, 0x2FE444u);
    ctx->pc = 0x2FE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE43Cu;
    // 0x2fe440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228448u, 0x2FE43Cu, 0x2FE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE444u;
label_2fe444:
    // 0x2fe444: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FE444u;
    {
        const bool branch_taken_0x2fe444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE444u;
        // 0x2fe448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe444) {
            ctx->pc = 0x2FE4A0u;
            goto label_2fe4a0;
        }
    }
    ctx->pc = 0x2FE44Cu;
    // 0x2fe44c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2fe44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2fe450: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x2fe450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x2fe454: 0x24448888  addiu       $a0, $v0, -0x7778
    ctx->pc = 0x2fe454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936712));
    // 0x2fe458: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2fe458u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x56888Au));
    // 0x2fe45c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FE45Cu;
    {
        const bool branch_taken_0x2fe45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE45Cu;
        // 0x2fe460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe45c) {
            ctx->pc = 0x2FE494u;
            goto label_2fe494;
        }
    }
    ctx->pc = 0x2FE464u;
    // 0x2fe464: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fe464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fe468: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE468u;
    {
        const bool branch_taken_0x2fe468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE468u;
        // 0x2fe46c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe468) {
            ctx->pc = 0x2FE480u;
            goto label_2fe480;
        }
    }
    ctx->pc = 0x2FE470u;
    // 0x2fe470: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2fe470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fe474: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2fe474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2fe478: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE478u;
    {
        const bool branch_taken_0x2fe478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE478u;
        // 0x2fe47c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe478) {
            ctx->pc = 0x2FE490u;
            goto label_2fe490;
        }
    }
    ctx->pc = 0x2FE480u;
label_2fe480:
    // 0x2fe480: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2fe480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2fe484: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x2fe484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x2fe488: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE488u;
    {
        const bool branch_taken_0x2fe488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe488) {
            ctx->pc = 0x2FE494u;
            goto label_2fe494;
        }
    }
    ctx->pc = 0x2FE490u;
label_2fe490:
    // 0x2fe490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fe490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe494:
    // 0x2fe494: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE494u;
    {
        const bool branch_taken_0x2fe494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE494u;
        // 0x2fe498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe494) {
            ctx->pc = 0x2FE4A0u;
            goto label_2fe4a0;
        }
    }
    ctx->pc = 0x2FE49Cu;
    // 0x2fe49c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fe49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fe4a0:
    // 0x2fe4a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fe4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4A8u;
        // 0x2fe4ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE4B0u;
}
