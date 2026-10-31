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

// Function: sub_00271808
// Address: 0x271808 - 0x271b30
void sub_00271808_0x271808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271808_0x271808");
#endif

    switch (ctx->pc) {
        case 0x271808u: goto label_271808;
        case 0x27180cu: goto label_27180c;
        case 0x271810u: goto label_271810;
        case 0x271814u: goto label_271814;
        case 0x271818u: goto label_271818;
        case 0x27181cu: goto label_27181c;
        case 0x271820u: goto label_271820;
        case 0x271824u: goto label_271824;
        case 0x271828u: goto label_271828;
        case 0x27182cu: goto label_27182c;
        case 0x271830u: goto label_271830;
        case 0x271834u: goto label_271834;
        case 0x271838u: goto label_271838;
        case 0x27183cu: goto label_27183c;
        case 0x271840u: goto label_271840;
        case 0x271844u: goto label_271844;
        case 0x271848u: goto label_271848;
        case 0x27184cu: goto label_27184c;
        case 0x271850u: goto label_271850;
        case 0x271854u: goto label_271854;
        case 0x271858u: goto label_271858;
        case 0x27185cu: goto label_27185c;
        case 0x271860u: goto label_271860;
        case 0x271864u: goto label_271864;
        case 0x271868u: goto label_271868;
        case 0x27186cu: goto label_27186c;
        case 0x271870u: goto label_271870;
        case 0x271874u: goto label_271874;
        case 0x271878u: goto label_271878;
        case 0x27187cu: goto label_27187c;
        case 0x271880u: goto label_271880;
        case 0x271884u: goto label_271884;
        case 0x271888u: goto label_271888;
        case 0x27188cu: goto label_27188c;
        case 0x271890u: goto label_271890;
        case 0x271894u: goto label_271894;
        case 0x271898u: goto label_271898;
        case 0x27189cu: goto label_27189c;
        case 0x2718a0u: goto label_2718a0;
        case 0x2718a4u: goto label_2718a4;
        case 0x2718a8u: goto label_2718a8;
        case 0x2718acu: goto label_2718ac;
        case 0x2718b0u: goto label_2718b0;
        case 0x2718b4u: goto label_2718b4;
        case 0x2718b8u: goto label_2718b8;
        case 0x2718bcu: goto label_2718bc;
        case 0x2718c0u: goto label_2718c0;
        case 0x2718c4u: goto label_2718c4;
        case 0x2718c8u: goto label_2718c8;
        case 0x2718ccu: goto label_2718cc;
        case 0x2718d0u: goto label_2718d0;
        case 0x2718d4u: goto label_2718d4;
        case 0x2718d8u: goto label_2718d8;
        case 0x2718dcu: goto label_2718dc;
        case 0x2718e0u: goto label_2718e0;
        case 0x2718e4u: goto label_2718e4;
        case 0x2718e8u: goto label_2718e8;
        case 0x2718ecu: goto label_2718ec;
        case 0x2718f0u: goto label_2718f0;
        case 0x2718f4u: goto label_2718f4;
        case 0x2718f8u: goto label_2718f8;
        case 0x2718fcu: goto label_2718fc;
        case 0x271900u: goto label_271900;
        case 0x271904u: goto label_271904;
        case 0x271908u: goto label_271908;
        case 0x27190cu: goto label_27190c;
        case 0x271910u: goto label_271910;
        case 0x271914u: goto label_271914;
        case 0x271918u: goto label_271918;
        case 0x27191cu: goto label_27191c;
        case 0x271920u: goto label_271920;
        case 0x271924u: goto label_271924;
        case 0x271928u: goto label_271928;
        case 0x27192cu: goto label_27192c;
        case 0x271930u: goto label_271930;
        case 0x271934u: goto label_271934;
        case 0x271938u: goto label_271938;
        case 0x27193cu: goto label_27193c;
        case 0x271940u: goto label_271940;
        case 0x271944u: goto label_271944;
        case 0x271948u: goto label_271948;
        case 0x27194cu: goto label_27194c;
        case 0x271950u: goto label_271950;
        case 0x271954u: goto label_271954;
        case 0x271958u: goto label_271958;
        case 0x27195cu: goto label_27195c;
        case 0x271960u: goto label_271960;
        case 0x271964u: goto label_271964;
        case 0x271968u: goto label_271968;
        case 0x27196cu: goto label_27196c;
        case 0x271970u: goto label_271970;
        case 0x271974u: goto label_271974;
        case 0x271978u: goto label_271978;
        case 0x27197cu: goto label_27197c;
        case 0x271980u: goto label_271980;
        case 0x271984u: goto label_271984;
        case 0x271988u: goto label_271988;
        case 0x27198cu: goto label_27198c;
        case 0x271990u: goto label_271990;
        case 0x271994u: goto label_271994;
        case 0x271998u: goto label_271998;
        case 0x27199cu: goto label_27199c;
        case 0x2719a0u: goto label_2719a0;
        case 0x2719a4u: goto label_2719a4;
        case 0x2719a8u: goto label_2719a8;
        case 0x2719acu: goto label_2719ac;
        case 0x2719b0u: goto label_2719b0;
        case 0x2719b4u: goto label_2719b4;
        case 0x2719b8u: goto label_2719b8;
        case 0x2719bcu: goto label_2719bc;
        case 0x2719c0u: goto label_2719c0;
        case 0x2719c4u: goto label_2719c4;
        case 0x2719c8u: goto label_2719c8;
        case 0x2719ccu: goto label_2719cc;
        case 0x2719d0u: goto label_2719d0;
        case 0x2719d4u: goto label_2719d4;
        case 0x2719d8u: goto label_2719d8;
        case 0x2719dcu: goto label_2719dc;
        case 0x2719e0u: goto label_2719e0;
        case 0x2719e4u: goto label_2719e4;
        case 0x2719e8u: goto label_2719e8;
        case 0x2719ecu: goto label_2719ec;
        case 0x2719f0u: goto label_2719f0;
        case 0x2719f4u: goto label_2719f4;
        case 0x2719f8u: goto label_2719f8;
        case 0x2719fcu: goto label_2719fc;
        case 0x271a00u: goto label_271a00;
        case 0x271a04u: goto label_271a04;
        case 0x271a08u: goto label_271a08;
        case 0x271a0cu: goto label_271a0c;
        case 0x271a10u: goto label_271a10;
        case 0x271a14u: goto label_271a14;
        case 0x271a18u: goto label_271a18;
        case 0x271a1cu: goto label_271a1c;
        case 0x271a20u: goto label_271a20;
        case 0x271a24u: goto label_271a24;
        case 0x271a28u: goto label_271a28;
        case 0x271a2cu: goto label_271a2c;
        case 0x271a30u: goto label_271a30;
        case 0x271a34u: goto label_271a34;
        case 0x271a38u: goto label_271a38;
        case 0x271a3cu: goto label_271a3c;
        case 0x271a40u: goto label_271a40;
        case 0x271a44u: goto label_271a44;
        case 0x271a48u: goto label_271a48;
        case 0x271a4cu: goto label_271a4c;
        case 0x271a50u: goto label_271a50;
        case 0x271a54u: goto label_271a54;
        case 0x271a58u: goto label_271a58;
        case 0x271a5cu: goto label_271a5c;
        case 0x271a60u: goto label_271a60;
        case 0x271a64u: goto label_271a64;
        case 0x271a68u: goto label_271a68;
        case 0x271a6cu: goto label_271a6c;
        case 0x271a70u: goto label_271a70;
        case 0x271a74u: goto label_271a74;
        case 0x271a78u: goto label_271a78;
        case 0x271a7cu: goto label_271a7c;
        case 0x271a80u: goto label_271a80;
        case 0x271a84u: goto label_271a84;
        case 0x271a88u: goto label_271a88;
        case 0x271a8cu: goto label_271a8c;
        case 0x271a90u: goto label_271a90;
        case 0x271a94u: goto label_271a94;
        case 0x271a98u: goto label_271a98;
        case 0x271a9cu: goto label_271a9c;
        case 0x271aa0u: goto label_271aa0;
        case 0x271aa4u: goto label_271aa4;
        case 0x271aa8u: goto label_271aa8;
        case 0x271aacu: goto label_271aac;
        case 0x271ab0u: goto label_271ab0;
        case 0x271ab4u: goto label_271ab4;
        case 0x271ab8u: goto label_271ab8;
        case 0x271abcu: goto label_271abc;
        case 0x271ac0u: goto label_271ac0;
        case 0x271ac4u: goto label_271ac4;
        case 0x271ac8u: goto label_271ac8;
        case 0x271accu: goto label_271acc;
        case 0x271ad0u: goto label_271ad0;
        case 0x271ad4u: goto label_271ad4;
        case 0x271ad8u: goto label_271ad8;
        case 0x271adcu: goto label_271adc;
        case 0x271ae0u: goto label_271ae0;
        case 0x271ae4u: goto label_271ae4;
        case 0x271ae8u: goto label_271ae8;
        case 0x271aecu: goto label_271aec;
        case 0x271af0u: goto label_271af0;
        case 0x271af4u: goto label_271af4;
        case 0x271af8u: goto label_271af8;
        case 0x271afcu: goto label_271afc;
        case 0x271b00u: goto label_271b00;
        case 0x271b04u: goto label_271b04;
        case 0x271b08u: goto label_271b08;
        case 0x271b0cu: goto label_271b0c;
        case 0x271b10u: goto label_271b10;
        case 0x271b14u: goto label_271b14;
        case 0x271b18u: goto label_271b18;
        case 0x271b1cu: goto label_271b1c;
        case 0x271b20u: goto label_271b20;
        case 0x271b24u: goto label_271b24;
        case 0x271b28u: goto label_271b28;
        case 0x271b2cu: goto label_271b2c;
        default: break;
    }

    ctx->pc = 0x271808u;

