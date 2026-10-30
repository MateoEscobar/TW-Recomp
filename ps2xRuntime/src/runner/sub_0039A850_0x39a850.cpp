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

// Function: sub_0039A850
// Address: 0x39a850 - 0x39aa40
void sub_0039A850_0x39a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A850_0x39a850");
#endif

    switch (ctx->pc) {
        case 0x39a850u: goto label_39a850;
        case 0x39a854u: goto label_39a854;
        case 0x39a858u: goto label_39a858;
        case 0x39a85cu: goto label_39a85c;
        case 0x39a860u: goto label_39a860;
        case 0x39a864u: goto label_39a864;
        case 0x39a868u: goto label_39a868;
        case 0x39a86cu: goto label_39a86c;
        case 0x39a870u: goto label_39a870;
        case 0x39a874u: goto label_39a874;
        case 0x39a878u: goto label_39a878;
        case 0x39a87cu: goto label_39a87c;
        case 0x39a880u: goto label_39a880;
        case 0x39a884u: goto label_39a884;
        case 0x39a888u: goto label_39a888;
        case 0x39a88cu: goto label_39a88c;
        case 0x39a890u: goto label_39a890;
        case 0x39a894u: goto label_39a894;
        case 0x39a898u: goto label_39a898;
        case 0x39a89cu: goto label_39a89c;
        case 0x39a8a0u: goto label_39a8a0;
        case 0x39a8a4u: goto label_39a8a4;
        case 0x39a8a8u: goto label_39a8a8;
        case 0x39a8acu: goto label_39a8ac;
        case 0x39a8b0u: goto label_39a8b0;
        case 0x39a8b4u: goto label_39a8b4;
        case 0x39a8b8u: goto label_39a8b8;
        case 0x39a8bcu: goto label_39a8bc;
        case 0x39a8c0u: goto label_39a8c0;
        case 0x39a8c4u: goto label_39a8c4;
        case 0x39a8c8u: goto label_39a8c8;
        case 0x39a8ccu: goto label_39a8cc;
        case 0x39a8d0u: goto label_39a8d0;
        case 0x39a8d4u: goto label_39a8d4;
        case 0x39a8d8u: goto label_39a8d8;
        case 0x39a8dcu: goto label_39a8dc;
        case 0x39a8e0u: goto label_39a8e0;
        case 0x39a8e4u: goto label_39a8e4;
        case 0x39a8e8u: goto label_39a8e8;
        case 0x39a8ecu: goto label_39a8ec;
        case 0x39a8f0u: goto label_39a8f0;
        case 0x39a8f4u: goto label_39a8f4;
        case 0x39a8f8u: goto label_39a8f8;
        case 0x39a8fcu: goto label_39a8fc;
        case 0x39a900u: goto label_39a900;
        case 0x39a904u: goto label_39a904;
        case 0x39a908u: goto label_39a908;
        case 0x39a90cu: goto label_39a90c;
        case 0x39a910u: goto label_39a910;
        case 0x39a914u: goto label_39a914;
        case 0x39a918u: goto label_39a918;
        case 0x39a91cu: goto label_39a91c;
        case 0x39a920u: goto label_39a920;
        case 0x39a924u: goto label_39a924;
        case 0x39a928u: goto label_39a928;
        case 0x39a92cu: goto label_39a92c;
        case 0x39a930u: goto label_39a930;
        case 0x39a934u: goto label_39a934;
        case 0x39a938u: goto label_39a938;
        case 0x39a93cu: goto label_39a93c;
        case 0x39a940u: goto label_39a940;
        case 0x39a944u: goto label_39a944;
        case 0x39a948u: goto label_39a948;
        case 0x39a94cu: goto label_39a94c;
        case 0x39a950u: goto label_39a950;
        case 0x39a954u: goto label_39a954;
        case 0x39a958u: goto label_39a958;
        case 0x39a95cu: goto label_39a95c;
        case 0x39a960u: goto label_39a960;
        case 0x39a964u: goto label_39a964;
        case 0x39a968u: goto label_39a968;
        case 0x39a96cu: goto label_39a96c;
        case 0x39a970u: goto label_39a970;
        case 0x39a974u: goto label_39a974;
        case 0x39a978u: goto label_39a978;
        case 0x39a97cu: goto label_39a97c;
        case 0x39a980u: goto label_39a980;
        case 0x39a984u: goto label_39a984;
        case 0x39a988u: goto label_39a988;
        case 0x39a98cu: goto label_39a98c;
        case 0x39a990u: goto label_39a990;
        case 0x39a994u: goto label_39a994;
        case 0x39a998u: goto label_39a998;
        case 0x39a99cu: goto label_39a99c;
        case 0x39a9a0u: goto label_39a9a0;
        case 0x39a9a4u: goto label_39a9a4;
        case 0x39a9a8u: goto label_39a9a8;
        case 0x39a9acu: goto label_39a9ac;
        case 0x39a9b0u: goto label_39a9b0;
        case 0x39a9b4u: goto label_39a9b4;
        case 0x39a9b8u: goto label_39a9b8;
        case 0x39a9bcu: goto label_39a9bc;
        case 0x39a9c0u: goto label_39a9c0;
        case 0x39a9c4u: goto label_39a9c4;
        case 0x39a9c8u: goto label_39a9c8;
        case 0x39a9ccu: goto label_39a9cc;
        case 0x39a9d0u: goto label_39a9d0;
        case 0x39a9d4u: goto label_39a9d4;
        case 0x39a9d8u: goto label_39a9d8;
        case 0x39a9dcu: goto label_39a9dc;
        case 0x39a9e0u: goto label_39a9e0;
        case 0x39a9e4u: goto label_39a9e4;
        case 0x39a9e8u: goto label_39a9e8;
        case 0x39a9ecu: goto label_39a9ec;
        case 0x39a9f0u: goto label_39a9f0;
        case 0x39a9f4u: goto label_39a9f4;
        case 0x39a9f8u: goto label_39a9f8;
        case 0x39a9fcu: goto label_39a9fc;
        case 0x39aa00u: goto label_39aa00;
        case 0x39aa04u: goto label_39aa04;
        case 0x39aa08u: goto label_39aa08;
        case 0x39aa0cu: goto label_39aa0c;
        case 0x39aa10u: goto label_39aa10;
        case 0x39aa14u: goto label_39aa14;
        case 0x39aa18u: goto label_39aa18;
        case 0x39aa1cu: goto label_39aa1c;
        case 0x39aa20u: goto label_39aa20;
        case 0x39aa24u: goto label_39aa24;
        case 0x39aa28u: goto label_39aa28;
        case 0x39aa2cu: goto label_39aa2c;
        case 0x39aa30u: goto label_39aa30;
        case 0x39aa34u: goto label_39aa34;
        case 0x39aa38u: goto label_39aa38;
        case 0x39aa3cu: goto label_39aa3c;
        default: break;
    }

    ctx->pc = 0x39a850u;

