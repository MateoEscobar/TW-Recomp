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

// Function: sub_002B07C0
// Address: 0x2b07c0 - 0x2b0970
void sub_002B07C0_0x2b07c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B07C0_0x2b07c0");
#endif

    switch (ctx->pc) {
        case 0x2b07c0u: goto label_2b07c0;
        case 0x2b07c4u: goto label_2b07c4;
        case 0x2b07c8u: goto label_2b07c8;
        case 0x2b07ccu: goto label_2b07cc;
        case 0x2b07d0u: goto label_2b07d0;
        case 0x2b07d4u: goto label_2b07d4;
        case 0x2b07d8u: goto label_2b07d8;
        case 0x2b07dcu: goto label_2b07dc;
        case 0x2b07e0u: goto label_2b07e0;
        case 0x2b07e4u: goto label_2b07e4;
        case 0x2b07e8u: goto label_2b07e8;
        case 0x2b07ecu: goto label_2b07ec;
        case 0x2b07f0u: goto label_2b07f0;
        case 0x2b07f4u: goto label_2b07f4;
        case 0x2b07f8u: goto label_2b07f8;
        case 0x2b07fcu: goto label_2b07fc;
        case 0x2b0800u: goto label_2b0800;
        case 0x2b0804u: goto label_2b0804;
        case 0x2b0808u: goto label_2b0808;
        case 0x2b080cu: goto label_2b080c;
        case 0x2b0810u: goto label_2b0810;
        case 0x2b0814u: goto label_2b0814;
        case 0x2b0818u: goto label_2b0818;
        case 0x2b081cu: goto label_2b081c;
        case 0x2b0820u: goto label_2b0820;
        case 0x2b0824u: goto label_2b0824;
        case 0x2b0828u: goto label_2b0828;
        case 0x2b082cu: goto label_2b082c;
        case 0x2b0830u: goto label_2b0830;
        case 0x2b0834u: goto label_2b0834;
        case 0x2b0838u: goto label_2b0838;
        case 0x2b083cu: goto label_2b083c;
        case 0x2b0840u: goto label_2b0840;
        case 0x2b0844u: goto label_2b0844;
        case 0x2b0848u: goto label_2b0848;
        case 0x2b084cu: goto label_2b084c;
        case 0x2b0850u: goto label_2b0850;
        case 0x2b0854u: goto label_2b0854;
        case 0x2b0858u: goto label_2b0858;
        case 0x2b085cu: goto label_2b085c;
        case 0x2b0860u: goto label_2b0860;
        case 0x2b0864u: goto label_2b0864;
        case 0x2b0868u: goto label_2b0868;
        case 0x2b086cu: goto label_2b086c;
        case 0x2b0870u: goto label_2b0870;
        case 0x2b0874u: goto label_2b0874;
        case 0x2b0878u: goto label_2b0878;
        case 0x2b087cu: goto label_2b087c;
        case 0x2b0880u: goto label_2b0880;
        case 0x2b0884u: goto label_2b0884;
        case 0x2b0888u: goto label_2b0888;
        case 0x2b088cu: goto label_2b088c;
        case 0x2b0890u: goto label_2b0890;
        case 0x2b0894u: goto label_2b0894;
        case 0x2b0898u: goto label_2b0898;
        case 0x2b089cu: goto label_2b089c;
        case 0x2b08a0u: goto label_2b08a0;
        case 0x2b08a4u: goto label_2b08a4;
        case 0x2b08a8u: goto label_2b08a8;
        case 0x2b08acu: goto label_2b08ac;
        case 0x2b08b0u: goto label_2b08b0;
        case 0x2b08b4u: goto label_2b08b4;
        case 0x2b08b8u: goto label_2b08b8;
        case 0x2b08bcu: goto label_2b08bc;
        case 0x2b08c0u: goto label_2b08c0;
        case 0x2b08c4u: goto label_2b08c4;
        case 0x2b08c8u: goto label_2b08c8;
        case 0x2b08ccu: goto label_2b08cc;
        case 0x2b08d0u: goto label_2b08d0;
        case 0x2b08d4u: goto label_2b08d4;
        case 0x2b08d8u: goto label_2b08d8;
        case 0x2b08dcu: goto label_2b08dc;
        case 0x2b08e0u: goto label_2b08e0;
        case 0x2b08e4u: goto label_2b08e4;
        case 0x2b08e8u: goto label_2b08e8;
        case 0x2b08ecu: goto label_2b08ec;
        case 0x2b08f0u: goto label_2b08f0;
        case 0x2b08f4u: goto label_2b08f4;
        case 0x2b08f8u: goto label_2b08f8;
        case 0x2b08fcu: goto label_2b08fc;
        case 0x2b0900u: goto label_2b0900;
        case 0x2b0904u: goto label_2b0904;
        case 0x2b0908u: goto label_2b0908;
        case 0x2b090cu: goto label_2b090c;
        case 0x2b0910u: goto label_2b0910;
        case 0x2b0914u: goto label_2b0914;
        case 0x2b0918u: goto label_2b0918;
        case 0x2b091cu: goto label_2b091c;
        case 0x2b0920u: goto label_2b0920;
        case 0x2b0924u: goto label_2b0924;
        case 0x2b0928u: goto label_2b0928;
        case 0x2b092cu: goto label_2b092c;
        case 0x2b0930u: goto label_2b0930;
        case 0x2b0934u: goto label_2b0934;
        case 0x2b0938u: goto label_2b0938;
        case 0x2b093cu: goto label_2b093c;
        case 0x2b0940u: goto label_2b0940;
        case 0x2b0944u: goto label_2b0944;
        case 0x2b0948u: goto label_2b0948;
        case 0x2b094cu: goto label_2b094c;
        case 0x2b0950u: goto label_2b0950;
        case 0x2b0954u: goto label_2b0954;
        case 0x2b0958u: goto label_2b0958;
        case 0x2b095cu: goto label_2b095c;
        case 0x2b0960u: goto label_2b0960;
        case 0x2b0964u: goto label_2b0964;
        case 0x2b0968u: goto label_2b0968;
        case 0x2b096cu: goto label_2b096c;
        default: break;
    }

    ctx->pc = 0x2b07c0u;

