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

// Function: sub_003E98E8
// Address: 0x3e98e8 - 0x3e9b08
void sub_003E98E8_0x3e98e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E98E8_0x3e98e8");
#endif

    switch (ctx->pc) {
        case 0x3e98e8u: goto label_3e98e8;
        case 0x3e98ecu: goto label_3e98ec;
        case 0x3e98f0u: goto label_3e98f0;
        case 0x3e98f4u: goto label_3e98f4;
        case 0x3e98f8u: goto label_3e98f8;
        case 0x3e98fcu: goto label_3e98fc;
        case 0x3e9900u: goto label_3e9900;
        case 0x3e9904u: goto label_3e9904;
        case 0x3e9908u: goto label_3e9908;
        case 0x3e990cu: goto label_3e990c;
        case 0x3e9910u: goto label_3e9910;
        case 0x3e9914u: goto label_3e9914;
        case 0x3e9918u: goto label_3e9918;
        case 0x3e991cu: goto label_3e991c;
        case 0x3e9920u: goto label_3e9920;
        case 0x3e9924u: goto label_3e9924;
        case 0x3e9928u: goto label_3e9928;
        case 0x3e992cu: goto label_3e992c;
        case 0x3e9930u: goto label_3e9930;
        case 0x3e9934u: goto label_3e9934;
        case 0x3e9938u: goto label_3e9938;
        case 0x3e993cu: goto label_3e993c;
        case 0x3e9940u: goto label_3e9940;
        case 0x3e9944u: goto label_3e9944;
        case 0x3e9948u: goto label_3e9948;
        case 0x3e994cu: goto label_3e994c;
        case 0x3e9950u: goto label_3e9950;
        case 0x3e9954u: goto label_3e9954;
        case 0x3e9958u: goto label_3e9958;
        case 0x3e995cu: goto label_3e995c;
        case 0x3e9960u: goto label_3e9960;
        case 0x3e9964u: goto label_3e9964;
        case 0x3e9968u: goto label_3e9968;
        case 0x3e996cu: goto label_3e996c;
        case 0x3e9970u: goto label_3e9970;
        case 0x3e9974u: goto label_3e9974;
        case 0x3e9978u: goto label_3e9978;
        case 0x3e997cu: goto label_3e997c;
        case 0x3e9980u: goto label_3e9980;
        case 0x3e9984u: goto label_3e9984;
        case 0x3e9988u: goto label_3e9988;
        case 0x3e998cu: goto label_3e998c;
        case 0x3e9990u: goto label_3e9990;
        case 0x3e9994u: goto label_3e9994;
        case 0x3e9998u: goto label_3e9998;
        case 0x3e999cu: goto label_3e999c;
        case 0x3e99a0u: goto label_3e99a0;
        case 0x3e99a4u: goto label_3e99a4;
        case 0x3e99a8u: goto label_3e99a8;
        case 0x3e99acu: goto label_3e99ac;
        case 0x3e99b0u: goto label_3e99b0;
        case 0x3e99b4u: goto label_3e99b4;
        case 0x3e99b8u: goto label_3e99b8;
        case 0x3e99bcu: goto label_3e99bc;
        case 0x3e99c0u: goto label_3e99c0;
        case 0x3e99c4u: goto label_3e99c4;
        case 0x3e99c8u: goto label_3e99c8;
        case 0x3e99ccu: goto label_3e99cc;
        case 0x3e99d0u: goto label_3e99d0;
        case 0x3e99d4u: goto label_3e99d4;
        case 0x3e99d8u: goto label_3e99d8;
        case 0x3e99dcu: goto label_3e99dc;
        case 0x3e99e0u: goto label_3e99e0;
        case 0x3e99e4u: goto label_3e99e4;
        case 0x3e99e8u: goto label_3e99e8;
        case 0x3e99ecu: goto label_3e99ec;
        case 0x3e99f0u: goto label_3e99f0;
        case 0x3e99f4u: goto label_3e99f4;
        case 0x3e99f8u: goto label_3e99f8;
        case 0x3e99fcu: goto label_3e99fc;
        case 0x3e9a00u: goto label_3e9a00;
        case 0x3e9a04u: goto label_3e9a04;
        case 0x3e9a08u: goto label_3e9a08;
        case 0x3e9a0cu: goto label_3e9a0c;
        case 0x3e9a10u: goto label_3e9a10;
        case 0x3e9a14u: goto label_3e9a14;
        case 0x3e9a18u: goto label_3e9a18;
        case 0x3e9a1cu: goto label_3e9a1c;
        case 0x3e9a20u: goto label_3e9a20;
        case 0x3e9a24u: goto label_3e9a24;
        case 0x3e9a28u: goto label_3e9a28;
        case 0x3e9a2cu: goto label_3e9a2c;
        case 0x3e9a30u: goto label_3e9a30;
        case 0x3e9a34u: goto label_3e9a34;
        case 0x3e9a38u: goto label_3e9a38;
        case 0x3e9a3cu: goto label_3e9a3c;
        case 0x3e9a40u: goto label_3e9a40;
        case 0x3e9a44u: goto label_3e9a44;
        case 0x3e9a48u: goto label_3e9a48;
        case 0x3e9a4cu: goto label_3e9a4c;
        case 0x3e9a50u: goto label_3e9a50;
        case 0x3e9a54u: goto label_3e9a54;
        case 0x3e9a58u: goto label_3e9a58;
        case 0x3e9a5cu: goto label_3e9a5c;
        case 0x3e9a60u: goto label_3e9a60;
        case 0x3e9a64u: goto label_3e9a64;
        case 0x3e9a68u: goto label_3e9a68;
        case 0x3e9a6cu: goto label_3e9a6c;
        case 0x3e9a70u: goto label_3e9a70;
        case 0x3e9a74u: goto label_3e9a74;
        case 0x3e9a78u: goto label_3e9a78;
        case 0x3e9a7cu: goto label_3e9a7c;
        case 0x3e9a80u: goto label_3e9a80;
        case 0x3e9a84u: goto label_3e9a84;
        case 0x3e9a88u: goto label_3e9a88;
        case 0x3e9a8cu: goto label_3e9a8c;
        case 0x3e9a90u: goto label_3e9a90;
        case 0x3e9a94u: goto label_3e9a94;
        case 0x3e9a98u: goto label_3e9a98;
        case 0x3e9a9cu: goto label_3e9a9c;
        case 0x3e9aa0u: goto label_3e9aa0;
        case 0x3e9aa4u: goto label_3e9aa4;
        case 0x3e9aa8u: goto label_3e9aa8;
        case 0x3e9aacu: goto label_3e9aac;
        case 0x3e9ab0u: goto label_3e9ab0;
        case 0x3e9ab4u: goto label_3e9ab4;
        case 0x3e9ab8u: goto label_3e9ab8;
        case 0x3e9abcu: goto label_3e9abc;
        case 0x3e9ac0u: goto label_3e9ac0;
        case 0x3e9ac4u: goto label_3e9ac4;
        case 0x3e9ac8u: goto label_3e9ac8;
        case 0x3e9accu: goto label_3e9acc;
        case 0x3e9ad0u: goto label_3e9ad0;
        case 0x3e9ad4u: goto label_3e9ad4;
        case 0x3e9ad8u: goto label_3e9ad8;
        case 0x3e9adcu: goto label_3e9adc;
        case 0x3e9ae0u: goto label_3e9ae0;
        case 0x3e9ae4u: goto label_3e9ae4;
        case 0x3e9ae8u: goto label_3e9ae8;
        case 0x3e9aecu: goto label_3e9aec;
        case 0x3e9af0u: goto label_3e9af0;
        case 0x3e9af4u: goto label_3e9af4;
        case 0x3e9af8u: goto label_3e9af8;
        case 0x3e9afcu: goto label_3e9afc;
        case 0x3e9b00u: goto label_3e9b00;
        case 0x3e9b04u: goto label_3e9b04;
        default: break;
    }

    ctx->pc = 0x3e98e8u;

