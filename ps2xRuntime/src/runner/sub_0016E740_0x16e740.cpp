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

// Function: sub_0016E740
// Address: 0x16e740 - 0x16e8f0
void sub_0016E740_0x16e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E740_0x16e740");
#endif

    switch (ctx->pc) {
        case 0x16e740u: goto label_16e740;
        case 0x16e744u: goto label_16e744;
        case 0x16e748u: goto label_16e748;
        case 0x16e74cu: goto label_16e74c;
        case 0x16e750u: goto label_16e750;
        case 0x16e754u: goto label_16e754;
        case 0x16e758u: goto label_16e758;
        case 0x16e75cu: goto label_16e75c;
        case 0x16e760u: goto label_16e760;
        case 0x16e764u: goto label_16e764;
        case 0x16e768u: goto label_16e768;
        case 0x16e76cu: goto label_16e76c;
        case 0x16e770u: goto label_16e770;
        case 0x16e774u: goto label_16e774;
        case 0x16e778u: goto label_16e778;
        case 0x16e77cu: goto label_16e77c;
        case 0x16e780u: goto label_16e780;
        case 0x16e784u: goto label_16e784;
        case 0x16e788u: goto label_16e788;
        case 0x16e78cu: goto label_16e78c;
        case 0x16e790u: goto label_16e790;
        case 0x16e794u: goto label_16e794;
        case 0x16e798u: goto label_16e798;
        case 0x16e79cu: goto label_16e79c;
        case 0x16e7a0u: goto label_16e7a0;
        case 0x16e7a4u: goto label_16e7a4;
        case 0x16e7a8u: goto label_16e7a8;
        case 0x16e7acu: goto label_16e7ac;
        case 0x16e7b0u: goto label_16e7b0;
        case 0x16e7b4u: goto label_16e7b4;
        case 0x16e7b8u: goto label_16e7b8;
        case 0x16e7bcu: goto label_16e7bc;
        case 0x16e7c0u: goto label_16e7c0;
        case 0x16e7c4u: goto label_16e7c4;
        case 0x16e7c8u: goto label_16e7c8;
        case 0x16e7ccu: goto label_16e7cc;
        case 0x16e7d0u: goto label_16e7d0;
        case 0x16e7d4u: goto label_16e7d4;
        case 0x16e7d8u: goto label_16e7d8;
        case 0x16e7dcu: goto label_16e7dc;
        case 0x16e7e0u: goto label_16e7e0;
        case 0x16e7e4u: goto label_16e7e4;
        case 0x16e7e8u: goto label_16e7e8;
        case 0x16e7ecu: goto label_16e7ec;
        case 0x16e7f0u: goto label_16e7f0;
        case 0x16e7f4u: goto label_16e7f4;
        case 0x16e7f8u: goto label_16e7f8;
        case 0x16e7fcu: goto label_16e7fc;
        case 0x16e800u: goto label_16e800;
        case 0x16e804u: goto label_16e804;
        case 0x16e808u: goto label_16e808;
        case 0x16e80cu: goto label_16e80c;
        case 0x16e810u: goto label_16e810;
        case 0x16e814u: goto label_16e814;
        case 0x16e818u: goto label_16e818;
        case 0x16e81cu: goto label_16e81c;
        case 0x16e820u: goto label_16e820;
        case 0x16e824u: goto label_16e824;
        case 0x16e828u: goto label_16e828;
        case 0x16e82cu: goto label_16e82c;
        case 0x16e830u: goto label_16e830;
        case 0x16e834u: goto label_16e834;
        case 0x16e838u: goto label_16e838;
        case 0x16e83cu: goto label_16e83c;
        case 0x16e840u: goto label_16e840;
        case 0x16e844u: goto label_16e844;
        case 0x16e848u: goto label_16e848;
        case 0x16e84cu: goto label_16e84c;
        case 0x16e850u: goto label_16e850;
        case 0x16e854u: goto label_16e854;
        case 0x16e858u: goto label_16e858;
        case 0x16e85cu: goto label_16e85c;
        case 0x16e860u: goto label_16e860;
        case 0x16e864u: goto label_16e864;
        case 0x16e868u: goto label_16e868;
        case 0x16e86cu: goto label_16e86c;
        case 0x16e870u: goto label_16e870;
        case 0x16e874u: goto label_16e874;
        case 0x16e878u: goto label_16e878;
        case 0x16e87cu: goto label_16e87c;
        case 0x16e880u: goto label_16e880;
        case 0x16e884u: goto label_16e884;
        case 0x16e888u: goto label_16e888;
        case 0x16e88cu: goto label_16e88c;
        case 0x16e890u: goto label_16e890;
        case 0x16e894u: goto label_16e894;
        case 0x16e898u: goto label_16e898;
        case 0x16e89cu: goto label_16e89c;
        case 0x16e8a0u: goto label_16e8a0;
        case 0x16e8a4u: goto label_16e8a4;
        case 0x16e8a8u: goto label_16e8a8;
        case 0x16e8acu: goto label_16e8ac;
        case 0x16e8b0u: goto label_16e8b0;
        case 0x16e8b4u: goto label_16e8b4;
        case 0x16e8b8u: goto label_16e8b8;
        case 0x16e8bcu: goto label_16e8bc;
        case 0x16e8c0u: goto label_16e8c0;
        case 0x16e8c4u: goto label_16e8c4;
        case 0x16e8c8u: goto label_16e8c8;
        case 0x16e8ccu: goto label_16e8cc;
        case 0x16e8d0u: goto label_16e8d0;
        case 0x16e8d4u: goto label_16e8d4;
        case 0x16e8d8u: goto label_16e8d8;
        case 0x16e8dcu: goto label_16e8dc;
        case 0x16e8e0u: goto label_16e8e0;
        case 0x16e8e4u: goto label_16e8e4;
        case 0x16e8e8u: goto label_16e8e8;
        case 0x16e8ecu: goto label_16e8ec;
        default: break;
    }

    ctx->pc = 0x16e740u;