label_2b07c0:
    // 0x2b07c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b07c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b07c4:
    // 0x2b07c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b07c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b07c8:
    // 0x2b07c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b07c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2b07cc:
    // 0x2b07cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b07ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2b07d0:
    // 0x2b07d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b07d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2b07d4:
    // 0x2b07d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b07d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b07d8:
    // 0x2b07d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b07d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2b07dc:
    // 0x2b07dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2b07dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b07e0:
    // 0x2b07e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b07e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b07e4:
    // 0x2b07e4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b07e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b07e8:
    // 0x2b07e8: 0x90c2028d  lbu         $v0, 0x28D($a2)
    ctx->pc = 0x2b07e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 653)));
label_2b07ec:
    // 0x2b07ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b07ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b07f0:
    // 0x2b07f0: 0xa2220054  sb          $v0, 0x54($s1)
    ctx->pc = 0x2b07f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 2));
label_2b07f4:
    // 0x2b07f4: 0xc4c0012c  lwc1        $f0, 0x12C($a2)
    ctx->pc = 0x2b07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b07f8:
    // 0x2b07f8: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x2b07f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_2b07fc:
    // 0x2b07fc: 0x90c20265  lbu         $v0, 0x265($a2)
    ctx->pc = 0x2b07fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 613)));
label_2b0800:
    // 0x2b0800: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b0800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0804:
    // 0x2b0804: 0xa2220057  sb          $v0, 0x57($s1)
    ctx->pc = 0x2b0804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 87), (uint8_t)GPR_U32(ctx, 2));
label_2b0808:
    // 0x2b0808: 0xa0d3028d  sb          $s3, 0x28D($a2)
    ctx->pc = 0x2b0808u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 653), (uint8_t)GPR_U32(ctx, 19));
label_2b080c:
    // 0x2b080c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0810:
    // 0x2b0810: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2b0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0814:
    // 0x2b0814: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2b0814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2b0818:
    // 0x2b0818: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b081c:
    // 0x2b081c: 0xc0ac182  jal         func_2B0608
