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

// Function: sub_003B5498
// Address: 0x3b5498 - 0x3b55e8
void sub_003B5498_0x3b5498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5498_0x3b5498");
#endif

    switch (ctx->pc) {
        case 0x3b5498u: goto label_3b5498;
        case 0x3b549cu: goto label_3b549c;
        case 0x3b54a0u: goto label_3b54a0;
        case 0x3b54a4u: goto label_3b54a4;
        case 0x3b54a8u: goto label_3b54a8;
        case 0x3b54acu: goto label_3b54ac;
        case 0x3b54b0u: goto label_3b54b0;
        case 0x3b54b4u: goto label_3b54b4;
        case 0x3b54b8u: goto label_3b54b8;
        case 0x3b54bcu: goto label_3b54bc;
        case 0x3b54c0u: goto label_3b54c0;
        case 0x3b54c4u: goto label_3b54c4;
        case 0x3b54c8u: goto label_3b54c8;
        case 0x3b54ccu: goto label_3b54cc;
        case 0x3b54d0u: goto label_3b54d0;
        case 0x3b54d4u: goto label_3b54d4;
        case 0x3b54d8u: goto label_3b54d8;
        case 0x3b54dcu: goto label_3b54dc;
        case 0x3b54e0u: goto label_3b54e0;
        case 0x3b54e4u: goto label_3b54e4;
        case 0x3b54e8u: goto label_3b54e8;
        case 0x3b54ecu: goto label_3b54ec;
        case 0x3b54f0u: goto label_3b54f0;
        case 0x3b54f4u: goto label_3b54f4;
        case 0x3b54f8u: goto label_3b54f8;
        case 0x3b54fcu: goto label_3b54fc;
        case 0x3b5500u: goto label_3b5500;
        case 0x3b5504u: goto label_3b5504;
        case 0x3b5508u: goto label_3b5508;
        case 0x3b550cu: goto label_3b550c;
        case 0x3b5510u: goto label_3b5510;
        case 0x3b5514u: goto label_3b5514;
        case 0x3b5518u: goto label_3b5518;
        case 0x3b551cu: goto label_3b551c;
        case 0x3b5520u: goto label_3b5520;
        case 0x3b5524u: goto label_3b5524;
        case 0x3b5528u: goto label_3b5528;
        case 0x3b552cu: goto label_3b552c;
        case 0x3b5530u: goto label_3b5530;
        case 0x3b5534u: goto label_3b5534;
        case 0x3b5538u: goto label_3b5538;
        case 0x3b553cu: goto label_3b553c;
        case 0x3b5540u: goto label_3b5540;
        case 0x3b5544u: goto label_3b5544;
        case 0x3b5548u: goto label_3b5548;
        case 0x3b554cu: goto label_3b554c;
        case 0x3b5550u: goto label_3b5550;
        case 0x3b5554u: goto label_3b5554;
        case 0x3b5558u: goto label_3b5558;
        case 0x3b555cu: goto label_3b555c;
        case 0x3b5560u: goto label_3b5560;
        case 0x3b5564u: goto label_3b5564;
        case 0x3b5568u: goto label_3b5568;
        case 0x3b556cu: goto label_3b556c;
        case 0x3b5570u: goto label_3b5570;
        case 0x3b5574u: goto label_3b5574;
        case 0x3b5578u: goto label_3b5578;
        case 0x3b557cu: goto label_3b557c;
        case 0x3b5580u: goto label_3b5580;
        case 0x3b5584u: goto label_3b5584;
        case 0x3b5588u: goto label_3b5588;
        case 0x3b558cu: goto label_3b558c;
        case 0x3b5590u: goto label_3b5590;
        case 0x3b5594u: goto label_3b5594;
        case 0x3b5598u: goto label_3b5598;
        case 0x3b559cu: goto label_3b559c;
        case 0x3b55a0u: goto label_3b55a0;
        case 0x3b55a4u: goto label_3b55a4;
        case 0x3b55a8u: goto label_3b55a8;
        case 0x3b55acu: goto label_3b55ac;
        case 0x3b55b0u: goto label_3b55b0;
        case 0x3b55b4u: goto label_3b55b4;
        case 0x3b55b8u: goto label_3b55b8;
        case 0x3b55bcu: goto label_3b55bc;
        case 0x3b55c0u: goto label_3b55c0;
        case 0x3b55c4u: goto label_3b55c4;
        case 0x3b55c8u: goto label_3b55c8;
        case 0x3b55ccu: goto label_3b55cc;
        case 0x3b55d0u: goto label_3b55d0;
        case 0x3b55d4u: goto label_3b55d4;
        case 0x3b55d8u: goto label_3b55d8;
        case 0x3b55dcu: goto label_3b55dc;
        case 0x3b55e0u: goto label_3b55e0;
        case 0x3b55e4u: goto label_3b55e4;
        default: break;
    }

    ctx->pc = 0x3b5498u;

