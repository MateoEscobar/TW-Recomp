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

// Function: sub_0011C858
// Address: 0x11c858 - 0x11c9e0
void sub_0011C858_0x11c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C858_0x11c858");
#endif

    switch (ctx->pc) {
        case 0x11c858u: goto label_11c858;
        case 0x11c85cu: goto label_11c85c;
        case 0x11c860u: goto label_11c860;
        case 0x11c864u: goto label_11c864;
        case 0x11c868u: goto label_11c868;
        case 0x11c86cu: goto label_11c86c;
        case 0x11c870u: goto label_11c870;
        case 0x11c874u: goto label_11c874;
        case 0x11c878u: goto label_11c878;
        case 0x11c87cu: goto label_11c87c;
        case 0x11c880u: goto label_11c880;
        case 0x11c884u: goto label_11c884;
        case 0x11c888u: goto label_11c888;
        case 0x11c88cu: goto label_11c88c;
        case 0x11c890u: goto label_11c890;
        case 0x11c894u: goto label_11c894;
        case 0x11c898u: goto label_11c898;
        case 0x11c89cu: goto label_11c89c;
        case 0x11c8a0u: goto label_11c8a0;
        case 0x11c8a4u: goto label_11c8a4;
        case 0x11c8a8u: goto label_11c8a8;
        case 0x11c8acu: goto label_11c8ac;
        case 0x11c8b0u: goto label_11c8b0;
        case 0x11c8b4u: goto label_11c8b4;
        case 0x11c8b8u: goto label_11c8b8;
        case 0x11c8bcu: goto label_11c8bc;
        case 0x11c8c0u: goto label_11c8c0;
        case 0x11c8c4u: goto label_11c8c4;
        case 0x11c8c8u: goto label_11c8c8;
        case 0x11c8ccu: goto label_11c8cc;
        case 0x11c8d0u: goto label_11c8d0;
        case 0x11c8d4u: goto label_11c8d4;
        case 0x11c8d8u: goto label_11c8d8;
        case 0x11c8dcu: goto label_11c8dc;
        case 0x11c8e0u: goto label_11c8e0;
        case 0x11c8e4u: goto label_11c8e4;
        case 0x11c8e8u: goto label_11c8e8;
        case 0x11c8ecu: goto label_11c8ec;
        case 0x11c8f0u: goto label_11c8f0;
        case 0x11c8f4u: goto label_11c8f4;
        case 0x11c8f8u: goto label_11c8f8;
        case 0x11c8fcu: goto label_11c8fc;
        case 0x11c900u: goto label_11c900;
        case 0x11c904u: goto label_11c904;
        case 0x11c908u: goto label_11c908;
        case 0x11c90cu: goto label_11c90c;
        case 0x11c910u: goto label_11c910;
        case 0x11c914u: goto label_11c914;
        case 0x11c918u: goto label_11c918;
        case 0x11c91cu: goto label_11c91c;
        case 0x11c920u: goto label_11c920;
        case 0x11c924u: goto label_11c924;
        case 0x11c928u: goto label_11c928;
        case 0x11c92cu: goto label_11c92c;
        case 0x11c930u: goto label_11c930;
        case 0x11c934u: goto label_11c934;
        case 0x11c938u: goto label_11c938;
        case 0x11c93cu: goto label_11c93c;
        case 0x11c940u: goto label_11c940;
        case 0x11c944u: goto label_11c944;
        case 0x11c948u: goto label_11c948;
        case 0x11c94cu: goto label_11c94c;
        case 0x11c950u: goto label_11c950;
        case 0x11c954u: goto label_11c954;
        case 0x11c958u: goto label_11c958;
        case 0x11c95cu: goto label_11c95c;
        case 0x11c960u: goto label_11c960;
        case 0x11c964u: goto label_11c964;
        case 0x11c968u: goto label_11c968;
        case 0x11c96cu: goto label_11c96c;
        case 0x11c970u: goto label_11c970;
        case 0x11c974u: goto label_11c974;
        case 0x11c978u: goto label_11c978;
        case 0x11c97cu: goto label_11c97c;
        case 0x11c980u: goto label_11c980;
        case 0x11c984u: goto label_11c984;
        case 0x11c988u: goto label_11c988;
        case 0x11c98cu: goto label_11c98c;
        case 0x11c990u: goto label_11c990;
        case 0x11c994u: goto label_11c994;
        case 0x11c998u: goto label_11c998;
        case 0x11c99cu: goto label_11c99c;
        case 0x11c9a0u: goto label_11c9a0;
        case 0x11c9a4u: goto label_11c9a4;
        case 0x11c9a8u: goto label_11c9a8;
        case 0x11c9acu: goto label_11c9ac;
        case 0x11c9b0u: goto label_11c9b0;
        case 0x11c9b4u: goto label_11c9b4;
        case 0x11c9b8u: goto label_11c9b8;
        case 0x11c9bcu: goto label_11c9bc;
        case 0x11c9c0u: goto label_11c9c0;
        case 0x11c9c4u: goto label_11c9c4;
        case 0x11c9c8u: goto label_11c9c8;
        case 0x11c9ccu: goto label_11c9cc;
        case 0x11c9d0u: goto label_11c9d0;
        case 0x11c9d4u: goto label_11c9d4;
        case 0x11c9d8u: goto label_11c9d8;
        case 0x11c9dcu: goto label_11c9dc;
        default: break;
    }

    ctx->pc = 0x11c858u;

