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

// Function: sub_0023E7E0
// Address: 0x23e7e0 - 0x23eab8
void sub_0023E7E0_0x23e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E7E0_0x23e7e0");
#endif

    switch (ctx->pc) {
        case 0x23e7e0u: goto label_23e7e0;
        case 0x23e7e4u: goto label_23e7e4;
        case 0x23e7e8u: goto label_23e7e8;
        case 0x23e7ecu: goto label_23e7ec;
        case 0x23e7f0u: goto label_23e7f0;
        case 0x23e7f4u: goto label_23e7f4;
        case 0x23e7f8u: goto label_23e7f8;
        case 0x23e7fcu: goto label_23e7fc;
        case 0x23e800u: goto label_23e800;
        case 0x23e804u: goto label_23e804;
        case 0x23e808u: goto label_23e808;
        case 0x23e80cu: goto label_23e80c;
        case 0x23e810u: goto label_23e810;
        case 0x23e814u: goto label_23e814;
        case 0x23e818u: goto label_23e818;
        case 0x23e81cu: goto label_23e81c;
        case 0x23e820u: goto label_23e820;
        case 0x23e824u: goto label_23e824;
        case 0x23e828u: goto label_23e828;
        case 0x23e82cu: goto label_23e82c;
        case 0x23e830u: goto label_23e830;
        case 0x23e834u: goto label_23e834;
        case 0x23e838u: goto label_23e838;
        case 0x23e83cu: goto label_23e83c;
        case 0x23e840u: goto label_23e840;
        case 0x23e844u: goto label_23e844;
        case 0x23e848u: goto label_23e848;
        case 0x23e84cu: goto label_23e84c;
        case 0x23e850u: goto label_23e850;
        case 0x23e854u: goto label_23e854;
        case 0x23e858u: goto label_23e858;
        case 0x23e85cu: goto label_23e85c;
        case 0x23e860u: goto label_23e860;
        case 0x23e864u: goto label_23e864;
        case 0x23e868u: goto label_23e868;
        case 0x23e86cu: goto label_23e86c;
        case 0x23e870u: goto label_23e870;
        case 0x23e874u: goto label_23e874;
        case 0x23e878u: goto label_23e878;
        case 0x23e87cu: goto label_23e87c;
        case 0x23e880u: goto label_23e880;
        case 0x23e884u: goto label_23e884;
        case 0x23e888u: goto label_23e888;
        case 0x23e88cu: goto label_23e88c;
        case 0x23e890u: goto label_23e890;
        case 0x23e894u: goto label_23e894;
        case 0x23e898u: goto label_23e898;
        case 0x23e89cu: goto label_23e89c;
        case 0x23e8a0u: goto label_23e8a0;
        case 0x23e8a4u: goto label_23e8a4;
        case 0x23e8a8u: goto label_23e8a8;
        case 0x23e8acu: goto label_23e8ac;
        case 0x23e8b0u: goto label_23e8b0;
        case 0x23e8b4u: goto label_23e8b4;
        case 0x23e8b8u: goto label_23e8b8;
        case 0x23e8bcu: goto label_23e8bc;
        case 0x23e8c0u: goto label_23e8c0;
        case 0x23e8c4u: goto label_23e8c4;
        case 0x23e8c8u: goto label_23e8c8;
        case 0x23e8ccu: goto label_23e8cc;
        case 0x23e8d0u: goto label_23e8d0;
        case 0x23e8d4u: goto label_23e8d4;
        case 0x23e8d8u: goto label_23e8d8;
        case 0x23e8dcu: goto label_23e8dc;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e8e4u: goto label_23e8e4;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e8ecu: goto label_23e8ec;
        case 0x23e8f0u: goto label_23e8f0;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e8f8u: goto label_23e8f8;
        case 0x23e8fcu: goto label_23e8fc;
        case 0x23e900u: goto label_23e900;
        case 0x23e904u: goto label_23e904;
        case 0x23e908u: goto label_23e908;
        case 0x23e90cu: goto label_23e90c;
        case 0x23e910u: goto label_23e910;
        case 0x23e914u: goto label_23e914;
        case 0x23e918u: goto label_23e918;
        case 0x23e91cu: goto label_23e91c;
        case 0x23e920u: goto label_23e920;
        case 0x23e924u: goto label_23e924;
        case 0x23e928u: goto label_23e928;
        case 0x23e92cu: goto label_23e92c;
        case 0x23e930u: goto label_23e930;
        case 0x23e934u: goto label_23e934;
        case 0x23e938u: goto label_23e938;
        case 0x23e93cu: goto label_23e93c;
        case 0x23e940u: goto label_23e940;
        case 0x23e944u: goto label_23e944;
        case 0x23e948u: goto label_23e948;
        case 0x23e94cu: goto label_23e94c;
        case 0x23e950u: goto label_23e950;
        case 0x23e954u: goto label_23e954;
        case 0x23e958u: goto label_23e958;
        case 0x23e95cu: goto label_23e95c;
        case 0x23e960u: goto label_23e960;
        case 0x23e964u: goto label_23e964;
        case 0x23e968u: goto label_23e968;
        case 0x23e96cu: goto label_23e96c;
        case 0x23e970u: goto label_23e970;
        case 0x23e974u: goto label_23e974;
        case 0x23e978u: goto label_23e978;
        case 0x23e97cu: goto label_23e97c;
        case 0x23e980u: goto label_23e980;
        case 0x23e984u: goto label_23e984;
        case 0x23e988u: goto label_23e988;
        case 0x23e98cu: goto label_23e98c;
        case 0x23e990u: goto label_23e990;
        case 0x23e994u: goto label_23e994;
        case 0x23e998u: goto label_23e998;
        case 0x23e99cu: goto label_23e99c;
        case 0x23e9a0u: goto label_23e9a0;
        case 0x23e9a4u: goto label_23e9a4;
        case 0x23e9a8u: goto label_23e9a8;
        case 0x23e9acu: goto label_23e9ac;
        case 0x23e9b0u: goto label_23e9b0;
        case 0x23e9b4u: goto label_23e9b4;
        case 0x23e9b8u: goto label_23e9b8;
        case 0x23e9bcu: goto label_23e9bc;
        case 0x23e9c0u: goto label_23e9c0;
        case 0x23e9c4u: goto label_23e9c4;
        case 0x23e9c8u: goto label_23e9c8;
        case 0x23e9ccu: goto label_23e9cc;
        case 0x23e9d0u: goto label_23e9d0;
        case 0x23e9d4u: goto label_23e9d4;
        case 0x23e9d8u: goto label_23e9d8;
        case 0x23e9dcu: goto label_23e9dc;
        case 0x23e9e0u: goto label_23e9e0;
        case 0x23e9e4u: goto label_23e9e4;
        case 0x23e9e8u: goto label_23e9e8;
        case 0x23e9ecu: goto label_23e9ec;
        case 0x23e9f0u: goto label_23e9f0;
        case 0x23e9f4u: goto label_23e9f4;
        case 0x23e9f8u: goto label_23e9f8;
        case 0x23e9fcu: goto label_23e9fc;
        case 0x23ea00u: goto label_23ea00;
        case 0x23ea04u: goto label_23ea04;
        case 0x23ea08u: goto label_23ea08;
        case 0x23ea0cu: goto label_23ea0c;
        case 0x23ea10u: goto label_23ea10;
        case 0x23ea14u: goto label_23ea14;
        case 0x23ea18u: goto label_23ea18;
        case 0x23ea1cu: goto label_23ea1c;
        case 0x23ea20u: goto label_23ea20;
        case 0x23ea24u: goto label_23ea24;
        case 0x23ea28u: goto label_23ea28;
        case 0x23ea2cu: goto label_23ea2c;
        case 0x23ea30u: goto label_23ea30;
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea38u: goto label_23ea38;
        case 0x23ea3cu: goto label_23ea3c;
        case 0x23ea40u: goto label_23ea40;
        case 0x23ea44u: goto label_23ea44;
        case 0x23ea48u: goto label_23ea48;
        case 0x23ea4cu: goto label_23ea4c;
        case 0x23ea50u: goto label_23ea50;
        case 0x23ea54u: goto label_23ea54;
        case 0x23ea58u: goto label_23ea58;
        case 0x23ea5cu: goto label_23ea5c;
        case 0x23ea60u: goto label_23ea60;
        case 0x23ea64u: goto label_23ea64;
        case 0x23ea68u: goto label_23ea68;
        case 0x23ea6cu: goto label_23ea6c;
        case 0x23ea70u: goto label_23ea70;
        case 0x23ea74u: goto label_23ea74;
        case 0x23ea78u: goto label_23ea78;
        case 0x23ea7cu: goto label_23ea7c;
        case 0x23ea80u: goto label_23ea80;
        case 0x23ea84u: goto label_23ea84;
        case 0x23ea88u: goto label_23ea88;
        case 0x23ea8cu: goto label_23ea8c;
        case 0x23ea90u: goto label_23ea90;
        case 0x23ea94u: goto label_23ea94;
        case 0x23ea98u: goto label_23ea98;
        case 0x23ea9cu: goto label_23ea9c;
        case 0x23eaa0u: goto label_23eaa0;
        case 0x23eaa4u: goto label_23eaa4;
        case 0x23eaa8u: goto label_23eaa8;
        case 0x23eaacu: goto label_23eaac;
        case 0x23eab0u: goto label_23eab0;
        case 0x23eab4u: goto label_23eab4;
        default: break;
    }

    ctx->pc = 0x23e7e0u;

