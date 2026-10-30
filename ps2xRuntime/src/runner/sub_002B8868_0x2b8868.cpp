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

// Function: sub_002B8868
// Address: 0x2b8868 - 0x2b8a30
void sub_002B8868_0x2b8868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8868_0x2b8868");
#endif

    switch (ctx->pc) {
        case 0x2b8868u: goto label_2b8868;
        case 0x2b886cu: goto label_2b886c;
        case 0x2b8870u: goto label_2b8870;
        case 0x2b8874u: goto label_2b8874;
        case 0x2b8878u: goto label_2b8878;
        case 0x2b887cu: goto label_2b887c;
        case 0x2b8880u: goto label_2b8880;
        case 0x2b8884u: goto label_2b8884;
        case 0x2b8888u: goto label_2b8888;
        case 0x2b888cu: goto label_2b888c;
        case 0x2b8890u: goto label_2b8890;
        case 0x2b8894u: goto label_2b8894;
        case 0x2b8898u: goto label_2b8898;
        case 0x2b889cu: goto label_2b889c;
        case 0x2b88a0u: goto label_2b88a0;
        case 0x2b88a4u: goto label_2b88a4;
        case 0x2b88a8u: goto label_2b88a8;
        case 0x2b88acu: goto label_2b88ac;
        case 0x2b88b0u: goto label_2b88b0;
        case 0x2b88b4u: goto label_2b88b4;
        case 0x2b88b8u: goto label_2b88b8;
        case 0x2b88bcu: goto label_2b88bc;
        case 0x2b88c0u: goto label_2b88c0;
        case 0x2b88c4u: goto label_2b88c4;
        case 0x2b88c8u: goto label_2b88c8;
        case 0x2b88ccu: goto label_2b88cc;
        case 0x2b88d0u: goto label_2b88d0;
        case 0x2b88d4u: goto label_2b88d4;
        case 0x2b88d8u: goto label_2b88d8;
        case 0x2b88dcu: goto label_2b88dc;
        case 0x2b88e0u: goto label_2b88e0;
        case 0x2b88e4u: goto label_2b88e4;
        case 0x2b88e8u: goto label_2b88e8;
        case 0x2b88ecu: goto label_2b88ec;
        case 0x2b88f0u: goto label_2b88f0;
        case 0x2b88f4u: goto label_2b88f4;
        case 0x2b88f8u: goto label_2b88f8;
        case 0x2b88fcu: goto label_2b88fc;
        case 0x2b8900u: goto label_2b8900;
        case 0x2b8904u: goto label_2b8904;
        case 0x2b8908u: goto label_2b8908;
        case 0x2b890cu: goto label_2b890c;
        case 0x2b8910u: goto label_2b8910;
        case 0x2b8914u: goto label_2b8914;
        case 0x2b8918u: goto label_2b8918;
        case 0x2b891cu: goto label_2b891c;
        case 0x2b8920u: goto label_2b8920;
        case 0x2b8924u: goto label_2b8924;
        case 0x2b8928u: goto label_2b8928;
        case 0x2b892cu: goto label_2b892c;
        case 0x2b8930u: goto label_2b8930;
        case 0x2b8934u: goto label_2b8934;
        case 0x2b8938u: goto label_2b8938;
        case 0x2b893cu: goto label_2b893c;
        case 0x2b8940u: goto label_2b8940;
        case 0x2b8944u: goto label_2b8944;
        case 0x2b8948u: goto label_2b8948;
        case 0x2b894cu: goto label_2b894c;
        case 0x2b8950u: goto label_2b8950;
        case 0x2b8954u: goto label_2b8954;
        case 0x2b8958u: goto label_2b8958;
        case 0x2b895cu: goto label_2b895c;
        case 0x2b8960u: goto label_2b8960;
        case 0x2b8964u: goto label_2b8964;
        case 0x2b8968u: goto label_2b8968;
        case 0x2b896cu: goto label_2b896c;
        case 0x2b8970u: goto label_2b8970;
        case 0x2b8974u: goto label_2b8974;
        case 0x2b8978u: goto label_2b8978;
        case 0x2b897cu: goto label_2b897c;
        case 0x2b8980u: goto label_2b8980;
        case 0x2b8984u: goto label_2b8984;
        case 0x2b8988u: goto label_2b8988;
        case 0x2b898cu: goto label_2b898c;
        case 0x2b8990u: goto label_2b8990;
        case 0x2b8994u: goto label_2b8994;
        case 0x2b8998u: goto label_2b8998;
        case 0x2b899cu: goto label_2b899c;
        case 0x2b89a0u: goto label_2b89a0;
        case 0x2b89a4u: goto label_2b89a4;
        case 0x2b89a8u: goto label_2b89a8;
        case 0x2b89acu: goto label_2b89ac;
        case 0x2b89b0u: goto label_2b89b0;
        case 0x2b89b4u: goto label_2b89b4;
        case 0x2b89b8u: goto label_2b89b8;
        case 0x2b89bcu: goto label_2b89bc;
        case 0x2b89c0u: goto label_2b89c0;
        case 0x2b89c4u: goto label_2b89c4;
        case 0x2b89c8u: goto label_2b89c8;
        case 0x2b89ccu: goto label_2b89cc;
        case 0x2b89d0u: goto label_2b89d0;
        case 0x2b89d4u: goto label_2b89d4;
        case 0x2b89d8u: goto label_2b89d8;
        case 0x2b89dcu: goto label_2b89dc;
        case 0x2b89e0u: goto label_2b89e0;
        case 0x2b89e4u: goto label_2b89e4;
        case 0x2b89e8u: goto label_2b89e8;
        case 0x2b89ecu: goto label_2b89ec;
        case 0x2b89f0u: goto label_2b89f0;
        case 0x2b89f4u: goto label_2b89f4;
        case 0x2b89f8u: goto label_2b89f8;
        case 0x2b89fcu: goto label_2b89fc;
        case 0x2b8a00u: goto label_2b8a00;
        case 0x2b8a04u: goto label_2b8a04;
        case 0x2b8a08u: goto label_2b8a08;
        case 0x2b8a0cu: goto label_2b8a0c;
        case 0x2b8a10u: goto label_2b8a10;
        case 0x2b8a14u: goto label_2b8a14;
        case 0x2b8a18u: goto label_2b8a18;
        case 0x2b8a1cu: goto label_2b8a1c;
        case 0x2b8a20u: goto label_2b8a20;
        case 0x2b8a24u: goto label_2b8a24;
        case 0x2b8a28u: goto label_2b8a28;
        case 0x2b8a2cu: goto label_2b8a2c;
        default: break;
    }

    ctx->pc = 0x2b8868u;

