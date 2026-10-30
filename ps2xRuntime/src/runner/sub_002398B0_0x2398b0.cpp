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

// Function: sub_002398B0
// Address: 0x2398b0 - 0x239b80
void sub_002398B0_0x2398b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002398B0_0x2398b0");
#endif

    switch (ctx->pc) {
        case 0x2398b0u: goto label_2398b0;
        case 0x2398b4u: goto label_2398b4;
        case 0x2398b8u: goto label_2398b8;
        case 0x2398bcu: goto label_2398bc;
        case 0x2398c0u: goto label_2398c0;
        case 0x2398c4u: goto label_2398c4;
        case 0x2398c8u: goto label_2398c8;
        case 0x2398ccu: goto label_2398cc;
        case 0x2398d0u: goto label_2398d0;
        case 0x2398d4u: goto label_2398d4;
        case 0x2398d8u: goto label_2398d8;
        case 0x2398dcu: goto label_2398dc;
        case 0x2398e0u: goto label_2398e0;
        case 0x2398e4u: goto label_2398e4;
        case 0x2398e8u: goto label_2398e8;
        case 0x2398ecu: goto label_2398ec;
        case 0x2398f0u: goto label_2398f0;
        case 0x2398f4u: goto label_2398f4;
        case 0x2398f8u: goto label_2398f8;
        case 0x2398fcu: goto label_2398fc;
        case 0x239900u: goto label_239900;
        case 0x239904u: goto label_239904;
        case 0x239908u: goto label_239908;
        case 0x23990cu: goto label_23990c;
        case 0x239910u: goto label_239910;
        case 0x239914u: goto label_239914;
        case 0x239918u: goto label_239918;
        case 0x23991cu: goto label_23991c;
        case 0x239920u: goto label_239920;
        case 0x239924u: goto label_239924;
        case 0x239928u: goto label_239928;
        case 0x23992cu: goto label_23992c;
        case 0x239930u: goto label_239930;
        case 0x239934u: goto label_239934;
        case 0x239938u: goto label_239938;
        case 0x23993cu: goto label_23993c;
        case 0x239940u: goto label_239940;
        case 0x239944u: goto label_239944;
        case 0x239948u: goto label_239948;
        case 0x23994cu: goto label_23994c;
        case 0x239950u: goto label_239950;
        case 0x239954u: goto label_239954;
        case 0x239958u: goto label_239958;
        case 0x23995cu: goto label_23995c;
        case 0x239960u: goto label_239960;
        case 0x239964u: goto label_239964;
        case 0x239968u: goto label_239968;
        case 0x23996cu: goto label_23996c;
        case 0x239970u: goto label_239970;
        case 0x239974u: goto label_239974;
        case 0x239978u: goto label_239978;
        case 0x23997cu: goto label_23997c;
        case 0x239980u: goto label_239980;
        case 0x239984u: goto label_239984;
        case 0x239988u: goto label_239988;
        case 0x23998cu: goto label_23998c;
        case 0x239990u: goto label_239990;
        case 0x239994u: goto label_239994;
        case 0x239998u: goto label_239998;
        case 0x23999cu: goto label_23999c;
        case 0x2399a0u: goto label_2399a0;
        case 0x2399a4u: goto label_2399a4;
        case 0x2399a8u: goto label_2399a8;
        case 0x2399acu: goto label_2399ac;
        case 0x2399b0u: goto label_2399b0;
        case 0x2399b4u: goto label_2399b4;
        case 0x2399b8u: goto label_2399b8;
        case 0x2399bcu: goto label_2399bc;
        case 0x2399c0u: goto label_2399c0;
        case 0x2399c4u: goto label_2399c4;
        case 0x2399c8u: goto label_2399c8;
        case 0x2399ccu: goto label_2399cc;
        case 0x2399d0u: goto label_2399d0;
        case 0x2399d4u: goto label_2399d4;
        case 0x2399d8u: goto label_2399d8;
        case 0x2399dcu: goto label_2399dc;
        case 0x2399e0u: goto label_2399e0;
        case 0x2399e4u: goto label_2399e4;
        case 0x2399e8u: goto label_2399e8;
        case 0x2399ecu: goto label_2399ec;
        case 0x2399f0u: goto label_2399f0;
        case 0x2399f4u: goto label_2399f4;
        case 0x2399f8u: goto label_2399f8;
        case 0x2399fcu: goto label_2399fc;
        case 0x239a00u: goto label_239a00;
        case 0x239a04u: goto label_239a04;
        case 0x239a08u: goto label_239a08;
        case 0x239a0cu: goto label_239a0c;
        case 0x239a10u: goto label_239a10;
        case 0x239a14u: goto label_239a14;
        case 0x239a18u: goto label_239a18;
        case 0x239a1cu: goto label_239a1c;
        case 0x239a20u: goto label_239a20;
        case 0x239a24u: goto label_239a24;
        case 0x239a28u: goto label_239a28;
        case 0x239a2cu: goto label_239a2c;
        case 0x239a30u: goto label_239a30;
        case 0x239a34u: goto label_239a34;
        case 0x239a38u: goto label_239a38;
        case 0x239a3cu: goto label_239a3c;
        case 0x239a40u: goto label_239a40;
        case 0x239a44u: goto label_239a44;
        case 0x239a48u: goto label_239a48;
        case 0x239a4cu: goto label_239a4c;
        case 0x239a50u: goto label_239a50;
        case 0x239a54u: goto label_239a54;
        case 0x239a58u: goto label_239a58;
        case 0x239a5cu: goto label_239a5c;
        case 0x239a60u: goto label_239a60;
        case 0x239a64u: goto label_239a64;
        case 0x239a68u: goto label_239a68;
        case 0x239a6cu: goto label_239a6c;
        case 0x239a70u: goto label_239a70;
        case 0x239a74u: goto label_239a74;
        case 0x239a78u: goto label_239a78;
        case 0x239a7cu: goto label_239a7c;
        case 0x239a80u: goto label_239a80;
        case 0x239a84u: goto label_239a84;
        case 0x239a88u: goto label_239a88;
        case 0x239a8cu: goto label_239a8c;
        case 0x239a90u: goto label_239a90;
        case 0x239a94u: goto label_239a94;
        case 0x239a98u: goto label_239a98;
        case 0x239a9cu: goto label_239a9c;
        case 0x239aa0u: goto label_239aa0;
        case 0x239aa4u: goto label_239aa4;
        case 0x239aa8u: goto label_239aa8;
        case 0x239aacu: goto label_239aac;
        case 0x239ab0u: goto label_239ab0;
        case 0x239ab4u: goto label_239ab4;
        case 0x239ab8u: goto label_239ab8;
        case 0x239abcu: goto label_239abc;
        case 0x239ac0u: goto label_239ac0;
        case 0x239ac4u: goto label_239ac4;
        case 0x239ac8u: goto label_239ac8;
        case 0x239accu: goto label_239acc;
        case 0x239ad0u: goto label_239ad0;
        case 0x239ad4u: goto label_239ad4;
        case 0x239ad8u: goto label_239ad8;
        case 0x239adcu: goto label_239adc;
        case 0x239ae0u: goto label_239ae0;
        case 0x239ae4u: goto label_239ae4;
        case 0x239ae8u: goto label_239ae8;
        case 0x239aecu: goto label_239aec;
        case 0x239af0u: goto label_239af0;
        case 0x239af4u: goto label_239af4;
        case 0x239af8u: goto label_239af8;
        case 0x239afcu: goto label_239afc;
        case 0x239b00u: goto label_239b00;
        case 0x239b04u: goto label_239b04;
        case 0x239b08u: goto label_239b08;
        case 0x239b0cu: goto label_239b0c;
        case 0x239b10u: goto label_239b10;
        case 0x239b14u: goto label_239b14;
        case 0x239b18u: goto label_239b18;
        case 0x239b1cu: goto label_239b1c;
        case 0x239b20u: goto label_239b20;
        case 0x239b24u: goto label_239b24;
        case 0x239b28u: goto label_239b28;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b30u: goto label_239b30;
        case 0x239b34u: goto label_239b34;
        case 0x239b38u: goto label_239b38;
        case 0x239b3cu: goto label_239b3c;
        case 0x239b40u: goto label_239b40;
        case 0x239b44u: goto label_239b44;
        case 0x239b48u: goto label_239b48;
        case 0x239b4cu: goto label_239b4c;
        case 0x239b50u: goto label_239b50;
        case 0x239b54u: goto label_239b54;
        case 0x239b58u: goto label_239b58;
        case 0x239b5cu: goto label_239b5c;
        case 0x239b60u: goto label_239b60;
        case 0x239b64u: goto label_239b64;
        case 0x239b68u: goto label_239b68;
        case 0x239b6cu: goto label_239b6c;
        case 0x239b70u: goto label_239b70;
        case 0x239b74u: goto label_239b74;
        case 0x239b78u: goto label_239b78;
        case 0x239b7cu: goto label_239b7c;
        default: break;
    }

    ctx->pc = 0x2398b0u;

