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

// Function: sub_004A8888
// Address: 0x4a8888 - 0x4a8a60
void sub_004A8888_0x4a8888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8888_0x4a8888");
#endif

    switch (ctx->pc) {
        case 0x4a8888u: goto label_4a8888;
        case 0x4a888cu: goto label_4a888c;
        case 0x4a8890u: goto label_4a8890;
        case 0x4a8894u: goto label_4a8894;
        case 0x4a8898u: goto label_4a8898;
        case 0x4a889cu: goto label_4a889c;
        case 0x4a88a0u: goto label_4a88a0;
        case 0x4a88a4u: goto label_4a88a4;
        case 0x4a88a8u: goto label_4a88a8;
        case 0x4a88acu: goto label_4a88ac;
        case 0x4a88b0u: goto label_4a88b0;
        case 0x4a88b4u: goto label_4a88b4;
        case 0x4a88b8u: goto label_4a88b8;
        case 0x4a88bcu: goto label_4a88bc;
        case 0x4a88c0u: goto label_4a88c0;
        case 0x4a88c4u: goto label_4a88c4;
        case 0x4a88c8u: goto label_4a88c8;
        case 0x4a88ccu: goto label_4a88cc;
        case 0x4a88d0u: goto label_4a88d0;
        case 0x4a88d4u: goto label_4a88d4;
        case 0x4a88d8u: goto label_4a88d8;
        case 0x4a88dcu: goto label_4a88dc;
        case 0x4a88e0u: goto label_4a88e0;
        case 0x4a88e4u: goto label_4a88e4;
        case 0x4a88e8u: goto label_4a88e8;
        case 0x4a88ecu: goto label_4a88ec;
        case 0x4a88f0u: goto label_4a88f0;
        case 0x4a88f4u: goto label_4a88f4;
        case 0x4a88f8u: goto label_4a88f8;
        case 0x4a88fcu: goto label_4a88fc;
        case 0x4a8900u: goto label_4a8900;
        case 0x4a8904u: goto label_4a8904;
        case 0x4a8908u: goto label_4a8908;
        case 0x4a890cu: goto label_4a890c;
        case 0x4a8910u: goto label_4a8910;
        case 0x4a8914u: goto label_4a8914;
        case 0x4a8918u: goto label_4a8918;
        case 0x4a891cu: goto label_4a891c;
        case 0x4a8920u: goto label_4a8920;
        case 0x4a8924u: goto label_4a8924;
        case 0x4a8928u: goto label_4a8928;
        case 0x4a892cu: goto label_4a892c;
        case 0x4a8930u: goto label_4a8930;
        case 0x4a8934u: goto label_4a8934;
        case 0x4a8938u: goto label_4a8938;
        case 0x4a893cu: goto label_4a893c;
        case 0x4a8940u: goto label_4a8940;
        case 0x4a8944u: goto label_4a8944;
        case 0x4a8948u: goto label_4a8948;
        case 0x4a894cu: goto label_4a894c;
        case 0x4a8950u: goto label_4a8950;
        case 0x4a8954u: goto label_4a8954;
        case 0x4a8958u: goto label_4a8958;
        case 0x4a895cu: goto label_4a895c;
        case 0x4a8960u: goto label_4a8960;
        case 0x4a8964u: goto label_4a8964;
        case 0x4a8968u: goto label_4a8968;
        case 0x4a896cu: goto label_4a896c;
        case 0x4a8970u: goto label_4a8970;
        case 0x4a8974u: goto label_4a8974;
        case 0x4a8978u: goto label_4a8978;
        case 0x4a897cu: goto label_4a897c;
        case 0x4a8980u: goto label_4a8980;
        case 0x4a8984u: goto label_4a8984;
        case 0x4a8988u: goto label_4a8988;
        case 0x4a898cu: goto label_4a898c;
        case 0x4a8990u: goto label_4a8990;
        case 0x4a8994u: goto label_4a8994;
        case 0x4a8998u: goto label_4a8998;
        case 0x4a899cu: goto label_4a899c;
        case 0x4a89a0u: goto label_4a89a0;
        case 0x4a89a4u: goto label_4a89a4;
        case 0x4a89a8u: goto label_4a89a8;
        case 0x4a89acu: goto label_4a89ac;
        case 0x4a89b0u: goto label_4a89b0;
        case 0x4a89b4u: goto label_4a89b4;
        case 0x4a89b8u: goto label_4a89b8;
        case 0x4a89bcu: goto label_4a89bc;
        case 0x4a89c0u: goto label_4a89c0;
        case 0x4a89c4u: goto label_4a89c4;
        case 0x4a89c8u: goto label_4a89c8;
        case 0x4a89ccu: goto label_4a89cc;
        case 0x4a89d0u: goto label_4a89d0;
        case 0x4a89d4u: goto label_4a89d4;
        case 0x4a89d8u: goto label_4a89d8;
        case 0x4a89dcu: goto label_4a89dc;
        case 0x4a89e0u: goto label_4a89e0;
        case 0x4a89e4u: goto label_4a89e4;
        case 0x4a89e8u: goto label_4a89e8;
        case 0x4a89ecu: goto label_4a89ec;
        case 0x4a89f0u: goto label_4a89f0;
        case 0x4a89f4u: goto label_4a89f4;
        case 0x4a89f8u: goto label_4a89f8;
        case 0x4a89fcu: goto label_4a89fc;
        case 0x4a8a00u: goto label_4a8a00;
        case 0x4a8a04u: goto label_4a8a04;
        case 0x4a8a08u: goto label_4a8a08;
        case 0x4a8a0cu: goto label_4a8a0c;
        case 0x4a8a10u: goto label_4a8a10;
        case 0x4a8a14u: goto label_4a8a14;
        case 0x4a8a18u: goto label_4a8a18;
        case 0x4a8a1cu: goto label_4a8a1c;
        case 0x4a8a20u: goto label_4a8a20;
        case 0x4a8a24u: goto label_4a8a24;
        case 0x4a8a28u: goto label_4a8a28;
        case 0x4a8a2cu: goto label_4a8a2c;
        case 0x4a8a30u: goto label_4a8a30;
        case 0x4a8a34u: goto label_4a8a34;
        case 0x4a8a38u: goto label_4a8a38;
        case 0x4a8a3cu: goto label_4a8a3c;
        case 0x4a8a40u: goto label_4a8a40;
        case 0x4a8a44u: goto label_4a8a44;
        case 0x4a8a48u: goto label_4a8a48;
        case 0x4a8a4cu: goto label_4a8a4c;
        case 0x4a8a50u: goto label_4a8a50;
        case 0x4a8a54u: goto label_4a8a54;
        case 0x4a8a58u: goto label_4a8a58;
        case 0x4a8a5cu: goto label_4a8a5c;
        default: break;
    }

    ctx->pc = 0x4a8888u;

