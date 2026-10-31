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

// Function: sub_003EA7B0
// Address: 0x3ea7b0 - 0x3ea9c0
void sub_003EA7B0_0x3ea7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA7B0_0x3ea7b0");
#endif

    switch (ctx->pc) {
        case 0x3ea7b0u: goto label_3ea7b0;
        case 0x3ea7b4u: goto label_3ea7b4;
        case 0x3ea7b8u: goto label_3ea7b8;
        case 0x3ea7bcu: goto label_3ea7bc;
        case 0x3ea7c0u: goto label_3ea7c0;
        case 0x3ea7c4u: goto label_3ea7c4;
        case 0x3ea7c8u: goto label_3ea7c8;
        case 0x3ea7ccu: goto label_3ea7cc;
        case 0x3ea7d0u: goto label_3ea7d0;
        case 0x3ea7d4u: goto label_3ea7d4;
        case 0x3ea7d8u: goto label_3ea7d8;
        case 0x3ea7dcu: goto label_3ea7dc;
        case 0x3ea7e0u: goto label_3ea7e0;
        case 0x3ea7e4u: goto label_3ea7e4;
        case 0x3ea7e8u: goto label_3ea7e8;
        case 0x3ea7ecu: goto label_3ea7ec;
        case 0x3ea7f0u: goto label_3ea7f0;
        case 0x3ea7f4u: goto label_3ea7f4;
        case 0x3ea7f8u: goto label_3ea7f8;
        case 0x3ea7fcu: goto label_3ea7fc;
        case 0x3ea800u: goto label_3ea800;
        case 0x3ea804u: goto label_3ea804;
        case 0x3ea808u: goto label_3ea808;
        case 0x3ea80cu: goto label_3ea80c;
        case 0x3ea810u: goto label_3ea810;
        case 0x3ea814u: goto label_3ea814;
        case 0x3ea818u: goto label_3ea818;
        case 0x3ea81cu: goto label_3ea81c;
        case 0x3ea820u: goto label_3ea820;
        case 0x3ea824u: goto label_3ea824;
        case 0x3ea828u: goto label_3ea828;
        case 0x3ea82cu: goto label_3ea82c;
        case 0x3ea830u: goto label_3ea830;
        case 0x3ea834u: goto label_3ea834;
        case 0x3ea838u: goto label_3ea838;
        case 0x3ea83cu: goto label_3ea83c;
        case 0x3ea840u: goto label_3ea840;
        case 0x3ea844u: goto label_3ea844;
        case 0x3ea848u: goto label_3ea848;
        case 0x3ea84cu: goto label_3ea84c;
        case 0x3ea850u: goto label_3ea850;
        case 0x3ea854u: goto label_3ea854;
        case 0x3ea858u: goto label_3ea858;
        case 0x3ea85cu: goto label_3ea85c;
        case 0x3ea860u: goto label_3ea860;
        case 0x3ea864u: goto label_3ea864;
        case 0x3ea868u: goto label_3ea868;
        case 0x3ea86cu: goto label_3ea86c;
        case 0x3ea870u: goto label_3ea870;
        case 0x3ea874u: goto label_3ea874;
        case 0x3ea878u: goto label_3ea878;
        case 0x3ea87cu: goto label_3ea87c;
        case 0x3ea880u: goto label_3ea880;
        case 0x3ea884u: goto label_3ea884;
        case 0x3ea888u: goto label_3ea888;
        case 0x3ea88cu: goto label_3ea88c;
        case 0x3ea890u: goto label_3ea890;
        case 0x3ea894u: goto label_3ea894;
        case 0x3ea898u: goto label_3ea898;
        case 0x3ea89cu: goto label_3ea89c;
        case 0x3ea8a0u: goto label_3ea8a0;
        case 0x3ea8a4u: goto label_3ea8a4;
        case 0x3ea8a8u: goto label_3ea8a8;
        case 0x3ea8acu: goto label_3ea8ac;
        case 0x3ea8b0u: goto label_3ea8b0;
        case 0x3ea8b4u: goto label_3ea8b4;
        case 0x3ea8b8u: goto label_3ea8b8;
        case 0x3ea8bcu: goto label_3ea8bc;
        case 0x3ea8c0u: goto label_3ea8c0;
        case 0x3ea8c4u: goto label_3ea8c4;
        case 0x3ea8c8u: goto label_3ea8c8;
        case 0x3ea8ccu: goto label_3ea8cc;
        case 0x3ea8d0u: goto label_3ea8d0;
        case 0x3ea8d4u: goto label_3ea8d4;
        case 0x3ea8d8u: goto label_3ea8d8;
        case 0x3ea8dcu: goto label_3ea8dc;
        case 0x3ea8e0u: goto label_3ea8e0;
        case 0x3ea8e4u: goto label_3ea8e4;
        case 0x3ea8e8u: goto label_3ea8e8;
        case 0x3ea8ecu: goto label_3ea8ec;
        case 0x3ea8f0u: goto label_3ea8f0;
        case 0x3ea8f4u: goto label_3ea8f4;
        case 0x3ea8f8u: goto label_3ea8f8;
        case 0x3ea8fcu: goto label_3ea8fc;
        case 0x3ea900u: goto label_3ea900;
        case 0x3ea904u: goto label_3ea904;
        case 0x3ea908u: goto label_3ea908;
        case 0x3ea90cu: goto label_3ea90c;
        case 0x3ea910u: goto label_3ea910;
        case 0x3ea914u: goto label_3ea914;
        case 0x3ea918u: goto label_3ea918;
        case 0x3ea91cu: goto label_3ea91c;
        case 0x3ea920u: goto label_3ea920;
        case 0x3ea924u: goto label_3ea924;
        case 0x3ea928u: goto label_3ea928;
        case 0x3ea92cu: goto label_3ea92c;
        case 0x3ea930u: goto label_3ea930;
        case 0x3ea934u: goto label_3ea934;
        case 0x3ea938u: goto label_3ea938;
        case 0x3ea93cu: goto label_3ea93c;
        case 0x3ea940u: goto label_3ea940;
        case 0x3ea944u: goto label_3ea944;
        case 0x3ea948u: goto label_3ea948;
        case 0x3ea94cu: goto label_3ea94c;
        case 0x3ea950u: goto label_3ea950;
        case 0x3ea954u: goto label_3ea954;
        case 0x3ea958u: goto label_3ea958;
        case 0x3ea95cu: goto label_3ea95c;
        case 0x3ea960u: goto label_3ea960;
        case 0x3ea964u: goto label_3ea964;
        case 0x3ea968u: goto label_3ea968;
        case 0x3ea96cu: goto label_3ea96c;
        case 0x3ea970u: goto label_3ea970;
        case 0x3ea974u: goto label_3ea974;
        case 0x3ea978u: goto label_3ea978;
        case 0x3ea97cu: goto label_3ea97c;
        case 0x3ea980u: goto label_3ea980;
        case 0x3ea984u: goto label_3ea984;
        case 0x3ea988u: goto label_3ea988;
        case 0x3ea98cu: goto label_3ea98c;
        case 0x3ea990u: goto label_3ea990;
        case 0x3ea994u: goto label_3ea994;
        case 0x3ea998u: goto label_3ea998;
        case 0x3ea99cu: goto label_3ea99c;
        case 0x3ea9a0u: goto label_3ea9a0;
        case 0x3ea9a4u: goto label_3ea9a4;
        case 0x3ea9a8u: goto label_3ea9a8;
        case 0x3ea9acu: goto label_3ea9ac;
        case 0x3ea9b0u: goto label_3ea9b0;
        case 0x3ea9b4u: goto label_3ea9b4;
        case 0x3ea9b8u: goto label_3ea9b8;
        case 0x3ea9bcu: goto label_3ea9bc;
        default: break;
    }

    ctx->pc = 0x3ea7b0u;