label_23e7e0:
    // 0x23e7e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23e7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23e7e4:
    // 0x23e7e4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x23e7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_23e7e8:
    // 0x23e7e8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x23e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_23e7ec:
    // 0x23e7ec: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x23e7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_23e7f0:
    // 0x23e7f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e7f4:
    // 0x23e7f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x23e7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_23e7f8:
    // 0x23e7f8: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x23e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_23e7fc:
    // 0x23e7fc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x23e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_23e800:
    // 0x23e800: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x23e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_23e804:
    // 0x23e804: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x23e804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_23e808:
    // 0x23e808: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23e80c:
    // 0x23e80c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x23e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_23e810:
    // 0x23e810: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x23e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_23e814:
    // 0x23e814: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x23e814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_23e818:
    // 0x23e818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23e81c:
    // 0x23e81c: 0xc0e409a  jal         func_390268
label_23e820:
    if (ctx->pc == 0x23E820u) {
        ctx->pc = 0x23E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E81Cu;
        // 0x23e820: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E824u;
        goto label_23e824;
    }
    ctx->pc = 0x23E81Cu;
    SET_GPR_U32(ctx, 31, 0x23E824u);
    ctx->pc = 0x23E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E81Cu;
    // 0x23e820: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23E81Cu, 0x23E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E824u;
