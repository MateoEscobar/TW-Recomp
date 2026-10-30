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

// Function: sub_0010F618
// Address: 0x10f618 - 0x10f768
void sub_0010F618_0x10f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F618_0x10f618");
#endif

    switch (ctx->pc) {
        case 0x10f618u: goto label_10f618;
        case 0x10f61cu: goto label_10f61c;
        case 0x10f620u: goto label_10f620;
        case 0x10f624u: goto label_10f624;
        case 0x10f628u: goto label_10f628;
        case 0x10f62cu: goto label_10f62c;
        case 0x10f630u: goto label_10f630;
        case 0x10f634u: goto label_10f634;
        case 0x10f638u: goto label_10f638;
        case 0x10f63cu: goto label_10f63c;
        case 0x10f640u: goto label_10f640;
        case 0x10f644u: goto label_10f644;
        case 0x10f648u: goto label_10f648;
        case 0x10f64cu: goto label_10f64c;
        case 0x10f650u: goto label_10f650;
        case 0x10f654u: goto label_10f654;
        case 0x10f658u: goto label_10f658;
        case 0x10f65cu: goto label_10f65c;
        case 0x10f660u: goto label_10f660;
        case 0x10f664u: goto label_10f664;
        case 0x10f668u: goto label_10f668;
        case 0x10f66cu: goto label_10f66c;
        case 0x10f670u: goto label_10f670;
        case 0x10f674u: goto label_10f674;
        case 0x10f678u: goto label_10f678;
        case 0x10f67cu: goto label_10f67c;
        case 0x10f680u: goto label_10f680;
        case 0x10f684u: goto label_10f684;
        case 0x10f688u: goto label_10f688;
        case 0x10f68cu: goto label_10f68c;
        case 0x10f690u: goto label_10f690;
        case 0x10f694u: goto label_10f694;
        case 0x10f698u: goto label_10f698;
        case 0x10f69cu: goto label_10f69c;
        case 0x10f6a0u: goto label_10f6a0;
        case 0x10f6a4u: goto label_10f6a4;
        case 0x10f6a8u: goto label_10f6a8;
        case 0x10f6acu: goto label_10f6ac;
        case 0x10f6b0u: goto label_10f6b0;
        case 0x10f6b4u: goto label_10f6b4;
        case 0x10f6b8u: goto label_10f6b8;
        case 0x10f6bcu: goto label_10f6bc;
        case 0x10f6c0u: goto label_10f6c0;
        case 0x10f6c4u: goto label_10f6c4;
        case 0x10f6c8u: goto label_10f6c8;
        case 0x10f6ccu: goto label_10f6cc;
        case 0x10f6d0u: goto label_10f6d0;
        case 0x10f6d4u: goto label_10f6d4;
        case 0x10f6d8u: goto label_10f6d8;
        case 0x10f6dcu: goto label_10f6dc;
        case 0x10f6e0u: goto label_10f6e0;
        case 0x10f6e4u: goto label_10f6e4;
        case 0x10f6e8u: goto label_10f6e8;
        case 0x10f6ecu: goto label_10f6ec;
        case 0x10f6f0u: goto label_10f6f0;
        case 0x10f6f4u: goto label_10f6f4;
        case 0x10f6f8u: goto label_10f6f8;
        case 0x10f6fcu: goto label_10f6fc;
        case 0x10f700u: goto label_10f700;
        case 0x10f704u: goto label_10f704;
        case 0x10f708u: goto label_10f708;
        case 0x10f70cu: goto label_10f70c;
        case 0x10f710u: goto label_10f710;
        case 0x10f714u: goto label_10f714;
        case 0x10f718u: goto label_10f718;
        case 0x10f71cu: goto label_10f71c;
        case 0x10f720u: goto label_10f720;
        case 0x10f724u: goto label_10f724;
        case 0x10f728u: goto label_10f728;
        case 0x10f72cu: goto label_10f72c;
        case 0x10f730u: goto label_10f730;
        case 0x10f734u: goto label_10f734;
        case 0x10f738u: goto label_10f738;
        case 0x10f73cu: goto label_10f73c;
        case 0x10f740u: goto label_10f740;
        case 0x10f744u: goto label_10f744;
        case 0x10f748u: goto label_10f748;
        case 0x10f74cu: goto label_10f74c;
        case 0x10f750u: goto label_10f750;
        case 0x10f754u: goto label_10f754;
        case 0x10f758u: goto label_10f758;
        case 0x10f75cu: goto label_10f75c;
        case 0x10f760u: goto label_10f760;
        case 0x10f764u: goto label_10f764;
        default: break;
    }

    ctx->pc = 0x10f618u;

