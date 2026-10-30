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

// Function: sub_001C9748
// Address: 0x1c9748 - 0x1c9818
void sub_001C9748_0x1c9748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9748_0x1c9748");
#endif

    switch (ctx->pc) {
        case 0x1c9748u: goto label_1c9748;
        case 0x1c974cu: goto label_1c974c;
        case 0x1c9750u: goto label_1c9750;
        case 0x1c9754u: goto label_1c9754;
        case 0x1c9758u: goto label_1c9758;
        case 0x1c975cu: goto label_1c975c;
        case 0x1c9760u: goto label_1c9760;
        case 0x1c9764u: goto label_1c9764;
        case 0x1c9768u: goto label_1c9768;
        case 0x1c976cu: goto label_1c976c;
        case 0x1c9770u: goto label_1c9770;
        case 0x1c9774u: goto label_1c9774;
        case 0x1c9778u: goto label_1c9778;
        case 0x1c977cu: goto label_1c977c;
        case 0x1c9780u: goto label_1c9780;
        case 0x1c9784u: goto label_1c9784;
        case 0x1c9788u: goto label_1c9788;
        case 0x1c978cu: goto label_1c978c;
        case 0x1c9790u: goto label_1c9790;
        case 0x1c9794u: goto label_1c9794;
        case 0x1c9798u: goto label_1c9798;
        case 0x1c979cu: goto label_1c979c;
        case 0x1c97a0u: goto label_1c97a0;
        case 0x1c97a4u: goto label_1c97a4;
        case 0x1c97a8u: goto label_1c97a8;
        case 0x1c97acu: goto label_1c97ac;
        case 0x1c97b0u: goto label_1c97b0;
        case 0x1c97b4u: goto label_1c97b4;
        case 0x1c97b8u: goto label_1c97b8;
        case 0x1c97bcu: goto label_1c97bc;
        case 0x1c97c0u: goto label_1c97c0;
        case 0x1c97c4u: goto label_1c97c4;
        case 0x1c97c8u: goto label_1c97c8;
        case 0x1c97ccu: goto label_1c97cc;
        case 0x1c97d0u: goto label_1c97d0;
        case 0x1c97d4u: goto label_1c97d4;
        case 0x1c97d8u: goto label_1c97d8;
        case 0x1c97dcu: goto label_1c97dc;
        case 0x1c97e0u: goto label_1c97e0;
        case 0x1c97e4u: goto label_1c97e4;
        case 0x1c97e8u: goto label_1c97e8;
        case 0x1c97ecu: goto label_1c97ec;
        case 0x1c97f0u: goto label_1c97f0;
        case 0x1c97f4u: goto label_1c97f4;
        case 0x1c97f8u: goto label_1c97f8;
        case 0x1c97fcu: goto label_1c97fc;
        case 0x1c9800u: goto label_1c9800;
        case 0x1c9804u: goto label_1c9804;
        case 0x1c9808u: goto label_1c9808;
        case 0x1c980cu: goto label_1c980c;
        case 0x1c9810u: goto label_1c9810;
        case 0x1c9814u: goto label_1c9814;
        default: break;
    }

    ctx->pc = 0x1c9748u;

label_1c9748:
    // 0x1c9748: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1c9748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1c974c:
    // 0x1c974c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1c974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1c9750:
    // 0x1c9750: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1c9750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_1c9754:
    // 0x1c9754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9758:
    // 0x1c9758: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1c9758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1c975c:
    // 0x1c975c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1c975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_1c9760:
    // 0x1c9760: 0xc0725b8  jal         func_1C96E0
label_1c9764:
    if (ctx->pc == 0x1C9764u) {
        ctx->pc = 0x1C9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9760u;
        // 0x1c9764: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9768u;
        goto label_1c9768;
    }
    ctx->pc = 0x1C9760u;
    SET_GPR_U32(ctx, 31, 0x1C9768u);
    ctx->pc = 0x1C9764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9760u;
    // 0x1c9764: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C96E0u, 0x1C9760u, 0x1C9768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9768u;
label_1c9768:
    // 0x1c9768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c976c:
    // 0x1c976c: 0x8e020420  lw          $v0, 0x420($s0)
    ctx->pc = 0x1c976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
label_1c9770:
    // 0x1c9770: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_1c9774:
    if (ctx->pc == 0x1C9774u) {
        ctx->pc = 0x1C9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9770u;
        // 0x1c9774: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9778u;
        goto label_1c9778;
    }
    ctx->pc = 0x1C9770u;
    {
        const bool branch_taken_0x1c9770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9770u;
        // 0x1c9774: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9770) {
            ctx->pc = 0x1C978Cu;
            goto label_1c978c;
        }
    }
    ctx->pc = 0x1C9778u;
label_1c9778:
    // 0x1c9778: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1c977c:
    // 0x1c977c: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1c977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1c9780:
    // 0x1c9780: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c9784:
    // 0x1c9784: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c9784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c9788:
    // 0x1c9788: 0xac60411c  sw          $zero, 0x411C($v1)
    ctx->pc = 0x1c9788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16668), GPR_U32(ctx, 0));
label_1c978c:
    // 0x1c978c: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
label_1c9790:
    if (ctx->pc == 0x1C9790u) {
        ctx->pc = 0x1C9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C978Cu;
        // 0x1c9790: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9794u;
        goto label_1c9794;
    }
    ctx->pc = 0x1C978Cu;
    {
        const bool branch_taken_0x1c978c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1C9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C978Cu;
        // 0x1c9790: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c978c) {
            ctx->pc = 0x1C97B4u;
            goto label_1c97b4;
        }
    }
    ctx->pc = 0x1C9794u;