label_23e824:
    // 0x23e824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e828:
    // 0x23e828: 0x52000096  beql        $s0, $zero, . + 4 + (0x96 << 2)
label_23e82c:
    if (ctx->pc == 0x23E82Cu) {
        ctx->pc = 0x23E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E828u;
        // 0x23e82c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E830u;
        goto label_23e830;
    }
    ctx->pc = 0x23E828u;
    {
        const bool branch_taken_0x23e828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e828) {
            ctx->pc = 0x23E82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E828u;
            // 0x23e82c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA84u;
            goto label_23ea84;
        }
    }
    ctx->pc = 0x23E830u;
label_23e830:
    // 0x23e830: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23e830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23e834:
    // 0x23e834: 0xc087502  jal         func_21D408
label_23e838:
    if (ctx->pc == 0x23E838u) {
        ctx->pc = 0x23E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E834u;
        // 0x23e838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E83Cu;
        goto label_23e83c;
    }
    ctx->pc = 0x23E834u;
    SET_GPR_U32(ctx, 31, 0x23E83Cu);
    ctx->pc = 0x23E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E834u;
    // 0x23e838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23E834u, 0x23E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E83Cu;
label_23e83c:
    // 0x23e83c: 0xc66001ac  lwc1        $f0, 0x1AC($s3)
    ctx->pc = 0x23e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23e840:
    // 0x23e840: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x23e840u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e844:
    // 0x23e844: 0x0  nop
    ctx->pc = 0x23e844u;
    // NOP
label_23e848:
    // 0x23e848: 0x4500008d  bc1f        . + 4 + (0x8D << 2)
label_23e84c:
    if (ctx->pc == 0x23E84Cu) {
        ctx->pc = 0x23E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E848u;
        // 0x23e84c: 0x8c57020c  lw          $s7, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E850u;
        goto label_23e850;
    }
    ctx->pc = 0x23E848u;
    {
        const bool branch_taken_0x23e848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E848u;
        // 0x23e84c: 0x8c57020c  lw          $s7, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e848) {
            ctx->pc = 0x23EA80u;
            goto label_23ea80;
        }
    }
    ctx->pc = 0x23E850u;
label_23e850:
    // 0x23e850: 0x1670007b  bne         $s3, $s0, . + 4 + (0x7B << 2)
label_23e854:
    if (ctx->pc == 0x23E854u) {
        ctx->pc = 0x23E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E850u;
        // 0x23e854: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E858u;
        goto label_23e858;
    }
    ctx->pc = 0x23E850u;
    {
        const bool branch_taken_0x23e850 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x23E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E850u;
        // 0x23e854: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e850) {
            ctx->pc = 0x23EA40u;
            goto label_23ea40;
        }
    }
    ctx->pc = 0x23E858u;
label_23e858:
    // 0x23e858: 0xc08a096  jal         func_228258
label_23e85c:
    if (ctx->pc == 0x23E85Cu) {
        ctx->pc = 0x23E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E858u;
        // 0x23e85c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E860u;
        goto label_23e860;
    }
    ctx->pc = 0x23E858u;
    SET_GPR_U32(ctx, 31, 0x23E860u);
    ctx->pc = 0x23E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E858u;
    // 0x23e85c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x23E858u, 0x23E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E860u;
label_23e860:
    // 0x23e860: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_23e864:
    if (ctx->pc == 0x23E864u) {
        ctx->pc = 0x23E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E860u;
        // 0x23e864: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E868u;
        goto label_23e868;
    }
    ctx->pc = 0x23E860u;
    {
        const bool branch_taken_0x23e860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E860u;
        // 0x23e864: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e860) {
            ctx->pc = 0x23EA40u;
            goto label_23ea40;
        }
    }
    ctx->pc = 0x23E868u;
