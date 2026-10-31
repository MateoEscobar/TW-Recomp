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

// Function: sub_00406838
// Address: 0x406838 - 0x406a08
void sub_00406838_0x406838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406838_0x406838");
#endif

    switch (ctx->pc) {
        case 0x406838u: goto label_406838;
        case 0x40683cu: goto label_40683c;
        case 0x406840u: goto label_406840;
        case 0x406844u: goto label_406844;
        case 0x406848u: goto label_406848;
        case 0x40684cu: goto label_40684c;
        case 0x406850u: goto label_406850;
        case 0x406854u: goto label_406854;
        case 0x406858u: goto label_406858;
        case 0x40685cu: goto label_40685c;
        case 0x406860u: goto label_406860;
        case 0x406864u: goto label_406864;
        case 0x406868u: goto label_406868;
        case 0x40686cu: goto label_40686c;
        case 0x406870u: goto label_406870;
        case 0x406874u: goto label_406874;
        case 0x406878u: goto label_406878;
        case 0x40687cu: goto label_40687c;
        case 0x406880u: goto label_406880;
        case 0x406884u: goto label_406884;
        case 0x406888u: goto label_406888;
        case 0x40688cu: goto label_40688c;
        case 0x406890u: goto label_406890;
        case 0x406894u: goto label_406894;
        case 0x406898u: goto label_406898;
        case 0x40689cu: goto label_40689c;
        case 0x4068a0u: goto label_4068a0;
        case 0x4068a4u: goto label_4068a4;
        case 0x4068a8u: goto label_4068a8;
        case 0x4068acu: goto label_4068ac;
        case 0x4068b0u: goto label_4068b0;
        case 0x4068b4u: goto label_4068b4;
        case 0x4068b8u: goto label_4068b8;
        case 0x4068bcu: goto label_4068bc;
        case 0x4068c0u: goto label_4068c0;
        case 0x4068c4u: goto label_4068c4;
        case 0x4068c8u: goto label_4068c8;
        case 0x4068ccu: goto label_4068cc;
        case 0x4068d0u: goto label_4068d0;
        case 0x4068d4u: goto label_4068d4;
        case 0x4068d8u: goto label_4068d8;
        case 0x4068dcu: goto label_4068dc;
        case 0x4068e0u: goto label_4068e0;
        case 0x4068e4u: goto label_4068e4;
        case 0x4068e8u: goto label_4068e8;
        case 0x4068ecu: goto label_4068ec;
        case 0x4068f0u: goto label_4068f0;
        case 0x4068f4u: goto label_4068f4;
        case 0x4068f8u: goto label_4068f8;
        case 0x4068fcu: goto label_4068fc;
        case 0x406900u: goto label_406900;
        case 0x406904u: goto label_406904;
        case 0x406908u: goto label_406908;
        case 0x40690cu: goto label_40690c;
        case 0x406910u: goto label_406910;
        case 0x406914u: goto label_406914;
        case 0x406918u: goto label_406918;
        case 0x40691cu: goto label_40691c;
        case 0x406920u: goto label_406920;
        case 0x406924u: goto label_406924;
        case 0x406928u: goto label_406928;
        case 0x40692cu: goto label_40692c;
        case 0x406930u: goto label_406930;
        case 0x406934u: goto label_406934;
        case 0x406938u: goto label_406938;
        case 0x40693cu: goto label_40693c;
        case 0x406940u: goto label_406940;
        case 0x406944u: goto label_406944;
        case 0x406948u: goto label_406948;
        case 0x40694cu: goto label_40694c;
        case 0x406950u: goto label_406950;
        case 0x406954u: goto label_406954;
        case 0x406958u: goto label_406958;
        case 0x40695cu: goto label_40695c;
        case 0x406960u: goto label_406960;
        case 0x406964u: goto label_406964;
        case 0x406968u: goto label_406968;
        case 0x40696cu: goto label_40696c;
        case 0x406970u: goto label_406970;
        case 0x406974u: goto label_406974;
        case 0x406978u: goto label_406978;
        case 0x40697cu: goto label_40697c;
        case 0x406980u: goto label_406980;
        case 0x406984u: goto label_406984;
        case 0x406988u: goto label_406988;
        case 0x40698cu: goto label_40698c;
        case 0x406990u: goto label_406990;
        case 0x406994u: goto label_406994;
        case 0x406998u: goto label_406998;
        case 0x40699cu: goto label_40699c;
        case 0x4069a0u: goto label_4069a0;
        case 0x4069a4u: goto label_4069a4;
        case 0x4069a8u: goto label_4069a8;
        case 0x4069acu: goto label_4069ac;
        case 0x4069b0u: goto label_4069b0;
        case 0x4069b4u: goto label_4069b4;
        case 0x4069b8u: goto label_4069b8;
        case 0x4069bcu: goto label_4069bc;
        case 0x4069c0u: goto label_4069c0;
        case 0x4069c4u: goto label_4069c4;
        case 0x4069c8u: goto label_4069c8;
        case 0x4069ccu: goto label_4069cc;
        case 0x4069d0u: goto label_4069d0;
        case 0x4069d4u: goto label_4069d4;
        case 0x4069d8u: goto label_4069d8;
        case 0x4069dcu: goto label_4069dc;
        case 0x4069e0u: goto label_4069e0;
        case 0x4069e4u: goto label_4069e4;
        case 0x4069e8u: goto label_4069e8;
        case 0x4069ecu: goto label_4069ec;
        case 0x4069f0u: goto label_4069f0;
        case 0x4069f4u: goto label_4069f4;
        case 0x4069f8u: goto label_4069f8;
        case 0x4069fcu: goto label_4069fc;
        case 0x406a00u: goto label_406a00;
        case 0x406a04u: goto label_406a04;
        default: break;
    }

    ctx->pc = 0x406838u;