label_271808:
    // 0x271808: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x271808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_27180c:
    // 0x27180c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x27180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_271810:
    // 0x271810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x271810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271814:
    // 0x271814: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x271814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_271818:
    // 0x271818: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x271818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_27181c:
    // 0x27181c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x27181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_271820:
    // 0x271820: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x271820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_271824:
    // 0x271824: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_271828:
    // 0x271828: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x271828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_27182c:
    // 0x27182c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x27182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_271830:
    // 0x271830: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x271830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_271834:
    // 0x271834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_271838:
    // 0x271838: 0xc0e409a  jal         func_390268
label_27183c:
    if (ctx->pc == 0x27183Cu) {
        ctx->pc = 0x27183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271838u;
        // 0x27183c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271840u;
        goto label_271840;
    }
    ctx->pc = 0x271838u;
    SET_GPR_U32(ctx, 31, 0x271840u);
    ctx->pc = 0x27183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271838u;
    // 0x27183c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x271838u, 0x271840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271840u;
label_271840:
    // 0x271840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271844:
    // 0x271844: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x271844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_271848:
    // 0x271848: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x271848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_27184c:
    // 0x27184c: 0x2610e250  addiu       $s0, $s0, -0x1DB0
    ctx->pc = 0x27184cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959696));
label_271850:
    // 0x271850: 0x8e3700d8  lw          $s7, 0xD8($s1)
    ctx->pc = 0x271850u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_271854:
    // 0x271854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271858:
    // 0x271858: 0xc041532  jal         func_1054C8
