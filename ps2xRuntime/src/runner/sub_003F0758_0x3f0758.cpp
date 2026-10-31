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

// Function: sub_003F0758
// Address: 0x3f0758 - 0x3f0898
void sub_003F0758_0x3f0758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0758_0x3f0758");
#endif

    switch (ctx->pc) {
        case 0x3f0758u: goto label_3f0758;
        case 0x3f075cu: goto label_3f075c;
        case 0x3f0760u: goto label_3f0760;
        case 0x3f0764u: goto label_3f0764;
        case 0x3f0768u: goto label_3f0768;
        case 0x3f076cu: goto label_3f076c;
        case 0x3f0770u: goto label_3f0770;
        case 0x3f0774u: goto label_3f0774;
        case 0x3f0778u: goto label_3f0778;
        case 0x3f077cu: goto label_3f077c;
        case 0x3f0780u: goto label_3f0780;
        case 0x3f0784u: goto label_3f0784;
        case 0x3f0788u: goto label_3f0788;
        case 0x3f078cu: goto label_3f078c;
        case 0x3f0790u: goto label_3f0790;
        case 0x3f0794u: goto label_3f0794;
        case 0x3f0798u: goto label_3f0798;
        case 0x3f079cu: goto label_3f079c;
        case 0x3f07a0u: goto label_3f07a0;
        case 0x3f07a4u: goto label_3f07a4;
        case 0x3f07a8u: goto label_3f07a8;
        case 0x3f07acu: goto label_3f07ac;
        case 0x3f07b0u: goto label_3f07b0;
        case 0x3f07b4u: goto label_3f07b4;
        case 0x3f07b8u: goto label_3f07b8;
        case 0x3f07bcu: goto label_3f07bc;
        case 0x3f07c0u: goto label_3f07c0;
        case 0x3f07c4u: goto label_3f07c4;
        case 0x3f07c8u: goto label_3f07c8;
        case 0x3f07ccu: goto label_3f07cc;
        case 0x3f07d0u: goto label_3f07d0;
        case 0x3f07d4u: goto label_3f07d4;
        case 0x3f07d8u: goto label_3f07d8;
        case 0x3f07dcu: goto label_3f07dc;
        case 0x3f07e0u: goto label_3f07e0;
        case 0x3f07e4u: goto label_3f07e4;
        case 0x3f07e8u: goto label_3f07e8;
        case 0x3f07ecu: goto label_3f07ec;
        case 0x3f07f0u: goto label_3f07f0;
        case 0x3f07f4u: goto label_3f07f4;
        case 0x3f07f8u: goto label_3f07f8;
        case 0x3f07fcu: goto label_3f07fc;
        case 0x3f0800u: goto label_3f0800;
        case 0x3f0804u: goto label_3f0804;
        case 0x3f0808u: goto label_3f0808;
        case 0x3f080cu: goto label_3f080c;
        case 0x3f0810u: goto label_3f0810;
        case 0x3f0814u: goto label_3f0814;
        case 0x3f0818u: goto label_3f0818;
        case 0x3f081cu: goto label_3f081c;
        case 0x3f0820u: goto label_3f0820;
        case 0x3f0824u: goto label_3f0824;
        case 0x3f0828u: goto label_3f0828;
        case 0x3f082cu: goto label_3f082c;
        case 0x3f0830u: goto label_3f0830;
        case 0x3f0834u: goto label_3f0834;
        case 0x3f0838u: goto label_3f0838;
        case 0x3f083cu: goto label_3f083c;
        case 0x3f0840u: goto label_3f0840;
        case 0x3f0844u: goto label_3f0844;
        case 0x3f0848u: goto label_3f0848;
        case 0x3f084cu: goto label_3f084c;
        case 0x3f0850u: goto label_3f0850;
        case 0x3f0854u: goto label_3f0854;
        case 0x3f0858u: goto label_3f0858;
        case 0x3f085cu: goto label_3f085c;
        case 0x3f0860u: goto label_3f0860;
        case 0x3f0864u: goto label_3f0864;
        case 0x3f0868u: goto label_3f0868;
        case 0x3f086cu: goto label_3f086c;
        case 0x3f0870u: goto label_3f0870;
        case 0x3f0874u: goto label_3f0874;
        case 0x3f0878u: goto label_3f0878;
        case 0x3f087cu: goto label_3f087c;
        case 0x3f0880u: goto label_3f0880;
        case 0x3f0884u: goto label_3f0884;
        case 0x3f0888u: goto label_3f0888;
        case 0x3f088cu: goto label_3f088c;
        case 0x3f0890u: goto label_3f0890;
        case 0x3f0894u: goto label_3f0894;
        default: break;
    }

    ctx->pc = 0x3f0758u;