label_2b8868:
    // 0x2b8868: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b8868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2b886c:
    // 0x2b886c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2b886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2b8870:
    // 0x2b8870: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2b8870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2b8874:
    // 0x2b8874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8878:
    // 0x2b8878: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2b8878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2b887c:
    // 0x2b887c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b8880:
    // 0x2b8880: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2b8880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2b8884:
    // 0x2b8884: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b8884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b8888:
    // 0x2b8888: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b8888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b888c:
    // 0x2b888c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b888cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8890:
    // 0x2b8890: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2b8890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2b8894:
    // 0x2b8894: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2b8894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2b8898:
    // 0x2b8898: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2b8898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2b889c:
    // 0x2b889c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b889cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b88a0:
    // 0x2b88a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b88a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b88a4:
    // 0x2b88a4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2b88a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2b88a8:
    // 0x2b88a8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2b88a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b88ac:
    // 0x2b88ac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2b88acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2b88b0:
    // 0x2b88b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b88b4:
    // 0x2b88b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2b88b8:
    // 0x2b88b8: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_2b88bc:
    // 0x2b88bc: 0xc0e409a  jal         func_390268
label_2b88c0:
    if (ctx->pc == 0x2B88C0u) {
        ctx->pc = 0x2B88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88BCu;
        // 0x2b88c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B88C4u;
        goto label_2b88c4;
    }
    ctx->pc = 0x2B88BCu;
    SET_GPR_U32(ctx, 31, 0x2B88C4u);
    ctx->pc = 0x2B88C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88BCu;
    // 0x2b88c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B88BCu, 0x2B88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88C4u;
label_2b88c4:
    // 0x2b88c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b88c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b88c8:
    // 0x2b88c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b88c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b88cc:
    // 0x2b88cc: 0xc0a352c  jal         func_28D4B0
label_2b88d0:
    if (ctx->pc == 0x2B88D0u) {
        ctx->pc = 0x2B88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88CCu;
        // 0x2b88d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B88D4u;
        goto label_2b88d4;
    }
    ctx->pc = 0x2B88CCu;
    SET_GPR_U32(ctx, 31, 0x2B88D4u);
    ctx->pc = 0x2B88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88CCu;
    // 0x2b88d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B88CCu, 0x2B88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88D4u;