label_23e868:
    // 0x23e868: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23e868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23e86c:
    // 0x23e86c: 0xc05a776  jal         func_169DD8
label_23e870:
    if (ctx->pc == 0x23E870u) {
        ctx->pc = 0x23E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E86Cu;
        // 0x23e870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E874u;
        goto label_23e874;
    }
    ctx->pc = 0x23E86Cu;
    SET_GPR_U32(ctx, 31, 0x23E874u);
    ctx->pc = 0x23E870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E86Cu;
    // 0x23e870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DD8u, 0x23E86Cu, 0x23E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E874u;
label_23e874:
    // 0x23e874: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_23e878:
    if (ctx->pc == 0x23E878u) {
        ctx->pc = 0x23E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E874u;
        // 0x23e878: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E87Cu;
        goto label_23e87c;
    }
    ctx->pc = 0x23E874u;
    {
        const bool branch_taken_0x23e874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E874u;
        // 0x23e878: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e874) {
            ctx->pc = 0x23EA40u;
            goto label_23ea40;
        }
    }
    ctx->pc = 0x23E87Cu;
label_23e87c:
    // 0x23e87c: 0x826301b0  lb          $v1, 0x1B0($s3)
    ctx->pc = 0x23e87cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_23e880:
    // 0x23e880: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23e880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e884:
    // 0x23e884: 0x8e42489c  lw          $v0, 0x489C($s2)
    ctx->pc = 0x23e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_23e888:
    // 0x23e888: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23e88c:
    // 0x23e88c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23e890:
    // 0x23e890: 0xc05a596  jal         func_169658
label_23e894:
    if (ctx->pc == 0x23E894u) {
        ctx->pc = 0x23E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E890u;
        // 0x23e894: 0x9050041a  lbu         $s0, 0x41A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E898u;
        goto label_23e898;
    }
    ctx->pc = 0x23E890u;
    SET_GPR_U32(ctx, 31, 0x23E898u);
    ctx->pc = 0x23E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E890u;
    // 0x23e894: 0x9050041a  lbu         $s0, 0x41A($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x23E890u, 0x23E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E898u;
label_23e898:
    // 0x23e898: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23e89c:
    if (ctx->pc == 0x23E89Cu) {
        ctx->pc = 0x23E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E898u;
        // 0x23e89c: 0x10882b  sltu        $s1, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8A0u;
        goto label_23e8a0;
    }
    ctx->pc = 0x23E898u;
    {
        const bool branch_taken_0x23e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e898) {
            ctx->pc = 0x23E89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E898u;
            // 0x23e89c: 0x10882b  sltu        $s1, $zero, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E8A0u;
            goto label_23e8a0;
        }
    }
    ctx->pc = 0x23E8A0u;
label_23e8a0:
    // 0x23e8a0: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x23e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_23e8a4:
    // 0x23e8a4: 0x8e650658  lw          $a1, 0x658($s3)
    ctx->pc = 0x23e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1624)));
label_23e8a8:
    // 0x23e8a8: 0x14a0004d  bnez        $a1, . + 4 + (0x4D << 2)
label_23e8ac:
    if (ctx->pc == 0x23E8ACu) {
        ctx->pc = 0x23E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8A8u;
        // 0x23e8ac: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8B0u;
        goto label_23e8b0;
    }
    ctx->pc = 0x23E8A8u;
    {
        const bool branch_taken_0x23e8a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8A8u;
        // 0x23e8ac: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8a8) {
            ctx->pc = 0x23E9E0u;
            goto label_23e9e0;
        }
    }
    ctx->pc = 0x23E8B0u;
label_23e8b0:
    // 0x23e8b0: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_23e8b4:
    if (ctx->pc == 0x23E8B4u) {
        ctx->pc = 0x23E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8B0u;
        // 0x23e8b4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8B8u;
        goto label_23e8b8;
    }
    ctx->pc = 0x23E8B0u;
    {
        const bool branch_taken_0x23e8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8B0u;
        // 0x23e8b4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8b0) {
            ctx->pc = 0x23EA40u;
            goto label_23ea40;
        }
    }
    ctx->pc = 0x23E8B8u;
label_23e8b8:
    // 0x23e8b8: 0x16200062  bnez        $s1, . + 4 + (0x62 << 2)
label_23e8bc:
    if (ctx->pc == 0x23E8BCu) {
        ctx->pc = 0x23E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8B8u;
        // 0x23e8bc: 0x8062480c  lb          $v0, 0x480C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 18444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8C0u;
        goto label_23e8c0;
    }
    ctx->pc = 0x23E8B8u;
    {
        const bool branch_taken_0x23e8b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8B8u;
        // 0x23e8bc: 0x8062480c  lb          $v0, 0x480C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 18444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8b8) {
            ctx->pc = 0x23EA44u;
            goto label_23ea44;
        }
    }
    ctx->pc = 0x23E8C0u;