label_2b0820:
    if (ctx->pc == 0x2B0820u) {
        ctx->pc = 0x2B0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B081Cu;
        // 0x2b0820: 0xa0400265  sb          $zero, 0x265($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0824u;
        goto label_2b0824;
    }
    ctx->pc = 0x2B081Cu;
    SET_GPR_U32(ctx, 31, 0x2B0824u);
    ctx->pc = 0x2B0820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B081Cu;
    // 0x2b0820: 0xa0400265  sb          $zero, 0x265($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0608u, 0x2B081Cu, 0x2B0824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0824u;
label_2b0824:
    // 0x2b0824: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b0828:
    // 0x2b0828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b082c:
    // 0x2b082c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b082cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0830:
    // 0x2b0830: 0xc0e409a  jal         func_390268
label_2b0834:
    if (ctx->pc == 0x2B0834u) {
        ctx->pc = 0x2B0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0830u;
        // 0x2b0834: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0838u;
        goto label_2b0838;
    }
    ctx->pc = 0x2B0830u;
    SET_GPR_U32(ctx, 31, 0x2B0838u);
    ctx->pc = 0x2B0834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0830u;
    // 0x2b0834: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B0830u, 0x2B0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0838u;
label_2b0838:
    // 0x2b0838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b083c:
    // 0x2b083c: 0xc0a34d6  jal         func_28D358
label_2b0840:
    if (ctx->pc == 0x2B0840u) {
        ctx->pc = 0x2B0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B083Cu;
        // 0x2b0840: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0844u;
        goto label_2b0844;
    }
    ctx->pc = 0x2B083Cu;
    SET_GPR_U32(ctx, 31, 0x2B0844u);
    ctx->pc = 0x2B0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B083Cu;
    // 0x2b0840: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B083Cu, 0x2B0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0844u;
label_2b0844:
    // 0x2b0844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0848:
    // 0x2b0848: 0x52000043  beql        $s0, $zero, . + 4 + (0x43 << 2)
label_2b084c:
    if (ctx->pc == 0x2B084Cu) {
        ctx->pc = 0x2B084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0848u;
        // 0x2b084c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0850u;
        goto label_2b0850;
    }
    ctx->pc = 0x2B0848u;
    {
        const bool branch_taken_0x2b0848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0848) {
            ctx->pc = 0x2B084Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0848u;
            // 0x2b084c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0958u;
            goto label_2b0958;
        }
    }
    ctx->pc = 0x2B0850u;
label_2b0850:
    // 0x2b0850: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b0850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0854:
    // 0x2b0854: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b0854u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b0858:
    // 0x2b0858: 0xc08bfbc  jal         func_22FEF0
label_2b085c:
    if (ctx->pc == 0x2B085Cu) {
        ctx->pc = 0x2B085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0858u;
        // 0x2b085c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0860u;
        goto label_2b0860;
    }
    ctx->pc = 0x2B0858u;
    SET_GPR_U32(ctx, 31, 0x2B0860u);
    ctx->pc = 0x2B085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0858u;
    // 0x2b085c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B0858u, 0x2B0860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0860u;
label_2b0860:
    // 0x2b0860: 0xc087502  jal         func_21D408
label_2b0864:
    if (ctx->pc == 0x2B0864u) {
        ctx->pc = 0x2B0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0860u;
        // 0x2b0864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0868u;
        goto label_2b0868;
    }
    ctx->pc = 0x2B0860u;
    SET_GPR_U32(ctx, 31, 0x2B0868u);
    ctx->pc = 0x2B0864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0860u;
    // 0x2b0864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B0860u, 0x2B0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0868u;
label_2b0868:
    // 0x2b0868: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2b0868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2b086c:
    // 0x2b086c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2b086cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b0870:
    // 0x2b0870: 0x54730034  bnel        $v1, $s3, . + 4 + (0x34 << 2)
label_2b0874:
    if (ctx->pc == 0x2B0874u) {
        ctx->pc = 0x2B0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0870u;
        // 0x2b0874: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0878u;
        goto label_2b0878;
    }
    ctx->pc = 0x2B0870u;
    {
        const bool branch_taken_0x2b0870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2b0870) {
            ctx->pc = 0x2B0874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0870u;
            // 0x2b0874: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0944u;
            goto label_2b0944;
        }
    }
    ctx->pc = 0x2B0878u;