label_27185c:
    if (ctx->pc == 0x27185Cu) {
        ctx->pc = 0x27185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271858u;
        // 0x27185c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271860u;
        goto label_271860;
    }
    ctx->pc = 0x271858u;
    SET_GPR_U32(ctx, 31, 0x271860u);
    ctx->pc = 0x27185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271858u;
    // 0x27185c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271858u, 0x271860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271860u;
label_271860:
    // 0x271860: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x271860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271864:
    // 0x271864: 0xc041532  jal         func_1054C8
label_271868:
    if (ctx->pc == 0x271868u) {
        ctx->pc = 0x271868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271864u;
        // 0x271868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27186Cu;
        goto label_27186c;
    }
    ctx->pc = 0x271864u;
    SET_GPR_U32(ctx, 31, 0x27186Cu);
    ctx->pc = 0x271868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271864u;
    // 0x271868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271864u, 0x27186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27186Cu;
label_27186c:
    // 0x27186c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27186cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271870:
    // 0x271870: 0xc041532  jal         func_1054C8
label_271874:
    if (ctx->pc == 0x271874u) {
        ctx->pc = 0x271874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271870u;
        // 0x271874: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271878u;
        goto label_271878;
    }
    ctx->pc = 0x271870u;
    SET_GPR_U32(ctx, 31, 0x271878u);
    ctx->pc = 0x271874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271870u;
    // 0x271874: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271870u, 0x271878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271878u;
label_271878:
    // 0x271878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27187c:
    // 0x27187c: 0xc041532  jal         func_1054C8