label_3b5498:
    // 0x3b5498: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b5498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b549c:
    // 0x3b549c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b54a0:
    // 0x3b54a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b54a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b54a4:
    // 0x3b54a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b54a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b54a8:
    // 0x3b54a8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b54a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b54ac:
    // 0x3b54ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b54acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b54b0:
    // 0x3b54b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b54b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b54b4:
    // 0x3b54b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b54b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b54b8:
    // 0x3b54b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b54b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3b54bc:
    // 0x3b54bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b54bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b54c0:
    // 0x3b54c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b54c4:
    // 0x3b54c4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b54c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b54c8:
    // 0x3b54c8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b54cc:
    // 0x3b54cc: 0x40f809  jalr        $v0
label_3b54d0:
    if (ctx->pc == 0x3B54D0u) {
        ctx->pc = 0x3B54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54CCu;
        // 0x3b54d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B54D4u;
        goto label_3b54d4;
    }
    ctx->pc = 0x3B54CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B54D4u);
        ctx->pc = 0x3B54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54CCu;
        // 0x3b54d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B54CCu, 0x3B54D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B54D4u;
label_3b54d4:
    // 0x3b54d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b54d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b54d8:
    // 0x3b54d8: 0xc0ea146  jal         func_3A8518
label_3b54dc:
    if (ctx->pc == 0x3B54DCu) {
        ctx->pc = 0x3B54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54D8u;
        // 0x3b54dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B54E0u;
        goto label_3b54e0;
    }
    ctx->pc = 0x3B54D8u;
    SET_GPR_U32(ctx, 31, 0x3B54E0u);
    ctx->pc = 0x3B54DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54D8u;
    // 0x3b54dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B54D8u, 0x3B54E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54E0u;
label_3b54e0:
    // 0x3b54e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b54e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b54e4:
    // 0x3b54e4: 0xc0ea146  jal         func_3A8518
label_3b54e8:
    if (ctx->pc == 0x3B54E8u) {
        ctx->pc = 0x3B54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54E4u;
        // 0x3b54e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B54ECu;
        goto label_3b54ec;
    }
    ctx->pc = 0x3B54E4u;
    SET_GPR_U32(ctx, 31, 0x3B54ECu);
    ctx->pc = 0x3B54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54E4u;
    // 0x3b54e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B54E4u, 0x3B54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54ECu;
label_3b54ec:
    // 0x3b54ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b54ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b54f0:
    // 0x3b54f0: 0xc0ea146  jal         func_3A8518
label_3b54f4:
    if (ctx->pc == 0x3B54F4u) {
        ctx->pc = 0x3B54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54F0u;
        // 0x3b54f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B54F8u;
        goto label_3b54f8;
    }
    ctx->pc = 0x3B54F0u;
    SET_GPR_U32(ctx, 31, 0x3B54F8u);
    ctx->pc = 0x3B54F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54F0u;
    // 0x3b54f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B54F0u, 0x3B54F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54F8u;
label_3b54f8:
    // 0x3b54f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b54fc:
    // 0x3b54fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b54fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5500:
    // 0x3b5500: 0xc0ea12a  jal         func_3A84A8
label_3b5504:
    if (ctx->pc == 0x3B5504u) {
        ctx->pc = 0x3B5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5500u;
        // 0x3b5504: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5508u;
        goto label_3b5508;
    }
    ctx->pc = 0x3B5500u;
    SET_GPR_U32(ctx, 31, 0x3B5508u);
    ctx->pc = 0x3B5504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5500u;
    // 0x3b5504: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B5500u, 0x3B5508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5508u;
