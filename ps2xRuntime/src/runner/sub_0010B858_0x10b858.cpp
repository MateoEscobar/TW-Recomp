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

// Function: sub_0010B858
// Address: 0x10b858 - 0x10b998
void sub_0010B858_0x10b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B858_0x10b858");
#endif

    switch (ctx->pc) {
        case 0x10b858u: goto label_10b858;
        case 0x10b85cu: goto label_10b85c;
        case 0x10b860u: goto label_10b860;
        case 0x10b864u: goto label_10b864;
        case 0x10b868u: goto label_10b868;
        case 0x10b86cu: goto label_10b86c;
        case 0x10b870u: goto label_10b870;
        case 0x10b874u: goto label_10b874;
        case 0x10b878u: goto label_10b878;
        case 0x10b87cu: goto label_10b87c;
        case 0x10b880u: goto label_10b880;
        case 0x10b884u: goto label_10b884;
        case 0x10b888u: goto label_10b888;
        case 0x10b88cu: goto label_10b88c;
        case 0x10b890u: goto label_10b890;
        case 0x10b894u: goto label_10b894;
        case 0x10b898u: goto label_10b898;
        case 0x10b89cu: goto label_10b89c;
        case 0x10b8a0u: goto label_10b8a0;
        case 0x10b8a4u: goto label_10b8a4;
        case 0x10b8a8u: goto label_10b8a8;
        case 0x10b8acu: goto label_10b8ac;
        case 0x10b8b0u: goto label_10b8b0;
        case 0x10b8b4u: goto label_10b8b4;
        case 0x10b8b8u: goto label_10b8b8;
        case 0x10b8bcu: goto label_10b8bc;
        case 0x10b8c0u: goto label_10b8c0;
        case 0x10b8c4u: goto label_10b8c4;
        case 0x10b8c8u: goto label_10b8c8;
        case 0x10b8ccu: goto label_10b8cc;
        case 0x10b8d0u: goto label_10b8d0;
        case 0x10b8d4u: goto label_10b8d4;
        case 0x10b8d8u: goto label_10b8d8;
        case 0x10b8dcu: goto label_10b8dc;
        case 0x10b8e0u: goto label_10b8e0;
        case 0x10b8e4u: goto label_10b8e4;
        case 0x10b8e8u: goto label_10b8e8;
        case 0x10b8ecu: goto label_10b8ec;
        case 0x10b8f0u: goto label_10b8f0;
        case 0x10b8f4u: goto label_10b8f4;
        case 0x10b8f8u: goto label_10b8f8;
        case 0x10b8fcu: goto label_10b8fc;
        case 0x10b900u: goto label_10b900;
        case 0x10b904u: goto label_10b904;
        case 0x10b908u: goto label_10b908;
        case 0x10b90cu: goto label_10b90c;
        case 0x10b910u: goto label_10b910;
        case 0x10b914u: goto label_10b914;
        case 0x10b918u: goto label_10b918;
        case 0x10b91cu: goto label_10b91c;
        case 0x10b920u: goto label_10b920;
        case 0x10b924u: goto label_10b924;
        case 0x10b928u: goto label_10b928;
        case 0x10b92cu: goto label_10b92c;
        case 0x10b930u: goto label_10b930;
        case 0x10b934u: goto label_10b934;
        case 0x10b938u: goto label_10b938;
        case 0x10b93cu: goto label_10b93c;
        case 0x10b940u: goto label_10b940;
        case 0x10b944u: goto label_10b944;
        case 0x10b948u: goto label_10b948;
        case 0x10b94cu: goto label_10b94c;
        case 0x10b950u: goto label_10b950;
        case 0x10b954u: goto label_10b954;
        case 0x10b958u: goto label_10b958;
        case 0x10b95cu: goto label_10b95c;
        case 0x10b960u: goto label_10b960;
        case 0x10b964u: goto label_10b964;
        case 0x10b968u: goto label_10b968;
        case 0x10b96cu: goto label_10b96c;
        case 0x10b970u: goto label_10b970;
        case 0x10b974u: goto label_10b974;
        case 0x10b978u: goto label_10b978;
        case 0x10b97cu: goto label_10b97c;
        case 0x10b980u: goto label_10b980;
        case 0x10b984u: goto label_10b984;
        case 0x10b988u: goto label_10b988;
        case 0x10b98cu: goto label_10b98c;
        case 0x10b990u: goto label_10b990;
        case 0x10b994u: goto label_10b994;
        default: break;
    }

    ctx->pc = 0x10b858u;