label_2b0878:
    // 0x2b0878: 0x26130090  addiu       $s3, $s0, 0x90
    ctx->pc = 0x2b0878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2b087c:
    // 0x2b087c: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2b087cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2b0880:
    // 0x2b0880: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2b0880u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2b0884:
    // 0x2b0884: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b0884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2b0888:
    // 0x2b0888: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2b0888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2b088c:
    // 0x2b088c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b088cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b0890:
    // 0x2b0890: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b0890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b0894:
    // 0x2b0894: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2b0894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2b0898:
    // 0x2b0898: 0xc0cdb38  jal         func_336CE0
label_2b089c:
    if (ctx->pc == 0x2B089Cu) {
        ctx->pc = 0x2B089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0898u;
        // 0x2b089c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08A0u;
        goto label_2b08a0;
    }
    ctx->pc = 0x2B0898u;
    SET_GPR_U32(ctx, 31, 0x2B08A0u);
    ctx->pc = 0x2B089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0898u;
    // 0x2b089c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B0898u, 0x2B08A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08A0u;
label_2b08a0:
    // 0x2b08a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b08a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2b08a4:
    // 0x2b08a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b08a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b08a8:
    // 0x2b08a8: 0x0  nop
    ctx->pc = 0x2b08a8u;
    // NOP
label_2b08ac:
    // 0x2b08ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b08acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b08b0:
    // 0x2b08b0: 0x0  nop
    ctx->pc = 0x2b08b0u;
    // NOP
label_2b08b4:
    // 0x2b08b4: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
label_2b08b8:
    if (ctx->pc == 0x2B08B8u) {
        ctx->pc = 0x2B08B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08B4u;
        // 0x2b08b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08BCu;
        goto label_2b08bc;
    }
    ctx->pc = 0x2B08B4u;
    {
        const bool branch_taken_0x2b08b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b08b4) {
            ctx->pc = 0x2B08B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B08B4u;
            // 0x2b08b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0944u;
            goto label_2b0944;
        }
    }
    ctx->pc = 0x2B08BCu;
label_2b08bc:
    // 0x2b08bc: 0xc0a367c  jal         func_28D9F0
label_2b08c0:
    if (ctx->pc == 0x2B08C0u) {
        ctx->pc = 0x2B08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08BCu;
        // 0x2b08c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08C4u;
        goto label_2b08c4;
    }
    ctx->pc = 0x2B08BCu;
    SET_GPR_U32(ctx, 31, 0x2B08C4u);
    ctx->pc = 0x2B08C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08BCu;
    // 0x2b08c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B08BCu, 0x2B08C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08C4u;
label_2b08c4:
    // 0x2b08c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2b08c8:
    if (ctx->pc == 0x2B08C8u) {
        ctx->pc = 0x2B08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08C4u;
        // 0x2b08c8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08CCu;
        goto label_2b08cc;
    }
    ctx->pc = 0x2B08C4u;
    {
        const bool branch_taken_0x2b08c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08C4u;
        // 0x2b08c8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08c4) {
            ctx->pc = 0x2B08F0u;
            goto label_2b08f0;
        }
    }
    ctx->pc = 0x2B08CCu;
label_2b08cc:
    // 0x2b08cc: 0x86660002  lh          $a2, 0x2($s3)
    ctx->pc = 0x2b08ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2b08d0:
    // 0x2b08d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b08d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b08d4:
    // 0x2b08d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b08d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b08d8:
    // 0x2b08d8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2b08d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2b08dc:
    // 0x2b08dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b08dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2b08e0:
    // 0x2b08e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b08e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b08e4:
    // 0x2b08e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b08e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b08e8:
    // 0x2b08e8: 0xc0bf800  jal         func_2FE000
label_2b08ec:
    if (ctx->pc == 0x2B08ECu) {
        ctx->pc = 0x2B08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08E8u;
        // 0x2b08ec: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08F0u;
        goto label_2b08f0;
    }
    ctx->pc = 0x2B08E8u;
    SET_GPR_U32(ctx, 31, 0x2B08F0u);
    ctx->pc = 0x2B08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08E8u;
    // 0x2b08ec: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2B08E8u, 0x2B08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08F0u;
label_2b08f0:
    // 0x2b08f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b08f4:
    // 0x2b08f4: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2b08f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2b08f8:
    // 0x2b08f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b08f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b08fc:
    // 0x2b08fc: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2b08fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b0900:
    // 0x2b0900: 0xc058ff0  jal         func_163FC0