label_4a8888:
    // 0x4a8888: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a8888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a888c:
    // 0x4a888c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a8890:
    // 0x4a8890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a8890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a8894:
    // 0x4a8894: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a8894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a8898:
    // 0x4a8898: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a8898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a889c:
    // 0x4a889c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a889cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a88a0:
    // 0x4a88a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a88a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a88a4:
    // 0x4a88a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a88a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a88a8:
    // 0x4a88a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a88a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a88ac:
    // 0x4a88ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a88acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a88b0:
    // 0x4a88b0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4a88b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4a88b4:
    // 0x4a88b4: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x4a88b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4a88b8:
    // 0x4a88b8: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x4a88b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a88bc:
    // 0x4a88bc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4a88c0:
    if (ctx->pc == 0x4A88C0u) {
        ctx->pc = 0x4A88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88BCu;
        // 0x4a88c0: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A88C4u;
        goto label_4a88c4;
    }
    ctx->pc = 0x4A88BCu;
    {
        const bool branch_taken_0x4a88bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88BCu;
        // 0x4a88c0: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a88bc) {
            ctx->pc = 0x4A8968u;
            goto label_4a8968;
        }
    }
    ctx->pc = 0x4A88C4u;
label_4a88c4:
    // 0x4a88c4: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x4a88c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4a88c8:
    // 0x4a88c8: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x4a88c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_4a88cc:
    // 0x4a88cc: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x4a88ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
label_4a88d0:
    // 0x4a88d0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a88d4:
    // 0x4a88d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a88d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a88d8:
    // 0x4a88d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a88d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4a88dc:
    // 0x4a88dc: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x4a88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_4a88e0:
    // 0x4a88e0: 0x40f809  jalr        $v0
