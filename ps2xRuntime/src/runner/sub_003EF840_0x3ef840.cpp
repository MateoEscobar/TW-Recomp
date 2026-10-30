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

// Function: sub_003EF840
// Address: 0x3ef840 - 0x3ef980
void sub_003EF840_0x3ef840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF840_0x3ef840");
#endif

    switch (ctx->pc) {
        case 0x3ef840u: goto label_3ef840;
        case 0x3ef844u: goto label_3ef844;
        case 0x3ef848u: goto label_3ef848;
        case 0x3ef84cu: goto label_3ef84c;
        case 0x3ef850u: goto label_3ef850;
        case 0x3ef854u: goto label_3ef854;
        case 0x3ef858u: goto label_3ef858;
        case 0x3ef85cu: goto label_3ef85c;
        case 0x3ef860u: goto label_3ef860;
        case 0x3ef864u: goto label_3ef864;
        case 0x3ef868u: goto label_3ef868;
        case 0x3ef86cu: goto label_3ef86c;
        case 0x3ef870u: goto label_3ef870;
        case 0x3ef874u: goto label_3ef874;
        case 0x3ef878u: goto label_3ef878;
        case 0x3ef87cu: goto label_3ef87c;
        case 0x3ef880u: goto label_3ef880;
        case 0x3ef884u: goto label_3ef884;
        case 0x3ef888u: goto label_3ef888;
        case 0x3ef88cu: goto label_3ef88c;
        case 0x3ef890u: goto label_3ef890;
        case 0x3ef894u: goto label_3ef894;
        case 0x3ef898u: goto label_3ef898;
        case 0x3ef89cu: goto label_3ef89c;
        case 0x3ef8a0u: goto label_3ef8a0;
        case 0x3ef8a4u: goto label_3ef8a4;
        case 0x3ef8a8u: goto label_3ef8a8;
        case 0x3ef8acu: goto label_3ef8ac;
        case 0x3ef8b0u: goto label_3ef8b0;
        case 0x3ef8b4u: goto label_3ef8b4;
        case 0x3ef8b8u: goto label_3ef8b8;
        case 0x3ef8bcu: goto label_3ef8bc;
        case 0x3ef8c0u: goto label_3ef8c0;
        case 0x3ef8c4u: goto label_3ef8c4;
        case 0x3ef8c8u: goto label_3ef8c8;
        case 0x3ef8ccu: goto label_3ef8cc;
        case 0x3ef8d0u: goto label_3ef8d0;
        case 0x3ef8d4u: goto label_3ef8d4;
        case 0x3ef8d8u: goto label_3ef8d8;
        case 0x3ef8dcu: goto label_3ef8dc;
        case 0x3ef8e0u: goto label_3ef8e0;
        case 0x3ef8e4u: goto label_3ef8e4;
        case 0x3ef8e8u: goto label_3ef8e8;
        case 0x3ef8ecu: goto label_3ef8ec;
        case 0x3ef8f0u: goto label_3ef8f0;
        case 0x3ef8f4u: goto label_3ef8f4;
        case 0x3ef8f8u: goto label_3ef8f8;
        case 0x3ef8fcu: goto label_3ef8fc;
        case 0x3ef900u: goto label_3ef900;
        case 0x3ef904u: goto label_3ef904;
        case 0x3ef908u: goto label_3ef908;
        case 0x3ef90cu: goto label_3ef90c;
        case 0x3ef910u: goto label_3ef910;
        case 0x3ef914u: goto label_3ef914;
        case 0x3ef918u: goto label_3ef918;
        case 0x3ef91cu: goto label_3ef91c;
        case 0x3ef920u: goto label_3ef920;
        case 0x3ef924u: goto label_3ef924;
        case 0x3ef928u: goto label_3ef928;
        case 0x3ef92cu: goto label_3ef92c;
        case 0x3ef930u: goto label_3ef930;
        case 0x3ef934u: goto label_3ef934;
        case 0x3ef938u: goto label_3ef938;
        case 0x3ef93cu: goto label_3ef93c;
        case 0x3ef940u: goto label_3ef940;
        case 0x3ef944u: goto label_3ef944;
        case 0x3ef948u: goto label_3ef948;
        case 0x3ef94cu: goto label_3ef94c;
        case 0x3ef950u: goto label_3ef950;
        case 0x3ef954u: goto label_3ef954;
        case 0x3ef958u: goto label_3ef958;
        case 0x3ef95cu: goto label_3ef95c;
        case 0x3ef960u: goto label_3ef960;
        case 0x3ef964u: goto label_3ef964;
        case 0x3ef968u: goto label_3ef968;
        case 0x3ef96cu: goto label_3ef96c;
        case 0x3ef970u: goto label_3ef970;
        case 0x3ef974u: goto label_3ef974;
        case 0x3ef978u: goto label_3ef978;
        case 0x3ef97cu: goto label_3ef97c;
        default: break;
    }

    ctx->pc = 0x3ef840u;