label_1c9794:
    // 0x1c9794: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9798:
    // 0x1c9798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c979c:
    // 0x1c979c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c979cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c97a0:
    // 0x1c97a0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c97a4:
    // 0x1c97a4: 0x60f809  jalr        $v1
label_1c97a8:
    if (ctx->pc == 0x1C97A8u) {
        ctx->pc = 0x1C97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97A4u;
        // 0x1c97a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97ACu;
        goto label_1c97ac;
    }
    ctx->pc = 0x1C97A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C97ACu);
        ctx->pc = 0x1C97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97A4u;
        // 0x1c97a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C97A4u, 0x1C97ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C97ACu;
label_1c97ac:
    // 0x1c97ac: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c97b0:
    if (ctx->pc == 0x1C97B0u) {
        ctx->pc = 0x1C97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97ACu;
        // 0x1c97b0: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97B4u;
        goto label_1c97b4;
    }
    ctx->pc = 0x1C97ACu;
    {
        const bool branch_taken_0x1c97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97ACu;
        // 0x1c97b0: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97ac) {
            ctx->pc = 0x1C97D4u;
            goto label_1c97d4;
        }
    }
    ctx->pc = 0x1C97B4u;
label_1c97b4:
    // 0x1c97b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c97b8:
    // 0x1c97b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c97b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c97bc:
    // 0x1c97bc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c97bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c97c0:
    // 0x1c97c0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c97c4:
    // 0x1c97c4: 0x60f809  jalr        $v1
label_1c97c8:
    if (ctx->pc == 0x1C97C8u) {
        ctx->pc = 0x1C97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97C4u;
        // 0x1c97c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97CCu;
        goto label_1c97cc;
    }
    ctx->pc = 0x1C97C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C97CCu);
        ctx->pc = 0x1C97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97C4u;
        // 0x1c97c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C97C4u, 0x1C97CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C97CCu;
label_1c97cc:
    // 0x1c97cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c97d0:
    if (ctx->pc == 0x1C97D0u) {
        ctx->pc = 0x1C97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97CCu;
        // 0x1c97d0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97D4u;
        goto label_1c97d4;
    }
    ctx->pc = 0x1C97CCu;
    {
        const bool branch_taken_0x1c97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97CCu;
        // 0x1c97d0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97cc) {
            ctx->pc = 0x1C9800u;
            goto label_1c9800;
        }
    }
    ctx->pc = 0x1C97D4u;
label_1c97d4:
    // 0x1c97d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c97d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c97d8:
    // 0x1c97d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c97d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c97dc:
    // 0x1c97dc: 0x24c65640  addiu       $a2, $a2, 0x5640
    ctx->pc = 0x1c97dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22080));
label_1c97e0:
    // 0x1c97e0: 0xc10ca04  jal         func_432810
label_1c97e4:
    if (ctx->pc == 0x1C97E4u) {
        ctx->pc = 0x1C97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97E0u;
        // 0x1c97e4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97E8u;
        goto label_1c97e8;
    }
    ctx->pc = 0x1C97E0u;
    SET_GPR_U32(ctx, 31, 0x1C97E8u);
    ctx->pc = 0x1C97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97E0u;
    // 0x1c97e4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C97E0u, 0x1C97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97E8u;
label_1c97e8:
    // 0x1c97e8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1c97ec:
    // 0x1c97ec: 0xc073478  jal         func_1CD1E0
label_1c97f0:
    if (ctx->pc == 0x1C97F0u) {
        ctx->pc = 0x1C97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97ECu;
        // 0x1c97f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97F4u;
        goto label_1c97f4;
    }
    ctx->pc = 0x1C97ECu;
    SET_GPR_U32(ctx, 31, 0x1C97F4u);
    ctx->pc = 0x1C97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97ECu;
    // 0x1c97f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1C97ECu, 0x1C97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97F4u;
label_1c97f4:
    // 0x1c97f4: 0xc06dbd8  jal         func_1B6F60
label_1c97f8:
    if (ctx->pc == 0x1C97F8u) {
        ctx->pc = 0x1C97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97F4u;
        // 0x1c97f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97FCu;
        goto label_1c97fc;
    }
    ctx->pc = 0x1C97F4u;
    SET_GPR_U32(ctx, 31, 0x1C97FCu);
    ctx->pc = 0x1C97F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97F4u;
    // 0x1c97f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F60u, 0x1C97F4u, 0x1C97FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97FCu;
label_1c97fc:
    // 0x1c97fc: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1c97fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1c9800:
    // 0x1c9800: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1c9800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1c9804:
    // 0x1c9804: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1c9804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c9808:
    // 0x1c9808: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1c9808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1c980c:
    // 0x1c980c: 0x3e00008  jr          $ra
label_1c9810:
    if (ctx->pc == 0x1C9810u) {
        ctx->pc = 0x1C9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C980Cu;
        // 0x1c9810: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9814u;
        goto label_1c9814;
    }
    ctx->pc = 0x1C980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C980Cu;
        // 0x1c9810: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9814u;
label_1c9814:
    // 0x1c9814: 0x0  nop
    ctx->pc = 0x1c9814u;
    // NOP
    ctx->pc = 0x1c9818u;
}