label_3b5508:
    // 0x3b5508: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b5508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b550c:
    // 0x3b550c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5510:
    // 0x3b5510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5514:
    // 0x3b5514: 0xc0ea12a  jal         func_3A84A8
label_3b5518:
    if (ctx->pc == 0x3B5518u) {
        ctx->pc = 0x3B5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5514u;
        // 0x3b5518: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B551Cu;
        goto label_3b551c;
    }
    ctx->pc = 0x3B5514u;
    SET_GPR_U32(ctx, 31, 0x3B551Cu);
    ctx->pc = 0x3B5518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5514u;
    // 0x3b5518: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B5514u, 0x3B551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B551Cu;
label_3b551c:
    // 0x3b551c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b551cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b5520:
    // 0x3b5520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5524:
    // 0x3b5524: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3b5524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b5528:
    // 0x3b5528: 0xc0e858c  jal         func_3A1630
label_3b552c:
    if (ctx->pc == 0x3B552Cu) {
        ctx->pc = 0x3B552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5528u;
        // 0x3b552c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5530u;
        goto label_3b5530;
    }
    ctx->pc = 0x3B5528u;
    SET_GPR_U32(ctx, 31, 0x3B5530u);
    ctx->pc = 0x3B552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5528u;
    // 0x3b552c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B5528u, 0x3B5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5530u;
label_3b5530:
    // 0x3b5530: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b5530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b5534:
    // 0x3b5534: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3b5534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3b5538:
    // 0x3b5538: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x3b5538u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b553c:
    // 0x3b553c: 0x3c05d332  lui         $a1, 0xD332
    ctx->pc = 0x3b553cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54066 << 16));
label_3b5540:
    // 0x3b5540: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3b5540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3b5544:
    // 0x3b5544: 0x34a58d52  ori         $a1, $a1, 0x8D52
    ctx->pc = 0x3b5544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36178);
label_3b5548:
    // 0x3b5548: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x3b5548u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
label_3b554c:
    // 0x3b554c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5550:
    // 0x3b5550: 0xc0e9132  jal         func_3A44C8
label_3b5554:
    if (ctx->pc == 0x3B5554u) {
        ctx->pc = 0x3B5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5550u;
        // 0x3b5554: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5558u;
        goto label_3b5558;
    }
    ctx->pc = 0x3B5550u;
    SET_GPR_U32(ctx, 31, 0x3B5558u);
    ctx->pc = 0x3B5554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5550u;
    // 0x3b5554: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B5550u, 0x3B5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5558u;
label_3b5558:
    // 0x3b5558: 0xae1200d8  sw          $s2, 0xD8($s0)
    ctx->pc = 0x3b5558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 18));
label_3b555c:
    // 0x3b555c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5560:
    // 0x3b5560: 0xae1300dc  sw          $s3, 0xDC($s0)
    ctx->pc = 0x3b5560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 19));
label_3b5564:
    // 0x3b5564: 0xc0e91da  jal         func_3A4768
label_3b5568:
    if (ctx->pc == 0x3B5568u) {
        ctx->pc = 0x3B5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5564u;
        // 0x3b5568: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B556Cu;
        goto label_3b556c;
    }
    ctx->pc = 0x3B5564u;
    SET_GPR_U32(ctx, 31, 0x3B556Cu);
    ctx->pc = 0x3B5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5564u;
    // 0x3b5568: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B5564u, 0x3B556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B556Cu;
label_3b556c:
    // 0x3b556c: 0xc0e91da  jal         func_3A4768
label_3b5570:
    if (ctx->pc == 0x3B5570u) {
        ctx->pc = 0x3B5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B556Cu;
        // 0x3b5570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5574u;
        goto label_3b5574;
    }
    ctx->pc = 0x3B556Cu;
    SET_GPR_U32(ctx, 31, 0x3B5574u);
    ctx->pc = 0x3B5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B556Cu;
    // 0x3b5570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B556Cu, 0x3B5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5574u;
label_3b5574:
    // 0x3b5574: 0xae1400e0  sw          $s4, 0xE0($s0)
    ctx->pc = 0x3b5574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 20));