label_4a88e4:
    if (ctx->pc == 0x4A88E4u) {
        ctx->pc = 0x4A88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88E0u;
        // 0x4a88e4: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A88E8u;
        goto label_4a88e8;
    }
    ctx->pc = 0x4A88E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A88E8u);
        ctx->pc = 0x4A88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88E0u;
        // 0x4a88e4: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A88E0u, 0x4A88E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A88E8u;
label_4a88e8:
    // 0x4a88e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a88e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a88ec:
    // 0x4a88ec: 0x56400010  bnel        $s2, $zero, . + 4 + (0x10 << 2)
label_4a88f0:
    if (ctx->pc == 0x4A88F0u) {
        ctx->pc = 0x4A88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88ECu;
        // 0x4a88f0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A88F4u;
        goto label_4a88f4;
    }
    ctx->pc = 0x4A88ECu;
    {
        const bool branch_taken_0x4a88ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a88ec) {
            ctx->pc = 0x4A88F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A88ECu;
            // 0x4a88f0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8930u;
            goto label_4a8930;
        }
    }
    ctx->pc = 0x4A88F4u;
label_4a88f4:
    // 0x4a88f4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x4a88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4a88f8:
    // 0x4a88f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a88fc:
    // 0x4a88fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a88fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a8900:
    // 0x4a8900: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a8900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a8904:
    // 0x4a8904: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a8904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4a8908:
    // 0x4a8908: 0xc11eff2  jal         func_47BFC8
label_4a890c:
    if (ctx->pc == 0x4A890Cu) {
        ctx->pc = 0x4A890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8908u;
        // 0x4a890c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8910u;
        goto label_4a8910;
    }
    ctx->pc = 0x4A8908u;
    SET_GPR_U32(ctx, 31, 0x4A8910u);
    ctx->pc = 0x4A890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8908u;
    // 0x4a890c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A8908u, 0x4A8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8910u;
label_4a8910:
    // 0x4a8910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a8910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8914:
    // 0x4a8914: 0xc11f024  jal         func_47C090
label_4a8918:
    if (ctx->pc == 0x4A8918u) {
        ctx->pc = 0x4A8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8914u;
        // 0x4a8918: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A891Cu;
        goto label_4a891c;
    }
    ctx->pc = 0x4A8914u;
    SET_GPR_U32(ctx, 31, 0x4A891Cu);
    ctx->pc = 0x4A8918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8914u;
    // 0x4a8918: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A8914u, 0x4A891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A891Cu;
label_4a891c:
    // 0x4a891c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4a891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4a8920:
    // 0x4a8920: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x4a8920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_4a8924:
    // 0x4a8924: 0x10000010  b           . + 4 + (0x10 << 2)
label_4a8928:
    if (ctx->pc == 0x4A8928u) {
        ctx->pc = 0x4A8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8924u;
        // 0x4a8928: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A892Cu;
        goto label_4a892c;
    }
    ctx->pc = 0x4A8924u;
    {
        const bool branch_taken_0x4a8924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8924u;
        // 0x4a8928: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8924) {
            ctx->pc = 0x4A8968u;
            goto label_4a8968;
        }
    }
    ctx->pc = 0x4A892Cu;
label_4a892c:
    // 0x4a892c: 0x0  nop
    ctx->pc = 0x4a892cu;
    // NOP
label_4a8930:
    // 0x4a8930: 0x5242000d  beql        $s2, $v0, . + 4 + (0xD << 2)
label_4a8934:
    if (ctx->pc == 0x4A8934u) {
        ctx->pc = 0x4A8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8930u;
        // 0x4a8934: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8938u;
        goto label_4a8938;
    }
    ctx->pc = 0x4A8930u;
    {
        const bool branch_taken_0x4a8930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a8930) {
            ctx->pc = 0x4A8934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8930u;
            // 0x4a8934: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8968u;
            goto label_4a8968;
        }
    }
    ctx->pc = 0x4A8938u;
label_4a8938:
    // 0x4a8938: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4a893c:
    if (ctx->pc == 0x4A893Cu) {
        ctx->pc = 0x4A893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8938u;
        // 0x4a893c: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8940u;
        goto label_4a8940;
    }
    ctx->pc = 0x4A8938u;
    {
        const bool branch_taken_0x4a8938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8938) {
            ctx->pc = 0x4A893Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8938u;
            // 0x4a893c: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8968u;
            goto label_4a8968;
        }
    }
    ctx->pc = 0x4A8940u;
