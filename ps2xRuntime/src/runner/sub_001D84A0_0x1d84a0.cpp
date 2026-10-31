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

// Function: sub_001D84A0
// Address: 0x1d84a0 - 0x1d8558
void sub_001D84A0_0x1d84a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D84A0_0x1d84a0");
#endif

    switch (ctx->pc) {
        case 0x1d84c8u: goto label_1d84c8;
        case 0x1d84e8u: goto label_1d84e8;
        case 0x1d84f4u: goto label_1d84f4;
        case 0x1d8510u: goto label_1d8510;
        case 0x1d851cu: goto label_1d851c;
        default: break;
    }

    ctx->pc = 0x1d84a0u;

    // 0x1d84a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d84a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d84a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d84a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d84a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d84a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d84acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d84b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d84b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d84b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d84b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d84b8: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1d84b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d84bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d84bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d84c0: 0xc074612  jal         func_1D1848
    ctx->pc = 0x1D84C0u;
    SET_GPR_U32(ctx, 31, 0x1D84C8u);
    ctx->pc = 0x1D84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84C0u;
    // 0x1d84c4: 0x265007a0  addiu       $s0, $s2, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1848u, 0x1D84C0u, 0x1D84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84C8u;
label_1d84c8:
    // 0x1d84c8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d84c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d84cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d84d0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d84d4: 0x2442b980  addiu       $v0, $v0, -0x4680
    ctx->pc = 0x1d84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949248));
    // 0x1d84d8: 0x2463b9a8  addiu       $v1, $v1, -0x4658
    ctx->pc = 0x1d84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949288));
    // 0x1d84dc: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1d84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1d84e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1d84e4: 0x0  nop
    ctx->pc = 0x1d84e4u;
    // NOP
label_1d84e8:
    // 0x1d84e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d84e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84ec: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1D84ECu;
    SET_GPR_U32(ctx, 31, 0x1D84F4u);
    ctx->pc = 0x1D84F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84ECu;
    // 0x1d84f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1D84ECu, 0x1D84F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84F4u;
label_1d84f4:
    // 0x1d84f4: 0x0  nop
    ctx->pc = 0x1d84f4u;
    // NOP
    // 0x1d84f8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D84F8u;
    {
        const bool branch_taken_0x1d84f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84F8u;
        // 0x1d84fc: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84f8) {
            ctx->pc = 0x1D84E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d84e8;
        }
    }
    ctx->pc = 0x1D8500u;
    // 0x1d8500: 0x26501530  addiu       $s0, $s2, 0x1530
    ctx->pc = 0x1d8500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5424));
    // 0x1d8504: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1d8504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d8508: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d8508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d850c: 0x0  nop
    ctx->pc = 0x1d850cu;
    // NOP
label_1d8510:
    // 0x1d8510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8514: 0xc07561c  jal         func_1D5870
    ctx->pc = 0x1D8514u;
    SET_GPR_U32(ctx, 31, 0x1D851Cu);
    ctx->pc = 0x1D8518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8514u;
    // 0x1d8518: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5870u, 0x1D8514u, 0x1D851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D851Cu;
label_1d851c:
    // 0x1d851c: 0x0  nop
    ctx->pc = 0x1d851cu;
    // NOP
    // 0x1d8520: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8520u;
    {
        const bool branch_taken_0x1d8520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8520u;
        // 0x1d8524: 0x261006f0  addiu       $s0, $s0, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8520) {
            ctx->pc = 0x1D8510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8510;
        }
    }
    ctx->pc = 0x1D8528u;
    // 0x1d8528: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d852c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d852cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d8530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d8534: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x1d8534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x1d8538: 0xae4345d4  sw          $v1, 0x45D4($s2)
    ctx->pc = 0x1d8538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17876), GPR_U32(ctx, 3));
    // 0x1d853c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d853cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8540: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d8540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8548: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d8548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d854c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8550: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8550u;
        // 0x1d8554: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8558u;
}
