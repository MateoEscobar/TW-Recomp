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

// Function: sub_002267E8
// Address: 0x2267e8 - 0x226910
void sub_002267E8_0x2267e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267E8_0x2267e8");
#endif

    switch (ctx->pc) {
        case 0x2267e8u: goto label_2267e8;
        case 0x2267ecu: goto label_2267ec;
        case 0x2267f0u: goto label_2267f0;
        case 0x2267f4u: goto label_2267f4;
        case 0x2267f8u: goto label_2267f8;
        case 0x2267fcu: goto label_2267fc;
        case 0x226800u: goto label_226800;
        case 0x226804u: goto label_226804;
        case 0x226808u: goto label_226808;
        case 0x22680cu: goto label_22680c;
        case 0x226810u: goto label_226810;
        case 0x226814u: goto label_226814;
        case 0x226818u: goto label_226818;
        case 0x22681cu: goto label_22681c;
        case 0x226820u: goto label_226820;
        case 0x226824u: goto label_226824;
        case 0x226828u: goto label_226828;
        case 0x22682cu: goto label_22682c;
        case 0x226830u: goto label_226830;
        case 0x226834u: goto label_226834;
        case 0x226838u: goto label_226838;
        case 0x22683cu: goto label_22683c;
        case 0x226840u: goto label_226840;
        case 0x226844u: goto label_226844;
        case 0x226848u: goto label_226848;
        case 0x22684cu: goto label_22684c;
        case 0x226850u: goto label_226850;
        case 0x226854u: goto label_226854;
        case 0x226858u: goto label_226858;
        case 0x22685cu: goto label_22685c;
        case 0x226860u: goto label_226860;
        case 0x226864u: goto label_226864;
        case 0x226868u: goto label_226868;
        case 0x22686cu: goto label_22686c;
        case 0x226870u: goto label_226870;
        case 0x226874u: goto label_226874;
        case 0x226878u: goto label_226878;
        case 0x22687cu: goto label_22687c;
        case 0x226880u: goto label_226880;
        case 0x226884u: goto label_226884;
        case 0x226888u: goto label_226888;
        case 0x22688cu: goto label_22688c;
        case 0x226890u: goto label_226890;
        case 0x226894u: goto label_226894;
        case 0x226898u: goto label_226898;
        case 0x22689cu: goto label_22689c;
        case 0x2268a0u: goto label_2268a0;
        case 0x2268a4u: goto label_2268a4;
        case 0x2268a8u: goto label_2268a8;
        case 0x2268acu: goto label_2268ac;
        case 0x2268b0u: goto label_2268b0;
        case 0x2268b4u: goto label_2268b4;
        case 0x2268b8u: goto label_2268b8;
        case 0x2268bcu: goto label_2268bc;
        case 0x2268c0u: goto label_2268c0;
        case 0x2268c4u: goto label_2268c4;
        case 0x2268c8u: goto label_2268c8;
        case 0x2268ccu: goto label_2268cc;
        case 0x2268d0u: goto label_2268d0;
        case 0x2268d4u: goto label_2268d4;
        case 0x2268d8u: goto label_2268d8;
        case 0x2268dcu: goto label_2268dc;
        case 0x2268e0u: goto label_2268e0;
        case 0x2268e4u: goto label_2268e4;
        case 0x2268e8u: goto label_2268e8;
        case 0x2268ecu: goto label_2268ec;
        case 0x2268f0u: goto label_2268f0;
        case 0x2268f4u: goto label_2268f4;
        case 0x2268f8u: goto label_2268f8;
        case 0x2268fcu: goto label_2268fc;
        case 0x226900u: goto label_226900;
        case 0x226904u: goto label_226904;
        case 0x226908u: goto label_226908;
        case 0x22690cu: goto label_22690c;
        default: break;
    }

    ctx->pc = 0x2267e8u;

label_2267e8:
    // 0x2267e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2267e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2267ec:
    // 0x2267ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2267ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2267f0:
    // 0x2267f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2267f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2267f4:
    // 0x2267f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2267f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2267f8:
    // 0x2267f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2267f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2267fc:
    // 0x2267fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2267fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_226800:
    // 0x226800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_226804:
    // 0x226804: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x226804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_226808:
    // 0x226808: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_22680c:
    if (ctx->pc == 0x22680Cu) {
        ctx->pc = 0x22680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226808u;
        // 0x22680c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226810u;
        goto label_226810;
    }
    ctx->pc = 0x226808u;
    {
        const bool branch_taken_0x226808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226808u;
        // 0x22680c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226808) {
            ctx->pc = 0x2268F0u;
            goto label_2268f0;
        }
    }
    ctx->pc = 0x226810u;