label_271880:
    if (ctx->pc == 0x271880u) {
        ctx->pc = 0x271880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27187Cu;
        // 0x271880: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271884u;
        goto label_271884;
    }
    ctx->pc = 0x27187Cu;
    SET_GPR_U32(ctx, 31, 0x271884u);
    ctx->pc = 0x271880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27187Cu;
    // 0x271880: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27187Cu, 0x271884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271884u;
label_271884:
    // 0x271884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271888:
    // 0x271888: 0xc041532  jal         func_1054C8
label_27188c:
    if (ctx->pc == 0x27188Cu) {
        ctx->pc = 0x27188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271888u;
        // 0x27188c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271890u;
        goto label_271890;
    }
    ctx->pc = 0x271888u;
    SET_GPR_U32(ctx, 31, 0x271890u);
    ctx->pc = 0x27188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271888u;
    // 0x27188c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271888u, 0x271890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271890u;
label_271890:
    // 0x271890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271894:
    // 0x271894: 0xc041532  jal         func_1054C8
label_271898:
    if (ctx->pc == 0x271898u) {
        ctx->pc = 0x271898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271894u;
        // 0x271898: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27189Cu;
        goto label_27189c;
    }
    ctx->pc = 0x271894u;
    SET_GPR_U32(ctx, 31, 0x27189Cu);
    ctx->pc = 0x271898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271894u;
    // 0x271898: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271894u, 0x27189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27189Cu;
label_27189c:
    // 0x27189c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2718a0:
    // 0x2718a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2718a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2718a4:
    // 0x2718a4: 0xc08b0e2  jal         func_22C388
label_2718a8:
    if (ctx->pc == 0x2718A8u) {
        ctx->pc = 0x2718A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718A4u;
        // 0x2718a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2718ACu;
        goto label_2718ac;
    }
    ctx->pc = 0x2718A4u;
    SET_GPR_U32(ctx, 31, 0x2718ACu);
    ctx->pc = 0x2718A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718A4u;
    // 0x2718a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x2718A4u, 0x2718ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718ACu;
label_2718ac:
    // 0x2718ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2718acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2718b0:
    // 0x2718b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2718b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2718b4:
    // 0x2718b4: 0xc08b1cc  jal         func_22C730
label_2718b8:
    if (ctx->pc == 0x2718B8u) {
        ctx->pc = 0x2718B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718B4u;
        // 0x2718b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2718BCu;
        goto label_2718bc;
    }
    ctx->pc = 0x2718B4u;
    SET_GPR_U32(ctx, 31, 0x2718BCu);
    ctx->pc = 0x2718B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718B4u;
    // 0x2718b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C730u, 0x2718B4u, 0x2718BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718BCu;
label_2718bc:
    // 0x2718bc: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_2718c0:
    if (ctx->pc == 0x2718C0u) {
        ctx->pc = 0x2718C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718BCu;
        // 0x2718c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2718C4u;
        goto label_2718c4;
    }
    ctx->pc = 0x2718BCu;
    {
        const bool branch_taken_0x2718bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718BCu;
        // 0x2718c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718bc) {
            ctx->pc = 0x2718F8u;
            goto label_2718f8;
        }
    }
    ctx->pc = 0x2718C4u;
label_2718c4:
    // 0x2718c4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2718c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2718c8:
    // 0x2718c8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2718c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2718cc:
    // 0x2718cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2718ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2718d0:
    // 0x2718d0: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x2718d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2718d4:
    // 0x2718d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2718d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2718d8:
    // 0x2718d8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2718d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2718dc:
    // 0x2718dc: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2718dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2718e0:
    // 0x2718e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2718e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2718e4:
    // 0x2718e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2718e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2718e8:
    // 0x2718e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2718e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2718ec:
    // 0x2718ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2718ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2718f0:
    // 0x2718f0: 0xc041bd4  jal         func_106F50
label_2718f4:
    if (ctx->pc == 0x2718F4u) {
        ctx->pc = 0x2718F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718F0u;
        // 0x2718f4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2718F8u;
        goto label_2718f8;
    }
    ctx->pc = 0x2718F0u;
    SET_GPR_U32(ctx, 31, 0x2718F8u);
    ctx->pc = 0x2718F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718F0u;
    // 0x2718f4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x2718F0u, 0x2718F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718F8u;
label_2718f8:
    // 0x2718f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2718f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2718fc:
    // 0x2718fc: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x2718fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_271900:
    // 0x271900: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x271900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_271904:
    // 0x271904: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x271904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_271908:
    // 0x271908: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x271908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_27190c:
    // 0x27190c: 0x60f809  jalr        $v1