label_2398b0:
    // 0x2398b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2398b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2398b4:
    // 0x2398b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2398b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2398b8:
    // 0x2398b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2398b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2398bc:
    // 0x2398bc: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x2398bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2398c0:
    // 0x2398c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2398c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2398c4:
    // 0x2398c4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2398c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2398c8:
    // 0x2398c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2398c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2398cc:
    // 0x2398cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2398ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2398d0:
    // 0x2398d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2398d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2398d4:
    // 0x2398d4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2398d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_2398d8:
    // 0x2398d8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2398d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2398dc:
    // 0x2398dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2398dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2398e0:
    // 0x2398e0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2398e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2398e4:
    // 0x2398e4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2398e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2398e8:
    // 0x2398e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2398e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2398ec:
    // 0x2398ec: 0xc0e402c  jal         func_3900B0
label_2398f0:
    if (ctx->pc == 0x2398F0u) {
        ctx->pc = 0x2398F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398ECu;
        // 0x2398f0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398F4u;
        goto label_2398f4;
    }
    ctx->pc = 0x2398ECu;
    SET_GPR_U32(ctx, 31, 0x2398F4u);
    ctx->pc = 0x2398F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398ECu;
    // 0x2398f0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x2398ECu, 0x2398F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398F4u;
label_2398f4:
    // 0x2398f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2398f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2398f8:
    // 0x2398f8: 0xc087502  jal         func_21D408
