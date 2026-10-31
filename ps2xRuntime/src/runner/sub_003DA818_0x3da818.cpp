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

// Function: sub_003DA818
// Address: 0x3da818 - 0x3da908
void sub_003DA818_0x3da818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA818_0x3da818");
#endif

    switch (ctx->pc) {
        case 0x3da818u: goto label_3da818;
        case 0x3da81cu: goto label_3da81c;
        case 0x3da820u: goto label_3da820;
        case 0x3da824u: goto label_3da824;
        case 0x3da828u: goto label_3da828;
        case 0x3da82cu: goto label_3da82c;
        case 0x3da830u: goto label_3da830;
        case 0x3da834u: goto label_3da834;
        case 0x3da838u: goto label_3da838;
        case 0x3da83cu: goto label_3da83c;
        case 0x3da840u: goto label_3da840;
        case 0x3da844u: goto label_3da844;
        case 0x3da848u: goto label_3da848;
        case 0x3da84cu: goto label_3da84c;
        case 0x3da850u: goto label_3da850;
        case 0x3da854u: goto label_3da854;
        case 0x3da858u: goto label_3da858;
        case 0x3da85cu: goto label_3da85c;
        case 0x3da860u: goto label_3da860;
        case 0x3da864u: goto label_3da864;
        case 0x3da868u: goto label_3da868;
        case 0x3da86cu: goto label_3da86c;
        case 0x3da870u: goto label_3da870;
        case 0x3da874u: goto label_3da874;
        case 0x3da878u: goto label_3da878;
        case 0x3da87cu: goto label_3da87c;
        case 0x3da880u: goto label_3da880;
        case 0x3da884u: goto label_3da884;
        case 0x3da888u: goto label_3da888;
        case 0x3da88cu: goto label_3da88c;
        case 0x3da890u: goto label_3da890;
        case 0x3da894u: goto label_3da894;
        case 0x3da898u: goto label_3da898;
        case 0x3da89cu: goto label_3da89c;
        case 0x3da8a0u: goto label_3da8a0;
        case 0x3da8a4u: goto label_3da8a4;
        case 0x3da8a8u: goto label_3da8a8;
        case 0x3da8acu: goto label_3da8ac;
        case 0x3da8b0u: goto label_3da8b0;
        case 0x3da8b4u: goto label_3da8b4;
        case 0x3da8b8u: goto label_3da8b8;
        case 0x3da8bcu: goto label_3da8bc;
        case 0x3da8c0u: goto label_3da8c0;
        case 0x3da8c4u: goto label_3da8c4;
        case 0x3da8c8u: goto label_3da8c8;
        case 0x3da8ccu: goto label_3da8cc;
        case 0x3da8d0u: goto label_3da8d0;
        case 0x3da8d4u: goto label_3da8d4;
        case 0x3da8d8u: goto label_3da8d8;
        case 0x3da8dcu: goto label_3da8dc;
        case 0x3da8e0u: goto label_3da8e0;
        case 0x3da8e4u: goto label_3da8e4;
        case 0x3da8e8u: goto label_3da8e8;
        case 0x3da8ecu: goto label_3da8ec;
        case 0x3da8f0u: goto label_3da8f0;
        case 0x3da8f4u: goto label_3da8f4;
        case 0x3da8f8u: goto label_3da8f8;
        case 0x3da8fcu: goto label_3da8fc;
        case 0x3da900u: goto label_3da900;
        case 0x3da904u: goto label_3da904;
        default: break;
    }

    ctx->pc = 0x3da818u;

label_3da818:
    // 0x3da818: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3da818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3da81c:
    // 0x3da81c: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3da81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3da820:
    // 0x3da820: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3da820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3da824:
    // 0x3da824: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3da824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da828:
    // 0x3da828: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3da828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3da82c:
    // 0x3da82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da830:
    // 0x3da830: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3da830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3da834:
    // 0x3da834: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3da834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3da838:
    // 0x3da838: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da83c:
    // 0x3da83c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da840:
    // 0x3da840: 0x40f809  jalr        $v0
label_3da844:
    if (ctx->pc == 0x3DA844u) {
        ctx->pc = 0x3DA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA840u;
        // 0x3da844: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA848u;
        goto label_3da848;
    }
    ctx->pc = 0x3DA840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA848u);
        ctx->pc = 0x3DA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA840u;
        // 0x3da844: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA840u, 0x3DA848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA848u;
label_3da848:
    // 0x3da848: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x3da848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3da84c:
    // 0x3da84c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3da84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3da850:
    // 0x3da850: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3da850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3da854:
    // 0x3da854: 0xc0e858c  jal         func_3A1630
label_3da858:
    if (ctx->pc == 0x3DA858u) {
        ctx->pc = 0x3DA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA854u;
        // 0x3da858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA85Cu;
        goto label_3da85c;
    }
    ctx->pc = 0x3DA854u;
    SET_GPR_U32(ctx, 31, 0x3DA85Cu);
    ctx->pc = 0x3DA858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA854u;
    // 0x3da858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA854u, 0x3DA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA85Cu;
label_3da85c:
    // 0x3da85c: 0xc0ea14c  jal         func_3A8530
