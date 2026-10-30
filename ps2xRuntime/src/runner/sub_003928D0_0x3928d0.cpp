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

// Function: sub_003928D0
// Address: 0x3928d0 - 0x392b88
void sub_003928D0_0x3928d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003928D0_0x3928d0");
#endif

    switch (ctx->pc) {
        case 0x3928d0u: goto label_3928d0;
        case 0x3928d4u: goto label_3928d4;
        case 0x3928d8u: goto label_3928d8;
        case 0x3928dcu: goto label_3928dc;
        case 0x3928e0u: goto label_3928e0;
        case 0x3928e4u: goto label_3928e4;
        case 0x3928e8u: goto label_3928e8;
        case 0x3928ecu: goto label_3928ec;
        case 0x3928f0u: goto label_3928f0;
        case 0x3928f4u: goto label_3928f4;
        case 0x3928f8u: goto label_3928f8;
        case 0x3928fcu: goto label_3928fc;
        case 0x392900u: goto label_392900;
        case 0x392904u: goto label_392904;
        case 0x392908u: goto label_392908;
        case 0x39290cu: goto label_39290c;
        case 0x392910u: goto label_392910;
        case 0x392914u: goto label_392914;
        case 0x392918u: goto label_392918;
        case 0x39291cu: goto label_39291c;
        case 0x392920u: goto label_392920;
        case 0x392924u: goto label_392924;
        case 0x392928u: goto label_392928;
        case 0x39292cu: goto label_39292c;
        case 0x392930u: goto label_392930;
        case 0x392934u: goto label_392934;
        case 0x392938u: goto label_392938;
        case 0x39293cu: goto label_39293c;
        case 0x392940u: goto label_392940;
        case 0x392944u: goto label_392944;
        case 0x392948u: goto label_392948;
        case 0x39294cu: goto label_39294c;
        case 0x392950u: goto label_392950;
        case 0x392954u: goto label_392954;
        case 0x392958u: goto label_392958;
        case 0x39295cu: goto label_39295c;
        case 0x392960u: goto label_392960;
        case 0x392964u: goto label_392964;
        case 0x392968u: goto label_392968;
        case 0x39296cu: goto label_39296c;
        case 0x392970u: goto label_392970;
        case 0x392974u: goto label_392974;
        case 0x392978u: goto label_392978;
        case 0x39297cu: goto label_39297c;
        case 0x392980u: goto label_392980;
        case 0x392984u: goto label_392984;
        case 0x392988u: goto label_392988;
        case 0x39298cu: goto label_39298c;
        case 0x392990u: goto label_392990;
        case 0x392994u: goto label_392994;
        case 0x392998u: goto label_392998;
        case 0x39299cu: goto label_39299c;
        case 0x3929a0u: goto label_3929a0;
        case 0x3929a4u: goto label_3929a4;
        case 0x3929a8u: goto label_3929a8;
        case 0x3929acu: goto label_3929ac;
        case 0x3929b0u: goto label_3929b0;
        case 0x3929b4u: goto label_3929b4;
        case 0x3929b8u: goto label_3929b8;
        case 0x3929bcu: goto label_3929bc;
        case 0x3929c0u: goto label_3929c0;
        case 0x3929c4u: goto label_3929c4;
        case 0x3929c8u: goto label_3929c8;
        case 0x3929ccu: goto label_3929cc;
        case 0x3929d0u: goto label_3929d0;
        case 0x3929d4u: goto label_3929d4;
        case 0x3929d8u: goto label_3929d8;
        case 0x3929dcu: goto label_3929dc;
        case 0x3929e0u: goto label_3929e0;
        case 0x3929e4u: goto label_3929e4;
        case 0x3929e8u: goto label_3929e8;
        case 0x3929ecu: goto label_3929ec;
        case 0x3929f0u: goto label_3929f0;
        case 0x3929f4u: goto label_3929f4;
        case 0x3929f8u: goto label_3929f8;
        case 0x3929fcu: goto label_3929fc;
        case 0x392a00u: goto label_392a00;
        case 0x392a04u: goto label_392a04;
        case 0x392a08u: goto label_392a08;
        case 0x392a0cu: goto label_392a0c;
        case 0x392a10u: goto label_392a10;
        case 0x392a14u: goto label_392a14;
        case 0x392a18u: goto label_392a18;
        case 0x392a1cu: goto label_392a1c;
        case 0x392a20u: goto label_392a20;
        case 0x392a24u: goto label_392a24;
        case 0x392a28u: goto label_392a28;
        case 0x392a2cu: goto label_392a2c;
        case 0x392a30u: goto label_392a30;
        case 0x392a34u: goto label_392a34;
        case 0x392a38u: goto label_392a38;
        case 0x392a3cu: goto label_392a3c;
        case 0x392a40u: goto label_392a40;
        case 0x392a44u: goto label_392a44;
        case 0x392a48u: goto label_392a48;
        case 0x392a4cu: goto label_392a4c;
        case 0x392a50u: goto label_392a50;
        case 0x392a54u: goto label_392a54;
        case 0x392a58u: goto label_392a58;
        case 0x392a5cu: goto label_392a5c;
        case 0x392a60u: goto label_392a60;
        case 0x392a64u: goto label_392a64;
        case 0x392a68u: goto label_392a68;
        case 0x392a6cu: goto label_392a6c;
        case 0x392a70u: goto label_392a70;
        case 0x392a74u: goto label_392a74;
        case 0x392a78u: goto label_392a78;
        case 0x392a7cu: goto label_392a7c;
        case 0x392a80u: goto label_392a80;
        case 0x392a84u: goto label_392a84;
        case 0x392a88u: goto label_392a88;
        case 0x392a8cu: goto label_392a8c;
        case 0x392a90u: goto label_392a90;
        case 0x392a94u: goto label_392a94;
        case 0x392a98u: goto label_392a98;
        case 0x392a9cu: goto label_392a9c;
        case 0x392aa0u: goto label_392aa0;
        case 0x392aa4u: goto label_392aa4;
        case 0x392aa8u: goto label_392aa8;
        case 0x392aacu: goto label_392aac;
        case 0x392ab0u: goto label_392ab0;
        case 0x392ab4u: goto label_392ab4;
        case 0x392ab8u: goto label_392ab8;
        case 0x392abcu: goto label_392abc;
        case 0x392ac0u: goto label_392ac0;
        case 0x392ac4u: goto label_392ac4;
        case 0x392ac8u: goto label_392ac8;
        case 0x392accu: goto label_392acc;
        case 0x392ad0u: goto label_392ad0;
        case 0x392ad4u: goto label_392ad4;
        case 0x392ad8u: goto label_392ad8;
        case 0x392adcu: goto label_392adc;
        case 0x392ae0u: goto label_392ae0;
        case 0x392ae4u: goto label_392ae4;
        case 0x392ae8u: goto label_392ae8;
        case 0x392aecu: goto label_392aec;
        case 0x392af0u: goto label_392af0;
        case 0x392af4u: goto label_392af4;
        case 0x392af8u: goto label_392af8;
        case 0x392afcu: goto label_392afc;
        case 0x392b00u: goto label_392b00;
        case 0x392b04u: goto label_392b04;
        case 0x392b08u: goto label_392b08;
        case 0x392b0cu: goto label_392b0c;
        case 0x392b10u: goto label_392b10;
        case 0x392b14u: goto label_392b14;
        case 0x392b18u: goto label_392b18;
        case 0x392b1cu: goto label_392b1c;
        case 0x392b20u: goto label_392b20;
        case 0x392b24u: goto label_392b24;
        case 0x392b28u: goto label_392b28;
        case 0x392b2cu: goto label_392b2c;
        case 0x392b30u: goto label_392b30;
        case 0x392b34u: goto label_392b34;
        case 0x392b38u: goto label_392b38;
        case 0x392b3cu: goto label_392b3c;
        case 0x392b40u: goto label_392b40;
        case 0x392b44u: goto label_392b44;
        case 0x392b48u: goto label_392b48;
        case 0x392b4cu: goto label_392b4c;
        case 0x392b50u: goto label_392b50;
        case 0x392b54u: goto label_392b54;
        case 0x392b58u: goto label_392b58;
        case 0x392b5cu: goto label_392b5c;
        case 0x392b60u: goto label_392b60;
        case 0x392b64u: goto label_392b64;
        case 0x392b68u: goto label_392b68;
        case 0x392b6cu: goto label_392b6c;
        case 0x392b70u: goto label_392b70;
        case 0x392b74u: goto label_392b74;
        case 0x392b78u: goto label_392b78;
        case 0x392b7cu: goto label_392b7c;
        case 0x392b80u: goto label_392b80;
        case 0x392b84u: goto label_392b84;
        default: break;
    }

    ctx->pc = 0x3928d0u;