label_2398fc:
    if (ctx->pc == 0x2398FCu) {
        ctx->pc = 0x2398FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398F8u;
        // 0x2398fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239900u;
        goto label_239900;
    }
    ctx->pc = 0x2398F8u;
    SET_GPR_U32(ctx, 31, 0x239900u);
    ctx->pc = 0x2398FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398F8u;
    // 0x2398fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2398F8u, 0x239900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239900u;
label_239900:
    // 0x239900: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x239900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_239904:
    // 0x239904: 0x8c56020c  lw          $s6, 0x20C($v0)
    ctx->pc = 0x239904u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_239908:
    // 0x239908: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x239908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_23990c:
    // 0x23990c: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_239910:
    // 0x239910: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_239914:
    if (ctx->pc == 0x239914u) {
        ctx->pc = 0x239914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239910u;
        // 0x239914: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239918u;
        goto label_239918;
    }
    ctx->pc = 0x239910u;
    {
        const bool branch_taken_0x239910 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x239914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239910u;
        // 0x239914: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239910) {
            ctx->pc = 0x23996Cu;
            goto label_23996c;
        }
    }
    ctx->pc = 0x239918u;
label_239918:
    // 0x239918: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23991c:
    // 0x23991c: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x23991cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_239920:
    // 0x239920: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x239920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_239924:
    // 0x239924: 0xc0e409a  jal         func_390268
label_239928:
    if (ctx->pc == 0x239928u) {
        ctx->pc = 0x239928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239924u;
        // 0x239928: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23992Cu;
        goto label_23992c;
    }
    ctx->pc = 0x239924u;
    SET_GPR_U32(ctx, 31, 0x23992Cu);
    ctx->pc = 0x239928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239924u;
    // 0x239928: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x239924u, 0x23992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23992Cu;
label_23992c:
    // 0x23992c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23992cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239930:
    // 0x239930: 0x920203ac  lbu         $v0, 0x3AC($s0)
    ctx->pc = 0x239930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 940)));
label_239934:
    // 0x239934: 0x14570008  bne         $v0, $s7, . + 4 + (0x8 << 2)
label_239938:
    if (ctx->pc == 0x239938u) {
        ctx->pc = 0x239938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239934u;
        // 0x239938: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23993Cu;
        goto label_23993c;
    }
    ctx->pc = 0x239934u;
    {
        const bool branch_taken_0x239934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x239938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239934u;
        // 0x239938: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239934) {
            ctx->pc = 0x239958u;
            goto label_239958;
        }
    }
    ctx->pc = 0x23993Cu;
label_23993c:
    // 0x23993c: 0xc087502  jal         func_21D408
label_239940:
    if (ctx->pc == 0x239940u) {
        ctx->pc = 0x239940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23993Cu;
        // 0x239940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239944u;
        goto label_239944;
    }
    ctx->pc = 0x23993Cu;
    SET_GPR_U32(ctx, 31, 0x239944u);
    ctx->pc = 0x239940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23993Cu;
    // 0x239940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23993Cu, 0x239944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239944u;
label_239944:
    // 0x239944: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x239944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_239948:
    // 0x239948: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x239948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_23994c:
    // 0x23994c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x23994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_239950:
    // 0x239950: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_239954:
    if (ctx->pc == 0x239954u) {
        ctx->pc = 0x239954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239950u;
        // 0x239954: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239958u;
        goto label_239958;
    }
    ctx->pc = 0x239950u;
    {
        const bool branch_taken_0x239950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x239954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239950u;
        // 0x239954: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239950) {
            ctx->pc = 0x23997Cu;
            goto label_23997c;
        }
    }
    ctx->pc = 0x239958u;