label_2b0904:
    if (ctx->pc == 0x2B0904u) {
        ctx->pc = 0x2B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0900u;
        // 0x2b0904: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0908u;
        goto label_2b0908;
    }
    ctx->pc = 0x2B0900u;
    SET_GPR_U32(ctx, 31, 0x2B0908u);
    ctx->pc = 0x2B0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0900u;
    // 0x2b0904: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x2B0900u, 0x2B0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0908u;
label_2b0908:
    // 0x2b0908: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2b090c:
    if (ctx->pc == 0x2B090Cu) {
        ctx->pc = 0x2B090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0908u;
        // 0x2b090c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0910u;
        goto label_2b0910;
    }
    ctx->pc = 0x2B0908u;
    {
        const bool branch_taken_0x2b0908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0908) {
            ctx->pc = 0x2B090Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0908u;
            // 0x2b090c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0944u;
            goto label_2b0944;
        }
    }
    ctx->pc = 0x2B0910u;
label_2b0910:
    // 0x2b0910: 0xc0a367c  jal         func_28D9F0
label_2b0914:
    if (ctx->pc == 0x2B0914u) {
        ctx->pc = 0x2B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0910u;
        // 0x2b0914: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0918u;
        goto label_2b0918;
    }
    ctx->pc = 0x2B0910u;
    SET_GPR_U32(ctx, 31, 0x2B0918u);
    ctx->pc = 0x2B0914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0910u;
    // 0x2b0914: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B0910u, 0x2B0918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0918u;
label_2b0918:
    // 0x2b0918: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b091c:
    if (ctx->pc == 0x2B091Cu) {
        ctx->pc = 0x2B091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0918u;
        // 0x2b091c: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0920u;
        goto label_2b0920;
    }
    ctx->pc = 0x2B0918u;
    {
        const bool branch_taken_0x2b0918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0918u;
        // 0x2b091c: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0918) {
            ctx->pc = 0x2B0940u;
            goto label_2b0940;
        }
    }
    ctx->pc = 0x2B0920u;
label_2b0920:
    // 0x2b0920: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b0920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0924:
    // 0x2b0924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0928:
    // 0x2b0928: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2b0928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2b092c:
    // 0x2b092c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b092cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b0930:
    // 0x2b0930: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b0934:
    // 0x2b0934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0938:
    // 0x2b0938: 0xc0be8c0  jal         func_2FA300
label_2b093c:
    if (ctx->pc == 0x2B093Cu) {
        ctx->pc = 0x2B093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0938u;
        // 0x2b093c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0940u;
        goto label_2b0940;
    }
    ctx->pc = 0x2B0938u;
    SET_GPR_U32(ctx, 31, 0x2B0940u);
    ctx->pc = 0x2B093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0938u;
    // 0x2b093c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2B0938u, 0x2B0940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0940u;
label_2b0940:
    // 0x2b0940: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b0940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2b0944:
    // 0x2b0944: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2b0944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b0948:
    // 0x2b0948: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b0948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b094c:
    // 0x2b094c: 0x60f809  jalr        $v1
label_2b0950:
    if (ctx->pc == 0x2B0950u) {
        ctx->pc = 0x2B0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B094Cu;
        // 0x2b0950: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0954u;
        goto label_2b0954;
    }
    ctx->pc = 0x2B094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B0954u);
        ctx->pc = 0x2B0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B094Cu;
        // 0x2b0950: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B094Cu, 0x2B0954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0954u;
label_2b0954:
    // 0x2b0954: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b0954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b0958:
    // 0x2b0958: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b0958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b095c:
    // 0x2b095c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b095cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0960:
    // 0x2b0960: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b0960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0964:
    // 0x2b0964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0968:
    // 0x2b0968: 0x3e00008  jr          $ra
label_2b096c:
    if (ctx->pc == 0x2B096Cu) {
        ctx->pc = 0x2B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0968u;
        // 0x2b096c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0970u;
        goto label_fallthrough_0x2b0968;
    }
    ctx->pc = 0x2B0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0968u;
        // 0x2b096c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b0968:
    ctx->pc = 0x2B0970u;
}