label_3928d0:
    // 0x3928d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3928d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3928d4:
    // 0x3928d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3928d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3928d8:
    // 0x3928d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3928d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3928dc:
    // 0x3928dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3928dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3928e0:
    // 0x3928e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3928e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3928e4:
    // 0x3928e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3928e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3928e8:
    // 0x3928e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3928e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3928ec:
    // 0x3928ec: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3928ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3928f0:
    // 0x3928f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3928f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3928f4:
    // 0x3928f4: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x3928f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_3928f8:
    // 0x3928f8: 0xc0e44cc  jal         func_391330
label_3928fc:
    if (ctx->pc == 0x3928FCu) {
        ctx->pc = 0x3928FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928F8u;
        // 0x3928fc: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392900u;
        goto label_392900;
    }
    ctx->pc = 0x3928F8u;
    SET_GPR_U32(ctx, 31, 0x392900u);
    ctx->pc = 0x3928FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3928F8u;
    // 0x3928fc: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3928F8u, 0x392900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392900u;
label_392900:
    // 0x392900: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x392900u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_392904:
    // 0x392904: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x392904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_392908:
    // 0x392908: 0x54620074  bnel        $v1, $v0, . + 4 + (0x74 << 2)
label_39290c:
    if (ctx->pc == 0x39290Cu) {
        ctx->pc = 0x39290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392908u;
        // 0x39290c: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392910u;
        goto label_392910;
    }
    ctx->pc = 0x392908u;
    {
        const bool branch_taken_0x392908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x392908) {
            ctx->pc = 0x39290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392908u;
            // 0x39290c: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392ADCu;
            goto label_392adc;
        }
    }
    ctx->pc = 0x392910u;
