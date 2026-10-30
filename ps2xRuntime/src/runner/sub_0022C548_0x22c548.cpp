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

// Function: sub_0022C548
// Address: 0x22c548 - 0x22c618
void sub_0022C548_0x22c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C548_0x22c548");
#endif

    switch (ctx->pc) {
        case 0x22c548u: goto label_22c548;
        case 0x22c54cu: goto label_22c54c;
        case 0x22c550u: goto label_22c550;
        case 0x22c554u: goto label_22c554;
        case 0x22c558u: goto label_22c558;
        case 0x22c55cu: goto label_22c55c;
        case 0x22c560u: goto label_22c560;
        case 0x22c564u: goto label_22c564;
        case 0x22c568u: goto label_22c568;
        case 0x22c56cu: goto label_22c56c;
        case 0x22c570u: goto label_22c570;
        case 0x22c574u: goto label_22c574;
        case 0x22c578u: goto label_22c578;
        case 0x22c57cu: goto label_22c57c;
        case 0x22c580u: goto label_22c580;
        case 0x22c584u: goto label_22c584;
        case 0x22c588u: goto label_22c588;
        case 0x22c58cu: goto label_22c58c;
        case 0x22c590u: goto label_22c590;
        case 0x22c594u: goto label_22c594;
        case 0x22c598u: goto label_22c598;
        case 0x22c59cu: goto label_22c59c;
        case 0x22c5a0u: goto label_22c5a0;
        case 0x22c5a4u: goto label_22c5a4;
        case 0x22c5a8u: goto label_22c5a8;
        case 0x22c5acu: goto label_22c5ac;
        case 0x22c5b0u: goto label_22c5b0;
        case 0x22c5b4u: goto label_22c5b4;
        case 0x22c5b8u: goto label_22c5b8;
        case 0x22c5bcu: goto label_22c5bc;
        case 0x22c5c0u: goto label_22c5c0;
        case 0x22c5c4u: goto label_22c5c4;
        case 0x22c5c8u: goto label_22c5c8;
        case 0x22c5ccu: goto label_22c5cc;
        case 0x22c5d0u: goto label_22c5d0;
        case 0x22c5d4u: goto label_22c5d4;
        case 0x22c5d8u: goto label_22c5d8;
        case 0x22c5dcu: goto label_22c5dc;
        case 0x22c5e0u: goto label_22c5e0;
        case 0x22c5e4u: goto label_22c5e4;
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5ecu: goto label_22c5ec;
        case 0x22c5f0u: goto label_22c5f0;
        case 0x22c5f4u: goto label_22c5f4;
        case 0x22c5f8u: goto label_22c5f8;
        case 0x22c5fcu: goto label_22c5fc;
        case 0x22c600u: goto label_22c600;
        case 0x22c604u: goto label_22c604;
        case 0x22c608u: goto label_22c608;
        case 0x22c60cu: goto label_22c60c;
        case 0x22c610u: goto label_22c610;
        case 0x22c614u: goto label_22c614;
        default: break;
    }

    ctx->pc = 0x22c548u;

label_22c548:
    // 0x22c548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22c54c:
    // 0x22c54c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22c550:
    // 0x22c550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c554:
    // 0x22c554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c558:
    // 0x22c558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22c55c:
    // 0x22c55c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22c55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c560:
    // 0x22c560: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22c560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_22c564:
    // 0x22c564: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c568:
    // 0x22c568: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22c56c:
    // 0x22c56c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22c56cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22c570:
    // 0x22c570: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22c574:
    // 0x22c574: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22c578:
    // 0x22c578: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c57c:
    // 0x22c57c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22c57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22c580:
    // 0x22c580: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22c584:
    // 0x22c584: 0x40f809  jalr        $v0
label_22c588:
    if (ctx->pc == 0x22C588u) {
        ctx->pc = 0x22C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C584u;
        // 0x22c588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C58Cu;
        goto label_22c58c;
    }
    ctx->pc = 0x22C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C58Cu);
        ctx->pc = 0x22C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C584u;
        // 0x22c588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C584u, 0x22C58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C58Cu;
label_22c58c:
    // 0x22c58c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c590:
    // 0x22c590: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c594:
    // 0x22c594: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c598:
    // 0x22c598: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22c598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22c59c:
    // 0x22c59c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22c5a0:
    // 0x22c5a0: 0x40f809  jalr        $v0
label_22c5a4:
    if (ctx->pc == 0x22C5A4u) {
        ctx->pc = 0x22C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5A0u;
        // 0x22c5a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5A8u;
        goto label_22c5a8;
    }
    ctx->pc = 0x22C5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C5A8u);
        ctx->pc = 0x22C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5A0u;
        // 0x22c5a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C5A0u, 0x22C5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C5A8u;
label_22c5a8:
    // 0x22c5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c5ac:
    // 0x22c5ac: 0xc089988  jal         func_226620