label_23e8c0:
    // 0x23e8c0: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x23e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_23e8c4:
    // 0x23e8c4: 0x1600003f  bnez        $s0, . + 4 + (0x3F << 2)
label_23e8c8:
    if (ctx->pc == 0x23E8C8u) {
        ctx->pc = 0x23E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C4u;
        // 0x23e8c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8CCu;
        goto label_23e8cc;
    }
    ctx->pc = 0x23E8C4u;
    {
        const bool branch_taken_0x23e8c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C4u;
        // 0x23e8c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8c4) {
            ctx->pc = 0x23E9C4u;
            goto label_23e9c4;
        }
    }
    ctx->pc = 0x23E8CCu;
label_23e8cc:
    // 0x23e8cc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x23e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_23e8d0:
    // 0x23e8d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23e8d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e8d4:
    // 0x23e8d4: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x23e8d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_23e8d8:
    // 0x23e8d8: 0x26fe0048  addiu       $fp, $s7, 0x48
    ctx->pc = 0x23e8d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_23e8dc:
    // 0x23e8dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23e8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e8e0:
    // 0x23e8e0: 0x26760090  addiu       $s6, $s3, 0x90
    ctx->pc = 0x23e8e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_23e8e4:
    // 0x23e8e4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x23e8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23e8e8:
    // 0x23e8e8: 0xc137826  jal         func_4DE098
label_23e8ec:
    if (ctx->pc == 0x23E8ECu) {
        ctx->pc = 0x23E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8E8u;
        // 0x23e8ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8F0u;
        goto label_23e8f0;
    }
    ctx->pc = 0x23E8E8u;
    SET_GPR_U32(ctx, 31, 0x23E8F0u);
    ctx->pc = 0x23E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8E8u;
    // 0x23e8ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x23E8E8u, 0x23E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8F0u;
label_23e8f0:
    // 0x23e8f0: 0xc0e409a  jal         func_390268
label_23e8f4:
    if (ctx->pc == 0x23E8F4u) {
        ctx->pc = 0x23E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8F0u;
        // 0x23e8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8F8u;
        goto label_23e8f8;
    }
    ctx->pc = 0x23E8F0u;
    SET_GPR_U32(ctx, 31, 0x23E8F8u);
    ctx->pc = 0x23E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8F0u;
    // 0x23e8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23E8F0u, 0x23E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8F8u;
label_23e8f8:
    // 0x23e8f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e8fc:
    // 0x23e8fc: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_23e900:
    if (ctx->pc == 0x23E900u) {
        ctx->pc = 0x23E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8FCu;
        // 0x23e900: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E904u;
        goto label_23e904;
    }
    ctx->pc = 0x23E8FCu;
    {
        const bool branch_taken_0x23e8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8fc) {
            ctx->pc = 0x23E900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E8FCu;
            // 0x23e900: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E970u;
            goto label_23e970;
        }
    }
    ctx->pc = 0x23E904u;
label_23e904:
    // 0x23e904: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x23e904u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_23e908:
    // 0x23e908: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23e908u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23e90c:
    // 0x23e90c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_23e910:
    if (ctx->pc == 0x23E910u) {
        ctx->pc = 0x23E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E90Cu;
        // 0x23e910: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E914u;
        goto label_23e914;
    }
    ctx->pc = 0x23E90Cu;
    {
        const bool branch_taken_0x23e90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E90Cu;
        // 0x23e910: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e90c) {
            ctx->pc = 0x23E96Cu;
            goto label_23e96c;
        }
    }
    ctx->pc = 0x23E914u;
label_23e914:
    // 0x23e914: 0xc08a096  jal         func_228258
label_23e918:
    if (ctx->pc == 0x23E918u) {
        ctx->pc = 0x23E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E914u;
        // 0x23e918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E91Cu;
        goto label_23e91c;
    }
    ctx->pc = 0x23E914u;
    SET_GPR_U32(ctx, 31, 0x23E91Cu);
    ctx->pc = 0x23E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E914u;
    // 0x23e918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x23E914u, 0x23E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E91Cu;
label_23e91c:
    // 0x23e91c: 0x50510014  beql        $v0, $s1, . + 4 + (0x14 << 2)
label_23e920:
    if (ctx->pc == 0x23E920u) {
        ctx->pc = 0x23E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E91Cu;
        // 0x23e920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E924u;
        goto label_23e924;
    }
    ctx->pc = 0x23E91Cu;
    {
        const bool branch_taken_0x23e91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x23e91c) {
            ctx->pc = 0x23E920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E91Cu;
            // 0x23e920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E970u;
            goto label_23e970;
        }
    }
    ctx->pc = 0x23E924u;