label_406838:
    // 0x406838: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x406838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_40683c:
    // 0x40683c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x40683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_406840:
    // 0x406840: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x406840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_406844:
    // 0x406844: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x406844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_406848:
    // 0x406848: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x406848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_40684c:
    // 0x40684c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40684cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_406850:
    // 0x406850: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x406850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_406854:
    // 0x406854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x406854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406858:
    // 0x406858: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x406858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_40685c:
    // 0x40685c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406860:
    // 0x406860: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x406860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_406864:
    // 0x406864: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x406864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_406868:
    // 0x406868: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x406868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40686c:
    // 0x40686c: 0xc0ea12a  jal         func_3A84A8
label_406870:
    if (ctx->pc == 0x406870u) {
        ctx->pc = 0x406870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40686Cu;
        // 0x406870: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x406874u;
        goto label_406874;
    }
    ctx->pc = 0x40686Cu;
    SET_GPR_U32(ctx, 31, 0x406874u);
    ctx->pc = 0x406870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40686Cu;
    // 0x406870: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x40686Cu, 0x406874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406874u;
label_406874:
    // 0x406874: 0xc0ea14c  jal         func_3A8530
label_406878:
    if (ctx->pc == 0x406878u) {
        ctx->pc = 0x406878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406874u;
        // 0x406878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40687Cu;
        goto label_40687c;
    }
    ctx->pc = 0x406874u;
    SET_GPR_U32(ctx, 31, 0x40687Cu);
    ctx->pc = 0x406878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406874u;
    // 0x406878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x406874u, 0x40687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40687Cu;
label_40687c:
    // 0x40687c: 0xc08a61a  jal         func_229868
label_406880:
    if (ctx->pc == 0x406880u) {
        ctx->pc = 0x406880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40687Cu;
        // 0x406880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406884u;
        goto label_406884;
    }
    ctx->pc = 0x40687Cu;
    SET_GPR_U32(ctx, 31, 0x406884u);
    ctx->pc = 0x406880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40687Cu;
    // 0x406880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x40687Cu, 0x406884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406884u;
label_406884:
    // 0x406884: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x406884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_406888:
    // 0x406888: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x406888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40688c:
    // 0x40688c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_406890:
    // 0x406890: 0x40f809  jalr        $v0