label_392910:
    // 0x392910: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392914:
    // 0x392914: 0xc087620  jal         func_21D880
label_392918:
    if (ctx->pc == 0x392918u) {
        ctx->pc = 0x392918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392914u;
        // 0x392918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39291Cu;
        goto label_39291c;
    }
    ctx->pc = 0x392914u;
    SET_GPR_U32(ctx, 31, 0x39291Cu);
    ctx->pc = 0x392918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392914u;
    // 0x392918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D880u, 0x392914u, 0x39291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39291Cu;
label_39291c:
    // 0x39291c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x39291cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_392920:
    // 0x392920: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x392920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_392924:
    // 0x392924: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x392924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392928:
    // 0x392928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39292c:
    // 0x39292c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39292cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392930:
    // 0x392930: 0x84450144  lh          $a1, 0x144($v0)
    ctx->pc = 0x392930u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
label_392934:
    // 0x392934: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x392934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392938:
    // 0x392938: 0xc0875a0  jal         func_21D680
label_39293c:
    if (ctx->pc == 0x39293Cu) {
        ctx->pc = 0x39293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392938u;
        // 0x39293c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392940u;
        goto label_392940;
    }
    ctx->pc = 0x392938u;
    SET_GPR_U32(ctx, 31, 0x392940u);
    ctx->pc = 0x39293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392938u;
    // 0x39293c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x392938u, 0x392940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392940u;
label_392940:
    // 0x392940: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x392940u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_392944:
    // 0x392944: 0xc0e44cc  jal         func_391330