label_3ea7b0:
    // 0x3ea7b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ea7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3ea7b4:
    // 0x3ea7b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ea7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3ea7b8:
    // 0x3ea7b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ea7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3ea7bc:
    // 0x3ea7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ea7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea7c0:
    // 0x3ea7c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ea7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3ea7c4:
    // 0x3ea7c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ea7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ea7c8:
    // 0x3ea7c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ea7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3ea7cc:
    // 0x3ea7cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ea7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ea7d0:
    // 0x3ea7d0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3ea7d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3ea7d4:
    // 0x3ea7d4: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3ea7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3ea7d8:
    // 0x3ea7d8: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x3ea7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
label_3ea7dc:
    // 0x3ea7dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ea7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ea7e0:
    // 0x3ea7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ea7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ea7e4:
    // 0x3ea7e4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ea7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea7e8:
    // 0x3ea7e8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea7ec:
    // 0x3ea7ec: 0x40f809  jalr        $v0
label_3ea7f0:
    if (ctx->pc == 0x3EA7F0u) {
        ctx->pc = 0x3EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7ECu;
        // 0x3ea7f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA7F4u;
        goto label_3ea7f4;
    }
    ctx->pc = 0x3EA7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA7F4u);
        ctx->pc = 0x3EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7ECu;
        // 0x3ea7f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA7ECu, 0x3EA7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA7F4u;