label_226810:
    // 0x226810: 0xc0e57ce  jal         func_395F38
label_226814:
    if (ctx->pc == 0x226814u) {
        ctx->pc = 0x226814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226810u;
        // 0x226814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226818u;
        goto label_226818;
    }
    ctx->pc = 0x226810u;
    SET_GPR_U32(ctx, 31, 0x226818u);
    ctx->pc = 0x226814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226810u;
    // 0x226814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x226810u, 0x226818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226818u;
label_226818:
    // 0x226818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x226818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22681c:
    // 0x22681c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_226820:
    if (ctx->pc == 0x226820u) {
        ctx->pc = 0x226820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22681Cu;
        // 0x226820: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226824u;
        goto label_226824;
    }
    ctx->pc = 0x22681Cu;
    {
        const bool branch_taken_0x22681c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x226820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22681Cu;
        // 0x226820: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22681c) {
            ctx->pc = 0x22682Cu;
            goto label_22682c;
        }
    }
    ctx->pc = 0x226824u;
label_226824:
    // 0x226824: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x226824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_226828:
    // 0x226828: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x226828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_22682c:
    // 0x22682c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x22682cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_226830:
    // 0x226830: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_226834:
    if (ctx->pc == 0x226834u) {
        ctx->pc = 0x226834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226830u;
        // 0x226834: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226838u;
        goto label_226838;
    }
    ctx->pc = 0x226830u;
    {
        const bool branch_taken_0x226830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x226834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226830u;
        // 0x226834: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226830) {
            ctx->pc = 0x2268E0u;
            goto label_2268e0;
        }
    }
    ctx->pc = 0x226838u;
label_226838:
    // 0x226838: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x226838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22683c:
    // 0x22683c: 0x8e3000d4  lw          $s0, 0xD4($s1)
    ctx->pc = 0x22683cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_226840:
    // 0x226840: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x226840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226844:
    // 0x226844: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226848:
    // 0x226848: 0x40f809  jalr        $v0
label_22684c:
    if (ctx->pc == 0x22684Cu) {
        ctx->pc = 0x22684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226848u;
        // 0x22684c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226850u;
        goto label_226850;
    }
    ctx->pc = 0x226848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226850u);
        ctx->pc = 0x22684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226848u;
        // 0x22684c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226848u, 0x226850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226850u;
label_226850:
    // 0x226850: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x226850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_226854:
    // 0x226854: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x226854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_226858:
    // 0x226858: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x226858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_22685c:
    // 0x22685c: 0x96430112  lhu         $v1, 0x112($s2)
    ctx->pc = 0x22685cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_226860:
    // 0x226860: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_226864:
    // 0x226864: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x226864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
label_226868:
    // 0x226868: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x226868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22686c:
    // 0x22686c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226870:
    // 0x226870: 0xe4a0011c  swc1        $f0, 0x11C($a1)
    ctx->pc = 0x226870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 284), bits); }
label_226874:
    // 0x226874: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x226874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_226878:
    // 0x226878: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x226878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22687c:
    // 0x22687c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x22687cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_226880:
    // 0x226880: 0xc0e44cc  jal         func_391330
label_226884:
    if (ctx->pc == 0x226884u) {
        ctx->pc = 0x226884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226880u;
        // 0x226884: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226888u;
        goto label_226888;
    }
    ctx->pc = 0x226880u;
    SET_GPR_U32(ctx, 31, 0x226888u);
    ctx->pc = 0x226884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226880u;
    // 0x226884: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x226880u, 0x226888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226888u;
label_226888:
    // 0x226888: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x226888u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_22688c:
    // 0x22688c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_226890:
    // 0x226890: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_226894:
    if (ctx->pc == 0x226894u) {
        ctx->pc = 0x226894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226890u;
        // 0x226894: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226898u;
        goto label_226898;
    }
    ctx->pc = 0x226890u;
    {
        const bool branch_taken_0x226890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x226894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226890u;
        // 0x226894: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226890) {
            ctx->pc = 0x2268F4u;
            goto label_2268f4;
        }
    }
    ctx->pc = 0x226898u;