label_239958:
    // 0x239958: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23995c:
    // 0x23995c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x23995cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_239960:
    // 0x239960: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x239960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_239964:
    // 0x239964: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_239968:
    if (ctx->pc == 0x239968u) {
        ctx->pc = 0x239968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239964u;
        // 0x239968: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23996Cu;
        goto label_23996c;
    }
    ctx->pc = 0x239964u;
    {
        const bool branch_taken_0x239964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239964u;
        // 0x239968: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239964) {
            ctx->pc = 0x239920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239920;
        }
    }
    ctx->pc = 0x23996Cu;
label_23996c:
    // 0x23996c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_239970:
    if (ctx->pc == 0x239970u) {
        ctx->pc = 0x239970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23996Cu;
        // 0x239970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239974u;
        goto label_239974;
    }
    ctx->pc = 0x23996Cu;
    {
        const bool branch_taken_0x23996c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x239970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23996Cu;
        // 0x239970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23996c) {
            ctx->pc = 0x239984u;
            goto label_239984;
        }
    }
    ctx->pc = 0x239974u;
label_239974:
    // 0x239974: 0x10000076  b           . + 4 + (0x76 << 2)
label_239978:
    if (ctx->pc == 0x239978u) {
        ctx->pc = 0x23997Cu;
        goto label_23997c;
    }
    ctx->pc = 0x239974u;
    {
        const bool branch_taken_0x239974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239974) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x23997Cu;
label_23997c:
    // 0x23997c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_239980:
    if (ctx->pc == 0x239980u) {
        ctx->pc = 0x239980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23997Cu;
        // 0x239980: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239984u;
        goto label_239984;
    }
    ctx->pc = 0x23997Cu;
    {
        const bool branch_taken_0x23997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23997Cu;
        // 0x239980: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23997c) {
            ctx->pc = 0x23996Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23996c;
        }
    }
    ctx->pc = 0x239984u;
label_239984:
    // 0x239984: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
label_239988:
    if (ctx->pc == 0x239988u) {
        ctx->pc = 0x239988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239984u;
        // 0x239988: 0xae2003ac  sw          $zero, 0x3AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23998Cu;
        goto label_23998c;
    }
    ctx->pc = 0x239984u;
    {
        const bool branch_taken_0x239984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x239984) {
            ctx->pc = 0x239988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239984u;
            // 0x239988: 0xae2003ac  sw          $zero, 0x3AC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23998Cu;
            goto label_23998c;
        }
    }
    ctx->pc = 0x23998Cu;
label_23998c:
    // 0x23998c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23998cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_239990:
    // 0x239990: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x239990u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_239994:
    // 0x239994: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_239998:
    if (ctx->pc == 0x239998u) {
        ctx->pc = 0x239998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239994u;
        // 0x239998: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23999Cu;
        goto label_23999c;
    }
    ctx->pc = 0x239994u;
    {
        const bool branch_taken_0x239994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239994u;
        // 0x239998: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239994) {
            ctx->pc = 0x239A4Cu;
            goto label_239a4c;
        }
    }
    ctx->pc = 0x23999Cu;
label_23999c:
    // 0x23999c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2399a0:
    // 0x2399a0: 0xae4203ac  sw          $v0, 0x3AC($s2)
    ctx->pc = 0x2399a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 940), GPR_U32(ctx, 2));
label_2399a4:
    // 0x2399a4: 0xc0e409a  jal         func_390268
label_2399a8:
    if (ctx->pc == 0x2399A8u) {
        ctx->pc = 0x2399A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399A4u;
        // 0x2399a8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399ACu;
        goto label_2399ac;
    }
    ctx->pc = 0x2399A4u;
    SET_GPR_U32(ctx, 31, 0x2399ACu);
    ctx->pc = 0x2399A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399A4u;
    // 0x2399a8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2399A4u, 0x2399ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399ACu;
label_2399ac:
    // 0x2399ac: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
label_2399b0:
    if (ctx->pc == 0x2399B0u) {
        ctx->pc = 0x2399B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399ACu;
        // 0x2399b0: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399B4u;
        goto label_2399b4;
    }
    ctx->pc = 0x2399ACu;
    {
        const bool branch_taken_0x2399ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2399B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399ACu;
        // 0x2399b0: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399ac) {
            ctx->pc = 0x2399CCu;
            goto label_2399cc;
        }
    }
    ctx->pc = 0x2399B4u;
label_2399b4:
    // 0x2399b4: 0xc0e409a  jal         func_390268
label_2399b8:
    if (ctx->pc == 0x2399B8u) {
        ctx->pc = 0x2399B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399B4u;
        // 0x2399b8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399BCu;
        goto label_2399bc;
    }
    ctx->pc = 0x2399B4u;
    SET_GPR_U32(ctx, 31, 0x2399BCu);
    ctx->pc = 0x2399B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399B4u;
    // 0x2399b8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2399B4u, 0x2399BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399BCu;
label_2399bc:
    // 0x2399bc: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x2399bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_2399c0:
    // 0x2399c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2399c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2399c4:
    // 0x2399c4: 0xc106784  jal         func_419E10