label_3ea7f4:
    // 0x3ea7f4: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3ea7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3ea7f8:
    // 0x3ea7f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ea7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea7fc:
    // 0x3ea7fc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3ea800:
    // 0x3ea800: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3ea800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3ea804:
    // 0x3ea804: 0xc0e858c  jal         func_3A1630
label_3ea808:
    if (ctx->pc == 0x3EA808u) {
        ctx->pc = 0x3EA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA804u;
        // 0x3ea808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA80Cu;
        goto label_3ea80c;
    }
    ctx->pc = 0x3EA804u;
    SET_GPR_U32(ctx, 31, 0x3EA80Cu);
    ctx->pc = 0x3EA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA804u;
    // 0x3ea808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EA804u, 0x3EA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA80Cu;
label_3ea80c:
    // 0x3ea80c: 0xc0ea14c  jal         func_3A8530
label_3ea810:
    if (ctx->pc == 0x3EA810u) {
        ctx->pc = 0x3EA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA80Cu;
        // 0x3ea810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA814u;
        goto label_3ea814;
    }
    ctx->pc = 0x3EA80Cu;
    SET_GPR_U32(ctx, 31, 0x3EA814u);
    ctx->pc = 0x3EA810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA80Cu;
    // 0x3ea810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EA80Cu, 0x3EA814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA814u;
label_3ea814:
    // 0x3ea814: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ea814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ea818:
    // 0x3ea818: 0xc0ea12a  jal         func_3A84A8
label_3ea81c:
    if (ctx->pc == 0x3EA81Cu) {
        ctx->pc = 0x3EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA818u;
        // 0x3ea81c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA820u;
        goto label_3ea820;
    }
    ctx->pc = 0x3EA818u;
    SET_GPR_U32(ctx, 31, 0x3EA820u);
    ctx->pc = 0x3EA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA818u;
    // 0x3ea81c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EA818u, 0x3EA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA820u;
label_3ea820:
    // 0x3ea820: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ea820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea824:
    // 0x3ea824: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ea824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ea828:
    // 0x3ea828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ea828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea82c:
    // 0x3ea82c: 0xc0ea12a  jal         func_3A84A8
label_3ea830:
    if (ctx->pc == 0x3EA830u) {
        ctx->pc = 0x3EA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA82Cu;
        // 0x3ea830: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA834u;
        goto label_3ea834;
    }
    ctx->pc = 0x3EA82Cu;
    SET_GPR_U32(ctx, 31, 0x3EA834u);
    ctx->pc = 0x3EA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA82Cu;
    // 0x3ea830: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EA82Cu, 0x3EA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA834u;
label_3ea834:
    // 0x3ea834: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ea834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea838:
    // 0x3ea838: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3ea838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3ea83c:
    // 0x3ea83c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ea83cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea840:
    // 0x3ea840: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ea840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea844:
    // 0x3ea844: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x3ea844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_3ea848:
    // 0x3ea848: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ea848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea84c:
    // 0x3ea84c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3ea84cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3ea850:
    // 0x3ea850: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3ea850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ea854:
    // 0x3ea854: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3ea854u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3ea858:
    // 0x3ea858: 0x24845b70  addiu       $a0, $a0, 0x5B70
    ctx->pc = 0x3ea858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23408));
label_3ea85c:
    // 0x3ea85c: 0xc0e94fc  jal         func_3A53F0
label_3ea860:
    if (ctx->pc == 0x3EA860u) {
        ctx->pc = 0x3EA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA85Cu;
        // 0x3ea860: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA864u;
        goto label_3ea864;
    }
    ctx->pc = 0x3EA85Cu;
    SET_GPR_U32(ctx, 31, 0x3EA864u);
    ctx->pc = 0x3EA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA85Cu;
    // 0x3ea860: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3EA85Cu, 0x3EA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA864u;
label_3ea864:
    // 0x3ea864: 0x3c05f1ef  lui         $a1, 0xF1EF
    ctx->pc = 0x3ea864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61935 << 16));
label_3ea868:
    // 0x3ea868: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3ea868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3ea86c:
    // 0x3ea86c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea870:
    // 0x3ea870: 0xc0ea16a  jal         func_3A85A8
