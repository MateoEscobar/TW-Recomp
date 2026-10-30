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

// Function: sub_00225830
// Address: 0x225830 - 0x2258f0
void sub_00225830_0x225830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225830_0x225830");
#endif

    switch (ctx->pc) {
        case 0x225848u: goto label_225848;
        case 0x225854u: goto label_225854;
        case 0x2258ccu: goto label_2258cc;
        default: break;
    }

    ctx->pc = 0x225830u;

    // 0x225830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225838: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22583c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225840: 0xc088c1a  jal         func_223068
    ctx->pc = 0x225840u;
    SET_GPR_U32(ctx, 31, 0x225848u);
    ctx->pc = 0x225844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225840u;
    // 0x225844: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x225840u, 0x225848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225848u;
label_225848:
    // 0x225848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22584c: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x22584Cu;
    SET_GPR_U32(ctx, 31, 0x225854u);
    ctx->pc = 0x225850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22584Cu;
    // 0x225850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x22584Cu, 0x225854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225854u;
label_225854:
    // 0x225854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225854u;
    {
        const bool branch_taken_0x225854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225854u;
        // 0x225858: 0x1017c2  srl         $v0, $s0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225854) {
            ctx->pc = 0x225868u;
            goto label_225868;
        }
    }
    ctx->pc = 0x22585Cu;
    // 0x22585c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x225860: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x225860u;
    {
        const bool branch_taken_0x225860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225860u;
        // 0x225864: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225860) {
            ctx->pc = 0x22587Cu;
            goto label_22587c;
        }
    }
    ctx->pc = 0x225868u;
label_225868:
    // 0x225868: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x225868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22586c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x22586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x225870: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x225870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x225874: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x225874u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x225878: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x225878u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
label_22587c:
    // 0x22587c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x22587cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x225880: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x225880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x225884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x225884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x225888: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x225888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22588c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22588cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x225890: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x225890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x225894: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x225894u;
    {
        const bool branch_taken_0x225894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225894u;
        // 0x225898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225894) {
            ctx->pc = 0x2258DCu;
            goto label_2258dc;
        }
    }
    ctx->pc = 0x22589Cu;
    // 0x22589c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2258a0: 0x84640148  lh          $a0, 0x148($v1)
    ctx->pc = 0x2258a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x2258a4: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2258a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2258a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2258A8u;
    {
        const bool branch_taken_0x2258a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258A8u;
        // 0x2258ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258a8) {
            ctx->pc = 0x2258D4u;
            goto label_2258d4;
        }
    }
    ctx->pc = 0x2258B0u;
    // 0x2258b0: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x2258b0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2258b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2258B4u;
    {
        const bool branch_taken_0x2258b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258b4) {
            ctx->pc = 0x2258B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2258B4u;
            // 0x2258b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2258BCu;
            goto label_2258bc;
        }
    }
    ctx->pc = 0x2258BCu;
label_2258bc:
    // 0x2258bc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2258bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2258c0: 0x2812  mflo        $a1
    ctx->pc = 0x2258c0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2258c4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2258C4u;
    SET_GPR_U32(ctx, 31, 0x2258CCu);
    ctx->pc = 0x2258C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2258C4u;
    // 0x2258c8: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2258C4u, 0x2258CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2258CCu;
label_2258cc:
    // 0x2258cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2258CCu;
    {
        const bool branch_taken_0x2258cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2258D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258CCu;
        // 0x2258d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258cc) {
            ctx->pc = 0x2258DCu;
            goto label_2258dc;
        }
    }
    ctx->pc = 0x2258D4u;
label_2258d4:
    // 0x2258d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2258d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2258d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2258d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2258dc:
    // 0x2258dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2258dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2258e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2258e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2258e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2258e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2258e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2258E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258E8u;
        // 0x2258ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2258F0u;
}