label_23e924:
    // 0x23e924: 0xc087502  jal         func_21D408
label_23e928:
    if (ctx->pc == 0x23E928u) {
        ctx->pc = 0x23E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E924u;
        // 0x23e928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E92Cu;
        goto label_23e92c;
    }
    ctx->pc = 0x23E924u;
    SET_GPR_U32(ctx, 31, 0x23E92Cu);
    ctx->pc = 0x23E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E924u;
    // 0x23e928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23E924u, 0x23E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E92Cu;
label_23e92c:
    // 0x23e92c: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x23e92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
label_23e930:
    // 0x23e930: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_23e934:
    if (ctx->pc == 0x23E934u) {
        ctx->pc = 0x23E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E930u;
        // 0x23e934: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E938u;
        goto label_23e938;
    }
    ctx->pc = 0x23E930u;
    {
        const bool branch_taken_0x23e930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e930) {
            ctx->pc = 0x23E934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E930u;
            // 0x23e934: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E970u;
            goto label_23e970;
        }
    }
    ctx->pc = 0x23E938u;
label_23e938:
    // 0x23e938: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_23e93c:
    // 0x23e93c: 0x86c50002  lh          $a1, 0x2($s6)
    ctx->pc = 0x23e93cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_23e940:
    // 0x23e940: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_23e944:
    // 0x23e944: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x23e944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_23e948:
    // 0x23e948: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x23e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_23e94c:
    // 0x23e94c: 0xc0cdb38  jal         func_336CE0
label_23e950:
    if (ctx->pc == 0x23E950u) {
        ctx->pc = 0x23E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E94Cu;
        // 0x23e950: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E954u;
        goto label_23e954;
    }
    ctx->pc = 0x23E94Cu;
    SET_GPR_U32(ctx, 31, 0x23E954u);
    ctx->pc = 0x23E950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E94Cu;
    // 0x23e950: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x23E94Cu, 0x23E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E954u;
label_23e954:
    // 0x23e954: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23e954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e958:
    // 0x23e958: 0x0  nop
    ctx->pc = 0x23e958u;
    // NOP
label_23e95c:
    // 0x23e95c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_23e960:
    if (ctx->pc == 0x23E960u) {
        ctx->pc = 0x23E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E95Cu;
        // 0x23e960: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E964u;
        goto label_23e964;
    }
    ctx->pc = 0x23E95Cu;
    {
        const bool branch_taken_0x23e95c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e95c) {
            ctx->pc = 0x23E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E95Cu;
            // 0x23e960: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E970u;
            goto label_23e970;
        }
    }
    ctx->pc = 0x23E964u;
label_23e964:
    // 0x23e964: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23e964u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_23e968:
    // 0x23e968: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x23e968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e96c:
    // 0x23e96c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23e96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23e970:
    // 0x23e970: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x23e970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23e974:
    // 0x23e974: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_23e978:
    if (ctx->pc == 0x23E978u) {
        ctx->pc = 0x23E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E974u;
        // 0x23e978: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E97Cu;
        goto label_23e97c;
    }
    ctx->pc = 0x23E974u;
    {
        const bool branch_taken_0x23e974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E974u;
        // 0x23e978: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e974) {
            ctx->pc = 0x23E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e8e8;
        }
    }
    ctx->pc = 0x23E97Cu;
label_23e97c:
    // 0x23e97c: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_23e980:
    if (ctx->pc == 0x23E980u) {
        ctx->pc = 0x23E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E97Cu;
        // 0x23e980: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E984u;
        goto label_23e984;
    }
    ctx->pc = 0x23E97Cu;
    {
        const bool branch_taken_0x23e97c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E97Cu;
        // 0x23e980: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e97c) {
            ctx->pc = 0x23E9C4u;
            goto label_23e9c4;
        }
    }
    ctx->pc = 0x23E984u;
label_23e984:
    // 0x23e984: 0xc08ab90  jal         func_22AE40
label_23e988:
    if (ctx->pc == 0x23E988u) {
        ctx->pc = 0x23E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E984u;
        // 0x23e988: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E98Cu;
        goto label_23e98c;
    }
    ctx->pc = 0x23E984u;
    SET_GPR_U32(ctx, 31, 0x23E98Cu);
    ctx->pc = 0x23E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E984u;
    // 0x23e988: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x23E984u, 0x23E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E98Cu;
label_23e98c:
    // 0x23e98c: 0x0  nop
    ctx->pc = 0x23e98cu;
    // NOP
label_23e990:
    // 0x23e990: 0x0  nop
    ctx->pc = 0x23e990u;
    // NOP