label_226898:
    // 0x226898: 0xc0899e8  jal         func_2267A0
label_22689c:
    if (ctx->pc == 0x22689Cu) {
        ctx->pc = 0x22689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226898u;
        // 0x22689c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268A0u;
        goto label_2268a0;
    }
    ctx->pc = 0x226898u;
    SET_GPR_U32(ctx, 31, 0x2268A0u);
    ctx->pc = 0x22689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226898u;
    // 0x22689c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x226898u, 0x2268A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268A0u;
label_2268a0:
    // 0x2268a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2268a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2268a4:
    // 0x2268a4: 0xc08bf3a  jal         func_22FCE8
label_2268a8:
    if (ctx->pc == 0x2268A8u) {
        ctx->pc = 0x2268A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268A4u;
        // 0x2268a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268ACu;
        goto label_2268ac;
    }
    ctx->pc = 0x2268A4u;
    SET_GPR_U32(ctx, 31, 0x2268ACu);
    ctx->pc = 0x2268A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268A4u;
    // 0x2268a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCE8u, 0x2268A4u, 0x2268ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268ACu;
label_2268ac:
    // 0x2268ac: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_2268b0:
    if (ctx->pc == 0x2268B0u) {
        ctx->pc = 0x2268B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268ACu;
        // 0x2268b0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268B4u;
        goto label_2268b4;
    }
    ctx->pc = 0x2268ACu;
    {
        const bool branch_taken_0x2268ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2268ac) {
            ctx->pc = 0x2268B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2268ACu;
            // 0x2268b0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2268F4u;
            goto label_2268f4;
        }
    }
    ctx->pc = 0x2268B4u;
label_2268b4:
    // 0x2268b4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2268b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2268b8:
    // 0x2268b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2268b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2268bc:
    // 0x2268bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2268c0:
    if (ctx->pc == 0x2268C0u) {
        ctx->pc = 0x2268C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268BCu;
        // 0x2268c0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268C4u;
        goto label_2268c4;
    }
    ctx->pc = 0x2268BCu;
    {
        const bool branch_taken_0x2268bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268BCu;
        // 0x2268c0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268bc) {
            ctx->pc = 0x2268F0u;
            goto label_2268f0;
        }
    }
    ctx->pc = 0x2268C4u;
label_2268c4:
    // 0x2268c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2268c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2268c8:
    // 0x2268c8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2268c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_2268cc:
    // 0x2268cc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2268ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2268d0:
    // 0x2268d0: 0xc13b632  jal         func_4ED8C8
label_2268d4:
    if (ctx->pc == 0x2268D4u) {
        ctx->pc = 0x2268D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268D0u;
        // 0x2268d4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268D8u;
        goto label_2268d8;
    }
    ctx->pc = 0x2268D0u;
    SET_GPR_U32(ctx, 31, 0x2268D8u);
    ctx->pc = 0x2268D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268D0u;
    // 0x2268d4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x2268D0u, 0x2268D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268D8u;
label_2268d8:
    // 0x2268d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2268dc:
    if (ctx->pc == 0x2268DCu) {
        ctx->pc = 0x2268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268D8u;
        // 0x2268dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268E0u;
        goto label_2268e0;
    }
    ctx->pc = 0x2268D8u;
    {
        const bool branch_taken_0x2268d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268D8u;
        // 0x2268dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268d8) {
            ctx->pc = 0x2268F4u;
            goto label_2268f4;
        }
    }
    ctx->pc = 0x2268E0u;
label_2268e0:
    // 0x2268e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2268e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2268e4:
    // 0x2268e4: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x2268e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2268e8:
    // 0x2268e8: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2268ec:
    // 0x2268ec: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x2268ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_2268f0:
    // 0x2268f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2268f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2268f4:
    // 0x2268f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2268f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2268f8:
    // 0x2268f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2268f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2268fc:
    // 0x2268fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2268fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226900:
    // 0x226900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226904:
    // 0x226904: 0x3e00008  jr          $ra
label_226908:
    if (ctx->pc == 0x226908u) {
        ctx->pc = 0x226908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226904u;
        // 0x226908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22690Cu;
        goto label_22690c;
    }
    ctx->pc = 0x226904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226904u;
        // 0x226908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22690Cu;
label_22690c:
    // 0x22690c: 0x0  nop
    ctx->pc = 0x22690cu;
    // NOP
    ctx->pc = 0x226910u;
}