label_3f0758:
    // 0x3f0758: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f0758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3f075c:
    // 0x3f075c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3f075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3f0760:
    // 0x3f0760: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3f0760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3f0764:
    // 0x3f0764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f0764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0768:
    // 0x3f0768: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3f0768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3f076c:
    // 0x3f076c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f076cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f0770:
    // 0x3f0770: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3f0770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3f0774:
    // 0x3f0774: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f0774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3f0778:
    // 0x3f0778: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f0778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f077c:
    // 0x3f077c: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x3f077cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3f0780:
    // 0x3f0780: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f0780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f0784:
    // 0x3f0784: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f0784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f0788:
    // 0x3f0788: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f078c:
    // 0x3f078c: 0x40f809  jalr        $v0
label_3f0790:
    if (ctx->pc == 0x3F0790u) {
        ctx->pc = 0x3F0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F078Cu;
        // 0x3f0790: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0794u;
        goto label_3f0794;
    }
    ctx->pc = 0x3F078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F0794u);
        ctx->pc = 0x3F0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F078Cu;
        // 0x3f0790: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F078Cu, 0x3F0794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0794u;
label_3f0794:
    // 0x3f0794: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f0794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0798:
    // 0x3f0798: 0xc0ea14c  jal         func_3A8530
label_3f079c:
    if (ctx->pc == 0x3F079Cu) {
        ctx->pc = 0x3F079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0798u;
        // 0x3f079c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07A0u;
        goto label_3f07a0;
    }
    ctx->pc = 0x3F0798u;
    SET_GPR_U32(ctx, 31, 0x3F07A0u);
    ctx->pc = 0x3F079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0798u;
    // 0x3f079c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F0798u, 0x3F07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07A0u;
label_3f07a0:
    // 0x3f07a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f07a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f07a4:
    // 0x3f07a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f07a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f07a8:
    // 0x3f07a8: 0xc0ea12a  jal         func_3A84A8
label_3f07ac:
    if (ctx->pc == 0x3F07ACu) {
        ctx->pc = 0x3F07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07A8u;
        // 0x3f07ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07B0u;
        goto label_3f07b0;
    }
    ctx->pc = 0x3F07A8u;
    SET_GPR_U32(ctx, 31, 0x3F07B0u);
    ctx->pc = 0x3F07ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F07A8u;
    // 0x3f07ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F07A8u, 0x3F07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07B0u;
label_3f07b0:
    // 0x3f07b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f07b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f07b4:
    // 0x3f07b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f07b8:
    // 0x3f07b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f07b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f07bc:
    // 0x3f07bc: 0xc0ea12a  jal         func_3A84A8
label_3f07c0:
    if (ctx->pc == 0x3F07C0u) {
        ctx->pc = 0x3F07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07BCu;
        // 0x3f07c0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07C4u;
        goto label_3f07c4;
    }
    ctx->pc = 0x3F07BCu;
    SET_GPR_U32(ctx, 31, 0x3F07C4u);
    ctx->pc = 0x3F07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F07BCu;
    // 0x3f07c0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F07BCu, 0x3F07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07C4u;
label_3f07c4:
    // 0x3f07c4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f07c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f07c8:
    // 0x3f07c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3f07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f07cc:
    // 0x3f07cc: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3f07ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_3f07d0:
    // 0x3f07d0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f07d4:
    // 0x3f07d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f07d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f07d8:
    // 0x3f07d8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f07dc:
    // 0x3f07dc: 0xc0cd4ee  jal         func_3353B8
label_3f07e0:
    if (ctx->pc == 0x3F07E0u) {
        ctx->pc = 0x3F07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07DCu;
        // 0x3f07e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07E4u;
        goto label_3f07e4;
    }
    ctx->pc = 0x3F07DCu;
    SET_GPR_U32(ctx, 31, 0x3F07E4u);
    ctx->pc = 0x3F07E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F07DCu;
    // 0x3f07e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F07DCu, 0x3F07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07E4u;
label_3f07e4:
    // 0x3f07e4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x3f07e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f07e8:
    // 0x3f07e8: 0xc0e858c  jal         func_3A1630
