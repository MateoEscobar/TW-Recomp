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

// Function: sub_003B07F0
// Address: 0x3b07f0 - 0x3b08f8
void sub_003B07F0_0x3b07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B07F0_0x3b07f0");
#endif

    switch (ctx->pc) {
        case 0x3b07f0u: goto label_3b07f0;
        case 0x3b07f4u: goto label_3b07f4;
        case 0x3b07f8u: goto label_3b07f8;
        case 0x3b07fcu: goto label_3b07fc;
        case 0x3b0800u: goto label_3b0800;
        case 0x3b0804u: goto label_3b0804;
        case 0x3b0808u: goto label_3b0808;
        case 0x3b080cu: goto label_3b080c;
        case 0x3b0810u: goto label_3b0810;
        case 0x3b0814u: goto label_3b0814;
        case 0x3b0818u: goto label_3b0818;
        case 0x3b081cu: goto label_3b081c;
        case 0x3b0820u: goto label_3b0820;
        case 0x3b0824u: goto label_3b0824;
        case 0x3b0828u: goto label_3b0828;
        case 0x3b082cu: goto label_3b082c;
        case 0x3b0830u: goto label_3b0830;
        case 0x3b0834u: goto label_3b0834;
        case 0x3b0838u: goto label_3b0838;
        case 0x3b083cu: goto label_3b083c;
        case 0x3b0840u: goto label_3b0840;
        case 0x3b0844u: goto label_3b0844;
        case 0x3b0848u: goto label_3b0848;
        case 0x3b084cu: goto label_3b084c;
        case 0x3b0850u: goto label_3b0850;
        case 0x3b0854u: goto label_3b0854;
        case 0x3b0858u: goto label_3b0858;
        case 0x3b085cu: goto label_3b085c;
        case 0x3b0860u: goto label_3b0860;
        case 0x3b0864u: goto label_3b0864;
        case 0x3b0868u: goto label_3b0868;
        case 0x3b086cu: goto label_3b086c;
        case 0x3b0870u: goto label_3b0870;
        case 0x3b0874u: goto label_3b0874;
        case 0x3b0878u: goto label_3b0878;
        case 0x3b087cu: goto label_3b087c;
        case 0x3b0880u: goto label_3b0880;
        case 0x3b0884u: goto label_3b0884;
        case 0x3b0888u: goto label_3b0888;
        case 0x3b088cu: goto label_3b088c;
        case 0x3b0890u: goto label_3b0890;
        case 0x3b0894u: goto label_3b0894;
        case 0x3b0898u: goto label_3b0898;
        case 0x3b089cu: goto label_3b089c;
        case 0x3b08a0u: goto label_3b08a0;
        case 0x3b08a4u: goto label_3b08a4;
        case 0x3b08a8u: goto label_3b08a8;
        case 0x3b08acu: goto label_3b08ac;
        case 0x3b08b0u: goto label_3b08b0;
        case 0x3b08b4u: goto label_3b08b4;
        case 0x3b08b8u: goto label_3b08b8;
        case 0x3b08bcu: goto label_3b08bc;
        case 0x3b08c0u: goto label_3b08c0;
        case 0x3b08c4u: goto label_3b08c4;
        case 0x3b08c8u: goto label_3b08c8;
        case 0x3b08ccu: goto label_3b08cc;
        case 0x3b08d0u: goto label_3b08d0;
        case 0x3b08d4u: goto label_3b08d4;
        case 0x3b08d8u: goto label_3b08d8;
        case 0x3b08dcu: goto label_3b08dc;
        case 0x3b08e0u: goto label_3b08e0;
        case 0x3b08e4u: goto label_3b08e4;
        case 0x3b08e8u: goto label_3b08e8;
        case 0x3b08ecu: goto label_3b08ec;
        case 0x3b08f0u: goto label_3b08f0;
        case 0x3b08f4u: goto label_3b08f4;
        default: break;
    }

    ctx->pc = 0x3b07f0u;

label_3b07f0:
    // 0x3b07f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b07f4:
    // 0x3b07f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b07f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3b07f8:
    // 0x3b07f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b07f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3b07fc:
    // 0x3b07fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b07fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0800:
    // 0x3b0800: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b0800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3b0804:
    // 0x3b0804: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b0808:
    // 0x3b0808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b080c:
    // 0x3b080c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0810:
    // 0x3b0810: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b0810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b0814:
    // 0x3b0814: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b0818:
    // 0x3b0818: 0x40f809  jalr        $v0
label_3b081c:
    if (ctx->pc == 0x3B081Cu) {
        ctx->pc = 0x3B081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0818u;
        // 0x3b081c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0820u;
        goto label_3b0820;
    }
    ctx->pc = 0x3B0818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0820u);
        ctx->pc = 0x3B081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0818u;
        // 0x3b081c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0818u, 0x3B0820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0820u;
label_3b0820:
    // 0x3b0820: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3b0820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3b0824:
    // 0x3b0824: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3b0824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3b0828:
    // 0x3b0828: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3b0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3b082c:
    // 0x3b082c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b082cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0830:
    // 0x3b0830: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b0830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b0834:
    // 0x3b0834: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3b0834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3b0838:
    // 0x3b0838: 0xc0ea12a  jal         func_3A84A8