label_23e994:
    // 0x23e994: 0x46140304  c1          0x140304
    ctx->pc = 0x23e994u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_23e998:
    // 0x23e998: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23e998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_23e99c:
    // 0x23e99c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23e99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23e9a0:
    // 0x23e9a0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x23e9a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_23e9a4:
    // 0x23e9a4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23e9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_23e9a8:
    // 0x23e9a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23e9ac:
    // 0x23e9ac: 0x0  nop
    ctx->pc = 0x23e9acu;
    // NOP
label_23e9b0:
    // 0x23e9b0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x23e9b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_23e9b4:
    // 0x23e9b4: 0xc10b1c6  jal         func_42C718
label_23e9b8:
    if (ctx->pc == 0x23E9B8u) {
        ctx->pc = 0x23E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9B4u;
        // 0x23e9b8: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9BCu;
        goto label_23e9bc;
    }
    ctx->pc = 0x23E9B4u;
    SET_GPR_U32(ctx, 31, 0x23E9BCu);
    ctx->pc = 0x23E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9B4u;
    // 0x23e9b8: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x23E9B4u, 0x23E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9BCu;
label_23e9bc:
    // 0x23e9bc: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x23e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
label_23e9c0:
    // 0x23e9c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23e9c4:
    // 0x23e9c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23e9c8:
    // 0x23e9c8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x23e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_23e9cc:
    // 0x23e9cc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_23e9d0:
    // 0x23e9d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23e9d4:
    // 0x23e9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23e9d8:
    // 0x23e9d8: 0x10000018  b           . + 4 + (0x18 << 2)
label_23e9dc:
    if (ctx->pc == 0x23E9DCu) {
        ctx->pc = 0x23E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9D8u;
        // 0x23e9dc: 0xae620658  sw          $v0, 0x658($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9E0u;
        goto label_23e9e0;
    }
    ctx->pc = 0x23E9D8u;
    {
        const bool branch_taken_0x23e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9D8u;
        // 0x23e9dc: 0xae620658  sw          $v0, 0x658($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9d8) {
            ctx->pc = 0x23EA3Cu;
            goto label_23ea3c;
        }
    }
    ctx->pc = 0x23E9E0u;
label_23e9e0:
    // 0x23e9e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e9e4:
    // 0x23e9e4: 0x50430015  beql        $v0, $v1, . + 4 + (0x15 << 2)
label_23e9e8:
    if (ctx->pc == 0x23E9E8u) {
        ctx->pc = 0x23E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9E4u;
        // 0x23e9e8: 0xae600658  sw          $zero, 0x658($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9ECu;
        goto label_23e9ec;
    }
    ctx->pc = 0x23E9E4u;
    {
        const bool branch_taken_0x23e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23e9e4) {
            ctx->pc = 0x23E9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E9E4u;
            // 0x23e9e8: 0xae600658  sw          $zero, 0x658($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA3Cu;
            goto label_23ea3c;
        }
    }
    ctx->pc = 0x23E9ECu;
label_23e9ec:
    // 0x23e9ec: 0x12230012  beq         $s1, $v1, . + 4 + (0x12 << 2)
label_23e9f0:
    if (ctx->pc == 0x23E9F0u) {
        ctx->pc = 0x23E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9ECu;
        // 0x23e9f0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9F4u;
        goto label_23e9f4;
    }
    ctx->pc = 0x23E9ECu;
    {
        const bool branch_taken_0x23e9ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x23E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9ECu;
        // 0x23e9f0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9ec) {
            ctx->pc = 0x23EA38u;
            goto label_23ea38;
        }
    }
    ctx->pc = 0x23E9F4u;
label_23e9f4:
    // 0x23e9f4: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x23e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_23e9f8:
    // 0x23e9f8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_23e9fc:
    // 0x23e9fc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x23e9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23ea00:
    // 0x23ea00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23ea04:
    if (ctx->pc == 0x23EA04u) {
        ctx->pc = 0x23EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA00u;
        // 0x23ea04: 0x8e42489c  lw          $v0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA08u;
        goto label_23ea08;
    }
    ctx->pc = 0x23EA00u;
    {
        const bool branch_taken_0x23ea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA00u;
        // 0x23ea04: 0x8e42489c  lw          $v0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea00) {
            ctx->pc = 0x23EA3Cu;
            goto label_23ea3c;
        }
    }
    ctx->pc = 0x23EA08u;
label_23ea08:
    // 0x23ea08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23ea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ea0c:
    // 0x23ea0c: 0x826301b0  lb          $v1, 0x1B0($s3)
    ctx->pc = 0x23ea0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_23ea10:
    // 0x23ea10: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23ea10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23ea14:
    // 0x23ea14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ea18:
    // 0x23ea18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23ea18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ea1c:
    // 0x23ea1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23ea20:
    // 0x23ea20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23ea20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ea24:
    // 0x23ea24: 0x9043041a  lbu         $v1, 0x41A($v0)
    ctx->pc = 0x23ea24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