label_271910:
    if (ctx->pc == 0x271910u) {
        ctx->pc = 0x271910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27190Cu;
        // 0x271910: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271914u;
        goto label_271914;
    }
    ctx->pc = 0x27190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x271914u);
        ctx->pc = 0x271910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27190Cu;
        // 0x271910: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27190Cu, 0x271914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271914u;
label_271914:
    // 0x271914: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x271914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_271918:
    // 0x271918: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_27191c:
    if (ctx->pc == 0x27191Cu) {
        ctx->pc = 0x27191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271918u;
        // 0x27191c: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271920u;
        goto label_271920;
    }
    ctx->pc = 0x271918u;
    {
        const bool branch_taken_0x271918 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x27191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271918u;
        // 0x27191c: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271918) {
            ctx->pc = 0x27195Cu;
            goto label_27195c;
        }
    }
    ctx->pc = 0x271920u;
label_271920:
    // 0x271920: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x271920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271924:
    // 0x271924: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271928:
    // 0x271928: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_27192c:
    // 0x27192c: 0x40f809  jalr        $v0
label_271930:
    if (ctx->pc == 0x271930u) {
        ctx->pc = 0x271930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27192Cu;
        // 0x271930: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271934u;
        goto label_271934;
    }
    ctx->pc = 0x27192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271934u);
        ctx->pc = 0x271930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27192Cu;
        // 0x271930: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27192Cu, 0x271934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271934u;
label_271934:
    // 0x271934: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x271934u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_271938:
    // 0x271938: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x271938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27193c:
    // 0x27193c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271940:
    // 0x271940: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x271940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271944:
    // 0x271944: 0x254abad8  addiu       $t2, $t2, -0x4528
    ctx->pc = 0x271944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949592));
label_271948:
    // 0x271948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27194c:
    // 0x27194c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x27194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_271950:
    // 0x271950: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x271950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_271954:
    // 0x271954: 0xc041664  jal         func_105990
label_271958:
    if (ctx->pc == 0x271958u) {
        ctx->pc = 0x271958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271954u;
        // 0x271958: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27195Cu;
        goto label_27195c;
    }
    ctx->pc = 0x271954u;
    SET_GPR_U32(ctx, 31, 0x27195Cu);
    ctx->pc = 0x271958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271954u;
    // 0x271958: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x271954u, 0x27195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27195Cu;
label_27195c:
    // 0x27195c: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_271960:
    if (ctx->pc == 0x271960u) {
        ctx->pc = 0x271960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27195Cu;
        // 0x271960: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271964u;
        goto label_271964;
    }
    ctx->pc = 0x27195Cu;
    {
        const bool branch_taken_0x27195c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x271960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27195Cu;
        // 0x271960: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27195c) {
            ctx->pc = 0x271984u;
            goto label_271984;
        }
    }
    ctx->pc = 0x271964u;
label_271964:
    // 0x271964: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x271964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_271968:
    // 0x271968: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27196c:
    // 0x27196c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271970:
    // 0x271970: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x271970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_271974:
    // 0x271974: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_271978:
    // 0x271978: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27197c:
    // 0x27197c: 0xc041b20  jal         func_106C80
label_271980:
    if (ctx->pc == 0x271980u) {
        ctx->pc = 0x271980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27197Cu;
        // 0x271980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271984u;
        goto label_271984;
    }
    ctx->pc = 0x27197Cu;
    SET_GPR_U32(ctx, 31, 0x271984u);
    ctx->pc = 0x271980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27197Cu;
    // 0x271980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x27197Cu, 0x271984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271984u;
label_271984:
    // 0x271984: 0xc05d484  jal         func_175210
label_271988:
    if (ctx->pc == 0x271988u) {
        ctx->pc = 0x271988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271984u;
        // 0x271988: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27198Cu;
        goto label_27198c;
    }
    ctx->pc = 0x271984u;
    SET_GPR_U32(ctx, 31, 0x27198Cu);
    ctx->pc = 0x271988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271984u;
    // 0x271988: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x271984u, 0x27198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27198Cu;
label_27198c:
    // 0x27198c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271990:
    // 0x271990: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_271994:
    // 0x271994: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x271994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_271998:
    // 0x271998: 0xa0f809  jalr        $a1
