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

// Function: sub_003063B0
// Address: 0x3063b0 - 0x3064f8
void sub_003063B0_0x3063b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003063B0_0x3063b0");
#endif

    switch (ctx->pc) {
        case 0x306404u: goto label_306404;
        case 0x306428u: goto label_306428;
        case 0x30643cu: goto label_30643c;
        case 0x30644cu: goto label_30644c;
        case 0x306458u: goto label_306458;
        case 0x306470u: goto label_306470;
        case 0x30648cu: goto label_30648c;
        case 0x3064a8u: goto label_3064a8;
        case 0x3064d0u: goto label_3064d0;
        case 0x3064e4u: goto label_3064e4;
        default: break;
    }

    ctx->pc = 0x3063b0u;

    // 0x3063b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3063b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3063b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3063b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3063b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3063b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3063bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3063bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3063c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3063c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3063c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3063c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3063cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3063ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3063d0: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x3063d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x3063d4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3063D4u;
    {
        const bool branch_taken_0x3063d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063D4u;
        // 0x3063d8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063d4) {
            ctx->pc = 0x3064F8u;
            return;
        }
    }
    ctx->pc = 0x3063DCu;
    // 0x3063dc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3063dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3063e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3063e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3063e4: 0x2442a2e0  addiu       $v0, $v0, -0x5D20
    ctx->pc = 0x3063e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943456));
    // 0x3063e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3063e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3063ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3063ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3063f0: 0x800008  jr          $a0
    ctx->pc = 0x3063F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3063F8u: goto label_3063f8;
            case 0x306494u: goto label_306494;
            case 0x3064B0u: goto label_3064b0;
            case 0x3064C4u: goto label_3064c4;
            case 0x3064D8u: goto label_3064d8;
            case 0x3064F0u: goto label_3064f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3063F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3063F8u;
label_3063f8:
    // 0x3063f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3063f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063fc: 0xc0c1864  jal         func_306190
    ctx->pc = 0x3063FCu;
    SET_GPR_U32(ctx, 31, 0x306404u);
    ctx->pc = 0x306400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063FCu;
    // 0x306400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306190u, 0x3063FCu, 0x306404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306404u;
label_306404:
    // 0x306404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306408: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x306408u;
    {
        const bool branch_taken_0x306408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306408u;
        // 0x30640c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306408) {
            ctx->pc = 0x306504u;
            return;
        }
    }
    ctx->pc = 0x306410u;
    // 0x306410: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x306410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x306414: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x306414u;
    {
        const bool branch_taken_0x306414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306414u;
        // 0x306418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306414) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x30641Cu;
    // 0x30641c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30641cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x306420: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x306420u;
    SET_GPR_U32(ctx, 31, 0x306428u);
    ctx->pc = 0x306424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306420u;
    // 0x306424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x306420u, 0x306428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306428u;
label_306428:
    // 0x306428: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x306428u;
    {
        const bool branch_taken_0x306428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306428u;
        // 0x30642c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306428) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x306430u;
    // 0x306430: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x306430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x306434: 0xc088a92  jal         func_222A48
    ctx->pc = 0x306434u;
    SET_GPR_U32(ctx, 31, 0x30643Cu);
    ctx->pc = 0x306438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306434u;
    // 0x306438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x306434u, 0x30643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30643Cu;
label_30643c:
    // 0x30643c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30643Cu;
    {
        const bool branch_taken_0x30643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30643c) {
            ctx->pc = 0x306458u;
            goto label_306458;
        }
    }
    ctx->pc = 0x306444u;
    // 0x306444: 0xc087502  jal         func_21D408
    ctx->pc = 0x306444u;
    SET_GPR_U32(ctx, 31, 0x30644Cu);
    ctx->pc = 0x306448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306444u;
    // 0x306448: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x306444u, 0x30644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30644Cu;
label_30644c:
    // 0x30644c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306450: 0xc0a40ca  jal         func_290328
    ctx->pc = 0x306450u;
    SET_GPR_U32(ctx, 31, 0x306458u);
    ctx->pc = 0x306454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306450u;
    // 0x306454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x306450u, 0x306458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306458u;
label_306458:
    // 0x306458: 0x3405fc04  ori         $a1, $zero, 0xFC04
    ctx->pc = 0x306458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64516);
    // 0x30645c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30645cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x306460: 0x34a5ba00  ori         $a1, $a1, 0xBA00
    ctx->pc = 0x306460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47616);
    // 0x306464: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x306464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x306468: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x306468u;
    SET_GPR_U32(ctx, 31, 0x306470u);
    ctx->pc = 0x30646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306468u;
    // 0x30646c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x306468u, 0x306470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306470u;