label_16e740:
    // 0x16e740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16e744:
    // 0x16e744: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16e744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_16e748:
    // 0x16e748: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16e748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_16e74c:
    // 0x16e74c: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x16e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
label_16e750:
    // 0x16e750: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16e754:
    // 0x16e754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16e754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e758:
    // 0x16e758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16e75c:
    // 0x16e75c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_16e760:
    // 0x16e760: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16e760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_16e764:
    // 0x16e764: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16e764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e768:
    // 0x16e768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e76c:
    // 0x16e76c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16e76cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e770:
    // 0x16e770: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x16e770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_16e774:
    // 0x16e774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e778:
    // 0x16e778: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e77c:
    // 0x16e77c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e780:
    // 0x16e780: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_16e784:
    // 0x16e784: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16e788:
    // 0x16e788: 0x60f809  jalr        $v1
label_16e78c:
    if (ctx->pc == 0x16E78Cu) {
        ctx->pc = 0x16E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E788u;
        // 0x16e78c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E790u;
        goto label_16e790;
    }
    ctx->pc = 0x16E788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E790u);
        ctx->pc = 0x16E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E788u;
        // 0x16e78c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E788u, 0x16E790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E790u;
label_16e790:
    // 0x16e790: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x16e790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_16e794:
    // 0x16e794: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x16e794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e798:
    // 0x16e798: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e79c:
    // 0x16e79c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x16e79cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_16e7a0:
    // 0x16e7a0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x16e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_16e7a4:
    // 0x16e7a4: 0x60f809  jalr        $v1
label_16e7a8:
    if (ctx->pc == 0x16E7A8u) {
        ctx->pc = 0x16E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7A4u;
        // 0x16e7a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E7ACu;
        goto label_16e7ac;
    }
    ctx->pc = 0x16E7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E7ACu);
        ctx->pc = 0x16E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7A4u;
        // 0x16e7a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E7A4u, 0x16E7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E7ACu;
label_16e7ac:
    // 0x16e7ac: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x16e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_16e7b0:
    // 0x16e7b0: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_16e7b4:
    // 0x16e7b4: 0x26101900  addiu       $s0, $s0, 0x1900
    ctx->pc = 0x16e7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6400));
label_16e7b8:
    // 0x16e7b8: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x16e7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_16e7bc:
    // 0x16e7bc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x16e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_16e7c0:
    // 0x16e7c0: 0xc136ac2  jal         func_4DAB08