label_2399c8:
    if (ctx->pc == 0x2399C8u) {
        ctx->pc = 0x2399C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399C4u;
        // 0x2399c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399CCu;
        goto label_2399cc;
    }
    ctx->pc = 0x2399C4u;
    SET_GPR_U32(ctx, 31, 0x2399CCu);
    ctx->pc = 0x2399C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399C4u;
    // 0x2399c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2399C4u, 0x2399CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399CCu;
label_2399cc:
    // 0x2399cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2399ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2399d0:
    // 0x2399d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2399d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2399d4:
    // 0x2399d4: 0xc048892  jal         func_122248
label_2399d8:
    if (ctx->pc == 0x2399D8u) {
        ctx->pc = 0x2399D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399D4u;
        // 0x2399d8: 0xaec20044  sw          $v0, 0x44($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399DCu;
        goto label_2399dc;
    }
    ctx->pc = 0x2399D4u;
    SET_GPR_U32(ctx, 31, 0x2399DCu);
    ctx->pc = 0x2399D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399D4u;
    // 0x2399d8: 0xaec20044  sw          $v0, 0x44($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x2399D4u, 0x2399DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399DCu;
label_2399dc:
    // 0x2399dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2399e0:
    if (ctx->pc == 0x2399E0u) {
        ctx->pc = 0x2399E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399DCu;
        // 0x2399e0: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399E4u;
        goto label_2399e4;
    }
    ctx->pc = 0x2399DCu;
    {
        const bool branch_taken_0x2399dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2399E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399DCu;
        // 0x2399e0: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399dc) {
            ctx->pc = 0x239A14u;
            goto label_239a14;
        }
    }
    ctx->pc = 0x2399E4u;
label_2399e4:
    // 0x2399e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2399e8:
    if (ctx->pc == 0x2399E8u) {
        ctx->pc = 0x2399E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399E4u;
        // 0x2399e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399ECu;
        goto label_2399ec;
    }
    ctx->pc = 0x2399E4u;
    {
        const bool branch_taken_0x2399e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399E4u;
        // 0x2399e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399e4) {
            ctx->pc = 0x239A08u;
            goto label_239a08;
        }
    }
    ctx->pc = 0x2399ECu;
label_2399ec:
    // 0x2399ec: 0xc048892  jal         func_122248
label_2399f0:
    if (ctx->pc == 0x2399F0u) {
        ctx->pc = 0x2399F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399ECu;
        // 0x2399f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399F4u;
        goto label_2399f4;
    }
    ctx->pc = 0x2399ECu;
    SET_GPR_U32(ctx, 31, 0x2399F4u);
    ctx->pc = 0x2399F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399ECu;
    // 0x2399f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x2399ECu, 0x2399F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399F4u;
label_2399f4:
    // 0x2399f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2399f8:
    if (ctx->pc == 0x2399F8u) {
        ctx->pc = 0x2399F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399F4u;
        // 0x2399f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2399FCu;
        goto label_2399fc;
    }
    ctx->pc = 0x2399F4u;
    {
        const bool branch_taken_0x2399f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399F4u;
        // 0x2399f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399f4) {
            ctx->pc = 0x239A04u;
            goto label_239a04;
        }
    }
    ctx->pc = 0x2399FCu;
label_2399fc:
    // 0x2399fc: 0xc04890e  jal         func_122438
label_239a00:
    if (ctx->pc == 0x239A00u) {
        ctx->pc = 0x239A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2399FCu;
        // 0x239a00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A04u;
        goto label_239a04;
    }
    ctx->pc = 0x2399FCu;
    SET_GPR_U32(ctx, 31, 0x239A04u);
    ctx->pc = 0x239A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399FCu;
    // 0x239a00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x2399FCu, 0x239A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A04u;
label_239a04:
    // 0x239a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239a08:
    // 0x239a08: 0xc0488ac  jal         func_1222B0
label_239a0c:
    if (ctx->pc == 0x239A0Cu) {
        ctx->pc = 0x239A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A08u;
        // 0x239a0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A10u;
        goto label_239a10;
    }
    ctx->pc = 0x239A08u;
    SET_GPR_U32(ctx, 31, 0x239A10u);
    ctx->pc = 0x239A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A08u;
    // 0x239a0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x239A08u, 0x239A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A10u;
label_239a10:
    // 0x239a10: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x239a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_239a14:
    // 0x239a14: 0xc106a70  jal         func_41A9C0
label_239a18:
    if (ctx->pc == 0x239A18u) {
        ctx->pc = 0x239A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A14u;
        // 0x239a18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A1Cu;
        goto label_239a1c;
    }
    ctx->pc = 0x239A14u;
    SET_GPR_U32(ctx, 31, 0x239A1Cu);
    ctx->pc = 0x239A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A14u;
    // 0x239a18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A9C0u, 0x239A14u, 0x239A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A1Cu;