label_4a8940:
    // 0x4a8940: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4a8940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a8944:
    // 0x4a8944: 0x0  nop
    ctx->pc = 0x4a8944u;
    // NOP
label_4a8948:
    // 0x4a8948: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a8948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a894c:
    // 0x4a894c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4a894cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4a8950:
    // 0x4a8950: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4a8950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4a8954:
    // 0x4a8954: 0x0  nop
    ctx->pc = 0x4a8954u;
    // NOP
label_4a8958:
    // 0x4a8958: 0x0  nop
    ctx->pc = 0x4a8958u;
    // NOP
label_4a895c:
    // 0x4a895c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_4a8960:
    if (ctx->pc == 0x4A8960u) {
        ctx->pc = 0x4A8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A895Cu;
        // 0x4a8960: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8964u;
        goto label_4a8964;
    }
    ctx->pc = 0x4A895Cu;
    {
        const bool branch_taken_0x4a895c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A895Cu;
        // 0x4a8960: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a895c) {
            ctx->pc = 0x4A8948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8948;
        }
    }
    ctx->pc = 0x4A8964u;
label_4a8964:
    // 0x4a8964: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4a8964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4a8968:
    // 0x4a8968: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_4a896c:
    if (ctx->pc == 0x4A896Cu) {
        ctx->pc = 0x4A896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8968u;
        // 0x4a896c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8970u;
        goto label_4a8970;
    }
    ctx->pc = 0x4A8968u;
    {
        const bool branch_taken_0x4a8968 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8968u;
        // 0x4a896c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8968) {
            ctx->pc = 0x4A8A40u;
            goto label_4a8a40;
        }
    }
    ctx->pc = 0x4A8970u;
label_4a8970:
    // 0x4a8970: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4a8974:
    // 0x4a8974: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x4a8974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a8978:
    // 0x4a8978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a897c:
    // 0x4a897c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x4a897cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4a8980:
    // 0x4a8980: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_4a8984:
    if (ctx->pc == 0x4A8984u) {
        ctx->pc = 0x4A8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8980u;
        // 0x4a8984: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8988u;
        goto label_4a8988;
    }
    ctx->pc = 0x4A8980u;
    {
        const bool branch_taken_0x4a8980 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8980u;
        // 0x4a8984: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8980) {
            ctx->pc = 0x4A8A3Cu;
            goto label_4a8a3c;
        }
    }
    ctx->pc = 0x4A8988u;
label_4a8988:
    // 0x4a8988: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4a8988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a898c:
    // 0x4a898c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4a898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4a8990:
    // 0x4a8990: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x4a8990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_4a8994:
    // 0x4a8994: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x4a8994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_4a8998:
    // 0x4a8998: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4a8998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_4a899c:
    // 0x4a899c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x4a899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4a89a0:
    // 0x4a89a0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4a89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_4a89a4:
    // 0x4a89a4: 0x2485ffe0  addiu       $a1, $a0, -0x20
    ctx->pc = 0x4a89a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_4a89a8:
    // 0x4a89a8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x4a89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_4a89ac:
    // 0x4a89ac: 0x2482ffc0  addiu       $v0, $a0, -0x40
    ctx->pc = 0x4a89acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_4a89b0:
    // 0x4a89b0: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x4a89b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4a89b4:
    // 0x4a89b4: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x4a89b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4a89b8:
    // 0x4a89b8: 0x68c8000f  ldl         $t0, 0xF($a2)
    ctx->pc = 0x4a89b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4a89bc:
    // 0x4a89bc: 0x6cc80008  ldr         $t0, 0x8($a2)
    ctx->pc = 0x4a89bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4a89c0:
    // 0x4a89c0: 0x68c90017  ldl         $t1, 0x17($a2)
    ctx->pc = 0x4a89c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4a89c4:
    // 0x4a89c4: 0x6cc90010  ldr         $t1, 0x10($a2)
    ctx->pc = 0x4a89c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4a89c8:
    // 0x4a89c8: 0x68ca001f  ldl         $t2, 0x1F($a2)
    ctx->pc = 0x4a89c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4a89cc:
    // 0x4a89cc: 0x6cca0018  ldr         $t2, 0x18($a2)
    ctx->pc = 0x4a89ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4a89d0:
    // 0x4a89d0: 0xb087ffe7  sdl         $a3, -0x19($a0)
    ctx->pc = 0x4a89d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89d4:
    // 0x4a89d4: 0xb487ffe0  sdr         $a3, -0x20($a0)
    ctx->pc = 0x4a89d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89d8:
    // 0x4a89d8: 0xb088ffef  sdl         $t0, -0x11($a0)
    ctx->pc = 0x4a89d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89dc:
    // 0x4a89dc: 0xb488ffe8  sdr         $t0, -0x18($a0)
    ctx->pc = 0x4a89dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89e0:
    // 0x4a89e0: 0xb089fff7  sdl         $t1, -0x9($a0)
    ctx->pc = 0x4a89e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89e4:
    // 0x4a89e4: 0xb489fff0  sdr         $t1, -0x10($a0)
    ctx->pc = 0x4a89e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89e8:
    // 0x4a89e8: 0xb08affff  sdl         $t2, -0x1($a0)
    ctx->pc = 0x4a89e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89ec:
    // 0x4a89ec: 0xb48afff8  sdr         $t2, -0x8($a0)
    ctx->pc = 0x4a89ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a89f0:
    // 0x4a89f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a89f4:
    // 0x4a89f4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x4a89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_4a89f8:
    // 0x4a89f8: 0xacc60020  sw          $a2, 0x20($a2)
    ctx->pc = 0x4a89f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 6));