label_39a850:
    // 0x39a850: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x39a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_39a854:
    // 0x39a854: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x39a854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_39a858:
    // 0x39a858: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x39a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_39a85c:
    // 0x39a85c: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x39a85cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_39a860:
    // 0x39a860: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x39a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_39a864:
    // 0x39a864: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x39a864u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a868:
    // 0x39a868: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x39a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_39a86c:
    // 0x39a86c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x39a86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_39a870:
    // 0x39a870: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x39a870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_39a874:
    // 0x39a874: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39a874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a878:
    // 0x39a878: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x39a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_39a87c:
    // 0x39a87c: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x39a87cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39a880:
    // 0x39a880: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x39a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_39a884:
    // 0x39a884: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39a884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a888:
    // 0x39a888: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x39a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_39a88c:
    // 0x39a88c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x39a88cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a890:
    // 0x39a890: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x39a890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_39a894:
    // 0x39a894: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x39a894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_39a898:
    // 0x39a898: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x39a898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_39a89c:
    // 0x39a89c: 0xafa8003c  sw          $t0, 0x3C($sp)
    ctx->pc = 0x39a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 8));
label_39a8a0:
    // 0x39a8a0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x39a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_39a8a4:
    // 0x39a8a4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x39a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_39a8a8:
    // 0x39a8a8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_39a8ac:
    if (ctx->pc == 0x39A8ACu) {
        ctx->pc = 0x39A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8A8u;
        // 0x39a8ac: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8B0u;
        goto label_39a8b0;
    }
    ctx->pc = 0x39A8A8u;
    {
        const bool branch_taken_0x39a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8A8u;
        // 0x39a8ac: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a8a8) {
            ctx->pc = 0x39A9E8u;
            goto label_39a9e8;
        }
    }
    ctx->pc = 0x39A8B0u;