label_10f618:
    // 0x10f618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10f61c:
    // 0x10f61c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_10f620:
    // 0x10f620: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_10f624:
    // 0x10f624: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10f624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_10f628:
    // 0x10f628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10f62c:
    // 0x10f62c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f630:
    // 0x10f630: 0x8c65bce4  lw          $a1, -0x431C($v1)
    ctx->pc = 0x10f630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950116)));
label_10f634:
    // 0x10f634: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10f638:
    // 0x10f638: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x10f638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_10f63c:
    // 0x10f63c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10f640:
    // 0x10f640: 0x60f809  jalr        $v1
label_10f644:
    if (ctx->pc == 0x10F644u) {
        ctx->pc = 0x10F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F640u;
        // 0x10f644: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F648u;
        goto label_10f648;
    }
    ctx->pc = 0x10F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F648u);
        ctx->pc = 0x10F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F640u;
        // 0x10f644: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F640u, 0x10F648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F648u;
label_10f648:
    // 0x10f648: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x10f648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_10f64c:
    // 0x10f64c: 0xc045d14  jal         func_117450
label_10f650:
    if (ctx->pc == 0x10F650u) {
        ctx->pc = 0x10F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F64Cu;
        // 0x10f650: 0x24848600  addiu       $a0, $a0, -0x7A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F654u;
        goto label_10f654;
    }
    ctx->pc = 0x10F64Cu;
    SET_GPR_U32(ctx, 31, 0x10F654u);
    ctx->pc = 0x10F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F64Cu;
    // 0x10f650: 0x24848600  addiu       $a0, $a0, -0x7A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117450u, 0x10F64Cu, 0x10F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F654u;
label_10f654:
    // 0x10f654: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x10f654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
label_10f658:
    // 0x10f658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f65c:
    // 0x10f65c: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x10f65cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_10f660:
    // 0x10f660: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_10f664:
    // 0x10f664: 0xc04470c  jal         func_111C30
label_10f668:
    if (ctx->pc == 0x10F668u) {
        ctx->pc = 0x10F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F664u;
        // 0x10f668: 0xae007aa8  sw          $zero, 0x7AA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 31400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F66Cu;
        goto label_10f66c;
    }
    ctx->pc = 0x10F664u;
    SET_GPR_U32(ctx, 31, 0x10F66Cu);
    ctx->pc = 0x10F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F664u;
    // 0x10f668: 0xae007aa8  sw          $zero, 0x7AA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 31400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C30u, 0x10F664u, 0x10F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F66Cu;
label_10f66c:
    // 0x10f66c: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x10f66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
label_10f670:
    // 0x10f670: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x10f670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_10f674:
    // 0x10f674: 0x8cc58690  lw          $a1, -0x7970($a2)
    ctx->pc = 0x10f674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936208)));
label_10f678:
    // 0x10f678: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_10f67c:
    // 0x10f67c: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x10f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_10f680:
    // 0x10f680: 0xac454268  sw          $a1, 0x4268($v0)
    ctx->pc = 0x10f680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17000), GPR_U32(ctx, 5));
