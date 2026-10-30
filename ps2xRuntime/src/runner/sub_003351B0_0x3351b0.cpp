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

// Function: sub_003351B0
// Address: 0x3351b0 - 0x335218
void sub_003351B0_0x3351b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003351B0_0x3351b0");
#endif

    switch (ctx->pc) {
        case 0x3351e4u: goto label_3351e4;
        default: break;
    }

    ctx->pc = 0x3351b0u;

    // 0x3351b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3351b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3351b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3351b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3351b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3351b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3351bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3351bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351c0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x3351c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3351c4: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x3351c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3351c8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3351c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3351cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3351CCu;
    {
        const bool branch_taken_0x3351cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3351D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351CCu;
        // 0x3351d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3351cc) {
            ctx->pc = 0x335208u;
            goto label_335208;
        }
    }
    ctx->pc = 0x3351D4u;
    // 0x3351d4: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x3351d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3351d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3351d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3351dc: 0xc10c6e2  jal         func_431B88
    ctx->pc = 0x3351DCu;
    SET_GPR_U32(ctx, 31, 0x3351E4u);
    ctx->pc = 0x3351E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3351DCu;
    // 0x3351e0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B88u, 0x3351DCu, 0x3351E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3351E4u;
label_3351e4:
    // 0x3351e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3351e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3351E8u;
    {
        const bool branch_taken_0x3351e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3351ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351E8u;
        // 0x3351ec: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3351e8) {
            ctx->pc = 0x335204u;
            goto label_335204;
        }
    }
    ctx->pc = 0x3351F0u;
    // 0x3351f0: 0x26040015  addiu       $a0, $s0, 0x15
    ctx->pc = 0x3351f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x3351f4: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x3351f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3351f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3351f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3351fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3351FCu;
    {
        const bool branch_taken_0x3351fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351FCu;
        // 0x335200: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3351fc) {
            ctx->pc = 0x335208u;
            goto label_335208;
        }
    }
    ctx->pc = 0x335204u;
label_335204:
    // 0x335204: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x335204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_335208:
    // 0x335208: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x335208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33520c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33520cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335210: 0x3e00008  jr          $ra
    ctx->pc = 0x335210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335210u;
        // 0x335214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335218u;
}