label_3ef840:
    // 0x3ef840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ef840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ef844:
    // 0x3ef844: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3ef844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3ef848:
    // 0x3ef848: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ef848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3ef84c:
    // 0x3ef84c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ef84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ef850:
    // 0x3ef850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef854:
    // 0x3ef854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ef854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ef858:
    // 0x3ef858: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3ef858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3ef85c:
    // 0x3ef85c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ef860:
    // 0x3ef860: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ef860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ef864:
    // 0x3ef864: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ef864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ef868:
    // 0x3ef868: 0x40f809  jalr        $v0
label_3ef86c:
    if (ctx->pc == 0x3EF86Cu) {
        ctx->pc = 0x3EF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF868u;
        // 0x3ef86c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF870u;
        goto label_3ef870;
    }
    ctx->pc = 0x3EF868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EF870u);
        ctx->pc = 0x3EF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF868u;
        // 0x3ef86c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF868u, 0x3EF870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF870u;
label_3ef870:
    // 0x3ef870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ef870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef874:
    // 0x3ef874: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x3ef874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_3ef878:
    // 0x3ef878: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ef878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ef87c:
    // 0x3ef87c: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
label_3ef880:
    if (ctx->pc == 0x3EF880u) {
        ctx->pc = 0x3EF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF87Cu;
        // 0x3ef880: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF884u;
        goto label_3ef884;
    }
    ctx->pc = 0x3EF87Cu;
    {
        const bool branch_taken_0x3ef87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef87c) {
            ctx->pc = 0x3EF880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF87Cu;
            // 0x3ef880: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF948u;
            goto label_3ef948;
        }
    }
    ctx->pc = 0x3EF884u;
label_3ef884:
    // 0x3ef884: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3ef884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ef888:
    // 0x3ef888: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3ef888u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3ef88c:
    // 0x3ef88c: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x3ef88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_3ef890:
    // 0x3ef890: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ef890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ef894:
    // 0x3ef894: 0xc044382  jal         func_110E08
label_3ef898:
    if (ctx->pc == 0x3EF898u) {
        ctx->pc = 0x3EF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF894u;
        // 0x3ef898: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF89Cu;
        goto label_3ef89c;
    }
    ctx->pc = 0x3EF894u;
    SET_GPR_U32(ctx, 31, 0x3EF89Cu);
    ctx->pc = 0x3EF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF894u;
    // 0x3ef898: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E08u, 0x3EF894u, 0x3EF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF89Cu;
label_3ef89c:
    // 0x3ef89c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3ef89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3ef8a0:
    // 0x3ef8a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ef8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ef8a4:
    // 0x3ef8a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef8a8:
    // 0x3ef8a8: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x3ef8a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ef8ac:
    // 0x3ef8ac: 0xc04808c  jal         func_120230
label_3ef8b0:
    if (ctx->pc == 0x3EF8B0u) {
        ctx->pc = 0x3EF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8ACu;
        // 0x3ef8b0: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF8B4u;
        goto label_3ef8b4;
    }
    ctx->pc = 0x3EF8ACu;
    SET_GPR_U32(ctx, 31, 0x3EF8B4u);
    ctx->pc = 0x3EF8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF8ACu;
    // 0x3ef8b0: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x3EF8ACu, 0x3EF8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF8B4u;
label_3ef8b4:
    // 0x3ef8b4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3ef8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ef8b8:
    // 0x3ef8b8: 0x0  nop
    ctx->pc = 0x3ef8b8u;
    // NOP