label_39a8b0:
    // 0x39a8b0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x39a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_39a8b4:
    // 0x39a8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39a8b8:
    // 0x39a8b8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x39a8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a8bc:
    // 0x39a8bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x39a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_39a8c0:
    // 0x39a8c0: 0x52220049  beql        $s1, $v0, . + 4 + (0x49 << 2)
label_39a8c4:
    if (ctx->pc == 0x39A8C4u) {
        ctx->pc = 0x39A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8C0u;
        // 0x39a8c4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8C8u;
        goto label_39a8c8;
    }
    ctx->pc = 0x39A8C0u;
    {
        const bool branch_taken_0x39a8c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a8c0) {
            ctx->pc = 0x39A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A8C0u;
            // 0x39a8c4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A9E8u;
            goto label_39a9e8;
        }
    }
    ctx->pc = 0x39A8C8u;
label_39a8c8:
    // 0x39a8c8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x39a8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_39a8cc:
    // 0x39a8cc: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x39a8ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_39a8d0:
    // 0x39a8d0: 0x12f00007  beq         $s7, $s0, . + 4 + (0x7 << 2)
label_39a8d4:
    if (ctx->pc == 0x39A8D4u) {
        ctx->pc = 0x39A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8D0u;
        // 0x39a8d4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8D8u;
        goto label_39a8d8;
    }
    ctx->pc = 0x39A8D0u;
    {
        const bool branch_taken_0x39a8d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 16));
        ctx->pc = 0x39A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8D0u;
        // 0x39a8d4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a8d0) {
            ctx->pc = 0x39A8F0u;
            goto label_39a8f0;
        }
    }
    ctx->pc = 0x39A8D8u;
label_39a8d8:
    // 0x39a8d8: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x39a8d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_39a8dc:
    // 0x39a8dc: 0xc0e44cc  jal         func_391330
label_39a8e0:
    if (ctx->pc == 0x39A8E0u) {
        ctx->pc = 0x39A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8DCu;
        // 0x39a8e0: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8E4u;
        goto label_39a8e4;
    }
    ctx->pc = 0x39A8DCu;
    SET_GPR_U32(ctx, 31, 0x39A8E4u);
    ctx->pc = 0x39A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8DCu;
    // 0x39a8e0: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x39A8DCu, 0x39A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8E4u;
label_39a8e4:
    // 0x39a8e4: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x39a8e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_39a8e8:
    // 0x39a8e8: 0x5477003f  bnel        $v1, $s7, . + 4 + (0x3F << 2)
label_39a8ec:
    if (ctx->pc == 0x39A8ECu) {
        ctx->pc = 0x39A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8E8u;
        // 0x39a8ec: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8F0u;
        goto label_39a8f0;
    }
    ctx->pc = 0x39A8E8u;
    {
        const bool branch_taken_0x39a8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x39a8e8) {
            ctx->pc = 0x39A8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A8E8u;
            // 0x39a8ec: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A9E8u;
            goto label_39a9e8;
        }
    }
    ctx->pc = 0x39A8F0u;