label_239a1c:
    // 0x239a1c: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x239a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_239a20:
    // 0x239a20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239a24:
    // 0x239a24: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x239a24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_239a28:
    // 0x239a28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239a2c:
    // 0x239a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239a30:
    // 0x239a30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x239a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239a34:
    // 0x239a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_239a38:
    // 0x239a38: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x239a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239a3c:
    // 0x239a3c: 0xc107138  jal         func_41C4E0
label_239a40:
    if (ctx->pc == 0x239A40u) {
        ctx->pc = 0x239A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A3Cu;
        // 0x239a40: 0x9046041a  lbu         $a2, 0x41A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A44u;
        goto label_239a44;
    }
    ctx->pc = 0x239A3Cu;
    SET_GPR_U32(ctx, 31, 0x239A44u);
    ctx->pc = 0x239A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A3Cu;
    // 0x239a40: 0x9046041a  lbu         $a2, 0x41A($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x239A3Cu, 0x239A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A44u;
label_239a44:
    // 0x239a44: 0x10000039  b           . + 4 + (0x39 << 2)
label_239a48:
    if (ctx->pc == 0x239A48u) {
        ctx->pc = 0x239A4Cu;
        goto label_239a4c;
    }
    ctx->pc = 0x239A44u;
    {
        const bool branch_taken_0x239a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a44) {
            ctx->pc = 0x239B2Cu;
            goto label_239b2c;
        }
    }
    ctx->pc = 0x239A4Cu;
label_239a4c:
    // 0x239a4c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239a50:
    // 0x239a50: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_239a54:
    if (ctx->pc == 0x239A54u) {
        ctx->pc = 0x239A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A50u;
        // 0x239a54: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A58u;
        goto label_239a58;
    }
    ctx->pc = 0x239A50u;
    {
        const bool branch_taken_0x239a50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A50u;
        // 0x239a54: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a50) {
            ctx->pc = 0x239A78u;
            goto label_239a78;
        }
    }
    ctx->pc = 0x239A58u;
label_239a58:
    // 0x239a58: 0xc0874fa  jal         func_21D3E8
label_239a5c:
    if (ctx->pc == 0x239A5Cu) {
        ctx->pc = 0x239A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A58u;
        // 0x239a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A60u;
        goto label_239a60;
    }
    ctx->pc = 0x239A58u;
    SET_GPR_U32(ctx, 31, 0x239A60u);
    ctx->pc = 0x239A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A58u;
    // 0x239a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x239A58u, 0x239A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A60u;
label_239a60:
    // 0x239a60: 0x80530019  lb          $s3, 0x19($v0)
    ctx->pc = 0x239a60u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_239a64:
    // 0x239a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239a68:
    // 0x239a68: 0x8e300380  lw          $s0, 0x380($s1)
    ctx->pc = 0x239a68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_239a6c:
    // 0x239a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239a70:
    // 0x239a70: 0xc08a8aa  jal         func_22A2A8
label_239a74:
    if (ctx->pc == 0x239A74u) {
        ctx->pc = 0x239A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A70u;
        // 0x239a74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A78u;
        goto label_239a78;
    }
    ctx->pc = 0x239A70u;
    SET_GPR_U32(ctx, 31, 0x239A78u);
    ctx->pc = 0x239A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A70u;
    // 0x239a74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2A8u, 0x239A70u, 0x239A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A78u;
label_239a78:
    // 0x239a78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x239a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_239a7c:
    // 0x239a7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239a80:
    // 0x239a80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239a84:
    // 0x239a84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x239a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239a88:
    // 0x239a88: 0xaec20044  sw          $v0, 0x44($s6)
    ctx->pc = 0x239a88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
label_239a8c:
    // 0x239a8c: 0xc08a710  jal         func_229C40
label_239a90:
    if (ctx->pc == 0x239A90u) {
        ctx->pc = 0x239A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A8Cu;
        // 0x239a90: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A94u;
        goto label_239a94;
    }
    ctx->pc = 0x239A8Cu;
    SET_GPR_U32(ctx, 31, 0x239A94u);
    ctx->pc = 0x239A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A8Cu;
    // 0x239a90: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x239A8Cu, 0x239A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A94u;
label_239a94:
    // 0x239a94: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_239a98:
    if (ctx->pc == 0x239A98u) {
        ctx->pc = 0x239A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A94u;
        // 0x239a98: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239A9Cu;
        goto label_239a9c;
    }
    ctx->pc = 0x239A94u;
    {
        const bool branch_taken_0x239a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A94u;
        // 0x239a98: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a94) {
            ctx->pc = 0x239AD8u;
            goto label_239ad8;
        }
    }
    ctx->pc = 0x239A9Cu;