label_392948:
    if (ctx->pc == 0x392948u) {
        ctx->pc = 0x392948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392944u;
        // 0x392948: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39294Cu;
        goto label_39294c;
    }
    ctx->pc = 0x392944u;
    SET_GPR_U32(ctx, 31, 0x39294Cu);
    ctx->pc = 0x392948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392944u;
    // 0x392948: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392944u, 0x39294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39294Cu;
label_39294c:
    // 0x39294c: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x39294cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_392950:
    // 0x392950: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x392950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_392954:
    // 0x392954: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x392954u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_392958:
    // 0x392958: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x392958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_39295c:
    // 0x39295c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_392960:
    // 0x392960: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392964:
    // 0x392964: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x392964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_392968:
    // 0x392968: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x392968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_39296c:
    // 0x39296c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x39296cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_392970:
    // 0x392970: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x392970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_392974:
    // 0x392974: 0xc04420c  jal         func_110830
label_392978:
    if (ctx->pc == 0x392978u) {
        ctx->pc = 0x392978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392974u;
        // 0x392978: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39297Cu;
        goto label_39297c;
    }
    ctx->pc = 0x392974u;
    SET_GPR_U32(ctx, 31, 0x39297Cu);
    ctx->pc = 0x392978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392974u;
    // 0x392978: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x392974u, 0x39297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39297Cu;
label_39297c:
    // 0x39297c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392980:
    // 0x392980: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x392980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_392984:
    // 0x392984: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x392984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_392988:
    // 0x392988: 0x40f809  jalr        $v0
label_39298c:
    if (ctx->pc == 0x39298Cu) {
        ctx->pc = 0x39298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392988u;
        // 0x39298c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392990u;
        goto label_392990;
    }
    ctx->pc = 0x392988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392990u);
        ctx->pc = 0x39298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392988u;
        // 0x39298c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392988u, 0x392990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392990u;
label_392990:
    // 0x392990: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x392990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_392994:
    // 0x392994: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x392994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_392998:
    // 0x392998: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x392998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_39299c:
    // 0x39299c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x39299cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3929a0:
    // 0x3929a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3929a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3929a4:
    // 0x3929a4: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x3929a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_3929a8:
    // 0x3929a8: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x3929a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_3929ac:
    // 0x3929ac: 0x40f809  jalr        $v0
label_3929b0:
    if (ctx->pc == 0x3929B0u) {
        ctx->pc = 0x3929B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929ACu;
        // 0x3929b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929B4u;
        goto label_3929b4;
    }
    ctx->pc = 0x3929ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3929B4u);
        ctx->pc = 0x3929B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929ACu;
        // 0x3929b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3929ACu, 0x3929B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3929B4u;
label_3929b4:
    // 0x3929b4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3929b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3929b8:
    // 0x3929b8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x3929b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3929bc:
    // 0x3929bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3929bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3929c0:
    // 0x3929c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3929c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3929c4:
    // 0x3929c4: 0xc089a76  jal         func_2269D8
label_3929c8:
    if (ctx->pc == 0x3929C8u) {
        ctx->pc = 0x3929C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929C4u;
        // 0x3929c8: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929CCu;
        goto label_3929cc;
    }
    ctx->pc = 0x3929C4u;
    SET_GPR_U32(ctx, 31, 0x3929CCu);
    ctx->pc = 0x3929C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3929C4u;
    // 0x3929c8: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x3929C4u, 0x3929CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3929CCu;
label_3929cc:
    // 0x3929cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3929ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3929d0:
    // 0x3929d0: 0xc08a0fa  jal         func_2283E8
label_3929d4:
    if (ctx->pc == 0x3929D4u) {
        ctx->pc = 0x3929D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929D0u;
        // 0x3929d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929D8u;
        goto label_3929d8;
    }
    ctx->pc = 0x3929D0u;
    SET_GPR_U32(ctx, 31, 0x3929D8u);
    ctx->pc = 0x3929D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3929D0u;
    // 0x3929d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283E8u, 0x3929D0u, 0x3929D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3929D8u;