label_2b88d4:
    // 0x2b88d4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b88d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2b88d8:
    // 0x2b88d8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b88d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2b88dc:
    // 0x2b88dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b88dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b88e0:
    // 0x2b88e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b88e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b88e4:
    // 0x2b88e4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2b88e8:
    // 0x2b88e8: 0x269e0090  addiu       $fp, $s4, 0x90
    ctx->pc = 0x2b88e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2b88ec:
    // 0x2b88ec: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2b88ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2b88f0:
    // 0x2b88f0: 0x24754b00  addiu       $s5, $v1, 0x4B00
    ctx->pc = 0x2b88f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2b88f4:
    // 0x2b88f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b88f8:
    // 0x2b88f8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b88fc:
    // 0x2b88fc: 0x24760048  addiu       $s6, $v1, 0x48
    ctx->pc = 0x2b88fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_2b8900:
    // 0x2b8900: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b8900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b8904:
    // 0x2b8904: 0x0  nop
    ctx->pc = 0x2b8904u;
    // NOP
label_2b8908:
    // 0x2b8908: 0xc137826  jal         func_4DE098
label_2b890c:
    if (ctx->pc == 0x2B890Cu) {
        ctx->pc = 0x2B890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8908u;
        // 0x2b890c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8910u;
        goto label_2b8910;
    }
    ctx->pc = 0x2B8908u;
    SET_GPR_U32(ctx, 31, 0x2B8910u);
    ctx->pc = 0x2B890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8908u;
    // 0x2b890c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2B8908u, 0x2B8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8910u;
label_2b8910:
    // 0x2b8910: 0xc0e409a  jal         func_390268
label_2b8914:
    if (ctx->pc == 0x2B8914u) {
        ctx->pc = 0x2B8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8910u;
        // 0x2b8914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8918u;
        goto label_2b8918;
    }
    ctx->pc = 0x2B8910u;
    SET_GPR_U32(ctx, 31, 0x2B8918u);
    ctx->pc = 0x2B8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8910u;
    // 0x2b8914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8910u, 0x2B8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8918u;
label_2b8918:
    // 0x2b8918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b891c:
    // 0x2b891c: 0x52000034  beql        $s0, $zero, . + 4 + (0x34 << 2)
label_2b8920:
    if (ctx->pc == 0x2B8920u) {
        ctx->pc = 0x2B8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B891Cu;
        // 0x2b8920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8924u;
        goto label_2b8924;
    }
    ctx->pc = 0x2B891Cu;
    {
        const bool branch_taken_0x2b891c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b891c) {
            ctx->pc = 0x2B8920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B891Cu;
            // 0x2b8920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F0u;
            goto label_2b89f0;
        }
    }
    ctx->pc = 0x2B8924u;
label_2b8924:
    // 0x2b8924: 0x52140032  beql        $s0, $s4, . + 4 + (0x32 << 2)
label_2b8928:
    if (ctx->pc == 0x2B8928u) {
        ctx->pc = 0x2B8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8924u;
        // 0x2b8928: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B892Cu;
        goto label_2b892c;
    }
    ctx->pc = 0x2B8924u;
    {
        const bool branch_taken_0x2b8924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x2b8924) {
            ctx->pc = 0x2B8928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8924u;
            // 0x2b8928: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F0u;
            goto label_2b89f0;
        }
    }
    ctx->pc = 0x2B892Cu;
label_2b892c:
    // 0x2b892c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2b892cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2b8930:
    // 0x2b8930: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b8930u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2b8934:
    // 0x2b8934: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2b8938:
    if (ctx->pc == 0x2B8938u) {
        ctx->pc = 0x2B8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8934u;
        // 0x2b8938: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B893Cu;
        goto label_2b893c;
    }
    ctx->pc = 0x2B8934u;
    {
        const bool branch_taken_0x2b8934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8934u;
        // 0x2b8938: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8934) {
            ctx->pc = 0x2B89ECu;
            goto label_2b89ec;
        }
    }
    ctx->pc = 0x2B893Cu;
label_2b893c:
    // 0x2b893c: 0xc08a096  jal         func_228258
label_2b8940:
    if (ctx->pc == 0x2B8940u) {
        ctx->pc = 0x2B8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B893Cu;
        // 0x2b8940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8944u;
        goto label_2b8944;
    }
    ctx->pc = 0x2B893Cu;
    SET_GPR_U32(ctx, 31, 0x2B8944u);
    ctx->pc = 0x2B8940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B893Cu;
    // 0x2b8940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2B893Cu, 0x2B8944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8944u;