label_3e98e8:
    // 0x3e98e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3e98e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3e98ec:
    // 0x3e98ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3e98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3e98f0:
    // 0x3e98f0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3e98f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3e98f4:
    // 0x3e98f4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3e98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3e98f8:
    // 0x3e98f8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3e98f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3e98fc:
    // 0x3e98fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e98fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9900:
    // 0x3e9900: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3e9900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3e9904:
    // 0x3e9904: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e9904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9908:
    // 0x3e9908: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e9908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e990c:
    // 0x3e990c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e9910:
    // 0x3e9910: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9914:
    // 0x3e9914: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e9918:
    // 0x3e9918: 0x40f809  jalr        $v0
label_3e991c:
    if (ctx->pc == 0x3E991Cu) {
        ctx->pc = 0x3E991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9918u;
        // 0x3e991c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9920u;
        goto label_3e9920;
    }
    ctx->pc = 0x3E9918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9920u);
        ctx->pc = 0x3E991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9918u;
        // 0x3e991c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9918u, 0x3E9920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9920u;
label_3e9920:
    // 0x3e9920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e9920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9924:
    // 0x3e9924: 0xc0ea14c  jal         func_3A8530
label_3e9928:
    if (ctx->pc == 0x3E9928u) {
        ctx->pc = 0x3E9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9924u;
        // 0x3e9928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E992Cu;
        goto label_3e992c;
    }
    ctx->pc = 0x3E9924u;
    SET_GPR_U32(ctx, 31, 0x3E992Cu);
    ctx->pc = 0x3E9928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9924u;
    // 0x3e9928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E9924u, 0x3E992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E992Cu;