label_306470:
    // 0x306470: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x306470u;
    {
        const bool branch_taken_0x306470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306470u;
        // 0x306474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306470) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x306478u;
    // 0x306478: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x306478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x30647c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30647cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x306480: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x306480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x306484: 0xc0a34ba  jal         func_28D2E8
    ctx->pc = 0x306484u;
    SET_GPR_U32(ctx, 31, 0x30648Cu);
    ctx->pc = 0x306488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306484u;
    // 0x306488: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x306484u, 0x30648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30648Cu;
label_30648c:
    // 0x30648c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30648Cu;
    {
        const bool branch_taken_0x30648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30648Cu;
        // 0x306490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30648c) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x306494u;
label_306494:
    // 0x306494: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x306494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x306498: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x306498u;
    {
        const bool branch_taken_0x306498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306498u;
        // 0x30649c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306498) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x3064A0u;
    // 0x3064a0: 0xc0a4658  jal         func_291960
    ctx->pc = 0x3064A0u;
    SET_GPR_U32(ctx, 31, 0x3064A8u);
    ctx->pc = 0x3064A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064A0u;
    // 0x3064a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291960u, 0x3064A0u, 0x3064A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064A8u;
label_3064a8:
    // 0x3064a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3064A8u;
    {
        const bool branch_taken_0x3064a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064A8u;
        // 0x3064ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064a8) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x3064B0u;
label_3064b0:
    // 0x3064b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3064b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3064b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3064b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3064b8: 0xa2220280  sb          $v0, 0x280($s1)
    ctx->pc = 0x3064b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 640), (uint8_t)GPR_U32(ctx, 2));
    // 0x3064bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3064BCu;
    {
        const bool branch_taken_0x3064bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064BCu;
        // 0x3064c0: 0xae23027c  sw          $v1, 0x27C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064bc) {
            ctx->pc = 0x306504u;
            return;
        }
    }
    ctx->pc = 0x3064C4u;
label_3064c4:
    // 0x3064c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3064c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064c8: 0xc0a45ca  jal         func_291728
    ctx->pc = 0x3064C8u;
    SET_GPR_U32(ctx, 31, 0x3064D0u);
    ctx->pc = 0x3064CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064C8u;
    // 0x3064cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291728u, 0x3064C8u, 0x3064D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064D0u;
label_3064d0:
    // 0x3064d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3064D0u;
    {
        const bool branch_taken_0x3064d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064D0u;
        // 0x3064d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064d0) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x3064D8u;
label_3064d8:
    // 0x3064d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3064d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064dc: 0xc0c1810  jal         func_306040
    ctx->pc = 0x3064DCu;
    SET_GPR_U32(ctx, 31, 0x3064E4u);
    ctx->pc = 0x3064E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064DCu;
    // 0x3064e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306040u, 0x3064DCu, 0x3064E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064E4u;
label_3064e4:
    // 0x3064e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3064e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3064e8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3064E8u;
    {
        const bool branch_taken_0x3064e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3064ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064E8u;
        // 0x3064ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064e8) {
            ctx->pc = 0x3064FCu;
            return;
        }
    }
    ctx->pc = 0x3064F0u;
label_3064f0:
    // 0x3064f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3064F0u;
    {
        const bool branch_taken_0x3064f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064F0u;
        // 0x3064f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064f0) {
            ctx->pc = 0x306504u;
            return;
        }
    }
    ctx->pc = 0x3064F8u;
}