label_2b8944:
    // 0x2b8944: 0x5051002a  beql        $v0, $s1, . + 4 + (0x2A << 2)
label_2b8948:
    if (ctx->pc == 0x2B8948u) {
        ctx->pc = 0x2B8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8944u;
        // 0x2b8948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B894Cu;
        goto label_2b894c;
    }
    ctx->pc = 0x2B8944u;
    {
        const bool branch_taken_0x2b8944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b8944) {
            ctx->pc = 0x2B8948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8944u;
            // 0x2b8948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F0u;
            goto label_2b89f0;
        }
    }
    ctx->pc = 0x2B894Cu;
label_2b894c:
    // 0x2b894c: 0xc08a08a  jal         func_228228
label_2b8950:
    if (ctx->pc == 0x2B8950u) {
        ctx->pc = 0x2B8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B894Cu;
        // 0x2b8950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8954u;
        goto label_2b8954;
    }
    ctx->pc = 0x2B894Cu;
    SET_GPR_U32(ctx, 31, 0x2B8954u);
    ctx->pc = 0x2B8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B894Cu;
    // 0x2b8950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2B894Cu, 0x2B8954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8954u;
label_2b8954:
    // 0x2b8954: 0x50510026  beql        $v0, $s1, . + 4 + (0x26 << 2)
label_2b8958:
    if (ctx->pc == 0x2B8958u) {
        ctx->pc = 0x2B8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8954u;
        // 0x2b8958: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B895Cu;
        goto label_2b895c;
    }
    ctx->pc = 0x2B8954u;
    {
        const bool branch_taken_0x2b8954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b8954) {
            ctx->pc = 0x2B8958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8954u;
            // 0x2b8958: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F0u;
            goto label_2b89f0;
        }
    }
    ctx->pc = 0x2B895Cu;
label_2b895c:
    // 0x2b895c: 0xc087502  jal         func_21D408
label_2b8960:
    if (ctx->pc == 0x2B8960u) {
        ctx->pc = 0x2B8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B895Cu;
        // 0x2b8960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8964u;
        goto label_2b8964;
    }
    ctx->pc = 0x2B895Cu;
    SET_GPR_U32(ctx, 31, 0x2B8964u);
    ctx->pc = 0x2B8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B895Cu;
    // 0x2b8960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B895Cu, 0x2B8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8964u;
label_2b8964:
    // 0x2b8964: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b8964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8968:
    // 0x2b8968: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2b8968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2b896c:
    // 0x2b896c: 0x4420020  bltzl       $v0, . + 4 + (0x20 << 2)
label_2b8970:
    if (ctx->pc == 0x2B8970u) {
        ctx->pc = 0x2B8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B896Cu;
        // 0x2b8970: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8974u;
        goto label_2b8974;
    }
    ctx->pc = 0x2B896Cu;
    {
        const bool branch_taken_0x2b896c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2b896c) {
            ctx->pc = 0x2B8970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B896Cu;
            // 0x2b8970: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F0u;
            goto label_2b89f0;
        }
    }
    ctx->pc = 0x2B8974u;
label_2b8974:
    // 0x2b8974: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2b8978:
    if (ctx->pc == 0x2B8978u) {
        ctx->pc = 0x2B8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8974u;
        // 0x2b8978: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B897Cu;
        goto label_2b897c;
    }
    ctx->pc = 0x2B8974u;
    {
        const bool branch_taken_0x2b8974 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8974u;
        // 0x2b8978: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8974) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B897Cu;
label_2b897c:
    // 0x2b897c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b8980:
    // 0x2b8980: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b8984:
    if (ctx->pc == 0x2B8984u) {
        ctx->pc = 0x2B8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8980u;
        // 0x2b8984: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8988u;
        goto label_2b8988;
    }
    ctx->pc = 0x2B8980u;
    {
        const bool branch_taken_0x2b8980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8980u;
        // 0x2b8984: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8980) {
            ctx->pc = 0x2B898Cu;
            goto label_2b898c;
        }
    }
    ctx->pc = 0x2B8988u;
label_2b8988:
    // 0x2b8988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b898c:
    // 0x2b898c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2b898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2b8990:
    // 0x2b8990: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2b8990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2b8994:
    // 0x2b8994: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b8998:
    // 0x2b8998: 0x40f809  jalr        $v0