label_239a9c:
    // 0x239a9c: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_239aa0:
    if (ctx->pc == 0x239AA0u) {
        ctx->pc = 0x239AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A9Cu;
        // 0x239aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AA4u;
        goto label_239aa4;
    }
    ctx->pc = 0x239A9Cu;
    {
        const bool branch_taken_0x239a9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A9Cu;
        // 0x239aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a9c) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239AA4u;
label_239aa4:
    // 0x239aa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x239aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239aa8:
    // 0x239aa8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_239aac:
    // 0x239aac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x239aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_239ab0:
    // 0x239ab0: 0x40f809  jalr        $v0
label_239ab4:
    if (ctx->pc == 0x239AB4u) {
        ctx->pc = 0x239AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AB0u;
        // 0x239ab4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AB8u;
        goto label_239ab8;
    }
    ctx->pc = 0x239AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239AB8u);
        ctx->pc = 0x239AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AB0u;
        // 0x239ab4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239AB0u, 0x239AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239AB8u;
label_239ab8:
    // 0x239ab8: 0xaec20044  sw          $v0, 0x44($s6)
    ctx->pc = 0x239ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
label_239abc:
    // 0x239abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239ac0:
    // 0x239ac0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239ac4:
    // 0x239ac4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x239ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239ac8:
    // 0x239ac8: 0xc08a710  jal         func_229C40
label_239acc:
    if (ctx->pc == 0x239ACCu) {
        ctx->pc = 0x239ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AC8u;
        // 0x239acc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AD0u;
        goto label_239ad0;
    }
    ctx->pc = 0x239AC8u;
    SET_GPR_U32(ctx, 31, 0x239AD0u);
    ctx->pc = 0x239ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AC8u;
    // 0x239acc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x239AC8u, 0x239AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AD0u;
label_239ad0:
    // 0x239ad0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_239ad4:
    if (ctx->pc == 0x239AD4u) {
        ctx->pc = 0x239AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AD0u;
        // 0x239ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AD8u;
        goto label_239ad8;
    }
    ctx->pc = 0x239AD0u;
    {
        const bool branch_taken_0x239ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AD0u;
        // 0x239ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ad0) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239AD8u;
label_239ad8:
    // 0x239ad8: 0xc0e409a  jal         func_390268
label_239adc:
    if (ctx->pc == 0x239ADCu) {
        ctx->pc = 0x239ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AD8u;
        // 0x239adc: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AE0u;
        goto label_239ae0;
    }
    ctx->pc = 0x239AD8u;
    SET_GPR_U32(ctx, 31, 0x239AE0u);
    ctx->pc = 0x239ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AD8u;
    // 0x239adc: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x239AD8u, 0x239AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AE0u;
label_239ae0:
    // 0x239ae0: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
label_239ae4:
    if (ctx->pc == 0x239AE4u) {
        ctx->pc = 0x239AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AE0u;
        // 0x239ae4: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AE8u;
        goto label_239ae8;
    }
    ctx->pc = 0x239AE0u;
    {
        const bool branch_taken_0x239ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x239AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AE0u;
        // 0x239ae4: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ae0) {
            ctx->pc = 0x239B00u;
            goto label_239b00;
        }
    }
    ctx->pc = 0x239AE8u;
label_239ae8:
    // 0x239ae8: 0xc0e409a  jal         func_390268
label_239aec:
    if (ctx->pc == 0x239AECu) {
        ctx->pc = 0x239AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AE8u;
        // 0x239aec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239AF0u;
        goto label_239af0;
    }
    ctx->pc = 0x239AE8u;
    SET_GPR_U32(ctx, 31, 0x239AF0u);
    ctx->pc = 0x239AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AE8u;
    // 0x239aec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x239AE8u, 0x239AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AF0u;
label_239af0:
    // 0x239af0: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x239af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_239af4:
    // 0x239af4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x239af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239af8:
    // 0x239af8: 0xc106784  jal         func_419E10
label_239afc:
    if (ctx->pc == 0x239AFCu) {
        ctx->pc = 0x239AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AF8u;
        // 0x239afc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B00u;
        goto label_239b00;
    }
    ctx->pc = 0x239AF8u;
    SET_GPR_U32(ctx, 31, 0x239B00u);
    ctx->pc = 0x239AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AF8u;
    // 0x239afc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x239AF8u, 0x239B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B00u;
label_239b00:
    // 0x239b00: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_239b04:
    if (ctx->pc == 0x239B04u) {
        ctx->pc = 0x239B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B00u;
        // 0x239b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B08u;
        goto label_239b08;
    }
    ctx->pc = 0x239B00u;
    {
        const bool branch_taken_0x239b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B00u;
        // 0x239b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b00) {
            ctx->pc = 0x239B24u;
            goto label_239b24;
        }
    }
    ctx->pc = 0x239B08u;
label_239b08:
    // 0x239b08: 0xc048892  jal         func_122248