label_39a8f0:
    // 0x39a8f0: 0x52500022  beql        $s2, $s0, . + 4 + (0x22 << 2)
label_39a8f4:
    if (ctx->pc == 0x39A8F4u) {
        ctx->pc = 0x39A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8F0u;
        // 0x39a8f4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8F8u;
        goto label_39a8f8;
    }
    ctx->pc = 0x39A8F0u;
    {
        const bool branch_taken_0x39a8f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x39a8f0) {
            ctx->pc = 0x39A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A8F0u;
            // 0x39a8f4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A97Cu;
            goto label_39a97c;
        }
    }
    ctx->pc = 0x39A8F8u;
label_39a8f8:
    // 0x39a8f8: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x39a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_39a8fc:
    // 0x39a8fc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_39a900:
    if (ctx->pc == 0x39A900u) {
        ctx->pc = 0x39A904u;
        goto label_39a904;
    }
    ctx->pc = 0x39A8FCu;
    {
        const bool branch_taken_0x39a8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a8fc) {
            ctx->pc = 0x39A950u;
            goto label_39a950;
        }
    }
    ctx->pc = 0x39A904u;
label_39a904:
    // 0x39a904: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39a908:
    // 0x39a908: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39a908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39a90c:
    // 0x39a90c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39a910:
    // 0x39a910: 0x40f809  jalr        $v0
label_39a914:
    if (ctx->pc == 0x39A914u) {
        ctx->pc = 0x39A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A910u;
        // 0x39a914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A918u;
        goto label_39a918;
    }
    ctx->pc = 0x39A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A918u);
        ctx->pc = 0x39A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A910u;
        // 0x39a914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A910u, 0x39A918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A918u;
label_39a918:
    // 0x39a918: 0xc0e5d00  jal         func_397400
label_39a91c:
    if (ctx->pc == 0x39A91Cu) {
        ctx->pc = 0x39A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A918u;
        // 0x39a91c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A920u;
        goto label_39a920;
    }
    ctx->pc = 0x39A918u;
    SET_GPR_U32(ctx, 31, 0x39A920u);
    ctx->pc = 0x39A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A918u;
    // 0x39a91c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397400u, 0x39A918u, 0x39A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A920u;
label_39a920:
    // 0x39a920: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39a924:
    // 0x39a924: 0xc0e4060  jal         func_390180
label_39a928:
    if (ctx->pc == 0x39A928u) {
        ctx->pc = 0x39A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A924u;
        // 0x39a928: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A92Cu;
        goto label_39a92c;
    }
    ctx->pc = 0x39A924u;
    SET_GPR_U32(ctx, 31, 0x39A92Cu);
    ctx->pc = 0x39A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A924u;
    // 0x39a928: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39A924u, 0x39A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A92Cu;
label_39a92c:
    // 0x39a92c: 0xc0e57ce  jal         func_395F38
label_39a930:
    if (ctx->pc == 0x39A930u) {
        ctx->pc = 0x39A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A92Cu;
        // 0x39a930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A934u;
        goto label_39a934;
    }
    ctx->pc = 0x39A92Cu;
    SET_GPR_U32(ctx, 31, 0x39A934u);
    ctx->pc = 0x39A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A92Cu;
    // 0x39a930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39A92Cu, 0x39A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A934u;
label_39a934:
    // 0x39a934: 0x52400011  beql        $s2, $zero, . + 4 + (0x11 << 2)
label_39a938:
    if (ctx->pc == 0x39A938u) {
        ctx->pc = 0x39A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A934u;
        // 0x39a938: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A93Cu;
        goto label_39a93c;
    }
    ctx->pc = 0x39A934u;
    {
        const bool branch_taken_0x39a934 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a934) {
            ctx->pc = 0x39A938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A934u;
            // 0x39a938: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A97Cu;
            goto label_39a97c;
        }
    }
    ctx->pc = 0x39A93Cu;
label_39a93c:
    // 0x39a93c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x39a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_39a940:
    // 0x39a940: 0x54520029  bnel        $v0, $s2, . + 4 + (0x29 << 2)