label_10b858:
    // 0x10b858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10b85c:
    // 0x10b85c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10b860:
    // 0x10b860: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_10b864:
    // 0x10b864: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10b864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b868:
    // 0x10b868: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x10b868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_10b86c:
    // 0x10b86c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10b86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_10b870:
    // 0x10b870: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10b870u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_10b874:
    // 0x10b874: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10b874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_10b878:
    // 0x10b878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10b87c:
    // 0x10b87c: 0xc05d614  jal         func_175850
label_10b880:
    if (ctx->pc == 0x10B880u) {
        ctx->pc = 0x10B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B87Cu;
        // 0x10b880: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B884u;
        goto label_10b884;
    }
    ctx->pc = 0x10B87Cu;
    SET_GPR_U32(ctx, 31, 0x10B884u);
    ctx->pc = 0x10B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B87Cu;
    // 0x10b880: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175850u, 0x10B87Cu, 0x10B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B884u;
label_10b884:
    // 0x10b884: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10b888:
    // 0x10b888: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x10b888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_10b88c:
    // 0x10b88c: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x10b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_10b890:
    // 0x10b890: 0xa0f809  jalr        $a1
label_10b894:
    if (ctx->pc == 0x10B894u) {
        ctx->pc = 0x10B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B890u;
        // 0x10b894: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B898u;
        goto label_10b898;
    }
    ctx->pc = 0x10B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x10B898u);
        ctx->pc = 0x10B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B890u;
        // 0x10b894: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B890u, 0x10B898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B898u;
label_10b898:
    // 0x10b898: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b89c:
    // 0x10b89c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x10b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10b8a0:
    // 0x10b8a0: 0xc05d622  jal         func_175888
label_10b8a4:
    if (ctx->pc == 0x10B8A4u) {
        ctx->pc = 0x10B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8A0u;
        // 0x10b8a4: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8A8u;
        goto label_10b8a8;
    }
    ctx->pc = 0x10B8A0u;
    SET_GPR_U32(ctx, 31, 0x10B8A8u);
    ctx->pc = 0x10B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8A0u;
    // 0x10b8a4: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175888u, 0x10B8A0u, 0x10B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8A8u;
label_10b8a8:
    // 0x10b8a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10b8ac:
    // 0x10b8ac: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x10b8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_10b8b0:
    // 0x10b8b0: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_10b8b4:
    // 0x10b8b4: 0xa0f809  jalr        $a1
label_10b8b8:
    if (ctx->pc == 0x10B8B8u) {
        ctx->pc = 0x10B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8B4u;
        // 0x10b8b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8BCu;
        goto label_10b8bc;
    }
    ctx->pc = 0x10B8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x10B8BCu);
        ctx->pc = 0x10B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8B4u;
        // 0x10b8b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8B4u, 0x10B8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B8BCu;
label_10b8bc:
    // 0x10b8bc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x10b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10b8c0:
    // 0x10b8c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b8c4:
    // 0x10b8c4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x10b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b8c8:
    // 0x10b8c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10b8cc:
    // 0x10b8cc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10b8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_10b8d0:
    // 0x10b8d0: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x10b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_10b8d4:
    // 0x10b8d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10b8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10b8d8:
    // 0x10b8d8: 0x0  nop
    ctx->pc = 0x10b8d8u;
    // NOP
label_10b8dc:
    // 0x10b8dc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_10b8e0:
    if (ctx->pc == 0x10B8E0u) {
        ctx->pc = 0x10B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8DCu;
        // 0x10b8e0: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8E4u;
        goto label_10b8e4;
    }
    ctx->pc = 0x10B8DCu;
    {
        const bool branch_taken_0x10b8dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8DCu;
        // 0x10b8e0: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8dc) {
            ctx->pc = 0x10B8F8u;
            goto label_10b8f8;
        }
    }
    ctx->pc = 0x10B8E4u;