label_3e992c:
    // 0x3e992c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e9930:
    // 0x3e9930: 0xc0ea12a  jal         func_3A84A8
label_3e9934:
    if (ctx->pc == 0x3E9934u) {
        ctx->pc = 0x3E9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9930u;
        // 0x3e9934: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9938u;
        goto label_3e9938;
    }
    ctx->pc = 0x3E9930u;
    SET_GPR_U32(ctx, 31, 0x3E9938u);
    ctx->pc = 0x3E9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9930u;
    // 0x3e9934: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E9930u, 0x3E9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9938u;
label_3e9938:
    // 0x3e9938: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e9938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e993c:
    // 0x3e993c: 0xc0ea12a  jal         func_3A84A8
label_3e9940:
    if (ctx->pc == 0x3E9940u) {
        ctx->pc = 0x3E9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E993Cu;
        // 0x3e9940: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9944u;
        goto label_3e9944;
    }
    ctx->pc = 0x3E993Cu;
    SET_GPR_U32(ctx, 31, 0x3E9944u);
    ctx->pc = 0x3E9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E993Cu;
    // 0x3e9940: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E993Cu, 0x3E9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9944u;
label_3e9944:
    // 0x3e9944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9948:
    // 0x3e9948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e994c:
    // 0x3e994c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3e994cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3e9950:
    // 0x3e9950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9954:
    // 0x3e9954: 0xc0e9132  jal         func_3A44C8
label_3e9958:
    if (ctx->pc == 0x3E9958u) {
        ctx->pc = 0x3E9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9954u;
        // 0x3e9958: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E995Cu;
        goto label_3e995c;
    }
    ctx->pc = 0x3E9954u;
    SET_GPR_U32(ctx, 31, 0x3E995Cu);
    ctx->pc = 0x3E9958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9954u;
    // 0x3e9958: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3E9954u, 0x3E995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E995Cu;