label_3ef8bc:
    // 0x3ef8bc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_3ef8c0:
    if (ctx->pc == 0x3EF8C0u) {
        ctx->pc = 0x3EF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8BCu;
        // 0x3ef8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF8C4u;
        goto label_3ef8c4;
    }
    ctx->pc = 0x3EF8BCu;
    {
        const bool branch_taken_0x3ef8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8BCu;
        // 0x3ef8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef8bc) {
            ctx->pc = 0x3EF92Cu;
            goto label_3ef92c;
        }
    }
    ctx->pc = 0x3EF8C4u;
label_3ef8c4:
    // 0x3ef8c4: 0xc0e858c  jal         func_3A1630
label_3ef8c8:
    if (ctx->pc == 0x3EF8C8u) {
        ctx->pc = 0x3EF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8C4u;
        // 0x3ef8c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF8CCu;
        goto label_3ef8cc;
    }
    ctx->pc = 0x3EF8C4u;
    SET_GPR_U32(ctx, 31, 0x3EF8CCu);
    ctx->pc = 0x3EF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF8C4u;
    // 0x3ef8c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EF8C4u, 0x3EF8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF8CCu;
label_3ef8cc:
    // 0x3ef8cc: 0xc043d5e  jal         func_10F578
label_3ef8d0:
    if (ctx->pc == 0x3EF8D0u) {
        ctx->pc = 0x3EF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8CCu;
        // 0x3ef8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF8D4u;
        goto label_3ef8d4;
    }
    ctx->pc = 0x3EF8CCu;
    SET_GPR_U32(ctx, 31, 0x3EF8D4u);
    ctx->pc = 0x3EF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF8CCu;
    // 0x3ef8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3EF8CCu, 0x3EF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF8D4u;
label_3ef8d4:
    // 0x3ef8d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3ef8d8:
    if (ctx->pc == 0x3EF8D8u) {
        ctx->pc = 0x3EF8DCu;
        goto label_3ef8dc;
    }
    ctx->pc = 0x3EF8D4u;
    {
        const bool branch_taken_0x3ef8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef8d4) {
            ctx->pc = 0x3EF8FCu;
            goto label_3ef8fc;
        }
    }
    ctx->pc = 0x3EF8DCu;
label_3ef8dc:
    // 0x3ef8dc: 0xc043d5e  jal         func_10F578
label_3ef8e0:
    if (ctx->pc == 0x3EF8E0u) {
        ctx->pc = 0x3EF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8DCu;
        // 0x3ef8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF8E4u;
        goto label_3ef8e4;
    }
    ctx->pc = 0x3EF8DCu;
    SET_GPR_U32(ctx, 31, 0x3EF8E4u);
    ctx->pc = 0x3EF8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF8DCu;
    // 0x3ef8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3EF8DCu, 0x3EF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF8E4u;
label_3ef8e4:
    // 0x3ef8e4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3ef8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3ef8e8:
    // 0x3ef8e8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_3ef8ec:
    if (ctx->pc == 0x3EF8ECu) {
        ctx->pc = 0x3EF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8E8u;
        // 0x3ef8ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF8F0u;
        goto label_3ef8f0;
    }
    ctx->pc = 0x3EF8E8u;
    {
        const bool branch_taken_0x3ef8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8E8u;
        // 0x3ef8ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef8e8) {
            ctx->pc = 0x3EF944u;
            goto label_3ef944;
        }
    }
    ctx->pc = 0x3EF8F0u;
label_3ef8f0:
    // 0x3ef8f0: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x3ef8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_3ef8f4:
    // 0x3ef8f4: 0xc0440c6  jal         func_110318
label_3ef8f8:
    if (ctx->pc == 0x3EF8F8u) {
        ctx->pc = 0x3EF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8F4u;
        // 0x3ef8f8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF8FCu;
        goto label_3ef8fc;
    }
    ctx->pc = 0x3EF8F4u;
    SET_GPR_U32(ctx, 31, 0x3EF8FCu);
    ctx->pc = 0x3EF8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF8F4u;
    // 0x3ef8f8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3EF8F4u, 0x3EF8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF8FCu;