label_10f684:
    // 0x10f684: 0x8cc38690  lw          $v1, -0x7970($a2)
    ctx->pc = 0x10f684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936208)));
label_10f688:
    // 0x10f688: 0xac404270  sw          $zero, 0x4270($v0)
    ctx->pc = 0x10f688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17008), GPR_U32(ctx, 0));
label_10f68c:
    // 0x10f68c: 0xac434274  sw          $v1, 0x4274($v0)
    ctx->pc = 0x10f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17012), GPR_U32(ctx, 3));
label_10f690:
    // 0x10f690: 0xc045088  jal         func_114220
label_10f694:
    if (ctx->pc == 0x10F694u) {
        ctx->pc = 0x10F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F690u;
        // 0x10f694: 0xae007a24  sw          $zero, 0x7A24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 31268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F698u;
        goto label_10f698;
    }
    ctx->pc = 0x10F690u;
    SET_GPR_U32(ctx, 31, 0x10F698u);
    ctx->pc = 0x10F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F690u;
    // 0x10f694: 0xae007a24  sw          $zero, 0x7A24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 31268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114220u, 0x10F690u, 0x10F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F698u;
label_10f698:
    // 0x10f698: 0xc043dfe  jal         func_10F7F8
label_10f69c:
    if (ctx->pc == 0x10F69Cu) {
        ctx->pc = 0x10F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F698u;
        // 0x10f69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6A0u;
        goto label_10f6a0;
    }
    ctx->pc = 0x10F698u;
    SET_GPR_U32(ctx, 31, 0x10F6A0u);
    ctx->pc = 0x10F69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F698u;
    // 0x10f69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7F8u, 0x10F698u, 0x10F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6A0u;
label_10f6a0:
    // 0x10f6a0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_10f6a4:
    // 0x10f6a4: 0xae007a58  sw          $zero, 0x7A58($s0)
    ctx->pc = 0x10f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31320), GPR_U32(ctx, 0));
label_10f6a8:
    // 0x10f6a8: 0x24486f70  addiu       $t0, $v0, 0x6F70
    ctx->pc = 0x10f6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
label_10f6ac:
    // 0x10f6ac: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x10f6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_10f6b0:
    // 0x10f6b0: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x10f6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_10f6b4:
    // 0x10f6b4: 0x81060004  lb          $a2, 0x4($t0)
    ctx->pc = 0x10f6b4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_10f6b8:
    // 0x10f6b8: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x10f6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_10f6bc:
    // 0x10f6bc: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x10f6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_10f6c0:
    // 0x10f6c0: 0xa3a60004  sb          $a2, 0x4($sp)
    ctx->pc = 0x10f6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
label_10f6c4:
    // 0x10f6c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10f6c8:
    // 0x10f6c8: 0xc044586  jal         func_111618
label_10f6cc:
    if (ctx->pc == 0x10F6CCu) {
        ctx->pc = 0x10F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6C8u;
        // 0x10f6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6D0u;
        goto label_10f6d0;
    }
    ctx->pc = 0x10F6C8u;
    SET_GPR_U32(ctx, 31, 0x10F6D0u);
    ctx->pc = 0x10F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6C8u;
    // 0x10f6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111618u, 0x10F6C8u, 0x10F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6D0u;
label_10f6d0:
    // 0x10f6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f6d4:
    // 0x10f6d4: 0xc044b12  jal         func_112C48
label_10f6d8:
    if (ctx->pc == 0x10F6D8u) {
        ctx->pc = 0x10F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6D4u;
        // 0x10f6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6DCu;
        goto label_10f6dc;
    }
    ctx->pc = 0x10F6D4u;
    SET_GPR_U32(ctx, 31, 0x10F6DCu);
    ctx->pc = 0x10F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6D4u;
    // 0x10f6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C48u, 0x10F6D4u, 0x10F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6DCu;