label_3e995c:
    // 0x3e995c: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3e995cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3e9960:
    // 0x3e9960: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3e9960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3e9964:
    // 0x3e9964: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3e9964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3e9968:
    // 0x3e9968: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3e9968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3e996c:
    // 0x3e996c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e996cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e9970:
    // 0x3e9970: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3e9970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3e9974:
    // 0x3e9974: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3e9974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e9978:
    // 0x3e9978: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x3e9978u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e997c:
    // 0x3e997c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e997cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9980:
    // 0x3e9980: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e9980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e9984:
    // 0x3e9984: 0x7e460010  sq          $a2, 0x10($s2)
    ctx->pc = 0x3e9984u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 6));
label_3e9988:
    // 0x3e9988: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3e9988u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3e998c:
    // 0x3e998c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3e998cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_3e9990:
    // 0x3e9990: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e9990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e9994:
    // 0x3e9994: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e9994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e9998:
    // 0x3e9998: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3e9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e999c:
    // 0x3e999c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3e999cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3e99a0:
    // 0x3e99a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3e99a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e99a4:
    // 0x3e99a4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3e99a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3e99a8:
    // 0x3e99a8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3e99a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3e99ac:
    // 0x3e99ac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3e99acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3e99b0:
    // 0x3e99b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3e99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e99b4:
    // 0x3e99b4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3e99b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3e99b8:
    // 0x3e99b8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3e99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3e99bc:
    // 0x3e99bc: 0x60f809  jalr        $v1
label_3e99c0:
    if (ctx->pc == 0x3E99C0u) {
        ctx->pc = 0x3E99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99BCu;
        // 0x3e99c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E99C4u;
        goto label_3e99c4;
    }
    ctx->pc = 0x3E99BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E99C4u);
        ctx->pc = 0x3E99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99BCu;
        // 0x3e99c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E99BCu, 0x3E99C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E99C4u;
label_3e99c4:
    // 0x3e99c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e99c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e99c8:
    // 0x3e99c8: 0xc0e858c  jal         func_3A1630
label_3e99cc:
    if (ctx->pc == 0x3E99CCu) {
        ctx->pc = 0x3E99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99C8u;
        // 0x3e99cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E99D0u;
        goto label_3e99d0;
    }
    ctx->pc = 0x3E99C8u;
    SET_GPR_U32(ctx, 31, 0x3E99D0u);
    ctx->pc = 0x3E99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E99C8u;
    // 0x3e99cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E99C8u, 0x3E99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E99D0u;
label_3e99d0:
    // 0x3e99d0: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3e99d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e99d4:
    // 0x3e99d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e99d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e99d8:
    // 0x3e99d8: 0x26105a70  addiu       $s0, $s0, 0x5A70
    ctx->pc = 0x3e99d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23152));
label_3e99dc:
    // 0x3e99dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e99dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e99e0:
    // 0x3e99e0: 0xc0e90ca  jal         func_3A4328
label_3e99e4:
    if (ctx->pc == 0x3E99E4u) {
        ctx->pc = 0x3E99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99E0u;
        // 0x3e99e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E99E8u;
        goto label_3e99e8;
    }
    ctx->pc = 0x3E99E0u;
    SET_GPR_U32(ctx, 31, 0x3E99E8u);
    ctx->pc = 0x3E99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E99E0u;
    // 0x3e99e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3E99E0u, 0x3E99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E99E8u;
label_3e99e8:
    // 0x3e99e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e99e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e99ec:
    // 0x3e99ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e99ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e99f0:
    // 0x3e99f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e99f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e99f4:
    // 0x3e99f4: 0xc0e94fc  jal         func_3A53F0
label_3e99f8:
    if (ctx->pc == 0x3E99F8u) {
        ctx->pc = 0x3E99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E99F4u;
        // 0x3e99f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E99FCu;
        goto label_3e99fc;
    }
    ctx->pc = 0x3E99F4u;
    SET_GPR_U32(ctx, 31, 0x3E99FCu);
    ctx->pc = 0x3E99F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E99F4u;
    // 0x3e99f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3E99F4u, 0x3E99FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E99FCu;
