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

// Function: sub_00175080
// Address: 0x175080 - 0x175120
void sub_00175080_0x175080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175080_0x175080");
#endif

    switch (ctx->pc) {
        case 0x1750acu: goto label_1750ac;
        case 0x1750c0u: goto label_1750c0;
        case 0x175100u: goto label_175100;
        default: break;
    }

    ctx->pc = 0x175080u;

    // 0x175080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175084: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x175084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x175088: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x175088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17508c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x175090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175094: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x175094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x175098: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x175098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17509c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1750a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1750a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750a4: 0xc088680  jal         func_221A00
    ctx->pc = 0x1750A4u;
    SET_GPR_U32(ctx, 31, 0x1750ACu);
    ctx->pc = 0x1750A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750A4u;
    // 0x1750a8: 0x8e2402b8  lw          $a0, 0x2B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x1750A4u, 0x1750ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750ACu;
label_1750ac:
    // 0x1750ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1750acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750b0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1750B0u;
    {
        const bool branch_taken_0x1750b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1750b0) {
            ctx->pc = 0x1750D0u;
            goto label_1750d0;
        }
    }
    ctx->pc = 0x1750B8u;
    // 0x1750b8: 0xc05fdf0  jal         func_17F7C0
    ctx->pc = 0x1750B8u;
    SET_GPR_U32(ctx, 31, 0x1750C0u);
    ctx->pc = 0x1750BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750B8u;
    // 0x1750bc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7C0u, 0x1750B8u, 0x1750C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750C0u;
label_1750c0:
    // 0x1750c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1750c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1750c4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1750c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1750c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1750c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1750cc: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1750ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1750d0:
    // 0x1750d0: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1750D0u;
    {
        const bool branch_taken_0x1750d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1750D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750D0u;
        // 0x1750d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750d0) {
            ctx->pc = 0x175104u;
            goto label_175104;
        }
    }
    ctx->pc = 0x1750D8u;
    // 0x1750d8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1750D8u;
    {
        const bool branch_taken_0x1750d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1750d8) {
            ctx->pc = 0x1750DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1750D8u;
            // 0x1750dc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175108u;
            goto label_175108;
        }
    }
    ctx->pc = 0x1750E0u;
    // 0x1750e0: 0x92020043  lbu         $v0, 0x43($s0)
    ctx->pc = 0x1750e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x1750e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1750e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1750e8: 0xa2020043  sb          $v0, 0x43($s0)
    ctx->pc = 0x1750e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 2));
    // 0x1750ec: 0x8e2402b8  lw          $a0, 0x2B8($s1)
    ctx->pc = 0x1750ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
    // 0x1750f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1750F0u;
    {
        const bool branch_taken_0x1750f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750F0u;
        // 0x1750f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750f0) {
            ctx->pc = 0x175100u;
            goto label_175100;
        }
    }
    ctx->pc = 0x1750F8u;
    // 0x1750f8: 0xc08eb14  jal         func_23AC50
    ctx->pc = 0x1750F8u;
    SET_GPR_U32(ctx, 31, 0x175100u);
    ctx->pc = 0x1750FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750F8u;
    // 0x1750fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC50u, 0x1750F8u, 0x175100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175100u;
label_175100:
    // 0x175100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175104:
    // 0x175104: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175108:
    // 0x175108: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x175108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17510c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17510cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175110: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x175110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175118: 0x3e00008  jr          $ra
    ctx->pc = 0x175118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175118u;
        // 0x17511c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175120u;
}