label_4a89fc:
    // 0x4a89fc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4a89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_4a8a00:
    // 0x4a8a00: 0xac83ffe0  sw          $v1, -0x20($a0)
    ctx->pc = 0x4a8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U32(ctx, 3));
label_4a8a04:
    // 0x4a8a04: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4a8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_4a8a08:
    // 0x4a8a08: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x4a8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
label_4a8a0c:
    // 0x4a8a0c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x4a8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_4a8a10:
    // 0x4a8a10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a8a14:
    // 0x4a8a14: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_4a8a18:
    if (ctx->pc == 0x4A8A18u) {
        ctx->pc = 0x4A8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A14u;
        // 0x4a8a18: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A1Cu;
        goto label_4a8a1c;
    }
    ctx->pc = 0x4A8A14u;
    {
        const bool branch_taken_0x4a8a14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A14u;
        // 0x4a8a18: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a14) {
            ctx->pc = 0x4A8A34u;
            goto label_4a8a34;
        }
    }
    ctx->pc = 0x4A8A1Cu;
label_4a8a1c:
    // 0x4a8a1c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4a8a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a8a20:
    // 0x4a8a20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a8a24:
    // 0x4a8a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a8a28:
    // 0x4a8a28: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x4a8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_4a8a2c:
    // 0x4a8a2c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x4a8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_4a8a30:
    // 0x4a8a30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4a8a34:
    // 0x4a8a34: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a8a38:
    if (ctx->pc == 0x4A8A38u) {
        ctx->pc = 0x4A8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A34u;
        // 0x4a8a38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A3Cu;
        goto label_4a8a3c;
    }
    ctx->pc = 0x4A8A34u;
    {
        const bool branch_taken_0x4a8a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A34u;
        // 0x4a8a38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a34) {
            ctx->pc = 0x4A8A40u;
            goto label_4a8a40;
        }
    }
    ctx->pc = 0x4A8A3Cu;
label_4a8a3c:
    // 0x4a8a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a8a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8a40:
    // 0x4a8a40: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a8a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a8a44:
    // 0x4a8a44: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a8a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8a48:
    // 0x4a8a48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a8a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8a4c:
    // 0x4a8a4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a8a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8a50:
    // 0x4a8a50: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a8a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8a54:
    // 0x4a8a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8a58:
    // 0x4a8a58: 0x3e00008  jr          $ra
label_4a8a5c:
    if (ctx->pc == 0x4A8A5Cu) {
        ctx->pc = 0x4A8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A58u;
        // 0x4a8a5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A60u;
        goto label_fallthrough_0x4a8a58;
    }
    ctx->pc = 0x4A8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A58u;
        // 0x4a8a5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a8a58:
    ctx->pc = 0x4A8A60u;
}