label_3e99fc:
    // 0x3e99fc: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3e99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_3e9a00:
    // 0x3e9a00: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3e9a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3e9a04:
    // 0x3e9a04: 0x3c0214dc  lui         $v0, 0x14DC
    ctx->pc = 0x3e9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5340 << 16));
label_3e9a08:
    // 0x3e9a08: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3e9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3e9a0c:
    // 0x3e9a0c: 0x34429db8  ori         $v0, $v0, 0x9DB8
    ctx->pc = 0x3e9a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40376);
label_3e9a10:
    // 0x3e9a10: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3e9a14:
    if (ctx->pc == 0x3E9A14u) {
        ctx->pc = 0x3E9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A10u;
        // 0x3e9a14: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9A18u;
        goto label_3e9a18;
    }
    ctx->pc = 0x3E9A10u;
    {
        const bool branch_taken_0x3e9a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A10u;
        // 0x3e9a14: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a10) {
            ctx->pc = 0x3E9A28u;
            goto label_3e9a28;
        }
    }
    ctx->pc = 0x3E9A18u;
label_3e9a18:
    // 0x3e9a18: 0x3c027c28  lui         $v0, 0x7C28
    ctx->pc = 0x3e9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31784 << 16));
label_3e9a1c:
    // 0x3e9a1c: 0x34420227  ori         $v0, $v0, 0x227
    ctx->pc = 0x3e9a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)551);
label_3e9a20:
    // 0x3e9a20: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3e9a24:
    if (ctx->pc == 0x3E9A24u) {
        ctx->pc = 0x3E9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A20u;
        // 0x3e9a24: 0x3c0227af  lui         $v0, 0x27AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10159 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9A28u;
        goto label_3e9a28;
    }
    ctx->pc = 0x3E9A20u;
    {
        const bool branch_taken_0x3e9a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A20u;
        // 0x3e9a24: 0x3c0227af  lui         $v0, 0x27AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10159 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a20) {
            ctx->pc = 0x3E9A34u;
            goto label_3e9a34;
        }
    }
    ctx->pc = 0x3E9A28u;
label_3e9a28:
    // 0x3e9a28: 0x3c055f44  lui         $a1, 0x5F44
    ctx->pc = 0x3e9a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24388 << 16));
label_3e9a2c:
    // 0x3e9a2c: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x3e9a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
label_3e9a30:
    // 0x3e9a30: 0x3c0227af  lui         $v0, 0x27AF
    ctx->pc = 0x3e9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10159 << 16));
label_3e9a34:
    // 0x3e9a34: 0x34424fe0  ori         $v0, $v0, 0x4FE0
    ctx->pc = 0x3e9a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20448);
label_3e9a38:
    // 0x3e9a38: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3e9a3c:
    if (ctx->pc == 0x3E9A3Cu) {
        ctx->pc = 0x3E9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A38u;
        // 0x3e9a3c: 0x3c0239cb  lui         $v0, 0x39CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14795 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9A40u;
        goto label_3e9a40;
    }
    ctx->pc = 0x3E9A38u;
    {
        const bool branch_taken_0x3e9a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A38u;
        // 0x3e9a3c: 0x3c0239cb  lui         $v0, 0x39CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14795 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a38) {
            ctx->pc = 0x3E9A58u;
            goto label_3e9a58;
        }
    }
    ctx->pc = 0x3E9A40u;
label_3e9a40:
    // 0x3e9a40: 0x3442fb46  ori         $v0, $v0, 0xFB46
    ctx->pc = 0x3e9a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64326);
label_3e9a44:
    // 0x3e9a44: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3e9a48:
    if (ctx->pc == 0x3E9A48u) {
        ctx->pc = 0x3E9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A44u;
        // 0x3e9a48: 0x3c026465  lui         $v0, 0x6465 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25701 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9A4Cu;
        goto label_3e9a4c;
    }
    ctx->pc = 0x3E9A44u;
    {
        const bool branch_taken_0x3e9a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A44u;
        // 0x3e9a48: 0x3c026465  lui         $v0, 0x6465 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25701 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a44) {
            ctx->pc = 0x3E9A58u;
            goto label_3e9a58;
        }
    }
    ctx->pc = 0x3E9A4Cu;