label_27199c:
    if (ctx->pc == 0x27199Cu) {
        ctx->pc = 0x27199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271998u;
        // 0x27199c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2719A0u;
        goto label_2719a0;
    }
    ctx->pc = 0x271998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2719A0u);
        ctx->pc = 0x27199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271998u;
        // 0x27199c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271998u, 0x2719A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2719A0u;
label_2719a0:
    // 0x2719a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2719a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2719a4:
    // 0x2719a4: 0xc087016  jal         func_21C058
label_2719a8:
    if (ctx->pc == 0x2719A8u) {
        ctx->pc = 0x2719A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719A4u;
        // 0x2719a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2719ACu;
        goto label_2719ac;
    }
    ctx->pc = 0x2719A4u;
    SET_GPR_U32(ctx, 31, 0x2719ACu);
    ctx->pc = 0x2719A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2719A4u;
    // 0x2719a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2719A4u, 0x2719ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719ACu;
label_2719ac:
    // 0x2719ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2719acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2719b0:
    // 0x2719b0: 0xc089990  jal         func_226640
label_2719b4:
    if (ctx->pc == 0x2719B4u) {
        ctx->pc = 0x2719B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719B0u;
        // 0x2719b4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2719B8u;
        goto label_2719b8;
    }
    ctx->pc = 0x2719B0u;
    SET_GPR_U32(ctx, 31, 0x2719B8u);
    ctx->pc = 0x2719B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2719B0u;
    // 0x2719b4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2719B0u, 0x2719B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719B8u;
label_2719b8:
    // 0x2719b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2719b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2719bc:
    // 0x2719bc: 0xc05d53a  jal         func_1754E8
label_2719c0:
    if (ctx->pc == 0x2719C0u) {
        ctx->pc = 0x2719C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719BCu;
        // 0x2719c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2719C4u;
        goto label_2719c4;
    }
    ctx->pc = 0x2719BCu;
    SET_GPR_U32(ctx, 31, 0x2719C4u);
    ctx->pc = 0x2719C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2719BCu;
    // 0x2719c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2719BCu, 0x2719C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719C4u;
label_2719c4:
    // 0x2719c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2719c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2719c8:
    // 0x2719c8: 0xc05d4f6  jal         func_1753D8
label_2719cc:
    if (ctx->pc == 0x2719CCu) {
        ctx->pc = 0x2719CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719C8u;
        // 0x2719cc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2719D0u;
        goto label_2719d0;
    }
    ctx->pc = 0x2719C8u;
    SET_GPR_U32(ctx, 31, 0x2719D0u);
    ctx->pc = 0x2719CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2719C8u;
    // 0x2719cc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2719C8u, 0x2719D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719D0u;
label_2719d0:
    // 0x2719d0: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_2719d4:
    if (ctx->pc == 0x2719D4u) {
        ctx->pc = 0x2719D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719D0u;
        // 0x2719d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2719D8u;
        goto label_2719d8;
    }
    ctx->pc = 0x2719D0u;
    {
        const bool branch_taken_0x2719d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719D0u;
        // 0x2719d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719d0) {
            ctx->pc = 0x271A0Cu;
            goto label_271a0c;
        }
    }
    ctx->pc = 0x2719D8u;
label_2719d8:
    // 0x2719d8: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2719d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2719dc:
    // 0x2719dc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2719dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2719e0:
    // 0x2719e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2719e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2719e4:
    // 0x2719e4: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x2719e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2719e8:
    // 0x2719e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2719e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2719ec:
    // 0x2719ec: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x2719ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2719f0:
    // 0x2719f0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2719f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2719f4:
    // 0x2719f4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2719f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2719f8:
    // 0x2719f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2719f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2719fc:
    // 0x2719fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2719fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_271a00:
    // 0x271a00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x271a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_271a04:
    // 0x271a04: 0xc041bd4  jal         func_106F50
label_271a08:
    if (ctx->pc == 0x271A08u) {
        ctx->pc = 0x271A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A04u;
        // 0x271a08: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A0Cu;
        goto label_271a0c;
    }
    ctx->pc = 0x271A04u;
    SET_GPR_U32(ctx, 31, 0x271A0Cu);
    ctx->pc = 0x271A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A04u;
    // 0x271a08: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x271A04u, 0x271A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A0Cu;
label_271a0c:
    // 0x271a0c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x271a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_271a10:
    // 0x271a10: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x271a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_271a14:
    // 0x271a14: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x271a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_271a18:
    // 0x271a18: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x271a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_271a1c:
    // 0x271a1c: 0x60f809  jalr        $v1
