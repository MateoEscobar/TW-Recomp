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

// Function: sub_00145790
// Address: 0x145790 - 0x145888
void sub_00145790_0x145790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145790_0x145790");
#endif

    switch (ctx->pc) {
        case 0x145790u: goto label_145790;
        case 0x145794u: goto label_145794;
        case 0x145798u: goto label_145798;
        case 0x14579cu: goto label_14579c;
        case 0x1457a0u: goto label_1457a0;
        case 0x1457a4u: goto label_1457a4;
        case 0x1457a8u: goto label_1457a8;
        case 0x1457acu: goto label_1457ac;
        case 0x1457b0u: goto label_1457b0;
        case 0x1457b4u: goto label_1457b4;
        case 0x1457b8u: goto label_1457b8;
        case 0x1457bcu: goto label_1457bc;
        case 0x1457c0u: goto label_1457c0;
        case 0x1457c4u: goto label_1457c4;
        case 0x1457c8u: goto label_1457c8;
        case 0x1457ccu: goto label_1457cc;
        case 0x1457d0u: goto label_1457d0;
        case 0x1457d4u: goto label_1457d4;
        case 0x1457d8u: goto label_1457d8;
        case 0x1457dcu: goto label_1457dc;
        case 0x1457e0u: goto label_1457e0;
        case 0x1457e4u: goto label_1457e4;
        case 0x1457e8u: goto label_1457e8;
        case 0x1457ecu: goto label_1457ec;
        case 0x1457f0u: goto label_1457f0;
        case 0x1457f4u: goto label_1457f4;
        case 0x1457f8u: goto label_1457f8;
        case 0x1457fcu: goto label_1457fc;
        case 0x145800u: goto label_145800;
        case 0x145804u: goto label_145804;
        case 0x145808u: goto label_145808;
        case 0x14580cu: goto label_14580c;
        case 0x145810u: goto label_145810;
        case 0x145814u: goto label_145814;
        case 0x145818u: goto label_145818;
        case 0x14581cu: goto label_14581c;
        case 0x145820u: goto label_145820;
        case 0x145824u: goto label_145824;
        case 0x145828u: goto label_145828;
        case 0x14582cu: goto label_14582c;
        case 0x145830u: goto label_145830;
        case 0x145834u: goto label_145834;
        case 0x145838u: goto label_145838;
        case 0x14583cu: goto label_14583c;
        case 0x145840u: goto label_145840;
        case 0x145844u: goto label_145844;
        case 0x145848u: goto label_145848;
        case 0x14584cu: goto label_14584c;
        case 0x145850u: goto label_145850;
        case 0x145854u: goto label_145854;
        case 0x145858u: goto label_145858;
        case 0x14585cu: goto label_14585c;
        case 0x145860u: goto label_145860;
        case 0x145864u: goto label_145864;
        case 0x145868u: goto label_145868;
        case 0x14586cu: goto label_14586c;
        case 0x145870u: goto label_145870;
        case 0x145874u: goto label_145874;
        case 0x145878u: goto label_145878;
        case 0x14587cu: goto label_14587c;
        case 0x145880u: goto label_145880;
        case 0x145884u: goto label_145884;
        default: break;
    }

    ctx->pc = 0x145790u;

label_145790:
    // 0x145790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_145794:
    // 0x145794: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x145794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_145798:
    // 0x145798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14579c:
    // 0x14579c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1457a0:
    // 0x1457a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1457a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1457a4:
    // 0x1457a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1457a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1457a8:
    // 0x1457a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1457a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1457ac:
    // 0x1457ac: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1457acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1457b0:
    // 0x1457b0: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1457b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1457b4:
    // 0x1457b4: 0xa0f809  jalr        $a1
label_1457b8:
    if (ctx->pc == 0x1457B8u) {
        ctx->pc = 0x1457B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457B4u;
        // 0x1457b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1457BCu;
        goto label_1457bc;
    }
    ctx->pc = 0x1457B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1457BCu);
        ctx->pc = 0x1457B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457B4u;
        // 0x1457b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1457B4u, 0x1457BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1457BCu;
label_1457bc:
    // 0x1457bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1457c0:
    // 0x1457c0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1457c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1457c4:
    // 0x1457c4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1457c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1457c8:
    // 0x1457c8: 0x60f809  jalr        $v1
label_1457cc:
    if (ctx->pc == 0x1457CCu) {
        ctx->pc = 0x1457CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457C8u;
        // 0x1457cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1457D0u;
        goto label_1457d0;
    }
    ctx->pc = 0x1457C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1457D0u);
        ctx->pc = 0x1457CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457C8u;
        // 0x1457cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1457C8u, 0x1457D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1457D0u;
label_1457d0:
    // 0x1457d0: 0xc0cebf2  jal         func_33AFC8
label_1457d4:
    if (ctx->pc == 0x1457D4u) {
        ctx->pc = 0x1457D8u;
        goto label_1457d8;
    }
    ctx->pc = 0x1457D0u;
    SET_GPR_U32(ctx, 31, 0x1457D8u);
    ctx->pc = 0x33AFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFC8u, 0x1457D0u, 0x1457D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457D8u;