label_239b0c:
    if (ctx->pc == 0x239B0Cu) {
        ctx->pc = 0x239B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B08u;
        // 0x239b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B10u;
        goto label_239b10;
    }
    ctx->pc = 0x239B08u;
    SET_GPR_U32(ctx, 31, 0x239B10u);
    ctx->pc = 0x239B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B08u;
    // 0x239b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x239B08u, 0x239B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B10u;
label_239b10:
    // 0x239b10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_239b14:
    if (ctx->pc == 0x239B14u) {
        ctx->pc = 0x239B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B10u;
        // 0x239b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B18u;
        goto label_239b18;
    }
    ctx->pc = 0x239B10u;
    {
        const bool branch_taken_0x239b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B10u;
        // 0x239b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b10) {
            ctx->pc = 0x239B20u;
            goto label_239b20;
        }
    }
    ctx->pc = 0x239B18u;
label_239b18:
    // 0x239b18: 0xc04890e  jal         func_122438
label_239b1c:
    if (ctx->pc == 0x239B1Cu) {
        ctx->pc = 0x239B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B18u;
        // 0x239b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B20u;
        goto label_239b20;
    }
    ctx->pc = 0x239B18u;
    SET_GPR_U32(ctx, 31, 0x239B20u);
    ctx->pc = 0x239B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B18u;
    // 0x239b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x239B18u, 0x239B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B20u;
label_239b20:
    // 0x239b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239b24:
    // 0x239b24: 0xc0488ac  jal         func_1222B0
label_239b28:
    if (ctx->pc == 0x239B28u) {
        ctx->pc = 0x239B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B24u;
        // 0x239b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B2Cu;
        goto label_239b2c;
    }
    ctx->pc = 0x239B24u;
    SET_GPR_U32(ctx, 31, 0x239B2Cu);
    ctx->pc = 0x239B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B24u;
    // 0x239b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x239B24u, 0x239B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B2Cu;
label_239b2c:
    // 0x239b2c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_239b30:
    if (ctx->pc == 0x239B30u) {
        ctx->pc = 0x239B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B2Cu;
        // 0x239b30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B34u;
        goto label_239b34;
    }
    ctx->pc = 0x239B2Cu;
    {
        const bool branch_taken_0x239b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B2Cu;
        // 0x239b30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b2c) {
            ctx->pc = 0x239B48u;
            goto label_239b48;
        }
    }
    ctx->pc = 0x239B34u;
label_239b34:
    // 0x239b34: 0x822201b1  lb          $v0, 0x1B1($s1)
    ctx->pc = 0x239b34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 433)));
label_239b38:
    // 0x239b38: 0x824301b1  lb          $v1, 0x1B1($s2)
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 433)));
label_239b3c:
    // 0x239b3c: 0xa24201b1  sb          $v0, 0x1B1($s2)
    ctx->pc = 0x239b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 433), (uint8_t)GPR_U32(ctx, 2));
label_239b40:
    // 0x239b40: 0x10000002  b           . + 4 + (0x2 << 2)
label_239b44:
    if (ctx->pc == 0x239B44u) {
        ctx->pc = 0x239B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B40u;
        // 0x239b44: 0xa22301b1  sb          $v1, 0x1B1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 433), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B48u;
        goto label_239b48;
    }
    ctx->pc = 0x239B40u;
    {
        const bool branch_taken_0x239b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B40u;
        // 0x239b44: 0xa22301b1  sb          $v1, 0x1B1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 433), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b40) {
            ctx->pc = 0x239B4Cu;
            goto label_239b4c;
        }
    }
    ctx->pc = 0x239B48u;
label_239b48:
    // 0x239b48: 0xa24201b1  sb          $v0, 0x1B1($s2)
    ctx->pc = 0x239b48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 433), (uint8_t)GPR_U32(ctx, 2));
label_239b4c:
    // 0x239b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239b50:
    // 0x239b50: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x239b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_239b54:
    // 0x239b54: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x239b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_239b58:
    // 0x239b58: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x239b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_239b5c:
    // 0x239b5c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x239b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_239b60:
    // 0x239b60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x239b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_239b64:
    // 0x239b64: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x239b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_239b68:
    // 0x239b68: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x239b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239b6c:
    // 0x239b6c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x239b6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239b70:
    // 0x239b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239b74:
    // 0x239b74: 0x3e00008  jr          $ra
label_239b78:
    if (ctx->pc == 0x239B78u) {
        ctx->pc = 0x239B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B74u;
        // 0x239b78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B7Cu;
        goto label_239b7c;
    }
    ctx->pc = 0x239B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B74u;
        // 0x239b78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239B7Cu;
label_239b7c:
    // 0x239b7c: 0x0  nop
    ctx->pc = 0x239b7cu;
    // NOP
    ctx->pc = 0x239b80u;
}