label_11c858:
    // 0x11c858: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11c85c:
    // 0x11c85c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11c860:
    // 0x11c860: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11c864:
    // 0x11c864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11c868:
    // 0x11c868: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x11c868u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_11c86c:
    // 0x11c86c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11c86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11c870:
    // 0x11c870: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x11c870u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11c874:
    // 0x11c874: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x11c874u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
label_11c878:
    // 0x11c878: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x11c878u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11c87c:
    // 0x11c87c: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x11c87cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
label_11c880:
    // 0x11c880: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x11c880u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11c884:
    // 0x11c884: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x11c884u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
label_11c888:
    // 0x11c888: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11c888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_11c88c:
    // 0x11c88c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x11c88cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_11c890:
    // 0x11c890: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11c890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_11c894:
    // 0x11c894: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11c894u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_11c898:
    // 0x11c898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11c89c:
    // 0x11c89c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11c89cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_11c8a0:
    // 0x11c8a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11c8a4:
    // 0x11c8a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11c8a8:
    // 0x11c8a8: 0xc0e4060  jal         func_390180
label_11c8ac:
    if (ctx->pc == 0x11C8ACu) {
        ctx->pc = 0x11C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8A8u;
        // 0x11c8ac: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C8B0u;
        goto label_11c8b0;
    }
    ctx->pc = 0x11C8A8u;
    SET_GPR_U32(ctx, 31, 0x11C8B0u);
    ctx->pc = 0x11C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8A8u;
    // 0x11c8ac: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11C8A8u, 0x11C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8B0u;
label_11c8b0:
    // 0x11c8b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_11c8b4:
    if (ctx->pc == 0x11C8B4u) {
        ctx->pc = 0x11C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8B0u;
        // 0x11c8b4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C8B8u;
        goto label_11c8b8;
    }
    ctx->pc = 0x11C8B0u;
    {
        const bool branch_taken_0x11c8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8B0u;
        // 0x11c8b4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8b0) {
            ctx->pc = 0x11C8D0u;
            goto label_11c8d0;
        }
    }
    ctx->pc = 0x11C8B8u;
label_11c8b8:
    // 0x11c8b8: 0xc048062  jal         func_120188
label_11c8bc:
    if (ctx->pc == 0x11C8BCu) {
        ctx->pc = 0x11C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8B8u;
        // 0x11c8bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C8C0u;
        goto label_11c8c0;
    }
    ctx->pc = 0x11C8B8u;
    SET_GPR_U32(ctx, 31, 0x11C8C0u);
    ctx->pc = 0x11C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8B8u;
    // 0x11c8bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120188u, 0x11C8B8u, 0x11C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8C0u;