label_406894:
    if (ctx->pc == 0x406894u) {
        ctx->pc = 0x406894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406890u;
        // 0x406894: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406898u;
        goto label_406898;
    }
    ctx->pc = 0x406890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x406898u);
        ctx->pc = 0x406894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406890u;
        // 0x406894: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406890u, 0x406898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406898u;
label_406898:
    // 0x406898: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x406898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_40689c:
    // 0x40689c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_4068a0:
    if (ctx->pc == 0x4068A0u) {
        ctx->pc = 0x4068A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40689Cu;
        // 0x4068a0: 0x26b00014  addiu       $s0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4068A4u;
        goto label_4068a4;
    }
    ctx->pc = 0x40689Cu;
    {
        const bool branch_taken_0x40689c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4068A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40689Cu;
        // 0x4068a0: 0x26b00014  addiu       $s0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40689c) {
            ctx->pc = 0x40698Cu;
            goto label_40698c;
        }
    }
    ctx->pc = 0x4068A4u;
label_4068a4:
    // 0x4068a4: 0xc0e8630  jal         func_3A18C0
label_4068a8:
    if (ctx->pc == 0x4068A8u) {
        ctx->pc = 0x4068A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068A4u;
        // 0x4068a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4068ACu;
        goto label_4068ac;
    }
    ctx->pc = 0x4068A4u;
    SET_GPR_U32(ctx, 31, 0x4068ACu);
    ctx->pc = 0x4068A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4068A4u;
    // 0x4068a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x4068A4u, 0x4068ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4068ACu;
label_4068ac:
    // 0x4068ac: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_4068b0:
    if (ctx->pc == 0x4068B0u) {
        ctx->pc = 0x4068B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068ACu;
        // 0x4068b0: 0x26b00014  addiu       $s0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4068B4u;
        goto label_4068b4;
    }
    ctx->pc = 0x4068ACu;
    {
        const bool branch_taken_0x4068ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4068B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068ACu;
        // 0x4068b0: 0x26b00014  addiu       $s0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4068ac) {
            ctx->pc = 0x40698Cu;
            goto label_40698c;
        }
    }
    ctx->pc = 0x4068B4u;
label_4068b4:
    // 0x4068b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x4068b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4068b8:
    // 0x4068b8: 0xc0e8630  jal         func_3A18C0
label_4068bc:
    if (ctx->pc == 0x4068BCu) {
        ctx->pc = 0x4068BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068B8u;
        // 0x4068bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4068C0u;
        goto label_4068c0;
    }
    ctx->pc = 0x4068B8u;
    SET_GPR_U32(ctx, 31, 0x4068C0u);
    ctx->pc = 0x4068BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4068B8u;
    // 0x4068bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x4068B8u, 0x4068C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4068C0u;
label_4068c0:
    // 0x4068c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4068c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4068c4:
    // 0x4068c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4068c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4068c8:
    // 0x4068c8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x4068c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_4068cc:
    // 0x4068cc: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x4068ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_4068d0:
    // 0x4068d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4068d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4068d4:
    // 0x4068d4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4068d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4068d8:
    // 0x4068d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4068d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4068dc:
    // 0x4068dc: 0xc0e8616  jal         func_3A1858
label_4068e0:
    if (ctx->pc == 0x4068E0u) {
        ctx->pc = 0x4068E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068DCu;
        // 0x4068e0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4068E4u;
        goto label_4068e4;
    }
    ctx->pc = 0x4068DCu;
    SET_GPR_U32(ctx, 31, 0x4068E4u);
    ctx->pc = 0x4068E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4068DCu;
    // 0x4068e0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x4068DCu, 0x4068E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4068E4u;
label_4068e4:
    // 0x4068e4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x4068e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4068e8:
    // 0x4068e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4068e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4068ec:
    // 0x4068ec: 0xc0e911e  jal         func_3A4478
label_4068f0:
    if (ctx->pc == 0x4068F0u) {
        ctx->pc = 0x4068F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068ECu;
        // 0x4068f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4068F4u;
        goto label_4068f4;
    }
    ctx->pc = 0x4068ECu;
    SET_GPR_U32(ctx, 31, 0x4068F4u);
    ctx->pc = 0x4068F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4068ECu;
    // 0x4068f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x4068ECu, 0x4068F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4068F4u;