label_16e7c4:
    if (ctx->pc == 0x16E7C4u) {
        ctx->pc = 0x16E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7C0u;
        // 0x16e7c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E7C8u;
        goto label_16e7c8;
    }
    ctx->pc = 0x16E7C0u;
    SET_GPR_U32(ctx, 31, 0x16E7C8u);
    ctx->pc = 0x16E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7C0u;
    // 0x16e7c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB08u, 0x16E7C0u, 0x16E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7C8u;
label_16e7c8:
    // 0x16e7c8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_16e7cc:
    // 0x16e7cc: 0x24060095  addiu       $a2, $zero, 0x95
    ctx->pc = 0x16e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_16e7d0:
    // 0x16e7d0: 0xc1378a4  jal         func_4DE290
label_16e7d4:
    if (ctx->pc == 0x16E7D4u) {
        ctx->pc = 0x16E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7D0u;
        // 0x16e7d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E7D8u;
        goto label_16e7d8;
    }
    ctx->pc = 0x16E7D0u;
    SET_GPR_U32(ctx, 31, 0x16E7D8u);
    ctx->pc = 0x16E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7D0u;
    // 0x16e7d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE290u, 0x16E7D0u, 0x16E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7D8u;
label_16e7d8:
    // 0x16e7d8: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x16e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_16e7dc:
    // 0x16e7dc: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x16e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e7e0:
    // 0x16e7e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e7e4:
    // 0x16e7e4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x16e7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_16e7e8:
    // 0x16e7e8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16e7ec:
    // 0x16e7ec: 0x60f809  jalr        $v1
label_16e7f0:
    if (ctx->pc == 0x16E7F0u) {
        ctx->pc = 0x16E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7ECu;
        // 0x16e7f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E7F4u;
        goto label_16e7f4;
    }
    ctx->pc = 0x16E7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E7F4u);
        ctx->pc = 0x16E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7ECu;
        // 0x16e7f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E7ECu, 0x16E7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E7F4u;
label_16e7f4:
    // 0x16e7f4: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e7f8:
    // 0x16e7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e7fc:
    // 0x16e7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e800:
    // 0x16e800: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e804:
    // 0x16e804: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x16e804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_16e808:
    // 0x16e808: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16e808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16e80c:
    // 0x16e80c: 0x60f809  jalr        $v1
label_16e810:
    if (ctx->pc == 0x16E810u) {
        ctx->pc = 0x16E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E80Cu;
        // 0x16e810: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E814u;
        goto label_16e814;
    }
    ctx->pc = 0x16E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E814u);
        ctx->pc = 0x16E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E80Cu;
        // 0x16e810: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E80Cu, 0x16E814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E814u;
label_16e814:
    // 0x16e814: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x16e814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e818:
    // 0x16e818: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16e818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16e81c:
    // 0x16e81c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x16e81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_16e820:
    // 0x16e820: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_16e824:
    // 0x16e824: 0x40f809  jalr        $v0
label_16e828:
    if (ctx->pc == 0x16E828u) {
        ctx->pc = 0x16E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E824u;
        // 0x16e828: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E82Cu;
        goto label_16e82c;
    }
    ctx->pc = 0x16E824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E82Cu);
        ctx->pc = 0x16E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E824u;
        // 0x16e828: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E824u, 0x16E82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E82Cu;
label_16e82c:
    // 0x16e82c: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_16e830:
    // 0x16e830: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x16e830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e834:
    // 0x16e834: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e838:
    // 0x16e838: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x16e838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_16e83c:
    // 0x16e83c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x16e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_16e840:
    // 0x16e840: 0x60f809  jalr        $v1
label_16e844:
    if (ctx->pc == 0x16E844u) {
        ctx->pc = 0x16E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E840u;
        // 0x16e844: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E848u;
        goto label_16e848;
    }
    ctx->pc = 0x16E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E848u);
        ctx->pc = 0x16E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E840u;
        // 0x16e844: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E840u, 0x16E848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E848u;
label_16e848:
    // 0x16e848: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x16e848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_16e84c:
    // 0x16e84c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e850:
    // 0x16e850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e854:
    // 0x16e854: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e858:
    // 0x16e858: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x16e858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_16e85c:
    // 0x16e85c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16e860:
    // 0x16e860: 0x60f809  jalr        $v1