label_3e9a4c:
    // 0x3e9a4c: 0x344220ba  ori         $v0, $v0, 0x20BA
    ctx->pc = 0x3e9a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8378);
label_3e9a50:
    // 0x3e9a50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3e9a54:
    if (ctx->pc == 0x3E9A54u) {
        ctx->pc = 0x3E9A58u;
        goto label_3e9a58;
    }
    ctx->pc = 0x3E9A50u;
    {
        const bool branch_taken_0x3e9a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9a50) {
            ctx->pc = 0x3E9A60u;
            goto label_3e9a60;
        }
    }
    ctx->pc = 0x3E9A58u;
label_3e9a58:
    // 0x3e9a58: 0x3c05c1a0  lui         $a1, 0xC1A0
    ctx->pc = 0x3e9a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49568 << 16));
label_3e9a5c:
    // 0x3e9a5c: 0x34a54700  ori         $a1, $a1, 0x4700
    ctx->pc = 0x3e9a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18176);
label_3e9a60:
    // 0x3e9a60: 0x3c02a83a  lui         $v0, 0xA83A
    ctx->pc = 0x3e9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43066 << 16));
label_3e9a64:
    // 0x3e9a64: 0x344274da  ori         $v0, $v0, 0x74DA
    ctx->pc = 0x3e9a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29914);
label_3e9a68:
    // 0x3e9a68: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3e9a6c:
    if (ctx->pc == 0x3E9A6Cu) {
        ctx->pc = 0x3E9A70u;
        goto label_3e9a70;
    }
    ctx->pc = 0x3E9A68u;
    {
        const bool branch_taken_0x3e9a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e9a68) {
            ctx->pc = 0x3E9A8Cu;
            goto label_3e9a8c;
        }
    }
    ctx->pc = 0x3E9A70u;
label_3e9a70:
    // 0x3e9a70: 0x3c02ebef  lui         $v0, 0xEBEF
    ctx->pc = 0x3e9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60399 << 16));
label_3e9a74:
    // 0x3e9a74: 0x344230bb  ori         $v0, $v0, 0x30BB
    ctx->pc = 0x3e9a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12475);
label_3e9a78:
    // 0x3e9a78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3e9a7c:
    if (ctx->pc == 0x3E9A7Cu) {
        ctx->pc = 0x3E9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A78u;
        // 0x3e9a7c: 0x3c0234af  lui         $v0, 0x34AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13487 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9A80u;
        goto label_3e9a80;
    }
    ctx->pc = 0x3E9A78u;
    {
        const bool branch_taken_0x3e9a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A78u;
        // 0x3e9a7c: 0x3c0234af  lui         $v0, 0x34AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a78) {
            ctx->pc = 0x3E9A8Cu;
            goto label_3e9a8c;
        }
    }
    ctx->pc = 0x3E9A80u;
label_3e9a80:
    // 0x3e9a80: 0x34424687  ori         $v0, $v0, 0x4687
    ctx->pc = 0x3e9a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18055);
label_3e9a84:
    // 0x3e9a84: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3e9a88:
    if (ctx->pc == 0x3E9A88u) {
        ctx->pc = 0x3E9A8Cu;
        goto label_3e9a8c;
    }
    ctx->pc = 0x3E9A84u;
    {
        const bool branch_taken_0x3e9a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9a84) {
            ctx->pc = 0x3E9A94u;
            goto label_3e9a94;
        }
    }
    ctx->pc = 0x3E9A8Cu;
label_3e9a8c:
    // 0x3e9a8c: 0x3c059912  lui         $a1, 0x9912
    ctx->pc = 0x3e9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39186 << 16));
label_3e9a90:
    // 0x3e9a90: 0x34a51300  ori         $a1, $a1, 0x1300
    ctx->pc = 0x3e9a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4864);