label_3ef8fc:
    // 0x3ef8fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ef8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ef900:
    // 0x3ef900: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ef900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ef904:
    // 0x3ef904: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ef904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef908:
    // 0x3ef908: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x3ef908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_3ef90c:
    // 0x3ef90c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ef90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef910:
    // 0x3ef910: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3ef910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ef914:
    // 0x3ef914: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3ef914u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3ef918:
    // 0x3ef918: 0xc043f74  jal         func_10FDD0
label_3ef91c:
    if (ctx->pc == 0x3EF91Cu) {
        ctx->pc = 0x3EF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF918u;
        // 0x3ef91c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF920u;
        goto label_3ef920;
    }
    ctx->pc = 0x3EF918u;
    SET_GPR_U32(ctx, 31, 0x3EF920u);
    ctx->pc = 0x3EF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF918u;
    // 0x3ef91c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3EF918u, 0x3EF920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF920u;
label_3ef920:
    // 0x3ef920: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ef920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3ef924:
    // 0x3ef924: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ef928:
    if (ctx->pc == 0x3EF928u) {
        ctx->pc = 0x3EF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF924u;
        // 0x3ef928: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF92Cu;
        goto label_3ef92c;
    }
    ctx->pc = 0x3EF924u;
    {
        const bool branch_taken_0x3ef924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF924u;
        // 0x3ef928: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef924) {
            ctx->pc = 0x3EF944u;
            goto label_3ef944;
        }
    }
    ctx->pc = 0x3EF92Cu;
label_3ef92c:
    // 0x3ef92c: 0xc0e858c  jal         func_3A1630
label_3ef930:
    if (ctx->pc == 0x3EF930u) {
        ctx->pc = 0x3EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF92Cu;
        // 0x3ef930: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF934u;
        goto label_3ef934;
    }
    ctx->pc = 0x3EF92Cu;
    SET_GPR_U32(ctx, 31, 0x3EF934u);
    ctx->pc = 0x3EF930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF92Cu;
    // 0x3ef930: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EF92Cu, 0x3EF934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF934u;
label_3ef934:
    // 0x3ef934: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x3ef934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_3ef938:
    // 0x3ef938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ef938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef93c:
    // 0x3ef93c: 0xc0440c6  jal         func_110318
label_3ef940:
    if (ctx->pc == 0x3EF940u) {
        ctx->pc = 0x3EF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF93Cu;
        // 0x3ef940: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF944u;
        goto label_3ef944;
    }
    ctx->pc = 0x3EF93Cu;
    SET_GPR_U32(ctx, 31, 0x3EF944u);
    ctx->pc = 0x3EF940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF93Cu;
    // 0x3ef940: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3EF93Cu, 0x3EF944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF944u;
label_3ef944:
    // 0x3ef944: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ef948:
    // 0x3ef948: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ef948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ef94c:
    // 0x3ef94c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ef94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ef950:
    // 0x3ef950: 0x40f809  jalr        $v0
label_3ef954:
    if (ctx->pc == 0x3EF954u) {
        ctx->pc = 0x3EF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF950u;
        // 0x3ef954: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF958u;
        goto label_3ef958;
    }
    ctx->pc = 0x3EF950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EF958u);
        ctx->pc = 0x3EF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF950u;
        // 0x3ef954: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF950u, 0x3EF958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF958u;
label_3ef958:
    // 0x3ef958: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3ef958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3ef95c:
    // 0x3ef95c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3ef95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ef960:
    // 0x3ef960: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ef960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ef964:
    // 0x3ef964: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ef964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ef968:
    // 0x3ef968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ef968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef96c:
    // 0x3ef96c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ef96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ef970:
    // 0x3ef970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ef970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef974:
    // 0x3ef974: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3ef974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ef978:
    // 0x3ef978: 0x3e00008  jr          $ra
label_3ef97c:
    if (ctx->pc == 0x3EF97Cu) {
        ctx->pc = 0x3EF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF978u;
        // 0x3ef97c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF980u;
        goto label_fallthrough_0x3ef978;
    }
    ctx->pc = 0x3EF978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF978u;
        // 0x3ef97c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ef978:
    ctx->pc = 0x3EF980u;
}