label_3da860:
    if (ctx->pc == 0x3DA860u) {
        ctx->pc = 0x3DA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA85Cu;
        // 0x3da860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA864u;
        goto label_3da864;
    }
    ctx->pc = 0x3DA85Cu;
    SET_GPR_U32(ctx, 31, 0x3DA864u);
    ctx->pc = 0x3DA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA85Cu;
    // 0x3da860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DA85Cu, 0x3DA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA864u;
label_3da864:
    // 0x3da864: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da868:
    // 0x3da868: 0xc0ea12a  jal         func_3A84A8
label_3da86c:
    if (ctx->pc == 0x3DA86Cu) {
        ctx->pc = 0x3DA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA868u;
        // 0x3da86c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA870u;
        goto label_3da870;
    }
    ctx->pc = 0x3DA868u;
    SET_GPR_U32(ctx, 31, 0x3DA870u);
    ctx->pc = 0x3DA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA868u;
    // 0x3da86c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA868u, 0x3DA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA870u;
label_3da870:
    // 0x3da870: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da874:
    // 0x3da874: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da878:
    // 0x3da878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3da878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da87c:
    // 0x3da87c: 0xc0ea12a  jal         func_3A84A8
label_3da880:
    if (ctx->pc == 0x3DA880u) {
        ctx->pc = 0x3DA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA87Cu;
        // 0x3da880: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA884u;
        goto label_3da884;
    }
    ctx->pc = 0x3DA87Cu;
    SET_GPR_U32(ctx, 31, 0x3DA884u);
    ctx->pc = 0x3DA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA87Cu;
    // 0x3da880: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA87Cu, 0x3DA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA884u;
label_3da884:
    // 0x3da884: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da888:
    // 0x3da888: 0x3c03ffaf  lui         $v1, 0xFFAF
    ctx->pc = 0x3da888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65455 << 16));
label_3da88c:
    // 0x3da88c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3da88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3da890:
    // 0x3da890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3da890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3da894:
    // 0x3da894: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3da894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3da898:
    // 0x3da898: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3da898u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3da89c:
    // 0x3da89c: 0x3463cfff  ori         $v1, $v1, 0xCFFF
    ctx->pc = 0x3da89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53247);
label_3da8a0:
    // 0x3da8a0: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x3da8a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3da8a4:
    // 0x3da8a4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3da8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3da8a8:
    // 0x3da8a8: 0x26105128  addiu       $s0, $s0, 0x5128
    ctx->pc = 0x3da8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20776));
label_3da8ac:
    // 0x3da8ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3da8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3da8b0:
    // 0x3da8b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3da8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da8b4:
    // 0x3da8b4: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3da8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3da8b8:
    // 0x3da8b8: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3da8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3da8bc:
    // 0x3da8bc: 0x27a80460  addiu       $t0, $sp, 0x460
    ctx->pc = 0x3da8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3da8c0:
    // 0x3da8c0: 0x27a90470  addiu       $t1, $sp, 0x470
    ctx->pc = 0x3da8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3da8c4:
    // 0x3da8c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3da8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3da8c8:
    // 0x3da8c8: 0xafa30440  sw          $v1, 0x440($sp)
    ctx->pc = 0x3da8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 3));
label_3da8cc:
    // 0x3da8cc: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3da8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3da8d0:
    // 0x3da8d0: 0xafaa0470  sw          $t2, 0x470($sp)
    ctx->pc = 0x3da8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 10));
label_3da8d4:
    // 0x3da8d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3da8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3da8d8:
    // 0x3da8d8: 0xc0ea004  jal         func_3A8010
label_3da8dc:
    if (ctx->pc == 0x3DA8DCu) {
        ctx->pc = 0x3DA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8D8u;
        // 0x3da8dc: 0xafa00450  sw          $zero, 0x450($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA8E0u;
        goto label_3da8e0;
    }
    ctx->pc = 0x3DA8D8u;
    SET_GPR_U32(ctx, 31, 0x3DA8E0u);
    ctx->pc = 0x3DA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA8D8u;
    // 0x3da8dc: 0xafa00450  sw          $zero, 0x450($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3DA8D8u, 0x3DA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA8E0u;
label_3da8e0:
    // 0x3da8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da8e4:
    // 0x3da8e4: 0xc0f15bc  jal         func_3C56F0
label_3da8e8:
    if (ctx->pc == 0x3DA8E8u) {
        ctx->pc = 0x3DA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8E4u;
        // 0x3da8e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA8ECu;
        goto label_3da8ec;
    }
    ctx->pc = 0x3DA8E4u;
    SET_GPR_U32(ctx, 31, 0x3DA8ECu);
    ctx->pc = 0x3DA8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA8E4u;
    // 0x3da8e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DA8E4u, 0x3DA8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA8ECu;
label_3da8ec:
    // 0x3da8ec: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3da8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3da8f0:
    // 0x3da8f0: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3da8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3da8f4:
    // 0x3da8f4: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3da8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3da8f8:
    // 0x3da8f8: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3da8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3da8fc:
    // 0x3da8fc: 0x3e00008  jr          $ra
label_3da900:
    if (ctx->pc == 0x3DA900u) {
        ctx->pc = 0x3DA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8FCu;
        // 0x3da900: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA904u;
        goto label_3da904;
    }
    ctx->pc = 0x3DA8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8FCu;
        // 0x3da900: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA904u;
label_3da904:
    // 0x3da904: 0x0  nop
    ctx->pc = 0x3da904u;
    // NOP
    ctx->pc = 0x3da908u;
}