label_11c8c0:
    // 0x11c8c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c8c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c8c4:
    // 0x11c8c4: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_11c8c8:
    if (ctx->pc == 0x11C8C8u) {
        ctx->pc = 0x11C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8C4u;
        // 0x11c8c8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C8CCu;
        goto label_11c8cc;
    }
    ctx->pc = 0x11C8C4u;
    {
        const bool branch_taken_0x11c8c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c8c4) {
            ctx->pc = 0x11C8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C8C4u;
            // 0x11c8c8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C8D8u;
            goto label_11c8d8;
        }
    }
    ctx->pc = 0x11C8CCu;
label_11c8cc:
    // 0x11c8cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11c8d0:
    // 0x11c8d0: 0x10000036  b           . + 4 + (0x36 << 2)
label_11c8d4:
    if (ctx->pc == 0x11C8D4u) {
        ctx->pc = 0x11C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8D0u;
        // 0x11c8d4: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C8D8u;
        goto label_11c8d8;
    }
    ctx->pc = 0x11C8D0u;
    {
        const bool branch_taken_0x11c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8D0u;
        // 0x11c8d4: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8d0) {
            ctx->pc = 0x11C9ACu;
            goto label_11c9ac;
        }
    }
    ctx->pc = 0x11C8D8u;
label_11c8d8:
    // 0x11c8d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c8dc:
    // 0x11c8dc: 0x84440188  lh          $a0, 0x188($v0)
    ctx->pc = 0x11c8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 392)));
label_11c8e0:
    // 0x11c8e0: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_11c8e4:
    // 0x11c8e4: 0x60f809  jalr        $v1
label_11c8e8:
    if (ctx->pc == 0x11C8E8u) {
        ctx->pc = 0x11C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8E4u;
        // 0x11c8e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C8ECu;
        goto label_11c8ec;
    }
    ctx->pc = 0x11C8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C8ECu);
        ctx->pc = 0x11C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8E4u;
        // 0x11c8e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C8E4u, 0x11C8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C8ECu;
label_11c8ec:
    // 0x11c8ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11c8f0:
    // 0x11c8f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c8f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11c8f4:
    // 0x11c8f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c8f8:
    // 0x11c8f8: 0xae4401e0  sw          $a0, 0x1E0($s2)
    ctx->pc = 0x11c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 4));
label_11c8fc:
    // 0x11c8fc: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x11c8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_11c900:
    // 0x11c900: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x11c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_11c904:
    // 0x11c904: 0x60f809  jalr        $v1
label_11c908:
    if (ctx->pc == 0x11C908u) {
        ctx->pc = 0x11C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C904u;
        // 0x11c908: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C90Cu;
        goto label_11c90c;
    }
    ctx->pc = 0x11C904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C90Cu);
        ctx->pc = 0x11C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C904u;
        // 0x11c908: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C904u, 0x11C90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C90Cu;
label_11c90c:
    // 0x11c90c: 0xe65501e4  swc1        $f21, 0x1E4($s2)
    ctx->pc = 0x11c90cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 484), bits); }
label_11c910:
    // 0x11c910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11c914:
    // 0x11c914: 0xe65601e8  swc1        $f22, 0x1E8($s2)
    ctx->pc = 0x11c914u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 488), bits); }
label_11c918:
    // 0x11c918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11c91c:
    // 0x11c91c: 0xe65701ec  swc1        $f23, 0x1EC($s2)
    ctx->pc = 0x11c91cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 492), bits); }
label_11c920:
    // 0x11c920: 0xc050f16  jal         func_143C58
label_11c924:
    if (ctx->pc == 0x11C924u) {
        ctx->pc = 0x11C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C920u;
        // 0x11c924: 0xe65801f0  swc1        $f24, 0x1F0($s2) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C928u;
        goto label_11c928;
    }
    ctx->pc = 0x11C920u;
    SET_GPR_U32(ctx, 31, 0x11C928u);
    ctx->pc = 0x11C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C920u;
    // 0x11c924: 0xe65801f0  swc1        $f24, 0x1F0($s2) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C58u, 0x11C920u, 0x11C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c92c:
    // 0x11c92c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11c92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_11c930:
    // 0x11c930: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11c930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_11c934:
    // 0x11c934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11c938:
    // 0x11c938: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x11c938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_11c93c:
    // 0x11c93c: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x11c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_11c940:
    // 0x11c940: 0x60f809  jalr        $v1
