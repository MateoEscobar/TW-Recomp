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

// Function: sub_00328508
// Address: 0x328508 - 0x3285d0
void sub_00328508_0x328508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328508_0x328508");
#endif

    switch (ctx->pc) {
        case 0x328534u: goto label_328534;
        case 0x328540u: goto label_328540;
        case 0x328558u: goto label_328558;
        case 0x3285a8u: goto label_3285a8;
        default: break;
    }

    ctx->pc = 0x328508u;

    // 0x328508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x328508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32850c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x328510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x328514: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x328514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328518: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x328518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32851c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32851cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328520: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x328520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x328524: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x328524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x328528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32852c: 0xc0c9ece  jal         func_327B38
    ctx->pc = 0x32852Cu;
    SET_GPR_U32(ctx, 31, 0x328534u);
    ctx->pc = 0x328530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32852Cu;
    // 0x328530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327B38u, 0x32852Cu, 0x328534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328534u;
label_328534:
    // 0x328534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328538: 0xc0c9ebe  jal         func_327AF8
    ctx->pc = 0x328538u;
    SET_GPR_U32(ctx, 31, 0x328540u);
    ctx->pc = 0x32853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328538u;
    // 0x32853c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327AF8u, 0x328538u, 0x328540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328540u;
label_328540:
    // 0x328540: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x328540u;
    {
        const bool branch_taken_0x328540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328540u;
        // 0x328544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328540) {
            ctx->pc = 0x3285B0u;
            goto label_3285b0;
        }
    }
    ctx->pc = 0x328548u;
    // 0x328548: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32854c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x328550: 0xc0c9f38  jal         func_327CE0
    ctx->pc = 0x328550u;
    SET_GPR_U32(ctx, 31, 0x328558u);
    ctx->pc = 0x328554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328550u;
    // 0x328554: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327CE0u, 0x328550u, 0x328558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328558u;
label_328558:
    // 0x328558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x328558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32855c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328560: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x328560u;
    {
        const bool branch_taken_0x328560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x328564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328560u;
        // 0x328564: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328560) {
            ctx->pc = 0x3285B0u;
            goto label_3285b0;
        }
    }
    ctx->pc = 0x328568u;
    // 0x328568: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x328568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x32856c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32856cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x328570: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x328570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328574: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x328574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x328578: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x328578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32857c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32857Cu;
    {
        const bool branch_taken_0x32857c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32857Cu;
        // 0x328580: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32857c) {
            ctx->pc = 0x3285B0u;
            goto label_3285b0;
        }
    }
    ctx->pc = 0x328584u;
    // 0x328584: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x328584u;
    {
        const bool branch_taken_0x328584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328584u;
        // 0x328588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328584) {
            ctx->pc = 0x3285B4u;
            goto label_3285b4;
        }
    }
    ctx->pc = 0x32858Cu;
    // 0x32858c: 0x32bc2  srl         $a1, $v1, 15
    ctx->pc = 0x32858cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x328590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328594: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x328594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x328598: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x328598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32859c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32859cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3285a0: 0xc0ca0f2  jal         func_3283C8
    ctx->pc = 0x3285A0u;
    SET_GPR_U32(ctx, 31, 0x3285A8u);
    ctx->pc = 0x3285A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285A0u;
    // 0x3285a4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283C8u, 0x3285A0u, 0x3285A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285A8u;
label_3285a8:
    // 0x3285a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3285A8u;
    {
        const bool branch_taken_0x3285a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285A8u;
        // 0x3285ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285a8) {
            ctx->pc = 0x3285B8u;
            goto label_3285b8;
        }
    }
    ctx->pc = 0x3285B0u;
label_3285b0:
    // 0x3285b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3285b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3285b4:
    // 0x3285b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3285b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3285b8:
    // 0x3285b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3285b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3285bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3285bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3285c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3285c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3285c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3285c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3285c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3285C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3285CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285C8u;
        // 0x3285cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3285C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3285D0u;
}