label_10f6dc:
    // 0x10f6dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10f6e0:
    // 0x10f6e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10f6e4:
    // 0x10f6e4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x10f6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f6e8:
    // 0x10f6e8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10f6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_10f6ec:
    // 0x10f6ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10f6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10f6f0:
    // 0x10f6f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10f6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10f6f4:
    // 0x10f6f4: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x10f6f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_10f6f8:
    // 0x10f6f8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x10f6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_10f6fc:
    // 0x10f6fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10f700:
    // 0x10f700: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10f704:
    // 0x10f704: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10f708:
    // 0x10f708: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x10f708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_10f70c:
    // 0x10f70c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10f710:
    // 0x10f710: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x10f710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_10f714:
    // 0x10f714: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x10f714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10f718:
    // 0x10f718: 0x2408009e  addiu       $t0, $zero, 0x9E
    ctx->pc = 0x10f718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_10f71c:
    // 0x10f71c: 0xae0a7ab4  sw          $t2, 0x7AB4($s0)
    ctx->pc = 0x10f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31412), GPR_U32(ctx, 10));
label_10f720:
    // 0x10f720: 0xe6007a5c  swc1        $f0, 0x7A5C($s0)
    ctx->pc = 0x10f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 31324), bits); }
label_10f724:
    // 0x10f724: 0xae097a60  sw          $t1, 0x7A60($s0)
    ctx->pc = 0x10f724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31328), GPR_U32(ctx, 9));
label_10f728:
    // 0x10f728: 0xae027a68  sw          $v0, 0x7A68($s0)
    ctx->pc = 0x10f728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31336), GPR_U32(ctx, 2));
label_10f72c:
    // 0x10f72c: 0xae037a70  sw          $v1, 0x7A70($s0)
    ctx->pc = 0x10f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31344), GPR_U32(ctx, 3));
label_10f730:
    // 0x10f730: 0xae047a78  sw          $a0, 0x7A78($s0)
    ctx->pc = 0x10f730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31352), GPR_U32(ctx, 4));
label_10f734:
    // 0x10f734: 0xae057a88  sw          $a1, 0x7A88($s0)
    ctx->pc = 0x10f734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31368), GPR_U32(ctx, 5));
label_10f738:
    // 0x10f738: 0xae067a90  sw          $a2, 0x7A90($s0)
    ctx->pc = 0x10f738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31376), GPR_U32(ctx, 6));
label_10f73c:
    // 0x10f73c: 0xae077a98  sw          $a3, 0x7A98($s0)
    ctx->pc = 0x10f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31384), GPR_U32(ctx, 7));
label_10f740:
    // 0x10f740: 0xae087aa0  sw          $t0, 0x7AA0($s0)
    ctx->pc = 0x10f740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31392), GPR_U32(ctx, 8));
label_10f744:
    // 0x10f744: 0xe6027aac  swc1        $f2, 0x7AAC($s0)
    ctx->pc = 0x10f744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 31404), bits); }
label_10f748:
    // 0x10f748: 0xe6017ab0  swc1        $f1, 0x7AB0($s0)
    ctx->pc = 0x10f748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 31408), bits); }
label_10f74c:
    // 0x10f74c: 0xae0a7a80  sw          $t2, 0x7A80($s0)
    ctx->pc = 0x10f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31360), GPR_U32(ctx, 10));
label_10f750:
    // 0x10f750: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10f750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10f754:
    // 0x10f754: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10f754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10f758:
    // 0x10f758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10f75c:
    // 0x10f75c: 0x3e00008  jr          $ra
label_10f760:
    if (ctx->pc == 0x10F760u) {
        ctx->pc = 0x10F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F75Cu;
        // 0x10f760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F764u;
        goto label_10f764;
    }
    ctx->pc = 0x10F75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F75Cu;
        // 0x10f760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F764u;
label_10f764:
    // 0x10f764: 0x0  nop
    ctx->pc = 0x10f764u;
    // NOP
    ctx->pc = 0x10f768u;
}
