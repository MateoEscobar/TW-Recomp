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

// Function: sub_00440520
// Address: 0x440520 - 0x4405f8
void sub_00440520_0x440520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440520_0x440520");
#endif

    switch (ctx->pc) {
        case 0x440550u: goto label_440550;
        case 0x440560u: goto label_440560;
        case 0x4405b8u: goto label_4405b8;
        default: break;
    }

    ctx->pc = 0x440520u;

    // 0x440520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x440520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x440524: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x440524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x440528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x440528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44052c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x440530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x440530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x440534: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x440534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440538: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x440538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x44053c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x44053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x440540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x440540u;
    {
        const bool branch_taken_0x440540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x440540) {
            ctx->pc = 0x440558u;
            goto label_440558;
        }
    }
    ctx->pc = 0x440548u;
    // 0x440548: 0xc1100f4  jal         func_4403D0
    ctx->pc = 0x440548u;
    SET_GPR_U32(ctx, 31, 0x440550u);
    ctx->pc = 0x44054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440548u;
    // 0x44054c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4403D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4403D0u, 0x440548u, 0x440550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440550u;
label_440550:
    // 0x440550: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x440550u;
    {
        const bool branch_taken_0x440550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440550u;
        // 0x440554: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440550) {
            ctx->pc = 0x440564u;
            goto label_440564;
        }
    }
    ctx->pc = 0x440558u;
label_440558:
    // 0x440558: 0xc1100e8  jal         func_4403A0
    ctx->pc = 0x440558u;
    SET_GPR_U32(ctx, 31, 0x440560u);
    ctx->pc = 0x4403A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4403A0u, 0x440558u, 0x440560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440560u;
label_440560:
    // 0x440560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x440560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_440564:
    // 0x440564: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x440564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x440568: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x440568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x44056c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x44056cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x440570: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x440570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x440574: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x440574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x440578: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x440578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x44057c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x44057cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x440580: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x440580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x440584: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x440584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x440588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x440588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44058c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x44058cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x440590: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x440590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x440594: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x440594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x440598: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x440598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x44059c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x44059cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x4405a0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x4405a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4405a4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x4405a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x4405a8: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x4405a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4405ac: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x4405acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4405b0: 0xc10ffb6  jal         func_43FED8
    ctx->pc = 0x4405B0u;
    SET_GPR_U32(ctx, 31, 0x4405B8u);
    ctx->pc = 0x4405B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4405B0u;
    // 0x4405b4: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FED8u, 0x4405B0u, 0x4405B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4405B8u;
label_4405b8:
    // 0x4405b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4405B8u;
    {
        const bool branch_taken_0x4405b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4405BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4405B8u;
        // 0x4405bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4405b8) {
            ctx->pc = 0x4405E0u;
            goto label_4405e0;
        }
    }
    ctx->pc = 0x4405C0u;
    // 0x4405c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4405c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4405c4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x4405c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x4405c8: 0x24a504e0  addiu       $a1, $a1, 0x4E0
    ctx->pc = 0x4405c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
    // 0x4405cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4405ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4405d0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x4405d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4405d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4405d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4405d8: 0x811119a  j           func_444668
    ctx->pc = 0x4405D8u;
    ctx->pc = 0x4405DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4405D8u;
    // 0x4405dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444668u, 0x4405D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4405E0u;
label_4405e0:
    // 0x4405e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4405e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4405e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4405e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4405e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4405E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4405ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4405E8u;
        // 0x4405ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4405E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4405F0u;
    // 0x4405f0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x4405f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4405f4: 0x0  nop
    ctx->pc = 0x4405f4u;
    // NOP
    ctx->pc = 0x4405f8u;
}