label_3f07ec:
    if (ctx->pc == 0x3F07ECu) {
        ctx->pc = 0x3F07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07E8u;
        // 0x3f07ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07F0u;
        goto label_3f07f0;
    }
    ctx->pc = 0x3F07E8u;
    SET_GPR_U32(ctx, 31, 0x3F07F0u);
    ctx->pc = 0x3F07ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F07E8u;
    // 0x3f07ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F07E8u, 0x3F07F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07F0u;
label_3f07f0:
    // 0x3f07f0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3f07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3f07f4:
    // 0x3f07f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f07f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f07f8:
    // 0x3f07f8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3f07f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_3f07fc:
    // 0x3f07fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f07fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0800:
    // 0x3f0800: 0xc0e9132  jal         func_3A44C8
label_3f0804:
    if (ctx->pc == 0x3F0804u) {
        ctx->pc = 0x3F0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0800u;
        // 0x3f0804: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0808u;
        goto label_3f0808;
    }
    ctx->pc = 0x3F0800u;
    SET_GPR_U32(ctx, 31, 0x3F0808u);
    ctx->pc = 0x3F0804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0800u;
    // 0x3f0804: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F0800u, 0x3F0808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0808u;
label_3f0808:
    // 0x3f0808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f0808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f080c:
    // 0x3f080c: 0xc0e896e  jal         func_3A25B8
label_3f0810:
    if (ctx->pc == 0x3F0810u) {
        ctx->pc = 0x3F0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F080Cu;
        // 0x3f0810: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0814u;
        goto label_3f0814;
    }
    ctx->pc = 0x3F080Cu;
    SET_GPR_U32(ctx, 31, 0x3F0814u);
    ctx->pc = 0x3F0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F080Cu;
    // 0x3f0810: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3F080Cu, 0x3F0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0814u;
label_3f0814:
    // 0x3f0814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f0814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0818:
    // 0x3f0818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f0818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f081c:
    // 0x3f081c: 0xc0e8604  jal         func_3A1810
label_3f0820:
    if (ctx->pc == 0x3F0820u) {
        ctx->pc = 0x3F0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F081Cu;
        // 0x3f0820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0824u;
        goto label_3f0824;
    }
    ctx->pc = 0x3F081Cu;
    SET_GPR_U32(ctx, 31, 0x3F0824u);
    ctx->pc = 0x3F0820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F081Cu;
    // 0x3f0820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3F081Cu, 0x3F0824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0824u;
label_3f0824:
    // 0x3f0824: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3f0824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3f0828:
    // 0x3f0828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f082c:
    // 0x3f082c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3f082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f0830:
    // 0x3f0830: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3f0830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3f0834:
    // 0x3f0834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f0834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f0838:
    // 0x3f0838: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3f0838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f083c:
    // 0x3f083c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f0840:
    // 0x3f0840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0844:
    // 0x3f0844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0848:
    // 0x3f0848: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3f0848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3f084c:
    // 0x3f084c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f084cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0850:
    // 0x3f0850: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f0850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0854:
    // 0x3f0854: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f0854u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3f0858:
    // 0x3f0858: 0xc0e911e  jal         func_3A4478
label_3f085c:
    if (ctx->pc == 0x3F085Cu) {
        ctx->pc = 0x3F085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0858u;
        // 0x3f085c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0860u;
        goto label_3f0860;
    }
    ctx->pc = 0x3F0858u;
    SET_GPR_U32(ctx, 31, 0x3F0860u);
    ctx->pc = 0x3F085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0858u;
    // 0x3f085c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3F0858u, 0x3F0860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0860u;
label_3f0860:
    // 0x3f0860: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f0860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0864:
    // 0x3f0864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f0864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0868:
    // 0x3f0868: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3f0868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f086c:
    // 0x3f086c: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3f086cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3f0870:
    // 0x3f0870: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3f0870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_3f0874:
    // 0x3f0874: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3f0874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3f0878:
    // 0x3f0878: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3f0878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f087c:
    // 0x3f087c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3f087cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f0880:
    // 0x3f0880: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3f0880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f0884:
    // 0x3f0884: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f0884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f0888:
    // 0x3f0888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f088c:
    // 0x3f088c: 0x3e00008  jr          $ra
label_3f0890:
    if (ctx->pc == 0x3F0890u) {
        ctx->pc = 0x3F0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F088Cu;
        // 0x3f0890: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0894u;
        goto label_3f0894;
    }
    ctx->pc = 0x3F088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F088Cu;
        // 0x3f0890: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F088Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F0894u;
label_3f0894:
    // 0x3f0894: 0x0  nop
    ctx->pc = 0x3f0894u;
    // NOP
    ctx->pc = 0x3f0898u;
}