label_39a944:
    if (ctx->pc == 0x39A944u) {
        ctx->pc = 0x39A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A940u;
        // 0x39a944: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A948u;
        goto label_39a948;
    }
    ctx->pc = 0x39A940u;
    {
        const bool branch_taken_0x39a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39a940) {
            ctx->pc = 0x39A944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A940u;
            // 0x39a944: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A9E8u;
            goto label_39a9e8;
        }
    }
    ctx->pc = 0x39A948u;
label_39a948:
    // 0x39a948: 0x1000000c  b           . + 4 + (0xC << 2)
label_39a94c:
    if (ctx->pc == 0x39A94Cu) {
        ctx->pc = 0x39A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A948u;
        // 0x39a94c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A950u;
        goto label_39a950;
    }
    ctx->pc = 0x39A948u;
    {
        const bool branch_taken_0x39a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A948u;
        // 0x39a94c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a948) {
            ctx->pc = 0x39A97Cu;
            goto label_39a97c;
        }
    }
    ctx->pc = 0x39A950u;
label_39a950:
    // 0x39a950: 0x54520025  bnel        $v0, $s2, . + 4 + (0x25 << 2)
label_39a954:
    if (ctx->pc == 0x39A954u) {
        ctx->pc = 0x39A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A950u;
        // 0x39a954: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A958u;
        goto label_39a958;
    }
    ctx->pc = 0x39A950u;
    {
        const bool branch_taken_0x39a950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39a950) {
            ctx->pc = 0x39A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A950u;
            // 0x39a954: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A9E8u;
            goto label_39a9e8;
        }
    }
    ctx->pc = 0x39A958u;
label_39a958:
    // 0x39a958: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39a95c:
    // 0x39a95c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39a95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39a960:
    // 0x39a960: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39a964:
    // 0x39a964: 0x40f809  jalr        $v0
label_39a968:
    if (ctx->pc == 0x39A968u) {
        ctx->pc = 0x39A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A964u;
        // 0x39a968: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A96Cu;
        goto label_39a96c;
    }
    ctx->pc = 0x39A964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A96Cu);
        ctx->pc = 0x39A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A964u;
        // 0x39a968: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A964u, 0x39A96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A96Cu;
label_39a96c:
    // 0x39a96c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x39a96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_39a970:
    // 0x39a970: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_39a974:
    if (ctx->pc == 0x39A974u) {
        ctx->pc = 0x39A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A970u;
        // 0x39a974: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A978u;
        goto label_39a978;
    }
    ctx->pc = 0x39A970u;
    {
        const bool branch_taken_0x39a970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a970) {
            ctx->pc = 0x39A974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A970u;
            // 0x39a974: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A9E8u;
            goto label_39a9e8;
        }
    }
    ctx->pc = 0x39A978u;
label_39a978:
    // 0x39a978: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x39a978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_39a97c:
    // 0x39a97c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x39a97cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_39a980:
    // 0x39a980: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x39a980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_39a984:
    // 0x39a984: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39a984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39a988:
    // 0x39a988: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39a988u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39a98c:
    // 0x39a98c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39a98cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39a990:
    // 0x39a990: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39a990u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39a994:
    // 0x39a994: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x39a994u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_39a998:
    // 0x39a998: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39a998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39a99c:
    // 0x39a99c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x39a99cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39a9a0:
    // 0x39a9a0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39a9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39a9a4:
    // 0x39a9a4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39a9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39a9a8:
    // 0x39a9a8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x39a9a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_39a9ac:
    // 0x39a9ac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39a9b0:
    // 0x39a9b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39a9b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39a9b4:
    // 0x39a9b4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x39a9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_39a9b8:
    // 0x39a9b8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x39a9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a9bc:
    // 0x39a9bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x39a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_39a9c0:
    // 0x39a9c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_39a9c4:
    if (ctx->pc == 0x39A9C4u) {
        ctx->pc = 0x39A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9C0u;
        // 0x39a9c4: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9C8u;
        goto label_39a9c8;
    }
    ctx->pc = 0x39A9C0u;
    {
        const bool branch_taken_0x39a9c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9C0u;
        // 0x39a9c4: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9c0) {
            ctx->pc = 0x39A9E4u;
            goto label_39a9e4;
        }
    }
    ctx->pc = 0x39A9C8u;