label_3ea874:
    if (ctx->pc == 0x3EA874u) {
        ctx->pc = 0x3EA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA870u;
        // 0x3ea874: 0x34a50360  ori         $a1, $a1, 0x360 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)864);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA878u;
        goto label_3ea878;
    }
    ctx->pc = 0x3EA870u;
    SET_GPR_U32(ctx, 31, 0x3EA878u);
    ctx->pc = 0x3EA874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA870u;
    // 0x3ea874: 0x34a50360  ori         $a1, $a1, 0x360 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3EA870u, 0x3EA878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA878u;
label_3ea878:
    // 0x3ea878: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x3ea878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ea87c:
    // 0x3ea87c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ea87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea880:
    // 0x3ea880: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3ea880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3ea884:
    // 0x3ea884: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea888:
    // 0x3ea888: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea88c:
    // 0x3ea88c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea890:
    // 0x3ea890: 0x60f809  jalr        $v1
label_3ea894:
    if (ctx->pc == 0x3EA894u) {
        ctx->pc = 0x3EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA890u;
        // 0x3ea894: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA898u;
        goto label_3ea898;
    }
    ctx->pc = 0x3EA890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA898u);
        ctx->pc = 0x3EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA890u;
        // 0x3ea894: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA890u, 0x3EA898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA898u;
label_3ea898:
    // 0x3ea898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea89c:
    // 0x3ea89c: 0xc0ea16a  jal         func_3A85A8
label_3ea8a0:
    if (ctx->pc == 0x3EA8A0u) {
        ctx->pc = 0x3EA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA89Cu;
        // 0x3ea8a0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8A4u;
        goto label_3ea8a4;
    }
    ctx->pc = 0x3EA89Cu;
    SET_GPR_U32(ctx, 31, 0x3EA8A4u);
    ctx->pc = 0x3EA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA89Cu;
    // 0x3ea8a0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3EA89Cu, 0x3EA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8A4u;
label_3ea8a4:
    // 0x3ea8a4: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x3ea8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ea8a8:
    // 0x3ea8a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ea8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea8ac:
    // 0x3ea8ac: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3ea8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3ea8b0:
    // 0x3ea8b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea8b4:
    // 0x3ea8b4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea8b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea8b8:
    // 0x3ea8b8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea8bc:
    // 0x3ea8bc: 0x60f809  jalr        $v1
label_3ea8c0:
    if (ctx->pc == 0x3EA8C0u) {
        ctx->pc = 0x3EA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8BCu;
        // 0x3ea8c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8C4u;
        goto label_3ea8c4;
    }
    ctx->pc = 0x3EA8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA8C4u);
        ctx->pc = 0x3EA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8BCu;
        // 0x3ea8c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA8BCu, 0x3EA8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA8C4u;
label_3ea8c4:
    // 0x3ea8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea8c8:
    // 0x3ea8c8: 0xc0ea16a  jal         func_3A85A8
label_3ea8cc:
    if (ctx->pc == 0x3EA8CCu) {
        ctx->pc = 0x3EA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8C8u;
        // 0x3ea8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8D0u;
        goto label_3ea8d0;
    }
    ctx->pc = 0x3EA8C8u;
    SET_GPR_U32(ctx, 31, 0x3EA8D0u);
    ctx->pc = 0x3EA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8C8u;
    // 0x3ea8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3EA8C8u, 0x3EA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8D0u;
label_3ea8d0:
    // 0x3ea8d0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x3ea8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ea8d4:
    // 0x3ea8d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ea8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea8d8:
    // 0x3ea8d8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3ea8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3ea8dc:
    // 0x3ea8dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea8e0:
    // 0x3ea8e0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea8e4:
    // 0x3ea8e4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea8e8:
    // 0x3ea8e8: 0x60f809  jalr        $v1
label_3ea8ec:
    if (ctx->pc == 0x3EA8ECu) {
        ctx->pc = 0x3EA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8E8u;
        // 0x3ea8ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8F0u;
        goto label_3ea8f0;
    }
    ctx->pc = 0x3EA8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA8F0u);
        ctx->pc = 0x3EA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8E8u;
        // 0x3ea8ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA8E8u, 0x3EA8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA8F0u;