label_11c944:
    if (ctx->pc == 0x11C944u) {
        ctx->pc = 0x11C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C940u;
        // 0x11c944: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C948u;
        goto label_11c948;
    }
    ctx->pc = 0x11C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C948u);
        ctx->pc = 0x11C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C940u;
        // 0x11c944: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C940u, 0x11C948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C948u;
label_11c948:
    // 0x11c948: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c94c:
    // 0x11c94c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11c94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11c950:
    // 0x11c950: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11c954:
    // 0x11c954: 0x844401a8  lh          $a0, 0x1A8($v0)
    ctx->pc = 0x11c954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
label_11c958:
    // 0x11c958: 0x460ccb29  min.s       $f12, $f25, $f12
    ctx->pc = 0x11c958u;
    ctx->f[12] = std::min(ctx->f[25], ctx->f[12]);
label_11c95c:
    // 0x11c95c: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x11c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
label_11c960:
    // 0x11c960: 0x60f809  jalr        $v1
label_11c964:
    if (ctx->pc == 0x11C964u) {
        ctx->pc = 0x11C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C960u;
        // 0x11c964: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C968u;
        goto label_11c968;
    }
    ctx->pc = 0x11C960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C968u);
        ctx->pc = 0x11C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C960u;
        // 0x11c964: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C960u, 0x11C968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C968u;
label_11c968:
    // 0x11c968: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c96c:
    // 0x11c96c: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11c96cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11c970:
    // 0x11c970: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11c970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11c974:
    // 0x11c974: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11c978:
    // 0x11c978: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11c978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11c97c:
    // 0x11c97c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11c97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11c980:
    // 0x11c980: 0x60f809  jalr        $v1
label_11c984:
    if (ctx->pc == 0x11C984u) {
        ctx->pc = 0x11C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C980u;
        // 0x11c984: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C988u;
        goto label_11c988;
    }
    ctx->pc = 0x11C980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C988u);
        ctx->pc = 0x11C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C980u;
        // 0x11c984: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C980u, 0x11C988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C988u;
label_11c988:
    // 0x11c988: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11c98c:
    // 0x11c98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c990:
    // 0x11c990: 0x40f809  jalr        $v0
label_11c994:
    if (ctx->pc == 0x11C994u) {
        ctx->pc = 0x11C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C990u;
        // 0x11c994: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C998u;
        goto label_11c998;
    }
    ctx->pc = 0x11C990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C998u);
        ctx->pc = 0x11C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C990u;
        // 0x11c994: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C990u, 0x11C998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C998u;
label_11c998:
    // 0x11c998: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c99c:
    // 0x11c99c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11c99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11c9a0:
    // 0x11c9a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11c9a4:
    // 0x11c9a4: 0x40f809  jalr        $v0
label_11c9a8:
    if (ctx->pc == 0x11C9A8u) {
        ctx->pc = 0x11C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A4u;
        // 0x11c9a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9ACu;
        goto label_11c9ac;
    }
    ctx->pc = 0x11C9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C9ACu);
        ctx->pc = 0x11C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A4u;
        // 0x11c9a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C9A4u, 0x11C9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C9ACu;
label_11c9ac:
    // 0x11c9ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11c9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11c9b0:
    // 0x11c9b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11c9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11c9b4:
    // 0x11c9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11c9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11c9b8:
    // 0x11c9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11c9bc:
    // 0x11c9bc: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x11c9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_11c9c0:
    // 0x11c9c0: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x11c9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_11c9c4:
    // 0x11c9c4: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x11c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11c9c8:
    // 0x11c9c8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x11c9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11c9cc:
    // 0x11c9cc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11c9d0:
    // 0x11c9d0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11c9d4:
    // 0x11c9d4: 0x3e00008  jr          $ra
label_11c9d8:
    if (ctx->pc == 0x11C9D8u) {
        ctx->pc = 0x11C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9D4u;
        // 0x11c9d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9DCu;
        goto label_11c9dc;
    }
    ctx->pc = 0x11C9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9D4u;
        // 0x11c9d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C9DCu;
label_11c9dc:
    // 0x11c9dc: 0x0  nop
    ctx->pc = 0x11c9dcu;
    // NOP
    ctx->pc = 0x11c9e0u;
}