label_3b083c:
    if (ctx->pc == 0x3B083Cu) {
        ctx->pc = 0x3B083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0838u;
        // 0x3b083c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0840u;
        goto label_3b0840;
    }
    ctx->pc = 0x3B0838u;
    SET_GPR_U32(ctx, 31, 0x3B0840u);
    ctx->pc = 0x3B083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0838u;
    // 0x3b083c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0838u, 0x3B0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0840u;
label_3b0840:
    // 0x3b0840: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b0840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0844:
    // 0x3b0844: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b0844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b0848:
    // 0x3b0848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b0848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b084c:
    // 0x3b084c: 0xc0ea12a  jal         func_3A84A8
label_3b0850:
    if (ctx->pc == 0x3B0850u) {
        ctx->pc = 0x3B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B084Cu;
        // 0x3b0850: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0854u;
        goto label_3b0854;
    }
    ctx->pc = 0x3B084Cu;
    SET_GPR_U32(ctx, 31, 0x3B0854u);
    ctx->pc = 0x3B0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B084Cu;
    // 0x3b0850: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B084Cu, 0x3B0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0854u;
label_3b0854:
    // 0x3b0854: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b0854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0858:
    // 0x3b0858: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b0858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b085c:
    // 0x3b085c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b085cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0860:
    // 0x3b0860: 0xc0ea12a  jal         func_3A84A8
label_3b0864:
    if (ctx->pc == 0x3B0864u) {
        ctx->pc = 0x3B0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0860u;
        // 0x3b0864: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0868u;
        goto label_3b0868;
    }
    ctx->pc = 0x3B0860u;
    SET_GPR_U32(ctx, 31, 0x3B0868u);
    ctx->pc = 0x3B0864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0860u;
    // 0x3b0864: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0860u, 0x3B0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0868u;
label_3b0868:
    // 0x3b0868: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b0868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b086c:
    // 0x3b086c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0870:
    // 0x3b0870: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b0870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b0874:
    // 0x3b0874: 0xc0e858c  jal         func_3A1630
label_3b0878:
    if (ctx->pc == 0x3B0878u) {
        ctx->pc = 0x3B0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0874u;
        // 0x3b0878: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B087Cu;
        goto label_3b087c;
    }
    ctx->pc = 0x3B0874u;
    SET_GPR_U32(ctx, 31, 0x3B087Cu);
    ctx->pc = 0x3B0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0874u;
    // 0x3b0878: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B0874u, 0x3B087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B087Cu;
label_3b087c:
    // 0x3b087c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3b0880:
    // 0x3b0880: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3b0880u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0884:
    // 0x3b0884: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b0884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0888:
    // 0x3b0888: 0x3442ff18  ori         $v0, $v0, 0xFF18
    ctx->pc = 0x3b0888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65304);
label_3b088c:
    // 0x3b088c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3b088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3b0890:
    // 0x3b0890: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b0890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b0894:
    // 0x3b0894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0898:
    // 0x3b0898: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b0898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b089c:
    // 0x3b089c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3b089cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3b08a0:
    // 0x3b08a0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3b08a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3b08a4:
    // 0x3b08a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b08a8:
    // 0x3b08a8: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3b08a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3b08ac:
    // 0x3b08ac: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3b08acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3b08b0:
    // 0x3b08b0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3b08b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3b08b4:
    // 0x3b08b4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3b08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3b08b8:
    // 0x3b08b8: 0x60f809  jalr        $v1
label_3b08bc:
    if (ctx->pc == 0x3B08BCu) {
        ctx->pc = 0x3B08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08B8u;
        // 0x3b08bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B08C0u;
        goto label_3b08c0;
    }
    ctx->pc = 0x3B08B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B08C0u);
        ctx->pc = 0x3B08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08B8u;
        // 0x3b08bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B08B8u, 0x3B08C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B08C0u;
label_3b08c0:
    // 0x3b08c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3b08c4:
    // 0x3b08c4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3b08c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3b08c8:
    // 0x3b08c8: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3b08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3b08cc:
    // 0x3b08cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b08ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b08d0:
    // 0x3b08d0: 0xc0e6ec6  jal         func_39BB18
label_3b08d4:
    if (ctx->pc == 0x3B08D4u) {
        ctx->pc = 0x3B08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08D0u;
        // 0x3b08d4: 0x34a5002e  ori         $a1, $a1, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B08D8u;
        goto label_3b08d8;
    }
    ctx->pc = 0x3B08D0u;
    SET_GPR_U32(ctx, 31, 0x3B08D8u);
    ctx->pc = 0x3B08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B08D0u;
    // 0x3b08d4: 0x34a5002e  ori         $a1, $a1, 0x2E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3B08D0u, 0x3B08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B08D8u;
label_3b08d8:
    // 0x3b08d8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b08dc:
    // 0x3b08dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b08dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b08e0:
    // 0x3b08e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b08e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b08e4:
    // 0x3b08e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b08e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b08e8:
    // 0x3b08e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b08e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b08ec:
    // 0x3b08ec: 0x3e00008  jr          $ra
label_3b08f0:
    if (ctx->pc == 0x3B08F0u) {
        ctx->pc = 0x3B08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08ECu;
        // 0x3b08f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B08F4u;
        goto label_3b08f4;
    }
    ctx->pc = 0x3B08ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08ECu;
        // 0x3b08f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B08ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B08F4u;
label_3b08f4:
    // 0x3b08f4: 0x0  nop
    ctx->pc = 0x3b08f4u;
    // NOP
    ctx->pc = 0x3b08f8u;
}