label_271a20:
    if (ctx->pc == 0x271A20u) {
        ctx->pc = 0x271A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A1Cu;
        // 0x271a20: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A24u;
        goto label_271a24;
    }
    ctx->pc = 0x271A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x271A24u);
        ctx->pc = 0x271A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A1Cu;
        // 0x271a20: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A1Cu, 0x271A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271A24u;
label_271a24:
    // 0x271a24: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x271a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_271a28:
    // 0x271a28: 0x13c00016  beqz        $fp, . + 4 + (0x16 << 2)
label_271a2c:
    if (ctx->pc == 0x271A2Cu) {
        ctx->pc = 0x271A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A28u;
        // 0x271a2c: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A30u;
        goto label_271a30;
    }
    ctx->pc = 0x271A28u;
    {
        const bool branch_taken_0x271a28 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A28u;
        // 0x271a2c: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a28) {
            ctx->pc = 0x271A84u;
            goto label_271a84;
        }
    }
    ctx->pc = 0x271A30u;
label_271a30:
    // 0x271a30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x271a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271a34:
    // 0x271a34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271a38:
    // 0x271a38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271a3c:
    // 0x271a3c: 0x40f809  jalr        $v0
label_271a40:
    if (ctx->pc == 0x271A40u) {
        ctx->pc = 0x271A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A3Cu;
        // 0x271a40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A44u;
        goto label_271a44;
    }
    ctx->pc = 0x271A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271A44u);
        ctx->pc = 0x271A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A3Cu;
        // 0x271a40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A3Cu, 0x271A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271A44u;
label_271a44:
    // 0x271a44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x271a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_271a48:
    // 0x271a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271a4c:
    // 0x271a4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271a50:
    // 0x271a50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271a54:
    // 0x271a54: 0x40f809  jalr        $v0
label_271a58:
    if (ctx->pc == 0x271A58u) {
        ctx->pc = 0x271A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A54u;
        // 0x271a58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A5Cu;
        goto label_271a5c;
    }
    ctx->pc = 0x271A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271A5Cu);
        ctx->pc = 0x271A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A54u;
        // 0x271a58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A54u, 0x271A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271A5Cu;
label_271a5c:
    // 0x271a5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x271a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271a60:
    // 0x271a60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x271a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271a64:
    // 0x271a64: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x271a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_271a68:
    // 0x271a68: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x271a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271a6c:
    // 0x271a6c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x271a6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271a70:
    // 0x271a70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x271a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_271a74:
    // 0x271a74: 0x240700f9  addiu       $a3, $zero, 0xF9
    ctx->pc = 0x271a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_271a78:
    // 0x271a78: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x271a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_271a7c:
    // 0x271a7c: 0xc04229e  jal         func_108A78
label_271a80:
    if (ctx->pc == 0x271A80u) {
        ctx->pc = 0x271A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A7Cu;
        // 0x271a80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A84u;
        goto label_271a84;
    }
    ctx->pc = 0x271A7Cu;
    SET_GPR_U32(ctx, 31, 0x271A84u);
    ctx->pc = 0x271A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A7Cu;
    // 0x271a80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x271A7Cu, 0x271A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A84u;
label_271a84:
    // 0x271a84: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x271a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_271a88:
    // 0x271a88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_271a8c:
    if (ctx->pc == 0x271A8Cu) {
        ctx->pc = 0x271A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A88u;
        // 0x271a8c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271A90u;
        goto label_271a90;
    }
    ctx->pc = 0x271A88u;
    {
        const bool branch_taken_0x271a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A88u;
        // 0x271a8c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a88) {
            ctx->pc = 0x271AB0u;
            goto label_271ab0;
        }
    }
    ctx->pc = 0x271A90u;
label_271a90:
    // 0x271a90: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x271a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_271a94:
    // 0x271a94: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271a98:
    // 0x271a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271a9c:
    // 0x271a9c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x271a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_271aa0:
    // 0x271aa0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_271aa4:
    // 0x271aa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271aa8:
    // 0x271aa8: 0xc041b20  jal         func_106C80
label_271aac:
    if (ctx->pc == 0x271AACu) {
        ctx->pc = 0x271AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AA8u;
        // 0x271aac: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AB0u;
        goto label_271ab0;
    }
    ctx->pc = 0x271AA8u;
    SET_GPR_U32(ctx, 31, 0x271AB0u);
    ctx->pc = 0x271AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271AA8u;
    // 0x271aac: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x271AA8u, 0x271AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AB0u;