label_3929d8:
    // 0x3929d8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_3929dc:
    if (ctx->pc == 0x3929DCu) {
        ctx->pc = 0x3929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929D8u;
        // 0x3929dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929E0u;
        goto label_3929e0;
    }
    ctx->pc = 0x3929D8u;
    {
        const bool branch_taken_0x3929d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929D8u;
        // 0x3929dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929d8) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x3929E0u;
label_3929e0:
    // 0x3929e0: 0x12400062  beqz        $s2, . + 4 + (0x62 << 2)
label_3929e4:
    if (ctx->pc == 0x3929E4u) {
        ctx->pc = 0x3929E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929E0u;
        // 0x3929e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929E8u;
        goto label_3929e8;
    }
    ctx->pc = 0x3929E0u;
    {
        const bool branch_taken_0x3929e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3929E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929E0u;
        // 0x3929e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929e0) {
            ctx->pc = 0x392B6Cu;
            goto label_392b6c;
        }
    }
    ctx->pc = 0x3929E8u;
label_3929e8:
    // 0x3929e8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x3929e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_3929ec:
    // 0x3929ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3929ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3929f0:
    // 0x3929f0: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_3929f4:
    if (ctx->pc == 0x3929F4u) {
        ctx->pc = 0x3929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929F0u;
        // 0x3929f4: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929F8u;
        goto label_3929f8;
    }
    ctx->pc = 0x3929F0u;
    {
        const bool branch_taken_0x3929f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929F0u;
        // 0x3929f4: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929f0) {
            ctx->pc = 0x392B5Cu;
            goto label_392b5c;
        }
    }
    ctx->pc = 0x3929F8u;
label_3929f8:
    // 0x3929f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3929f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3929fc:
    // 0x3929fc: 0x2613e490  addiu       $s3, $s0, -0x1B70
    ctx->pc = 0x3929fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
label_392a00:
    // 0x392a00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x392a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_392a04:
    // 0x392a04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392a08:
    // 0x392a08: 0xc13b662  jal         func_4ED988
label_392a0c:
    if (ctx->pc == 0x392A0Cu) {
        ctx->pc = 0x392A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A08u;
        // 0x392a0c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A10u;
        goto label_392a10;
    }
    ctx->pc = 0x392A08u;
    SET_GPR_U32(ctx, 31, 0x392A10u);
    ctx->pc = 0x392A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392A08u;
    // 0x392a0c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x392A08u, 0x392A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A10u;
label_392a10:
    // 0x392a10: 0xc087502  jal         func_21D408
label_392a14:
    if (ctx->pc == 0x392A14u) {
        ctx->pc = 0x392A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A10u;
        // 0x392a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A18u;
        goto label_392a18;
    }
    ctx->pc = 0x392A10u;
    SET_GPR_U32(ctx, 31, 0x392A18u);
    ctx->pc = 0x392A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392A10u;
    // 0x392a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x392A10u, 0x392A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A18u;
label_392a18:
    // 0x392a18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x392a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_392a1c:
    // 0x392a1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x392a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392a20:
    // 0x392a20: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_392a24:
    if (ctx->pc == 0x392A24u) {
        ctx->pc = 0x392A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A20u;
        // 0x392a24: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A28u;
        goto label_392a28;
    }
    ctx->pc = 0x392A20u;
    {
        const bool branch_taken_0x392a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A20u;
        // 0x392a24: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a20) {
            ctx->pc = 0x392A5Cu;
            goto label_392a5c;
        }
    }
    ctx->pc = 0x392A28u;
label_392a28:
    // 0x392a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_392a2c:
    if (ctx->pc == 0x392A2Cu) {
        ctx->pc = 0x392A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A28u;
        // 0x392a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A30u;
        goto label_392a30;
    }
    ctx->pc = 0x392A28u;
    {
        const bool branch_taken_0x392a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A28u;
        // 0x392a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a28) {
            ctx->pc = 0x392A40u;
            goto label_392a40;
        }
    }
    ctx->pc = 0x392A30u;
label_392a30:
    // 0x392a30: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_392a34:
    if (ctx->pc == 0x392A34u) {
        ctx->pc = 0x392A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A30u;
        // 0x392a34: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A38u;
        goto label_392a38;
    }
    ctx->pc = 0x392A30u;
    {
        const bool branch_taken_0x392a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A30u;
        // 0x392a34: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a30) {
            ctx->pc = 0x392AB8u;
            goto label_392ab8;
        }
    }
    ctx->pc = 0x392A38u;