label_1457d8:
    // 0x1457d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1457d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1457dc:
    // 0x1457dc: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x1457dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1457e0:
    // 0x1457e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1457e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1457e4:
    // 0x1457e4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1457e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1457e8:
    // 0x1457e8: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x1457e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1457ec:
    // 0x1457ec: 0xa0f809  jalr        $a1
label_1457f0:
    if (ctx->pc == 0x1457F0u) {
        ctx->pc = 0x1457F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457ECu;
        // 0x1457f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1457F4u;
        goto label_1457f4;
    }
    ctx->pc = 0x1457ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1457F4u);
        ctx->pc = 0x1457F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457ECu;
        // 0x1457f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1457ECu, 0x1457F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1457F4u;
label_1457f4:
    // 0x1457f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1457f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1457f8:
    // 0x1457f8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1457f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1457fc:
    // 0x1457fc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1457fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_145800:
    // 0x145800: 0x60f809  jalr        $v1
label_145804:
    if (ctx->pc == 0x145804u) {
        ctx->pc = 0x145804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145800u;
        // 0x145804: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145808u;
        goto label_145808;
    }
    ctx->pc = 0x145800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145808u);
        ctx->pc = 0x145804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145800u;
        // 0x145804: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145800u, 0x145808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145808u;
label_145808:
    // 0x145808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14580c:
    // 0x14580c: 0xc065122  jal         func_194488
label_145810:
    if (ctx->pc == 0x145810u) {
        ctx->pc = 0x145810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14580Cu;
        // 0x145810: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145814u;
        goto label_145814;
    }
    ctx->pc = 0x14580Cu;
    SET_GPR_U32(ctx, 31, 0x145814u);
    ctx->pc = 0x145810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14580Cu;
    // 0x145810: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194488u, 0x14580Cu, 0x145814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145814u;
label_145814:
    // 0x145814: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x145814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_145818:
    // 0x145818: 0xc05e878  jal         func_17A1E0
label_14581c:
    if (ctx->pc == 0x14581Cu) {
        ctx->pc = 0x14581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145818u;
        // 0x14581c: 0x8c44cdb4  lw          $a0, -0x324C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145820u;
        goto label_145820;
    }
    ctx->pc = 0x145818u;
    SET_GPR_U32(ctx, 31, 0x145820u);
    ctx->pc = 0x14581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145818u;
    // 0x14581c: 0x8c44cdb4  lw          $a0, -0x324C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A1E0u, 0x145818u, 0x145820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145820u;
label_145820:
    // 0x145820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x145820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145824:
    // 0x145824: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x145824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_145828:
    // 0x145828: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x145828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_14582c:
    // 0x14582c: 0x60f809  jalr        $v1
label_145830:
    if (ctx->pc == 0x145830u) {
        ctx->pc = 0x145830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14582Cu;
        // 0x145830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145834u;
        goto label_145834;
    }
    ctx->pc = 0x14582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145834u);
        ctx->pc = 0x145830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14582Cu;
        // 0x145830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14582Cu, 0x145834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145834u;
label_145834:
    // 0x145834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x145834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145838:
    // 0x145838: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x145838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_14583c:
    // 0x14583c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x14583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_145840:
    // 0x145840: 0x60f809  jalr        $v1
label_145844:
    if (ctx->pc == 0x145844u) {
        ctx->pc = 0x145844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145840u;
        // 0x145844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145848u;
        goto label_145848;
    }
    ctx->pc = 0x145840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145848u);
        ctx->pc = 0x145844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145840u;
        // 0x145844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145840u, 0x145848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145848u;
label_145848:
    // 0x145848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x145848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14584c:
    // 0x14584c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x14584cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_145850:
    // 0x145850: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x145850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_145854:
    // 0x145854: 0x60f809  jalr        $v1
label_145858:
    if (ctx->pc == 0x145858u) {
        ctx->pc = 0x145858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145854u;
        // 0x145858: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14585Cu;
        goto label_14585c;
    }
    ctx->pc = 0x145854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14585Cu);
        ctx->pc = 0x145858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145854u;
        // 0x145858: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145854u, 0x14585Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14585Cu;
label_14585c:
    // 0x14585c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145860:
    // 0x145860: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x145860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_145864:
    // 0x145864: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x145864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_145868:
    // 0x145868: 0x60f809  jalr        $v1
label_14586c:
    if (ctx->pc == 0x14586Cu) {
        ctx->pc = 0x14586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145868u;
        // 0x14586c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145870u;
        goto label_145870;
    }
    ctx->pc = 0x145868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145870u);
        ctx->pc = 0x14586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145868u;
        // 0x14586c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145868u, 0x145870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145870u;
label_145870:
    // 0x145870: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145874:
    // 0x145874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145878:
    // 0x145878: 0x3e00008  jr          $ra
label_14587c:
    if (ctx->pc == 0x14587Cu) {
        ctx->pc = 0x14587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145878u;
        // 0x14587c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145880u;
        goto label_145880;
    }
    ctx->pc = 0x145878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145878u;
        // 0x14587c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145880u;
label_145880:
    // 0x145880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x145880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145884:
    // 0x145884: 0x0  nop
    ctx->pc = 0x145884u;
    // NOP
    ctx->pc = 0x145888u;
}