label_39a9c8:
    // 0x39a9c8: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x39a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_39a9cc:
    // 0x39a9cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39a9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39a9d0:
    // 0x39a9d0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x39a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_39a9d4:
    // 0x39a9d4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x39a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_39a9d8:
    // 0x39a9d8: 0x264182b  sltu        $v1, $s3, $a0
    ctx->pc = 0x39a9d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39a9dc:
    // 0x39a9dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_39a9e0:
    if (ctx->pc == 0x39A9E0u) {
        ctx->pc = 0x39A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9DCu;
        // 0x39a9e0: 0x3c2a021  addu        $s4, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9E4u;
        goto label_39a9e4;
    }
    ctx->pc = 0x39A9DCu;
    {
        const bool branch_taken_0x39a9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9DCu;
        // 0x39a9e0: 0x3c2a021  addu        $s4, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9dc) {
            ctx->pc = 0x39AA08u;
            goto label_39aa08;
        }
    }
    ctx->pc = 0x39A9E4u;
label_39a9e4:
    // 0x39a9e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x39a9e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_39a9e8:
    // 0x39a9e8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x39a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_39a9ec:
    // 0x39a9ec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x39a9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_39a9f0:
    // 0x39a9f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x39a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39a9f4:
    // 0x39a9f4: 0x40f809  jalr        $v0
label_39a9f8:
    if (ctx->pc == 0x39A9F8u) {
        ctx->pc = 0x39A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9F4u;
        // 0x39a9f8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9FCu;
        goto label_39a9fc;
    }
    ctx->pc = 0x39A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A9FCu);
        ctx->pc = 0x39A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9F4u;
        // 0x39a9f8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A9F4u, 0x39A9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A9FCu;
label_39a9fc:
    // 0x39a9fc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x39a9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39aa00:
    // 0x39aa00: 0x5440ffab  bnel        $v0, $zero, . + 4 + (-0x55 << 2)
label_39aa04:
    if (ctx->pc == 0x39AA04u) {
        ctx->pc = 0x39AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA00u;
        // 0x39aa04: 0x8ec30008  lw          $v1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AA08u;
        goto label_39aa08;
    }
    ctx->pc = 0x39AA00u;
    {
        const bool branch_taken_0x39aa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39aa00) {
            ctx->pc = 0x39AA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AA00u;
            // 0x39aa04: 0x8ec30008  lw          $v1, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a8b0;
        }
    }
    ctx->pc = 0x39AA08u;
label_39aa08:
    // 0x39aa08: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39aa08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39aa0c:
    // 0x39aa0c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x39aa0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39aa10:
    // 0x39aa10: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x39aa10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39aa14:
    // 0x39aa14: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x39aa14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39aa18:
    // 0x39aa18: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x39aa18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39aa1c:
    // 0x39aa1c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x39aa1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39aa20:
    // 0x39aa20: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x39aa20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39aa24:
    // 0x39aa24: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x39aa24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39aa28:
    // 0x39aa28: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x39aa28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39aa2c:
    // 0x39aa2c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x39aa2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39aa30:
    // 0x39aa30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39aa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39aa34:
    // 0x39aa34: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x39aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39aa38:
    // 0x39aa38: 0x3e00008  jr          $ra
label_39aa3c:
    if (ctx->pc == 0x39AA3Cu) {
        ctx->pc = 0x39AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA38u;
        // 0x39aa3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AA40u;
        goto label_fallthrough_0x39aa38;
    }
    ctx->pc = 0x39AA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA38u;
        // 0x39aa3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39aa38:
    ctx->pc = 0x39AA40u;
}