label_4068f4:
    // 0x4068f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4068f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4068f8:
    // 0x4068f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4068f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4068fc:
    // 0x4068fc: 0xc136b30  jal         func_4DACC0
label_406900:
    if (ctx->pc == 0x406900u) {
        ctx->pc = 0x406900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068FCu;
        // 0x406900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406904u;
        goto label_406904;
    }
    ctx->pc = 0x4068FCu;
    SET_GPR_U32(ctx, 31, 0x406904u);
    ctx->pc = 0x406900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4068FCu;
    // 0x406900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x4068FCu, 0x406904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406904u;
label_406904:
    // 0x406904: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x406904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_406908:
    // 0x406908: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x406908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40690c:
    // 0x40690c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_406910:
    // 0x406910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x406910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_406914:
    // 0x406914: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x406914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_406918:
    // 0x406918: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x406918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_40691c:
    // 0x40691c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x40691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_406920:
    // 0x406920: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x406920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_406924:
    // 0x406924: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x406924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_406928:
    // 0x406928: 0x60f809  jalr        $v1
label_40692c:
    if (ctx->pc == 0x40692Cu) {
        ctx->pc = 0x40692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406928u;
        // 0x40692c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406930u;
        goto label_406930;
    }
    ctx->pc = 0x406928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x406930u);
        ctx->pc = 0x40692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406928u;
        // 0x40692c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406928u, 0x406930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406930u;
label_406930:
    // 0x406930: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x406930u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_406934:
    // 0x406934: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x406934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_406938:
    // 0x406938: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x406938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_40693c:
    // 0x40693c: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x40693cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
label_406940:
    // 0x406940: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406944:
    // 0x406944: 0x86320078  lh          $s2, 0x78($s1)
    ctx->pc = 0x406944u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_406948:
    // 0x406948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40694c:
    // 0x40694c: 0x3c01c090  lui         $at, 0xC090
    ctx->pc = 0x40694cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49296 << 16));
label_406950:
    // 0x406950: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x406950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_406954:
    // 0x406954: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x406954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_406958:
    // 0x406958: 0xc0cd518  jal         func_335460
label_40695c:
    if (ctx->pc == 0x40695Cu) {
        ctx->pc = 0x40695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406958u;
        // 0x40695c: 0x2929021  addu        $s2, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406960u;
        goto label_406960;
    }
    ctx->pc = 0x406958u;
    SET_GPR_U32(ctx, 31, 0x406960u);
    ctx->pc = 0x40695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406958u;
    // 0x40695c: 0x2929021  addu        $s2, $s4, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406958u, 0x406960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406960u;
label_406960:
    // 0x406960: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x406960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_406964:
    // 0x406964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x406964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406968:
    // 0x406968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x406968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40696c:
    // 0x40696c: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x40696cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_406970:
    // 0x406970: 0xc0cd55c  jal         func_335570
label_406974:
    if (ctx->pc == 0x406974u) {
        ctx->pc = 0x406974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406970u;
        // 0x406974: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406978u;
        goto label_406978;
    }
    ctx->pc = 0x406970u;
    SET_GPR_U32(ctx, 31, 0x406978u);
    ctx->pc = 0x406974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406970u;
    // 0x406974: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x406970u, 0x406978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406978u;
label_406978:
    // 0x406978: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x406978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40697c:
    // 0x40697c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406980:
    // 0x406980: 0x40f809  jalr        $v0
label_406984:
    if (ctx->pc == 0x406984u) {
        ctx->pc = 0x406984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406980u;
        // 0x406984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406988u;
        goto label_406988;
    }
    ctx->pc = 0x406980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x406988u);
        ctx->pc = 0x406984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406980u;
        // 0x406984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406980u, 0x406988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406988u;
label_406988:
    // 0x406988: 0x26b00014  addiu       $s0, $s5, 0x14
    ctx->pc = 0x406988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_40698c:
    // 0x40698c: 0xc043d5e  jal         func_10F578