label_3ea8f0:
    // 0x3ea8f0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3ea8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3ea8f4:
    // 0x3ea8f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ea8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ea8f8:
    // 0x3ea8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ea8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ea8fc:
    // 0x3ea8fc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3ea8fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ea900:
    // 0x3ea900: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3ea900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3ea904:
    // 0x3ea904: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3ea904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ea908:
    // 0x3ea908: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3ea908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3ea90c:
    // 0x3ea90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea910:
    // 0x3ea910: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3ea910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3ea914:
    // 0x3ea914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ea914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea918:
    // 0x3ea918: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x3ea918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3ea91c:
    // 0x3ea91c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ea91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ea920:
    // 0x3ea920: 0xc0ea158  jal         func_3A8560
label_3ea924:
    if (ctx->pc == 0x3EA924u) {
        ctx->pc = 0x3EA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA920u;
        // 0x3ea924: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA928u;
        goto label_3ea928;
    }
    ctx->pc = 0x3EA920u;
    SET_GPR_U32(ctx, 31, 0x3EA928u);
    ctx->pc = 0x3EA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA920u;
    // 0x3ea924: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3EA920u, 0x3EA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA928u;
label_3ea928:
    // 0x3ea928: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x3ea928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ea92c:
    // 0x3ea92c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ea92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea930:
    // 0x3ea930: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3ea930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3ea934:
    // 0x3ea934: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea938:
    // 0x3ea938: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea93c:
    // 0x3ea93c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea940:
    // 0x3ea940: 0x60f809  jalr        $v1
label_3ea944:
    if (ctx->pc == 0x3EA944u) {
        ctx->pc = 0x3EA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA940u;
        // 0x3ea944: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA948u;
        goto label_3ea948;
    }
    ctx->pc = 0x3EA940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA948u);
        ctx->pc = 0x3EA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA940u;
        // 0x3ea944: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA940u, 0x3EA948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA948u;
label_3ea948:
    // 0x3ea948: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3ea948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3ea94c:
    // 0x3ea94c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ea94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ea950:
    // 0x3ea950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ea950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ea954:
    // 0x3ea954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea958:
    // 0x3ea958: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3ea95c:
    // 0x3ea95c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ea95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea960:
    // 0x3ea960: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3ea960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3ea964:
    // 0x3ea964: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3ea964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3ea968:
    // 0x3ea968: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x3ea968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3ea96c:
    // 0x3ea96c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ea96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ea970:
    // 0x3ea970: 0xc0ea158  jal         func_3A8560
label_3ea974:
    if (ctx->pc == 0x3EA974u) {
        ctx->pc = 0x3EA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA970u;
        // 0x3ea974: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA978u;
        goto label_3ea978;
    }
    ctx->pc = 0x3EA970u;
    SET_GPR_U32(ctx, 31, 0x3EA978u);
    ctx->pc = 0x3EA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA970u;
    // 0x3ea974: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3EA970u, 0x3EA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA978u;
label_3ea978:
    // 0x3ea978: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x3ea978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ea97c:
    // 0x3ea97c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ea97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea980:
    // 0x3ea980: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3ea980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3ea984:
    // 0x3ea984: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea988:
    // 0x3ea988: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea98c:
    // 0x3ea98c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea990:
    // 0x3ea990: 0x60f809  jalr        $v1
label_3ea994:
    if (ctx->pc == 0x3EA994u) {
        ctx->pc = 0x3EA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA990u;
        // 0x3ea994: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA998u;
        goto label_3ea998;
    }
    ctx->pc = 0x3EA990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA998u);
        ctx->pc = 0x3EA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA990u;
        // 0x3ea994: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA990u, 0x3EA998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA998u;
label_3ea998:
    // 0x3ea998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea99c:
    // 0x3ea99c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ea99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ea9a0:
    // 0x3ea9a0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3ea9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3ea9a4:
    // 0x3ea9a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ea9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ea9a8:
    // 0x3ea9a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ea9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ea9ac:
    // 0x3ea9ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ea9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ea9b0:
    // 0x3ea9b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ea9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ea9b4:
    // 0x3ea9b4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3ea9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ea9b8:
    // 0x3ea9b8: 0x3e00008  jr          $ra
label_3ea9bc:
    if (ctx->pc == 0x3EA9BCu) {
        ctx->pc = 0x3EA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9B8u;
        // 0x3ea9bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9C0u;
        goto label_fallthrough_0x3ea9b8;
    }
    ctx->pc = 0x3EA9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9B8u;
        // 0x3ea9bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea9b8:
    ctx->pc = 0x3EA9C0u;
}