label_16e864:
    if (ctx->pc == 0x16E864u) {
        ctx->pc = 0x16E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E860u;
        // 0x16e864: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E868u;
        goto label_16e868;
    }
    ctx->pc = 0x16E860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E868u);
        ctx->pc = 0x16E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E860u;
        // 0x16e864: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E860u, 0x16E868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E868u;
label_16e868:
    // 0x16e868: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x16e868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e86c:
    // 0x16e86c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x16e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_16e870:
    // 0x16e870: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e874:
    // 0x16e874: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x16e874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_16e878:
    // 0x16e878: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x16e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16e87c:
    // 0x16e87c: 0x60f809  jalr        $v1
label_16e880:
    if (ctx->pc == 0x16E880u) {
        ctx->pc = 0x16E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E87Cu;
        // 0x16e880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E884u;
        goto label_16e884;
    }
    ctx->pc = 0x16E87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E884u);
        ctx->pc = 0x16E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E87Cu;
        // 0x16e880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E87Cu, 0x16E884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E884u;
label_16e884:
    // 0x16e884: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x16e884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_16e888:
    // 0x16e888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e88c:
    // 0x16e88c: 0xc1378f6  jal         func_4DE3D8
label_16e890:
    if (ctx->pc == 0x16E890u) {
        ctx->pc = 0x16E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E88Cu;
        // 0x16e890: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E894u;
        goto label_16e894;
    }
    ctx->pc = 0x16E88Cu;
    SET_GPR_U32(ctx, 31, 0x16E894u);
    ctx->pc = 0x16E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E88Cu;
    // 0x16e890: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x16E88Cu, 0x16E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E894u;
label_16e894:
    // 0x16e894: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_16e898:
    // 0x16e898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e89c:
    // 0x16e89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e8a0:
    // 0x16e8a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e8a4:
    // 0x16e8a4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x16e8a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_16e8a8:
    // 0x16e8a8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16e8ac:
    // 0x16e8ac: 0x60f809  jalr        $v1
label_16e8b0:
    if (ctx->pc == 0x16E8B0u) {
        ctx->pc = 0x16E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8ACu;
        // 0x16e8b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8B4u;
        goto label_16e8b4;
    }
    ctx->pc = 0x16E8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E8B4u);
        ctx->pc = 0x16E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8ACu;
        // 0x16e8b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E8ACu, 0x16E8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E8B4u;
label_16e8b4:
    // 0x16e8b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_16e8b8:
    // 0x16e8b8: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x16e8b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_16e8bc:
    // 0x16e8bc: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_16e8c0:
    // 0x16e8c0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x16e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_16e8c4:
    // 0x16e8c4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_16e8c8:
    if (ctx->pc == 0x16E8C8u) {
        ctx->pc = 0x16E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8C4u;
        // 0x16e8c8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8CCu;
        goto label_16e8cc;
    }
    ctx->pc = 0x16E8C4u;
    {
        const bool branch_taken_0x16e8c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8C4u;
        // 0x16e8c8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8c4) {
            ctx->pc = 0x16E8D4u;
            goto label_16e8d4;
        }
    }
    ctx->pc = 0x16E8CCu;
label_16e8cc:
    // 0x16e8cc: 0xc10b208  jal         func_42C820
label_16e8d0:
    if (ctx->pc == 0x16E8D0u) {
        ctx->pc = 0x16E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8CCu;
        // 0x16e8d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8D4u;
        goto label_16e8d4;
    }
    ctx->pc = 0x16E8CCu;
    SET_GPR_U32(ctx, 31, 0x16E8D4u);
    ctx->pc = 0x16E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E8CCu;
    // 0x16e8d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x16E8CCu, 0x16E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E8D4u;
label_16e8d4:
    // 0x16e8d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16e8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e8d8:
    // 0x16e8d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16e8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e8dc:
    // 0x16e8dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16e8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e8e0:
    // 0x16e8e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16e8e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e8e4:
    // 0x16e8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e8e8:
    // 0x16e8e8: 0x3e00008  jr          $ra
label_16e8ec:
    if (ctx->pc == 0x16E8ECu) {
        ctx->pc = 0x16E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8E8u;
        // 0x16e8ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E8F0u;
        goto label_fallthrough_0x16e8e8;
    }
    ctx->pc = 0x16E8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8E8u;
        // 0x16e8ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e8e8:
    ctx->pc = 0x16E8F0u;
}