label_3e9a94:
    // 0x3e9a94: 0xc0ea16a  jal         func_3A85A8
label_3e9a98:
    if (ctx->pc == 0x3E9A98u) {
        ctx->pc = 0x3E9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A94u;
        // 0x3e9a98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9A9Cu;
        goto label_3e9a9c;
    }
    ctx->pc = 0x3E9A94u;
    SET_GPR_U32(ctx, 31, 0x3E9A9Cu);
    ctx->pc = 0x3E9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9A94u;
    // 0x3e9a98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E9A94u, 0x3E9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9A9Cu;
label_3e9a9c:
    // 0x3e9a9c: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x3e9a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3e9aa0:
    // 0x3e9aa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e9aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9aa4:
    // 0x3e9aa4: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x3e9aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3e9aa8:
    // 0x3e9aa8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e9aac:
    // 0x3e9aac: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e9aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e9ab0:
    // 0x3e9ab0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e9ab4:
    // 0x3e9ab4: 0x60f809  jalr        $v1
label_3e9ab8:
    if (ctx->pc == 0x3E9AB8u) {
        ctx->pc = 0x3E9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AB4u;
        // 0x3e9ab8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9ABCu;
        goto label_3e9abc;
    }
    ctx->pc = 0x3E9AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E9ABCu);
        ctx->pc = 0x3E9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AB4u;
        // 0x3e9ab8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9AB4u, 0x3E9ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9ABCu;
label_3e9abc:
    // 0x3e9abc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3e9abcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3e9ac0:
    // 0x3e9ac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e9ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ac4:
    // 0x3e9ac4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3e9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3e9ac8:
    // 0x3e9ac8: 0xc0ea16a  jal         func_3A85A8
label_3e9acc:
    if (ctx->pc == 0x3E9ACCu) {
        ctx->pc = 0x3E9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AC8u;
        // 0x3e9acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9AD0u;
        goto label_3e9ad0;
    }
    ctx->pc = 0x3E9AC8u;
    SET_GPR_U32(ctx, 31, 0x3E9AD0u);
    ctx->pc = 0x3E9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9AC8u;
    // 0x3e9acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E9AC8u, 0x3E9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9AD0u;
label_3e9ad0:
    // 0x3e9ad0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e9ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ad4:
    // 0x3e9ad4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e9ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ad8:
    // 0x3e9ad8: 0xc0fa60a  jal         func_3E9828
label_3e9adc:
    if (ctx->pc == 0x3E9ADCu) {
        ctx->pc = 0x3E9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AD8u;
        // 0x3e9adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9AE0u;
        goto label_3e9ae0;
    }
    ctx->pc = 0x3E9AD8u;
    SET_GPR_U32(ctx, 31, 0x3E9AE0u);
    ctx->pc = 0x3E9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9AD8u;
    // 0x3e9adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9828u, 0x3E9AD8u, 0x3E9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9AE0u;
label_3e9ae0:
    // 0x3e9ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9ae4:
    // 0x3e9ae4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3e9ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e9ae8:
    // 0x3e9ae8: 0xae420124  sw          $v0, 0x124($s2)
    ctx->pc = 0x3e9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
label_3e9aec:
    // 0x3e9aec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3e9aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e9af0:
    // 0x3e9af0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3e9af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e9af4:
    // 0x3e9af4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3e9af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e9af8:
    // 0x3e9af8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3e9af8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e9afc:
    // 0x3e9afc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e9afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e9b00:
    // 0x3e9b00: 0x3e00008  jr          $ra
label_3e9b04:
    if (ctx->pc == 0x3E9B04u) {
        ctx->pc = 0x3E9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B00u;
        // 0x3e9b04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B08u;
        goto label_fallthrough_0x3e9b00;
    }
    ctx->pc = 0x3E9B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B00u;
        // 0x3e9b04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9b00:
    ctx->pc = 0x3E9B08u;
}