label_22c5b0:
    if (ctx->pc == 0x22C5B0u) {
        ctx->pc = 0x22C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5ACu;
        // 0x22c5b0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5B4u;
        goto label_22c5b4;
    }
    ctx->pc = 0x22C5ACu;
    SET_GPR_U32(ctx, 31, 0x22C5B4u);
    ctx->pc = 0x22C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5ACu;
    // 0x22c5b0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C5ACu, 0x22C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5B4u;
label_22c5b4:
    // 0x22c5b4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x22c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_22c5b8:
    // 0x22c5b8: 0xc089988  jal         func_226620
label_22c5bc:
    if (ctx->pc == 0x22C5BCu) {
        ctx->pc = 0x22C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5B8u;
        // 0x22c5bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5C0u;
        goto label_22c5c0;
    }
    ctx->pc = 0x22C5B8u;
    SET_GPR_U32(ctx, 31, 0x22C5C0u);
    ctx->pc = 0x22C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5B8u;
    // 0x22c5bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C5B8u, 0x22C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5C0u;
label_22c5c0:
    // 0x22c5c0: 0xc094fca  jal         func_253F28
label_22c5c4:
    if (ctx->pc == 0x22C5C4u) {
        ctx->pc = 0x22C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5C0u;
        // 0x22c5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5C8u;
        goto label_22c5c8;
    }
    ctx->pc = 0x22C5C0u;
    SET_GPR_U32(ctx, 31, 0x22C5C8u);
    ctx->pc = 0x22C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5C0u;
    // 0x22c5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22C5C0u, 0x22C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5C8u;
label_22c5c8:
    // 0x22c5c8: 0xc094fca  jal         func_253F28
label_22c5cc:
    if (ctx->pc == 0x22C5CCu) {
        ctx->pc = 0x22C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5C8u;
        // 0x22c5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5D0u;
        goto label_22c5d0;
    }
    ctx->pc = 0x22C5C8u;
    SET_GPR_U32(ctx, 31, 0x22C5D0u);
    ctx->pc = 0x22C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5C8u;
    // 0x22c5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22C5C8u, 0x22C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5D0u;
label_22c5d0:
    // 0x22c5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c5d4:
    // 0x22c5d4: 0xc089988  jal         func_226620
label_22c5d8:
    if (ctx->pc == 0x22C5D8u) {
        ctx->pc = 0x22C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5D4u;
        // 0x22c5d8: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5DCu;
        goto label_22c5dc;
    }
    ctx->pc = 0x22C5D4u;
    SET_GPR_U32(ctx, 31, 0x22C5DCu);
    ctx->pc = 0x22C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5D4u;
    // 0x22c5d8: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C5D4u, 0x22C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5DCu;
label_22c5dc:
    // 0x22c5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c5e0:
    // 0x22c5e0: 0xc089988  jal         func_226620
label_22c5e4:
    if (ctx->pc == 0x22C5E4u) {
        ctx->pc = 0x22C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5E0u;
        // 0x22c5e4: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5E8u;
        goto label_22c5e8;
    }
    ctx->pc = 0x22C5E0u;
    SET_GPR_U32(ctx, 31, 0x22C5E8u);
    ctx->pc = 0x22C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5E0u;
    // 0x22c5e4: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C5E0u, 0x22C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5E8u;
label_22c5e8:
    // 0x22c5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c5ec:
    // 0x22c5ec: 0xc089974  jal         func_2265D0
label_22c5f0:
    if (ctx->pc == 0x22C5F0u) {
        ctx->pc = 0x22C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5ECu;
        // 0x22c5f0: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5F4u;
        goto label_22c5f4;
    }
    ctx->pc = 0x22C5ECu;
    SET_GPR_U32(ctx, 31, 0x22C5F4u);
    ctx->pc = 0x22C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5ECu;
    // 0x22c5f0: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22C5ECu, 0x22C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5F4u;
label_22c5f4:
    // 0x22c5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c5f8:
    // 0x22c5f8: 0xc089974  jal         func_2265D0
label_22c5fc:
    if (ctx->pc == 0x22C5FCu) {
        ctx->pc = 0x22C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5F8u;
        // 0x22c5fc: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C600u;
        goto label_22c600;
    }
    ctx->pc = 0x22C5F8u;
    SET_GPR_U32(ctx, 31, 0x22C600u);
    ctx->pc = 0x22C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5F8u;
    // 0x22c5fc: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22C5F8u, 0x22C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C600u;
label_22c600:
    // 0x22c600: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22c600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c604:
    // 0x22c604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c608:
    // 0x22c608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c60c:
    // 0x22c60c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22c610:
    // 0x22c610: 0x3e00008  jr          $ra
label_22c614:
    if (ctx->pc == 0x22C614u) {
        ctx->pc = 0x22C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C610u;
        // 0x22c614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C618u;
        goto label_fallthrough_0x22c610;
    }
    ctx->pc = 0x22C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C610u;
        // 0x22c614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c610:
    ctx->pc = 0x22C618u;
}