label_2b899c:
    if (ctx->pc == 0x2B899Cu) {
        ctx->pc = 0x2B899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8998u;
        // 0x2b899c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89A0u;
        goto label_2b89a0;
    }
    ctx->pc = 0x2B8998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B89A0u);
        ctx->pc = 0x2B899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8998u;
        // 0x2b899c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8998u, 0x2B89A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B89A0u;
label_2b89a0:
    // 0x2b89a0: 0x38420035  xori        $v0, $v0, 0x35
    ctx->pc = 0x2b89a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)53);
label_2b89a4:
    // 0x2b89a4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2b89a8:
    if (ctx->pc == 0x2B89A8u) {
        ctx->pc = 0x2B89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89A4u;
        // 0x2b89a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89ACu;
        goto label_2b89ac;
    }
    ctx->pc = 0x2B89A4u;
    {
        const bool branch_taken_0x2b89a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b89a4) {
            ctx->pc = 0x2B89A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B89A4u;
            // 0x2b89a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F0u;
            goto label_2b89f0;
        }
    }
    ctx->pc = 0x2B89ACu;
label_2b89ac:
    // 0x2b89ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b89b0:
    // 0x2b89b0: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x2b89b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2b89b4:
    // 0x2b89b4: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2b89b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2b89b8:
    // 0x2b89b8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b89bc:
    // 0x2b89bc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b89bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b89c0:
    // 0x2b89c0: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x2b89c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_2b89c4:
    // 0x2b89c4: 0xc0cdb38  jal         func_336CE0
label_2b89c8:
    if (ctx->pc == 0x2B89C8u) {
        ctx->pc = 0x2B89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89C4u;
        // 0x2b89c8: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89CCu;
        goto label_2b89cc;
    }
    ctx->pc = 0x2B89C4u;
    SET_GPR_U32(ctx, 31, 0x2B89CCu);
    ctx->pc = 0x2B89C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89C4u;
    // 0x2b89c8: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B89C4u, 0x2B89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89CCu;
label_2b89cc:
    // 0x2b89cc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b89ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2b89d0:
    // 0x2b89d0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2b89d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b89d4:
    // 0x2b89d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b89d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b89d8:
    // 0x2b89d8: 0x0  nop
    ctx->pc = 0x2b89d8u;
    // NOP
label_2b89dc:
    // 0x2b89dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2b89e0:
    if (ctx->pc == 0x2B89E0u) {
        ctx->pc = 0x2B89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89DCu;
        // 0x2b89e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89E4u;
        goto label_2b89e4;
    }
    ctx->pc = 0x2B89DCu;
    {
        const bool branch_taken_0x2b89dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b89dc) {
            ctx->pc = 0x2B89E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B89DCu;
            // 0x2b89e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F0u;
            goto label_2b89f0;
        }
    }
    ctx->pc = 0x2B89E4u;
label_2b89e4:
    // 0x2b89e4: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2b89e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2b89e8:
    // 0x2b89e8: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2b89e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b89ec:
    // 0x2b89ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b89ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b89f0:
    // 0x2b89f0: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x2b89f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2b89f4:
    // 0x2b89f4: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
label_2b89f8:
    if (ctx->pc == 0x2B89F8u) {
        ctx->pc = 0x2B89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89F4u;
        // 0x2b89f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89FCu;
        goto label_2b89fc;
    }
    ctx->pc = 0x2B89F4u;
    {
        const bool branch_taken_0x2b89f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b89f4) {
            ctx->pc = 0x2B89F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B89F4u;
            // 0x2b89f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8908;
        }
    }
    ctx->pc = 0x2B89FCu;
label_2b89fc:
    // 0x2b89fc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2b89fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b8a00:
    // 0x2b8a00: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2b8a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b8a04:
    // 0x2b8a04: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2b8a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b8a08:
    // 0x2b8a08: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2b8a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b8a0c:
    // 0x2b8a0c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2b8a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b8a10:
    // 0x2b8a10: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2b8a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b8a14:
    // 0x2b8a14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b8a14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b8a18:
    // 0x2b8a18: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2b8a18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b8a1c:
    // 0x2b8a1c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2b8a1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b8a20:
    // 0x2b8a20: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2b8a20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b8a24:
    // 0x2b8a24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8a28:
    // 0x2b8a28: 0x3e00008  jr          $ra
label_2b8a2c:
    if (ctx->pc == 0x2B8A2Cu) {
        ctx->pc = 0x2B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A28u;
        // 0x2b8a2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A30u;
        goto label_fallthrough_0x2b8a28;
    }
    ctx->pc = 0x2B8A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A28u;
        // 0x2b8a2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b8a28:
    ctx->pc = 0x2B8A30u;
}