label_392a38:
    // 0x392a38: 0x1000004c  b           . + 4 + (0x4C << 2)
label_392a3c:
    if (ctx->pc == 0x392A3Cu) {
        ctx->pc = 0x392A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A38u;
        // 0x392a3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A40u;
        goto label_392a40;
    }
    ctx->pc = 0x392A38u;
    {
        const bool branch_taken_0x392a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A38u;
        // 0x392a3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a38) {
            ctx->pc = 0x392B6Cu;
            goto label_392b6c;
        }
    }
    ctx->pc = 0x392A40u;
label_392a40:
    // 0x392a40: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x392a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_392a44:
    // 0x392a44: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_392a48:
    if (ctx->pc == 0x392A48u) {
        ctx->pc = 0x392A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A44u;
        // 0x392a48: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A4Cu;
        goto label_392a4c;
    }
    ctx->pc = 0x392A44u;
    {
        const bool branch_taken_0x392a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A44u;
        // 0x392a48: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a44) {
            ctx->pc = 0x392B5Cu;
            goto label_392b5c;
        }
    }
    ctx->pc = 0x392A4Cu;
label_392a4c:
    // 0x392a4c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_392a50:
    if (ctx->pc == 0x392A50u) {
        ctx->pc = 0x392A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A4Cu;
        // 0x392a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A54u;
        goto label_392a54;
    }
    ctx->pc = 0x392A4Cu;
    {
        const bool branch_taken_0x392a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A4Cu;
        // 0x392a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a4c) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x392A54u;
label_392a54:
    // 0x392a54: 0x10000018  b           . + 4 + (0x18 << 2)
label_392a58:
    if (ctx->pc == 0x392A58u) {
        ctx->pc = 0x392A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A54u;
        // 0x392a58: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A5Cu;
        goto label_392a5c;
    }
    ctx->pc = 0x392A54u;
    {
        const bool branch_taken_0x392a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A54u;
        // 0x392a58: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a54) {
            ctx->pc = 0x392AB8u;
            goto label_392ab8;
        }
    }
    ctx->pc = 0x392A5Cu;
label_392a5c:
    // 0x392a5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392a60:
    // 0x392a60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392a64:
    // 0x392a64: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x392a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_392a68:
    // 0x392a68: 0xc13b632  jal         func_4ED8C8
label_392a6c:
    if (ctx->pc == 0x392A6Cu) {
        ctx->pc = 0x392A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A68u;
        // 0x392a6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A70u;
        goto label_392a70;
    }
    ctx->pc = 0x392A68u;
    SET_GPR_U32(ctx, 31, 0x392A70u);
    ctx->pc = 0x392A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392A68u;
    // 0x392a6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x392A68u, 0x392A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A70u;
label_392a70:
    // 0x392a70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x392a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_392a74:
    // 0x392a74: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x392a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_392a78:
    // 0x392a78: 0x8c440158  lw          $a0, 0x158($v0)
    ctx->pc = 0x392a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_392a7c:
    // 0x392a7c: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