label_406990:
    if (ctx->pc == 0x406990u) {
        ctx->pc = 0x406990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40698Cu;
        // 0x406990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406994u;
        goto label_406994;
    }
    ctx->pc = 0x40698Cu;
    SET_GPR_U32(ctx, 31, 0x406994u);
    ctx->pc = 0x406990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40698Cu;
    // 0x406990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x40698Cu, 0x406994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406994u;
label_406994:
    // 0x406994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_406998:
    if (ctx->pc == 0x406998u) {
        ctx->pc = 0x406998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406994u;
        // 0x406998: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40699Cu;
        goto label_40699c;
    }
    ctx->pc = 0x406994u;
    {
        const bool branch_taken_0x406994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406994u;
        // 0x406998: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406994) {
            ctx->pc = 0x4069B4u;
            goto label_4069b4;
        }
    }
    ctx->pc = 0x40699Cu;
label_40699c:
    // 0x40699c: 0xc043d5e  jal         func_10F578
label_4069a0:
    if (ctx->pc == 0x4069A0u) {
        ctx->pc = 0x4069A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40699Cu;
        // 0x4069a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4069A4u;
        goto label_4069a4;
    }
    ctx->pc = 0x40699Cu;
    SET_GPR_U32(ctx, 31, 0x4069A4u);
    ctx->pc = 0x4069A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40699Cu;
    // 0x4069a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x40699Cu, 0x4069A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4069A4u;
label_4069a4:
    // 0x4069a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4069a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4069a8:
    // 0x4069a8: 0xc046c4a  jal         func_11B128
label_4069ac:
    if (ctx->pc == 0x4069ACu) {
        ctx->pc = 0x4069ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069A8u;
        // 0x4069ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4069B0u;
        goto label_4069b0;
    }
    ctx->pc = 0x4069A8u;
    SET_GPR_U32(ctx, 31, 0x4069B0u);
    ctx->pc = 0x4069ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4069A8u;
    // 0x4069ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B128u, 0x4069A8u, 0x4069B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4069B0u;
label_4069b0:
    // 0x4069b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4069b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4069b4:
    // 0x4069b4: 0x3c05d9ea  lui         $a1, 0xD9EA
    ctx->pc = 0x4069b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55786 << 16));
label_4069b8:
    // 0x4069b8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x4069b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_4069bc:
    // 0x4069bc: 0xc04403a  jal         func_1100E8
label_4069c0:
    if (ctx->pc == 0x4069C0u) {
        ctx->pc = 0x4069C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069BCu;
        // 0x4069c0: 0x34a58763  ori         $a1, $a1, 0x8763 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34659);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4069C4u;
        goto label_4069c4;
    }
    ctx->pc = 0x4069BCu;
    SET_GPR_U32(ctx, 31, 0x4069C4u);
    ctx->pc = 0x4069C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4069BCu;
    // 0x4069c0: 0x34a58763  ori         $a1, $a1, 0x8763 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34659);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100E8u, 0x4069BCu, 0x4069C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4069C4u;
label_4069c4:
    // 0x4069c4: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x4069c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_4069c8:
    // 0x4069c8: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x4069c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_4069cc:
    // 0x4069cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4069ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4069d0:
    // 0x4069d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4069d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4069d4:
    // 0x4069d4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4069d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4069d8:
    // 0x4069d8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4069d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4069dc:
    // 0x4069dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4069dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4069e0:
    // 0x4069e0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4069e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4069e4:
    // 0x4069e4: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x4069e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_4069e8:
    // 0x4069e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4069e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4069ec:
    // 0x4069ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4069ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4069f0:
    // 0x4069f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4069f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4069f4:
    // 0x4069f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4069f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4069f8:
    // 0x4069f8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x4069f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4069fc:
    // 0x4069fc: 0x3e00008  jr          $ra
label_406a00:
    if (ctx->pc == 0x406A00u) {
        ctx->pc = 0x406A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069FCu;
        // 0x406a00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406A04u;
        goto label_406a04;
    }
    ctx->pc = 0x4069FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069FCu;
        // 0x406a00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4069FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406A04u;
label_406a04:
    // 0x406a04: 0x0  nop
    ctx->pc = 0x406a04u;
    // NOP
    ctx->pc = 0x406a08u;
}