label_10b8e4:
    // 0x10b8e4: 0xc05d610  jal         func_175840
label_10b8e8:
    if (ctx->pc == 0x10B8E8u) {
        ctx->pc = 0x10B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E4u;
        // 0x10b8e8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8ECu;
        goto label_10b8ec;
    }
    ctx->pc = 0x10B8E4u;
    SET_GPR_U32(ctx, 31, 0x10B8ECu);
    ctx->pc = 0x10B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8E4u;
    // 0x10b8e8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x10B8E4u, 0x10B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8ECu;
label_10b8ec:
    // 0x10b8ec: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x10b8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_10b8f0:
    // 0x10b8f0: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_10b8f4:
    if (ctx->pc == 0x10B8F4u) {
        ctx->pc = 0x10B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F0u;
        // 0x10b8f4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8F8u;
        goto label_10b8f8;
    }
    ctx->pc = 0x10B8F0u;
    {
        const bool branch_taken_0x10b8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b8f0) {
            ctx->pc = 0x10B8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B8F0u;
            // 0x10b8f4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B970u;
            goto label_10b970;
        }
    }
    ctx->pc = 0x10B8F8u;
label_10b8f8:
    // 0x10b8f8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_10b8fc:
    if (ctx->pc == 0x10B8FCu) {
        ctx->pc = 0x10B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F8u;
        // 0x10b8fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B900u;
        goto label_10b900;
    }
    ctx->pc = 0x10B8F8u;
    {
        const bool branch_taken_0x10b8f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F8u;
        // 0x10b8fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8f8) {
            ctx->pc = 0x10B928u;
            goto label_10b928;
        }
    }
    ctx->pc = 0x10B900u;
label_10b900:
    // 0x10b900: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x10b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10b904:
    // 0x10b904: 0x0  nop
    ctx->pc = 0x10b904u;
    // NOP
label_10b908:
    // 0x10b908: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x10b908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_10b90c:
    // 0x10b90c: 0xc05d622  jal         func_175888
label_10b910:
    if (ctx->pc == 0x10B910u) {
        ctx->pc = 0x10B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B90Cu;
        // 0x10b910: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B914u;
        goto label_10b914;
    }
    ctx->pc = 0x10B90Cu;
    SET_GPR_U32(ctx, 31, 0x10B914u);
    ctx->pc = 0x10B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B90Cu;
    // 0x10b910: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175888u, 0x10B90Cu, 0x10B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B914u;
label_10b914:
    // 0x10b914: 0xc041590  jal         func_105640
label_10b918:
    if (ctx->pc == 0x10B918u) {
        ctx->pc = 0x10B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B914u;
        // 0x10b918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B91Cu;
        goto label_10b91c;
    }
    ctx->pc = 0x10B914u;
    SET_GPR_U32(ctx, 31, 0x10B91Cu);
    ctx->pc = 0x10B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B914u;
    // 0x10b918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x10B914u, 0x10B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B91Cu;
label_10b91c:
    // 0x10b91c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x10b91cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_10b920:
    // 0x10b920: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_10b924:
    if (ctx->pc == 0x10B924u) {
        ctx->pc = 0x10B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B920u;
        // 0x10b924: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B928u;
        goto label_10b928;
    }
    ctx->pc = 0x10B920u;
    {
        const bool branch_taken_0x10b920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b920) {
            ctx->pc = 0x10B924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B920u;
            // 0x10b924: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b908;
        }
    }
    ctx->pc = 0x10B928u;
label_10b928:
    // 0x10b928: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_10b92c:
    if (ctx->pc == 0x10B92Cu) {
        ctx->pc = 0x10B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B928u;
        // 0x10b92c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B930u;
        goto label_10b930;
    }
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B928u;
        // 0x10b92c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B960u;
            goto label_10b960;
        }
    }
    ctx->pc = 0x10B930u;