label_392a80:
    if (ctx->pc == 0x392A80u) {
        ctx->pc = 0x392A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A7Cu;
        // 0x392a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A84u;
        goto label_392a84;
    }
    ctx->pc = 0x392A7Cu;
    {
        const bool branch_taken_0x392a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x392A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A7Cu;
        // 0x392a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a7c) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x392A84u;
label_392a84:
    // 0x392a84: 0xc08a200  jal         func_228800
label_392a88:
    if (ctx->pc == 0x392A88u) {
        ctx->pc = 0x392A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A84u;
        // 0x392a88: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A8Cu;
        goto label_392a8c;
    }
    ctx->pc = 0x392A84u;
    SET_GPR_U32(ctx, 31, 0x392A8Cu);
    ctx->pc = 0x392A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392A84u;
    // 0x392a88: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x392A84u, 0x392A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A8Cu;
label_392a8c:
    // 0x392a8c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x392a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_392a90:
    // 0x392a90: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x392a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_392a94:
    // 0x392a94: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_392a98:
    if (ctx->pc == 0x392A98u) {
        ctx->pc = 0x392A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A94u;
        // 0x392a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A9Cu;
        goto label_392a9c;
    }
    ctx->pc = 0x392A94u;
    {
        const bool branch_taken_0x392a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x392A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A94u;
        // 0x392a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a94) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x392A9Cu;
label_392a9c:
    // 0x392a9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392aa0:
    // 0x392aa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392aa4:
    // 0x392aa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x392aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392aa8:
    // 0x392aa8: 0xc13b642  jal         func_4ED908
label_392aac:
    if (ctx->pc == 0x392AACu) {
        ctx->pc = 0x392AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AA8u;
        // 0x392aac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AB0u;
        goto label_392ab0;
    }
    ctx->pc = 0x392AA8u;
    SET_GPR_U32(ctx, 31, 0x392AB0u);
    ctx->pc = 0x392AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392AA8u;
    // 0x392aac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED908u, 0x392AA8u, 0x392AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392AB0u;
label_392ab0:
    // 0x392ab0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_392ab4:
    if (ctx->pc == 0x392AB4u) {
        ctx->pc = 0x392AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AB0u;
        // 0x392ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AB8u;
        goto label_392ab8;
    }
    ctx->pc = 0x392AB0u;
    {
        const bool branch_taken_0x392ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AB0u;
        // 0x392ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ab0) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x392AB8u;
label_392ab8:
    // 0x392ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x392ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392abc:
    // 0x392abc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x392abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_392ac0:
    // 0x392ac0: 0x2604e490  addiu       $a0, $s0, -0x1B70
    ctx->pc = 0x392ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
label_392ac4:
    // 0x392ac4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x392ac4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_392ac8:
    // 0x392ac8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392acc:
    // 0x392acc: 0xc13b652  jal         func_4ED948
label_392ad0:
    if (ctx->pc == 0x392AD0u) {
        ctx->pc = 0x392AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ACCu;
        // 0x392ad0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AD4u;
        goto label_392ad4;
    }
    ctx->pc = 0x392ACCu;
    SET_GPR_U32(ctx, 31, 0x392AD4u);
    ctx->pc = 0x392AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392ACCu;
    // 0x392ad0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x392ACCu, 0x392AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392AD4u;
label_392ad4:
    // 0x392ad4: 0x10000024  b           . + 4 + (0x24 << 2)
label_392ad8:
    if (ctx->pc == 0x392AD8u) {
        ctx->pc = 0x392AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AD4u;
        // 0x392ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392ADCu;
        goto label_392adc;
    }
    ctx->pc = 0x392AD4u;
    {
        const bool branch_taken_0x392ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AD4u;
        // 0x392ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ad4) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x392ADCu;
label_392adc:
    // 0x392adc: 0xc0e44cc  jal         func_391330
label_392ae0:
    if (ctx->pc == 0x392AE0u) {
        ctx->pc = 0x392AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ADCu;
        // 0x392ae0: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AE4u;
        goto label_392ae4;
    }
    ctx->pc = 0x392ADCu;
    SET_GPR_U32(ctx, 31, 0x392AE4u);
    ctx->pc = 0x392AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392ADCu;
    // 0x392ae0: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392ADCu, 0x392AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392AE4u;
label_392ae4:
    // 0x392ae4: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x392ae4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_392ae8:
    // 0x392ae8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x392ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_392aec:
    // 0x392aec: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_392af0:
    if (ctx->pc == 0x392AF0u) {
        ctx->pc = 0x392AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AECu;
        // 0x392af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AF4u;
        goto label_392af4;
    }
    ctx->pc = 0x392AECu;
    {
        const bool branch_taken_0x392aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x392AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AECu;
        // 0x392af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392aec) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x392AF4u;
label_392af4:
    // 0x392af4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x392af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_392af8:
    // 0x392af8: 0x1052001a  beq         $v0, $s2, . + 4 + (0x1A << 2)
label_392afc:
    if (ctx->pc == 0x392AFCu) {
        ctx->pc = 0x392AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AF8u;
        // 0x392afc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B00u;
        goto label_392b00;
    }
    ctx->pc = 0x392AF8u;
    {
        const bool branch_taken_0x392af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x392AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AF8u;
        // 0x392afc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392af8) {
            ctx->pc = 0x392B64u;
            goto label_392b64;
        }
    }
    ctx->pc = 0x392B00u;
label_392b00:
    // 0x392b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x392b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392b04:
    // 0x392b04: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x392b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392b08:
    // 0x392b08: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x392b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392b0c:
    // 0x392b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x392b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392b10:
    // 0x392b10: 0xc0875a0  jal         func_21D680
label_392b14:
    if (ctx->pc == 0x392B14u) {
        ctx->pc = 0x392B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B10u;
        // 0x392b14: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B18u;
        goto label_392b18;
    }
    ctx->pc = 0x392B10u;
    SET_GPR_U32(ctx, 31, 0x392B18u);
    ctx->pc = 0x392B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392B10u;
    // 0x392b14: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x392B10u, 0x392B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392B18u;
label_392b18:
    // 0x392b18: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x392b18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_392b1c:
    // 0x392b1c: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x392b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_392b20:
    // 0x392b20: 0xc0e44cc  jal         func_391330
label_392b24:
    if (ctx->pc == 0x392B24u) {
        ctx->pc = 0x392B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B20u;
        // 0x392b24: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B28u;
        goto label_392b28;
    }
    ctx->pc = 0x392B20u;
    SET_GPR_U32(ctx, 31, 0x392B28u);
    ctx->pc = 0x392B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392B20u;
    // 0x392b24: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392B20u, 0x392B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392B28u;
label_392b28:
    // 0x392b28: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x392b28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_392b2c:
    // 0x392b2c: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x392b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_392b30:
    // 0x392b30: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x392b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_392b34:
    // 0x392b34: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x392b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_392b38:
    // 0x392b38: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x392b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_392b3c:
    // 0x392b3c: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x392b3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_392b40:
    // 0x392b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x392b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_392b44:
    // 0x392b44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392b48:
    // 0x392b48: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x392b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_392b4c:
    // 0x392b4c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x392b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_392b50:
    // 0x392b50: 0xc04420c  jal         func_110830
label_392b54:
    if (ctx->pc == 0x392B54u) {
        ctx->pc = 0x392B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B50u;
        // 0x392b54: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B58u;
        goto label_392b58;
    }
    ctx->pc = 0x392B50u;
    SET_GPR_U32(ctx, 31, 0x392B58u);
    ctx->pc = 0x392B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392B50u;
    // 0x392b54: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x392B50u, 0x392B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392B58u;
label_392b58:
    // 0x392b58: 0xae320564  sw          $s2, 0x564($s1)
    ctx->pc = 0x392b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 18));
label_392b5c:
    // 0x392b5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_392b60:
    if (ctx->pc == 0x392B60u) {
        ctx->pc = 0x392B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B5Cu;
        // 0x392b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B64u;
        goto label_392b64;
    }
    ctx->pc = 0x392B5Cu;
    {
        const bool branch_taken_0x392b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B5Cu;
        // 0x392b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b5c) {
            ctx->pc = 0x392B68u;
            goto label_392b68;
        }
    }
    ctx->pc = 0x392B64u;
label_392b64:
    // 0x392b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x392b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392b68:
    // 0x392b68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x392b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_392b6c:
    // 0x392b6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x392b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_392b70:
    // 0x392b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x392b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_392b74:
    // 0x392b74: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x392b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392b78:
    // 0x392b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x392b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_392b7c:
    // 0x392b7c: 0x3e00008  jr          $ra
label_392b80:
    if (ctx->pc == 0x392B80u) {
        ctx->pc = 0x392B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B7Cu;
        // 0x392b80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B84u;
        goto label_392b84;
    }
    ctx->pc = 0x392B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B7Cu;
        // 0x392b80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392B84u;
label_392b84:
    // 0x392b84: 0x0  nop
    ctx->pc = 0x392b84u;
    // NOP
    ctx->pc = 0x392b88u;
}