label_23ea28:
    // 0x23ea28: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x23ea28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ea2c:
    // 0x23ea2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23ea30:
    // 0x23ea30: 0xc107138  jal         func_41C4E0
label_23ea34:
    if (ctx->pc == 0x23EA34u) {
        ctx->pc = 0x23EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA30u;
        // 0x23ea34: 0xa043480c  sb          $v1, 0x480C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 18444), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA38u;
        goto label_23ea38;
    }
    ctx->pc = 0x23EA30u;
    SET_GPR_U32(ctx, 31, 0x23EA38u);
    ctx->pc = 0x23EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA30u;
    // 0x23ea34: 0xa043480c  sb          $v1, 0x480C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 18444), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x23EA30u, 0x23EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA38u;
label_23ea38:
    // 0x23ea38: 0xae600658  sw          $zero, 0x658($s3)
    ctx->pc = 0x23ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1624), GPR_U32(ctx, 0));
label_23ea3c:
    // 0x23ea3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23ea40:
    // 0x23ea40: 0x8062480c  lb          $v0, 0x480C($v1)
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 18444)));
label_23ea44:
    // 0x23ea44: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_23ea48:
    if (ctx->pc == 0x23EA48u) {
        ctx->pc = 0x23EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA44u;
        // 0x23ea48: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA4Cu;
        goto label_23ea4c;
    }
    ctx->pc = 0x23EA44u;
    {
        const bool branch_taken_0x23ea44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA44u;
        // 0x23ea48: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea44) {
            ctx->pc = 0x23EA84u;
            goto label_23ea84;
        }
    }
    ctx->pc = 0x23EA4Cu;
label_23ea4c:
    // 0x23ea4c: 0x8ee50040  lw          $a1, 0x40($s7)
    ctx->pc = 0x23ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_23ea50:
    // 0x23ea50: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_23ea54:
    if (ctx->pc == 0x23EA54u) {
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA58u;
        goto label_23ea58;
    }
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23EA88u;
            goto label_23ea88;
        }
    }
    ctx->pc = 0x23EA58u;
label_23ea58:
    // 0x23ea58: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x23ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_23ea5c:
    // 0x23ea5c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_23ea60:
    // 0x23ea60: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x23ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_23ea64:
    // 0x23ea64: 0x40f809  jalr        $v0
label_23ea68:
    if (ctx->pc == 0x23EA68u) {
        ctx->pc = 0x23EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA64u;
        // 0x23ea68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA6Cu;
        goto label_23ea6c;
    }
    ctx->pc = 0x23EA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23EA6Cu);
        ctx->pc = 0x23EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA64u;
        // 0x23ea68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EA64u, 0x23EA6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EA6Cu;
label_23ea6c:
    // 0x23ea6c: 0x38420013  xori        $v0, $v0, 0x13
    ctx->pc = 0x23ea6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)19);
label_23ea70:
    // 0x23ea70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23ea74:
    if (ctx->pc == 0x23EA74u) {
        ctx->pc = 0x23EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA70u;
        // 0x23ea74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA78u;
        goto label_23ea78;
    }
    ctx->pc = 0x23EA70u;
    {
        const bool branch_taken_0x23ea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA70u;
        // 0x23ea74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea70) {
            ctx->pc = 0x23EA80u;
            goto label_23ea80;
        }
    }
    ctx->pc = 0x23EA78u;
label_23ea78:
    // 0x23ea78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23ea7c:
    // 0x23ea7c: 0xa062480c  sb          $v0, 0x480C($v1)
    ctx->pc = 0x23ea7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18444), (uint8_t)GPR_U32(ctx, 2));
label_23ea80:
    // 0x23ea80: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x23ea80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_23ea84:
    // 0x23ea84: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x23ea84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23ea88:
    // 0x23ea88: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x23ea88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23ea8c:
    // 0x23ea8c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x23ea8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23ea90:
    // 0x23ea90: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x23ea90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23ea94:
    // 0x23ea94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23ea94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23ea98:
    // 0x23ea98: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x23ea98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23ea9c:
    // 0x23ea9c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x23ea9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23eaa0:
    // 0x23eaa0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x23eaa0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23eaa4:
    // 0x23eaa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23eaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23eaa8:
    // 0x23eaa8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x23eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23eaac:
    // 0x23eaac: 0x3e00008  jr          $ra
label_23eab0:
    if (ctx->pc == 0x23EAB0u) {
        ctx->pc = 0x23EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAACu;
        // 0x23eab0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAB4u;
        goto label_23eab4;
    }
    ctx->pc = 0x23EAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAACu;
        // 0x23eab0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EAB4u;
label_23eab4:
    // 0x23eab4: 0x0  nop
    ctx->pc = 0x23eab4u;
    // NOP
    ctx->pc = 0x23eab8u;
}