label_271ab0:
    // 0x271ab0: 0xc05d484  jal         func_175210
label_271ab4:
    if (ctx->pc == 0x271AB4u) {
        ctx->pc = 0x271AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AB0u;
        // 0x271ab4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AB8u;
        goto label_271ab8;
    }
    ctx->pc = 0x271AB0u;
    SET_GPR_U32(ctx, 31, 0x271AB8u);
    ctx->pc = 0x271AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271AB0u;
    // 0x271ab4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x271AB0u, 0x271AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AB8u;
label_271ab8:
    // 0x271ab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x271ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271abc:
    // 0x271abc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_271ac0:
    // 0x271ac0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x271ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_271ac4:
    // 0x271ac4: 0xa0f809  jalr        $a1
label_271ac8:
    if (ctx->pc == 0x271AC8u) {
        ctx->pc = 0x271AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AC4u;
        // 0x271ac8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271ACCu;
        goto label_271acc;
    }
    ctx->pc = 0x271AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x271ACCu);
        ctx->pc = 0x271AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AC4u;
        // 0x271ac8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271AC4u, 0x271ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271ACCu;
label_271acc:
    // 0x271acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271ad0:
    // 0x271ad0: 0xc087016  jal         func_21C058
label_271ad4:
    if (ctx->pc == 0x271AD4u) {
        ctx->pc = 0x271AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AD0u;
        // 0x271ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AD8u;
        goto label_271ad8;
    }
    ctx->pc = 0x271AD0u;
    SET_GPR_U32(ctx, 31, 0x271AD8u);
    ctx->pc = 0x271AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271AD0u;
    // 0x271ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x271AD0u, 0x271AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AD8u;
label_271ad8:
    // 0x271ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271adc:
    // 0x271adc: 0xc089990  jal         func_226640
label_271ae0:
    if (ctx->pc == 0x271AE0u) {
        ctx->pc = 0x271AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271ADCu;
        // 0x271ae0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AE4u;
        goto label_271ae4;
    }
    ctx->pc = 0x271ADCu;
    SET_GPR_U32(ctx, 31, 0x271AE4u);
    ctx->pc = 0x271AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271ADCu;
    // 0x271ae0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x271ADCu, 0x271AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AE4u;
label_271ae4:
    // 0x271ae4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x271ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_271ae8:
    // 0x271ae8: 0xc05d53a  jal         func_1754E8
label_271aec:
    if (ctx->pc == 0x271AECu) {
        ctx->pc = 0x271AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AE8u;
        // 0x271aec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AF0u;
        goto label_271af0;
    }
    ctx->pc = 0x271AE8u;
    SET_GPR_U32(ctx, 31, 0x271AF0u);
    ctx->pc = 0x271AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271AE8u;
    // 0x271aec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x271AE8u, 0x271AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AF0u;
label_271af0:
    // 0x271af0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x271af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_271af4:
    // 0x271af4: 0xc05d4f6  jal         func_1753D8
label_271af8:
    if (ctx->pc == 0x271AF8u) {
        ctx->pc = 0x271AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AF4u;
        // 0x271af8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271AFCu;
        goto label_271afc;
    }
    ctx->pc = 0x271AF4u;
    SET_GPR_U32(ctx, 31, 0x271AFCu);
    ctx->pc = 0x271AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271AF4u;
    // 0x271af8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x271AF4u, 0x271AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AFCu;
label_271afc:
    // 0x271afc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x271afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_271b00:
    // 0x271b00: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x271b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_271b04:
    // 0x271b04: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x271b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_271b08:
    // 0x271b08: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x271b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_271b0c:
    // 0x271b0c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x271b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_271b10:
    // 0x271b10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271b10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_271b14:
    // 0x271b14: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x271b14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_271b18:
    // 0x271b18: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x271b18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_271b1c:
    // 0x271b1c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x271b1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_271b20:
    // 0x271b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_271b24:
    // 0x271b24: 0x3e00008  jr          $ra
label_271b28:
    if (ctx->pc == 0x271B28u) {
        ctx->pc = 0x271B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B24u;
        // 0x271b28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B2Cu;
        goto label_271b2c;
    }
    ctx->pc = 0x271B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B24u;
        // 0x271b28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271B2Cu;
label_271b2c:
    // 0x271b2c: 0x0  nop
    ctx->pc = 0x271b2cu;
    // NOP
    ctx->pc = 0x271b30u;
}