label_10b930:
    // 0x10b930: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10b934:
    // 0x10b934: 0x0  nop
    ctx->pc = 0x10b934u;
    // NOP
label_10b938:
    // 0x10b938: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10b938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10b93c:
    // 0x10b93c: 0xc05d610  jal         func_175840
label_10b940:
    if (ctx->pc == 0x10B940u) {
        ctx->pc = 0x10B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B93Cu;
        // 0x10b940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B944u;
        goto label_10b944;
    }
    ctx->pc = 0x10B93Cu;
    SET_GPR_U32(ctx, 31, 0x10B944u);
    ctx->pc = 0x10B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B93Cu;
    // 0x10b940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x10B93Cu, 0x10B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B944u;
label_10b944:
    // 0x10b944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10b948:
    // 0x10b948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b94c:
    // 0x10b94c: 0xc05d612  jal         func_175848
label_10b950:
    if (ctx->pc == 0x10B950u) {
        ctx->pc = 0x10B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B94Cu;
        // 0x10b950: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B954u;
        goto label_10b954;
    }
    ctx->pc = 0x10B94Cu;
    SET_GPR_U32(ctx, 31, 0x10B954u);
    ctx->pc = 0x10B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B94Cu;
    // 0x10b950: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175848u, 0x10B94Cu, 0x10B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B954u;
label_10b954:
    // 0x10b954: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x10b954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_10b958:
    // 0x10b958: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_10b95c:
    if (ctx->pc == 0x10B95Cu) {
        ctx->pc = 0x10B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B958u;
        // 0x10b95c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B960u;
        goto label_10b960;
    }
    ctx->pc = 0x10B958u;
    {
        const bool branch_taken_0x10b958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b958) {
            ctx->pc = 0x10B95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B958u;
            // 0x10b95c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b938;
        }
    }
    ctx->pc = 0x10B960u;
label_10b960:
    // 0x10b960: 0xc041590  jal         func_105640
label_10b964:
    if (ctx->pc == 0x10B964u) {
        ctx->pc = 0x10B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B960u;
        // 0x10b964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B968u;
        goto label_10b968;
    }
    ctx->pc = 0x10B960u;
    SET_GPR_U32(ctx, 31, 0x10B968u);
    ctx->pc = 0x10B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B960u;
    // 0x10b964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x10B960u, 0x10B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B968u;
label_10b968:
    // 0x10b968: 0x10000004  b           . + 4 + (0x4 << 2)
label_10b96c:
    if (ctx->pc == 0x10B96Cu) {
        ctx->pc = 0x10B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B968u;
        // 0x10b96c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B970u;
        goto label_10b970;
    }
    ctx->pc = 0x10B968u;
    {
        const bool branch_taken_0x10b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B968u;
        // 0x10b96c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b968) {
            ctx->pc = 0x10B97Cu;
            goto label_10b97c;
        }
    }
    ctx->pc = 0x10B970u;
label_10b970:
    // 0x10b970: 0xc05d64a  jal         func_175928
label_10b974:
    if (ctx->pc == 0x10B974u) {
        ctx->pc = 0x10B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B970u;
        // 0x10b974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B978u;
        goto label_10b978;
    }
    ctx->pc = 0x10B970u;
    SET_GPR_U32(ctx, 31, 0x10B978u);
    ctx->pc = 0x10B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B970u;
    // 0x10b974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175928u, 0x10B970u, 0x10B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B978u;
label_10b978:
    // 0x10b978: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10b978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10b97c:
    // 0x10b97c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10b97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10b980:
    // 0x10b980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10b984:
    // 0x10b984: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10b984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b988:
    // 0x10b988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10b98c:
    // 0x10b98c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10b990:
    // 0x10b990: 0x3e00008  jr          $ra
label_10b994:
    if (ctx->pc == 0x10B994u) {
        ctx->pc = 0x10B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B990u;
        // 0x10b994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B998u;
        goto label_fallthrough_0x10b990;
    }
    ctx->pc = 0x10B990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B990u;
        // 0x10b994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10b990:
    ctx->pc = 0x10B998u;
}