label_3b5578:
    // 0x3b5578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b5578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b557c:
    // 0x3b557c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3b557cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3b5580:
    // 0x3b5580: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3b5580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3b5584:
    // 0x3b5584: 0xc0e9290  jal         func_3A4A40
label_3b5588:
    if (ctx->pc == 0x3B5588u) {
        ctx->pc = 0x3B5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5584u;
        // 0x3b5588: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B558Cu;
        goto label_3b558c;
    }
    ctx->pc = 0x3B5584u;
    SET_GPR_U32(ctx, 31, 0x3B558Cu);
    ctx->pc = 0x3B5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5584u;
    // 0x3b5588: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B5584u, 0x3B558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B558Cu;
label_3b558c:
    // 0x3b558c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b5590:
    // 0x3b5590: 0xc0e9290  jal         func_3A4A40
label_3b5594:
    if (ctx->pc == 0x3B5594u) {
        ctx->pc = 0x3B5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5590u;
        // 0x3b5594: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5598u;
        goto label_3b5598;
    }
    ctx->pc = 0x3B5590u;
    SET_GPR_U32(ctx, 31, 0x3B5598u);
    ctx->pc = 0x3B5594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5590u;
    // 0x3b5594: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B5590u, 0x3B5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5598u;
label_3b5598:
    // 0x3b5598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b559c:
    // 0x3b559c: 0xc0e8dee  jal         func_3A37B8
label_3b55a0:
    if (ctx->pc == 0x3B55A0u) {
        ctx->pc = 0x3B55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B559Cu;
        // 0x3b55a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B55A4u;
        goto label_3b55a4;
    }
    ctx->pc = 0x3B559Cu;
    SET_GPR_U32(ctx, 31, 0x3B55A4u);
    ctx->pc = 0x3B55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B559Cu;
    // 0x3b55a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B559Cu, 0x3B55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55A4u;
label_3b55a4:
    // 0x3b55a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b55a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b55a8:
    // 0x3b55a8: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b55ac:
    // 0x3b55ac: 0xc0e92a6  jal         func_3A4A98
label_3b55b0:
    if (ctx->pc == 0x3B55B0u) {
        ctx->pc = 0x3B55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B55ACu;
        // 0x3b55b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B55B4u;
        goto label_3b55b4;
    }
    ctx->pc = 0x3B55ACu;
    SET_GPR_U32(ctx, 31, 0x3B55B4u);
    ctx->pc = 0x3B55B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55ACu;
    // 0x3b55b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B55ACu, 0x3B55B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55B4u;
label_3b55b4:
    // 0x3b55b4: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b55b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b55b8:
    // 0x3b55b8: 0xc0e92a6  jal         func_3A4A98
label_3b55bc:
    if (ctx->pc == 0x3B55BCu) {
        ctx->pc = 0x3B55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B55B8u;
        // 0x3b55bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B55C0u;
        goto label_3b55c0;
    }
    ctx->pc = 0x3B55B8u;
    SET_GPR_U32(ctx, 31, 0x3B55C0u);
    ctx->pc = 0x3B55BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55B8u;
    // 0x3b55bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B55B8u, 0x3B55C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55C0u;
label_3b55c0:
    // 0x3b55c0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b55c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b55c4:
    // 0x3b55c4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b55c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b55c8:
    // 0x3b55c8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b55c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b55cc:
    // 0x3b55cc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b55ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b55d0:
    // 0x3b55d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b55d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b55d4:
    // 0x3b55d4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b55d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b55d8:
    // 0x3b55d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b55d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b55dc:
    // 0x3b55dc: 0x3e00008  jr          $ra
label_3b55e0:
    if (ctx->pc == 0x3B55E0u) {
        ctx->pc = 0x3B55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B55DCu;
        // 0x3b55e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B55E4u;
        goto label_3b55e4;
    }
    ctx->pc = 0x3B55DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B55DCu;
        // 0x3b55e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B55DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B55E4u;
label_3b55e4:
    // 0x3b55e4: 0x0  nop
    ctx->pc = 0x3b55e4u;
    // NOP
    ctx->pc = 0x3b55e8u;
}
