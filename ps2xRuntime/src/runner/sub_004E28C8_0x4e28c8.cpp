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

// Function: sub_004E28C8
// Address: 0x4e28c8 - 0x4e2c98
void sub_004E28C8_0x4e28c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E28C8_0x4e28c8");
#endif

    switch (ctx->pc) {
        case 0x4e28c8u: goto label_4e28c8;
        case 0x4e28ccu: goto label_4e28cc;
        case 0x4e28d0u: goto label_4e28d0;
        case 0x4e28d4u: goto label_4e28d4;
        case 0x4e28d8u: goto label_4e28d8;
        case 0x4e28dcu: goto label_4e28dc;
        case 0x4e28e0u: goto label_4e28e0;
        case 0x4e28e4u: goto label_4e28e4;
        case 0x4e28e8u: goto label_4e28e8;
        case 0x4e28ecu: goto label_4e28ec;
        case 0x4e28f0u: goto label_4e28f0;
        case 0x4e28f4u: goto label_4e28f4;
        case 0x4e28f8u: goto label_4e28f8;
        case 0x4e28fcu: goto label_4e28fc;
        case 0x4e2900u: goto label_4e2900;
        case 0x4e2904u: goto label_4e2904;
        case 0x4e2908u: goto label_4e2908;
        case 0x4e290cu: goto label_4e290c;
        case 0x4e2910u: goto label_4e2910;
        case 0x4e2914u: goto label_4e2914;
        case 0x4e2918u: goto label_4e2918;
        case 0x4e291cu: goto label_4e291c;
        case 0x4e2920u: goto label_4e2920;
        case 0x4e2924u: goto label_4e2924;
        case 0x4e2928u: goto label_4e2928;
        case 0x4e292cu: goto label_4e292c;
        case 0x4e2930u: goto label_4e2930;
        case 0x4e2934u: goto label_4e2934;
        case 0x4e2938u: goto label_4e2938;
        case 0x4e293cu: goto label_4e293c;
        case 0x4e2940u: goto label_4e2940;
        case 0x4e2944u: goto label_4e2944;
        case 0x4e2948u: goto label_4e2948;
        case 0x4e294cu: goto label_4e294c;
        case 0x4e2950u: goto label_4e2950;
        case 0x4e2954u: goto label_4e2954;
        case 0x4e2958u: goto label_4e2958;
        case 0x4e295cu: goto label_4e295c;
        case 0x4e2960u: goto label_4e2960;
        case 0x4e2964u: goto label_4e2964;
        case 0x4e2968u: goto label_4e2968;
        case 0x4e296cu: goto label_4e296c;
        case 0x4e2970u: goto label_4e2970;
        case 0x4e2974u: goto label_4e2974;
        case 0x4e2978u: goto label_4e2978;
        case 0x4e297cu: goto label_4e297c;
        case 0x4e2980u: goto label_4e2980;
        case 0x4e2984u: goto label_4e2984;
        case 0x4e2988u: goto label_4e2988;
        case 0x4e298cu: goto label_4e298c;
        case 0x4e2990u: goto label_4e2990;
        case 0x4e2994u: goto label_4e2994;
        case 0x4e2998u: goto label_4e2998;
        case 0x4e299cu: goto label_4e299c;
        case 0x4e29a0u: goto label_4e29a0;
        case 0x4e29a4u: goto label_4e29a4;
        case 0x4e29a8u: goto label_4e29a8;
        case 0x4e29acu: goto label_4e29ac;
        case 0x4e29b0u: goto label_4e29b0;
        case 0x4e29b4u: goto label_4e29b4;
        case 0x4e29b8u: goto label_4e29b8;
        case 0x4e29bcu: goto label_4e29bc;
        case 0x4e29c0u: goto label_4e29c0;
        case 0x4e29c4u: goto label_4e29c4;
        case 0x4e29c8u: goto label_4e29c8;
        case 0x4e29ccu: goto label_4e29cc;
        case 0x4e29d0u: goto label_4e29d0;
        case 0x4e29d4u: goto label_4e29d4;
        case 0x4e29d8u: goto label_4e29d8;
        case 0x4e29dcu: goto label_4e29dc;
        case 0x4e29e0u: goto label_4e29e0;
        case 0x4e29e4u: goto label_4e29e4;
        case 0x4e29e8u: goto label_4e29e8;
        case 0x4e29ecu: goto label_4e29ec;
        case 0x4e29f0u: goto label_4e29f0;
        case 0x4e29f4u: goto label_4e29f4;
        case 0x4e29f8u: goto label_4e29f8;
        case 0x4e29fcu: goto label_4e29fc;
        case 0x4e2a00u: goto label_4e2a00;
        case 0x4e2a04u: goto label_4e2a04;
        case 0x4e2a08u: goto label_4e2a08;
        case 0x4e2a0cu: goto label_4e2a0c;
        case 0x4e2a10u: goto label_4e2a10;
        case 0x4e2a14u: goto label_4e2a14;
        case 0x4e2a18u: goto label_4e2a18;
        case 0x4e2a1cu: goto label_4e2a1c;
        case 0x4e2a20u: goto label_4e2a20;
        case 0x4e2a24u: goto label_4e2a24;
        case 0x4e2a28u: goto label_4e2a28;
        case 0x4e2a2cu: goto label_4e2a2c;
        case 0x4e2a30u: goto label_4e2a30;
        case 0x4e2a34u: goto label_4e2a34;
        case 0x4e2a38u: goto label_4e2a38;
        case 0x4e2a3cu: goto label_4e2a3c;
        case 0x4e2a40u: goto label_4e2a40;
        case 0x4e2a44u: goto label_4e2a44;
        case 0x4e2a48u: goto label_4e2a48;
        case 0x4e2a4cu: goto label_4e2a4c;
        case 0x4e2a50u: goto label_4e2a50;
        case 0x4e2a54u: goto label_4e2a54;
        case 0x4e2a58u: goto label_4e2a58;
        case 0x4e2a5cu: goto label_4e2a5c;
        case 0x4e2a60u: goto label_4e2a60;
        case 0x4e2a64u: goto label_4e2a64;
        case 0x4e2a68u: goto label_4e2a68;
        case 0x4e2a6cu: goto label_4e2a6c;
        case 0x4e2a70u: goto label_4e2a70;
        case 0x4e2a74u: goto label_4e2a74;
        case 0x4e2a78u: goto label_4e2a78;
        case 0x4e2a7cu: goto label_4e2a7c;
        case 0x4e2a80u: goto label_4e2a80;
        case 0x4e2a84u: goto label_4e2a84;
        case 0x4e2a88u: goto label_4e2a88;
        case 0x4e2a8cu: goto label_4e2a8c;
        case 0x4e2a90u: goto label_4e2a90;
        case 0x4e2a94u: goto label_4e2a94;
        case 0x4e2a98u: goto label_4e2a98;
        case 0x4e2a9cu: goto label_4e2a9c;
        case 0x4e2aa0u: goto label_4e2aa0;
        case 0x4e2aa4u: goto label_4e2aa4;
        case 0x4e2aa8u: goto label_4e2aa8;
        case 0x4e2aacu: goto label_4e2aac;
        case 0x4e2ab0u: goto label_4e2ab0;
        case 0x4e2ab4u: goto label_4e2ab4;
        case 0x4e2ab8u: goto label_4e2ab8;
        case 0x4e2abcu: goto label_4e2abc;
        case 0x4e2ac0u: goto label_4e2ac0;
        case 0x4e2ac4u: goto label_4e2ac4;
        case 0x4e2ac8u: goto label_4e2ac8;
        case 0x4e2accu: goto label_4e2acc;
        case 0x4e2ad0u: goto label_4e2ad0;
        case 0x4e2ad4u: goto label_4e2ad4;
        case 0x4e2ad8u: goto label_4e2ad8;
        case 0x4e2adcu: goto label_4e2adc;
        case 0x4e2ae0u: goto label_4e2ae0;
        case 0x4e2ae4u: goto label_4e2ae4;
        case 0x4e2ae8u: goto label_4e2ae8;
        case 0x4e2aecu: goto label_4e2aec;
        case 0x4e2af0u: goto label_4e2af0;
        case 0x4e2af4u: goto label_4e2af4;
        case 0x4e2af8u: goto label_4e2af8;
        case 0x4e2afcu: goto label_4e2afc;
        case 0x4e2b00u: goto label_4e2b00;
        case 0x4e2b04u: goto label_4e2b04;
        case 0x4e2b08u: goto label_4e2b08;
        case 0x4e2b0cu: goto label_4e2b0c;
        case 0x4e2b10u: goto label_4e2b10;
        case 0x4e2b14u: goto label_4e2b14;
        case 0x4e2b18u: goto label_4e2b18;
        case 0x4e2b1cu: goto label_4e2b1c;
        case 0x4e2b20u: goto label_4e2b20;
        case 0x4e2b24u: goto label_4e2b24;
        case 0x4e2b28u: goto label_4e2b28;
        case 0x4e2b2cu: goto label_4e2b2c;
        case 0x4e2b30u: goto label_4e2b30;
        case 0x4e2b34u: goto label_4e2b34;
        case 0x4e2b38u: goto label_4e2b38;
        case 0x4e2b3cu: goto label_4e2b3c;
        case 0x4e2b40u: goto label_4e2b40;
        case 0x4e2b44u: goto label_4e2b44;
        case 0x4e2b48u: goto label_4e2b48;
        case 0x4e2b4cu: goto label_4e2b4c;
        case 0x4e2b50u: goto label_4e2b50;
        case 0x4e2b54u: goto label_4e2b54;
        case 0x4e2b58u: goto label_4e2b58;
        case 0x4e2b5cu: goto label_4e2b5c;
        case 0x4e2b60u: goto label_4e2b60;
        case 0x4e2b64u: goto label_4e2b64;
        case 0x4e2b68u: goto label_4e2b68;
        case 0x4e2b6cu: goto label_4e2b6c;
        case 0x4e2b70u: goto label_4e2b70;
        case 0x4e2b74u: goto label_4e2b74;
        case 0x4e2b78u: goto label_4e2b78;
        case 0x4e2b7cu: goto label_4e2b7c;
        case 0x4e2b80u: goto label_4e2b80;
        case 0x4e2b84u: goto label_4e2b84;
        case 0x4e2b88u: goto label_4e2b88;
        case 0x4e2b8cu: goto label_4e2b8c;
        case 0x4e2b90u: goto label_4e2b90;
        case 0x4e2b94u: goto label_4e2b94;
        case 0x4e2b98u: goto label_4e2b98;
        case 0x4e2b9cu: goto label_4e2b9c;
        case 0x4e2ba0u: goto label_4e2ba0;
        case 0x4e2ba4u: goto label_4e2ba4;
        case 0x4e2ba8u: goto label_4e2ba8;
        case 0x4e2bacu: goto label_4e2bac;
        case 0x4e2bb0u: goto label_4e2bb0;
        case 0x4e2bb4u: goto label_4e2bb4;
        case 0x4e2bb8u: goto label_4e2bb8;
        case 0x4e2bbcu: goto label_4e2bbc;
        case 0x4e2bc0u: goto label_4e2bc0;
        case 0x4e2bc4u: goto label_4e2bc4;
        case 0x4e2bc8u: goto label_4e2bc8;
        case 0x4e2bccu: goto label_4e2bcc;
        case 0x4e2bd0u: goto label_4e2bd0;
        case 0x4e2bd4u: goto label_4e2bd4;
        case 0x4e2bd8u: goto label_4e2bd8;
        case 0x4e2bdcu: goto label_4e2bdc;
        case 0x4e2be0u: goto label_4e2be0;
        case 0x4e2be4u: goto label_4e2be4;
        case 0x4e2be8u: goto label_4e2be8;
        case 0x4e2becu: goto label_4e2bec;
        case 0x4e2bf0u: goto label_4e2bf0;
        case 0x4e2bf4u: goto label_4e2bf4;
        case 0x4e2bf8u: goto label_4e2bf8;
        case 0x4e2bfcu: goto label_4e2bfc;
        case 0x4e2c00u: goto label_4e2c00;
        case 0x4e2c04u: goto label_4e2c04;
        case 0x4e2c08u: goto label_4e2c08;
        case 0x4e2c0cu: goto label_4e2c0c;
        case 0x4e2c10u: goto label_4e2c10;
        case 0x4e2c14u: goto label_4e2c14;
        case 0x4e2c18u: goto label_4e2c18;
        case 0x4e2c1cu: goto label_4e2c1c;
        case 0x4e2c20u: goto label_4e2c20;
        case 0x4e2c24u: goto label_4e2c24;
        case 0x4e2c28u: goto label_4e2c28;
        case 0x4e2c2cu: goto label_4e2c2c;
        case 0x4e2c30u: goto label_4e2c30;
        case 0x4e2c34u: goto label_4e2c34;
        case 0x4e2c38u: goto label_4e2c38;
        case 0x4e2c3cu: goto label_4e2c3c;
        case 0x4e2c40u: goto label_4e2c40;
        case 0x4e2c44u: goto label_4e2c44;
        case 0x4e2c48u: goto label_4e2c48;
        case 0x4e2c4cu: goto label_4e2c4c;
        case 0x4e2c50u: goto label_4e2c50;
        case 0x4e2c54u: goto label_4e2c54;
        case 0x4e2c58u: goto label_4e2c58;
        case 0x4e2c5cu: goto label_4e2c5c;
        case 0x4e2c60u: goto label_4e2c60;
        case 0x4e2c64u: goto label_4e2c64;
        case 0x4e2c68u: goto label_4e2c68;
        case 0x4e2c6cu: goto label_4e2c6c;
        case 0x4e2c70u: goto label_4e2c70;
        case 0x4e2c74u: goto label_4e2c74;
        case 0x4e2c78u: goto label_4e2c78;
        case 0x4e2c7cu: goto label_4e2c7c;
        case 0x4e2c80u: goto label_4e2c80;
        case 0x4e2c84u: goto label_4e2c84;
        case 0x4e2c88u: goto label_4e2c88;
        case 0x4e2c8cu: goto label_4e2c8c;
        case 0x4e2c90u: goto label_4e2c90;
        case 0x4e2c94u: goto label_4e2c94;
        default: break;
    }

    ctx->pc = 0x4e28c8u;

label_4e28c8:
    // 0x4e28c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e28c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e28cc:
    // 0x4e28cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e28d0:
    // 0x4e28d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e28d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e28d4:
    // 0x4e28d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e28d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e28d8:
    // 0x4e28d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e28d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e28dc:
    // 0x4e28dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e28dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e28e0:
    // 0x4e28e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e28e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e28e4:
    // 0x4e28e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e28e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e28e8:
    // 0x4e28e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e28ec:
    // 0x4e28ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e28f0:
    // 0x4e28f0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e28f4:
    if (ctx->pc == 0x4E28F4u) {
        ctx->pc = 0x4E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E28F0u;
        // 0x4e28f4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E28F8u;
        goto label_4e28f8;
    }
    ctx->pc = 0x4E28F0u;
    {
        const bool branch_taken_0x4e28f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E28F0u;
        // 0x4e28f4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e28f0) {
            ctx->pc = 0x4E2914u;
            goto label_4e2914;
        }
    }
    ctx->pc = 0x4E28F8u;
label_4e28f8:
    // 0x4e28f8: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e28fc:
    if (ctx->pc == 0x4E28FCu) {
        ctx->pc = 0x4E28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E28F8u;
        // 0x4e28fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2900u;
        goto label_4e2900;
    }
    ctx->pc = 0x4E28F8u;
    {
        const bool branch_taken_0x4e28f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E28F8u;
        // 0x4e28fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e28f8) {
            ctx->pc = 0x4E2918u;
            goto label_4e2918;
        }
    }
    ctx->pc = 0x4E2900u;
label_4e2900:
    // 0x4e2900: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e2900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e2904:
    // 0x4e2904: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e2904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e2908:
    // 0x4e2908: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e290c:
    // 0x4e290c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e2910:
    if (ctx->pc == 0x4E2910u) {
        ctx->pc = 0x4E2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E290Cu;
        // 0x4e2910: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2914u;
        goto label_4e2914;
    }
    ctx->pc = 0x4E290Cu;
    {
        const bool branch_taken_0x4e290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E290Cu;
        // 0x4e2910: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e290c) {
            ctx->pc = 0x4E29A8u;
            goto label_4e29a8;
        }
    }
    ctx->pc = 0x4E2914u;
label_4e2914:
    // 0x4e2914: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e2914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2918:
    // 0x4e2918: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e2918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e291c:
    // 0x4e291c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e291cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e2920:
    // 0x4e2920: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e2920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e2924:
    // 0x4e2924: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e2924u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e2928:
    // 0x4e2928: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e292c:
    // 0x4e292c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e2930:
    // 0x4e2930: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e2930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e2934:
    // 0x4e2934: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e2934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e2938:
    // 0x4e2938: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e2938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e293c:
    // 0x4e293c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e293cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e2940:
    // 0x4e2940: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e2940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e2944:
    // 0x4e2944: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e2944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e2948:
    // 0x4e2948: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e2948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e294c:
    // 0x4e294c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e2950:
    // 0x4e2950: 0x40f809  jalr        $v0
label_4e2954:
    if (ctx->pc == 0x4E2954u) {
        ctx->pc = 0x4E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2950u;
        // 0x4e2954: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2958u;
        goto label_4e2958;
    }
    ctx->pc = 0x4E2950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E2958u);
        ctx->pc = 0x4E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2950u;
        // 0x4e2954: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2950u, 0x4E2958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E2958u;
label_4e2958:
    // 0x4e2958: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e2958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e295c:
    // 0x4e295c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e2960:
    // 0x4e2960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e2964:
    if (ctx->pc == 0x4E2964u) {
        ctx->pc = 0x4E2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2960u;
        // 0x4e2964: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2968u;
        goto label_4e2968;
    }
    ctx->pc = 0x4E2960u;
    {
        const bool branch_taken_0x4e2960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2960u;
        // 0x4e2964: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2960) {
            ctx->pc = 0x4E2978u;
            goto label_4e2978;
        }
    }
    ctx->pc = 0x4E2968u;
label_4e2968:
    // 0x4e2968: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e2968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e296c:
    // 0x4e296c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e296cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e2970:
    // 0x4e2970: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e2970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e2974:
    // 0x4e2974: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e2974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e2978:
    // 0x4e2978: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e2978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e297c:
    // 0x4e297c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e2980:
    // 0x4e2980: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e2984:
    if (ctx->pc == 0x4E2984u) {
        ctx->pc = 0x4E2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2980u;
        // 0x4e2984: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2988u;
        goto label_4e2988;
    }
    ctx->pc = 0x4E2980u;
    {
        const bool branch_taken_0x4e2980 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2980) {
            ctx->pc = 0x4E2984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2980u;
            // 0x4e2984: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2998u;
            goto label_4e2998;
        }
    }
    ctx->pc = 0x4E2988u;
label_4e2988:
    // 0x4e2988: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e2988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e298c:
    // 0x4e298c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e2990:
    // 0x4e2990: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e2994:
    if (ctx->pc == 0x4E2994u) {
        ctx->pc = 0x4E2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2990u;
        // 0x4e2994: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2998u;
        goto label_4e2998;
    }
    ctx->pc = 0x4E2990u;
    {
        const bool branch_taken_0x4e2990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2990u;
        // 0x4e2994: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2990) {
            ctx->pc = 0x4E2A1Cu;
            goto label_4e2a1c;
        }
    }
    ctx->pc = 0x4E2998u;
label_4e2998:
    // 0x4e2998: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e299c:
    if (ctx->pc == 0x4E299Cu) {
        ctx->pc = 0x4E299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2998u;
        // 0x4e299c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E29A0u;
        goto label_4e29a0;
    }
    ctx->pc = 0x4E2998u;
    {
        const bool branch_taken_0x4e2998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e2998) {
            ctx->pc = 0x4E299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2998u;
            // 0x4e299c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2A1Cu;
            goto label_4e2a1c;
        }
    }
    ctx->pc = 0x4E29A0u;
label_4e29a0:
    // 0x4e29a0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e29a4:
    if (ctx->pc == 0x4E29A4u) {
        ctx->pc = 0x4E29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29A0u;
        // 0x4e29a4: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E29A8u;
        goto label_4e29a8;
    }
    ctx->pc = 0x4E29A0u;
    {
        const bool branch_taken_0x4e29a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29A0u;
        // 0x4e29a4: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e29a0) {
            ctx->pc = 0x4E2A20u;
            goto label_4e2a20;
        }
    }
    ctx->pc = 0x4E29A8u;
label_4e29a8:
    // 0x4e29a8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e29a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e29ac:
    // 0x4e29ac: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e29acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e29b0:
    // 0x4e29b0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e29b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e29b4:
    // 0x4e29b4: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e29b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e29b8:
    // 0x4e29b8: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e29b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e29bc:
    // 0x4e29bc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e29c0:
    // 0x4e29c0: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e29c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e29c4:
    // 0x4e29c4: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e29c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e29c8:
    // 0x4e29c8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e29c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e29cc:
    // 0x4e29cc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e29ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e29d0:
    // 0x4e29d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e29d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e29d4:
    // 0x4e29d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e29d8:
    // 0x4e29d8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e29d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e29dc:
    // 0x4e29dc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e29e0:
    // 0x4e29e0: 0x40f809  jalr        $v0
label_4e29e4:
    if (ctx->pc == 0x4E29E4u) {
        ctx->pc = 0x4E29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29E0u;
        // 0x4e29e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E29E8u;
        goto label_4e29e8;
    }
    ctx->pc = 0x4E29E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E29E8u);
        ctx->pc = 0x4E29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29E0u;
        // 0x4e29e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E29E0u, 0x4E29E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E29E8u;
label_4e29e8:
    // 0x4e29e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e29e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e29ec:
    // 0x4e29ec: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e29f0:
    // 0x4e29f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e29f4:
    if (ctx->pc == 0x4E29F4u) {
        ctx->pc = 0x4E29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29F0u;
        // 0x4e29f4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E29F8u;
        goto label_4e29f8;
    }
    ctx->pc = 0x4E29F0u;
    {
        const bool branch_taken_0x4e29f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E29F0u;
        // 0x4e29f4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e29f0) {
            ctx->pc = 0x4E2A08u;
            goto label_4e2a08;
        }
    }
    ctx->pc = 0x4E29F8u;
label_4e29f8:
    // 0x4e29f8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e29f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e29fc:
    // 0x4e29fc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e29fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e2a00:
    // 0x4e2a00: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e2a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e2a04:
    // 0x4e2a04: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e2a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e2a08:
    // 0x4e2a08: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e2a0c:
    // 0x4e2a0c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e2a10:
    // 0x4e2a10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e2a14:
    // 0x4e2a14: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e2a18:
    if (ctx->pc == 0x4E2A18u) {
        ctx->pc = 0x4E2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A14u;
        // 0x4e2a18: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2A1Cu;
        goto label_4e2a1c;
    }
    ctx->pc = 0x4E2A14u;
    {
        const bool branch_taken_0x4e2a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e2a14) {
            ctx->pc = 0x4E2A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2A14u;
            // 0x4e2a18: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2A1Cu;
            goto label_4e2a1c;
        }
    }
    ctx->pc = 0x4E2A1Cu;
label_4e2a1c:
    // 0x4e2a1c: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e2a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e2a20:
    // 0x4e2a20: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e2a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e2a24:
    // 0x4e2a24: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e2a24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e2a28:
    // 0x4e2a28: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e2a2c:
    // 0x4e2a2c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e2a30:
    // 0x4e2a30: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e2a30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e2a34:
    // 0x4e2a34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2a38:
    // 0x4e2a38: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e2a3c:
    if (ctx->pc == 0x4E2A3Cu) {
        ctx->pc = 0x4E2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A38u;
        // 0x4e2a3c: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2A40u;
        goto label_4e2a40;
    }
    ctx->pc = 0x4E2A38u;
    {
        const bool branch_taken_0x4e2a38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A38u;
        // 0x4e2a3c: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2a38) {
            ctx->pc = 0x4E2C5Cu;
            goto label_4e2c5c;
        }
    }
    ctx->pc = 0x4E2A40u;
label_4e2a40:
    // 0x4e2a40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2a44:
    // 0x4e2a44: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e2a48:
    if (ctx->pc == 0x4E2A48u) {
        ctx->pc = 0x4E2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A44u;
        // 0x4e2a48: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2A4Cu;
        goto label_4e2a4c;
    }
    ctx->pc = 0x4E2A44u;
    {
        const bool branch_taken_0x4e2a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2a44) {
            ctx->pc = 0x4E2A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2A44u;
            // 0x4e2a48: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C60u;
            goto label_4e2c60;
        }
    }
    ctx->pc = 0x4E2A4Cu;
label_4e2a4c:
    // 0x4e2a4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e2a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2a50:
    // 0x4e2a50: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2a54:
    // 0x4e2a54: 0x0  nop
    ctx->pc = 0x4e2a54u;
    // NOP
label_4e2a58:
    // 0x4e2a58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2a5c:
    // 0x4e2a5c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e2a60:
    // 0x4e2a60: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e2a64:
    if (ctx->pc == 0x4E2A64u) {
        ctx->pc = 0x4E2A68u;
        goto label_4e2a68;
    }
    ctx->pc = 0x4E2A60u;
    {
        const bool branch_taken_0x4e2a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e2a60) {
            ctx->pc = 0x4E2B4Cu;
            goto label_4e2b4c;
        }
    }
    ctx->pc = 0x4E2A68u;
label_4e2a68:
    // 0x4e2a68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e2a6c:
    // 0x4e2a6c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e2a70:
    if (ctx->pc == 0x4E2A70u) {
        ctx->pc = 0x4E2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A6Cu;
        // 0x4e2a70: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2A74u;
        goto label_4e2a74;
    }
    ctx->pc = 0x4E2A6Cu;
    {
        const bool branch_taken_0x4e2a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2a6c) {
            ctx->pc = 0x4E2A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2A6Cu;
            // 0x4e2a70: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2A8Cu;
            goto label_4e2a8c;
        }
    }
    ctx->pc = 0x4E2A74u;
label_4e2a74:
    // 0x4e2a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2a78:
    // 0x4e2a78: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e2a7c:
    if (ctx->pc == 0x4E2A7Cu) {
        ctx->pc = 0x4E2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A78u;
        // 0x4e2a7c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2A80u;
        goto label_4e2a80;
    }
    ctx->pc = 0x4E2A78u;
    {
        const bool branch_taken_0x4e2a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2a78) {
            ctx->pc = 0x4E2A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2A78u;
            // 0x4e2a7c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2A8Cu;
            goto label_4e2a8c;
        }
    }
    ctx->pc = 0x4E2A80u;
label_4e2a80:
    // 0x4e2a80: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e2a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e2a84:
    // 0x4e2a84: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e2a88:
    if (ctx->pc == 0x4E2A88u) {
        ctx->pc = 0x4E2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A84u;
        // 0x4e2a88: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2A8Cu;
        goto label_4e2a8c;
    }
    ctx->pc = 0x4E2A84u;
    {
        const bool branch_taken_0x4e2a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A84u;
        // 0x4e2a88: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2a84) {
            ctx->pc = 0x4E2B68u;
            goto label_4e2b68;
        }
    }
    ctx->pc = 0x4E2A8Cu;
label_4e2a8c:
    // 0x4e2a8c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e2a90:
    // 0x4e2a90: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e2a94:
    if (ctx->pc == 0x4E2A94u) {
        ctx->pc = 0x4E2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2A90u;
        // 0x4e2a94: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2A98u;
        goto label_4e2a98;
    }
    ctx->pc = 0x4E2A90u;
    {
        const bool branch_taken_0x4e2a90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e2a90) {
            ctx->pc = 0x4E2A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2A90u;
            // 0x4e2a94: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2AE8u;
            goto label_4e2ae8;
        }
    }
    ctx->pc = 0x4E2A98u;
label_4e2a98:
    // 0x4e2a98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e2a9c:
    // 0x4e2a9c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e2a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e2aa0:
    // 0x4e2aa0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e2aa4:
    // 0x4e2aa4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e2aa8:
    // 0x4e2aa8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e2aac:
    if (ctx->pc == 0x4E2AACu) {
        ctx->pc = 0x4E2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2AA8u;
        // 0x4e2aac: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2AB0u;
        goto label_4e2ab0;
    }
    ctx->pc = 0x4E2AA8u;
    {
        const bool branch_taken_0x4e2aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2aa8) {
            ctx->pc = 0x4E2AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2AA8u;
            // 0x4e2aac: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2AB0u;
            goto label_4e2ab0;
        }
    }
    ctx->pc = 0x4E2AB0u;
label_4e2ab0:
    // 0x4e2ab0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2ab4:
    // 0x4e2ab4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e2ab8:
    // 0x4e2ab8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2abc:
    // 0x4e2abc: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e2ac0:
    if (ctx->pc == 0x4E2AC0u) {
        ctx->pc = 0x4E2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2ABCu;
        // 0x4e2ac0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2AC4u;
        goto label_4e2ac4;
    }
    ctx->pc = 0x4E2ABCu;
    {
        const bool branch_taken_0x4e2abc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2abc) {
            ctx->pc = 0x4E2AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2ABCu;
            // 0x4e2ac0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2ACCu;
            goto label_4e2acc;
        }
    }
    ctx->pc = 0x4E2AC4u;
label_4e2ac4:
    // 0x4e2ac4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e2ac8:
    if (ctx->pc == 0x4E2AC8u) {
        ctx->pc = 0x4E2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2AC4u;
        // 0x4e2ac8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2ACCu;
        goto label_4e2acc;
    }
    ctx->pc = 0x4E2AC4u;
    {
        const bool branch_taken_0x4e2ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2AC4u;
        // 0x4e2ac8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ac4) {
            ctx->pc = 0x4E2ADCu;
            goto label_4e2adc;
        }
    }
    ctx->pc = 0x4E2ACCu;
label_4e2acc:
    // 0x4e2acc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e2ad0:
    // 0x4e2ad0: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e2ad4:
    if (ctx->pc == 0x4E2AD4u) {
        ctx->pc = 0x4E2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2AD0u;
        // 0x4e2ad4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2AD8u;
        goto label_4e2ad8;
    }
    ctx->pc = 0x4E2AD0u;
    {
        const bool branch_taken_0x4e2ad0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e2ad0) {
            ctx->pc = 0x4E2AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2AD0u;
            // 0x4e2ad4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2ADCu;
            goto label_4e2adc;
        }
    }
    ctx->pc = 0x4E2AD8u;
label_4e2ad8:
    // 0x4e2ad8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e2adc:
    // 0x4e2adc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e2ae0:
    // 0x4e2ae0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e2ae4:
    // 0x4e2ae4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2ae8:
    // 0x4e2ae8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e2aec:
    // 0x4e2aec: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2af0:
    // 0x4e2af0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2af4:
    // 0x4e2af4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e2af8:
    // 0x4e2af8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2afc:
    // 0x4e2afc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2b00:
    // 0x4e2b00: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e2b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e2b04:
    // 0x4e2b04: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e2b08:
    // 0x4e2b08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e2b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e2b0c:
    // 0x4e2b0c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e2b10:
    // 0x4e2b10: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e2b14:
    if (ctx->pc == 0x4E2B14u) {
        ctx->pc = 0x4E2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B10u;
        // 0x4e2b14: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B18u;
        goto label_4e2b18;
    }
    ctx->pc = 0x4E2B10u;
    {
        const bool branch_taken_0x4e2b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2b10) {
            ctx->pc = 0x4E2B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B10u;
            // 0x4e2b14: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2B18u;
            goto label_4e2b18;
        }
    }
    ctx->pc = 0x4E2B18u;
label_4e2b18:
    // 0x4e2b18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e2b1c:
    // 0x4e2b1c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e2b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e2b20:
    // 0x4e2b20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2b24:
    // 0x4e2b24: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e2b28:
    if (ctx->pc == 0x4E2B28u) {
        ctx->pc = 0x4E2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B24u;
        // 0x4e2b28: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B2Cu;
        goto label_4e2b2c;
    }
    ctx->pc = 0x4E2B24u;
    {
        const bool branch_taken_0x4e2b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2b24) {
            ctx->pc = 0x4E2B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B24u;
            // 0x4e2b28: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2B34u;
            goto label_4e2b34;
        }
    }
    ctx->pc = 0x4E2B2Cu;
label_4e2b2c:
    // 0x4e2b2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e2b30:
    if (ctx->pc == 0x4E2B30u) {
        ctx->pc = 0x4E2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B2Cu;
        // 0x4e2b30: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B34u;
        goto label_4e2b34;
    }
    ctx->pc = 0x4E2B2Cu;
    {
        const bool branch_taken_0x4e2b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B2Cu;
        // 0x4e2b30: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2b2c) {
            ctx->pc = 0x4E2B44u;
            goto label_4e2b44;
        }
    }
    ctx->pc = 0x4E2B34u;
label_4e2b34:
    // 0x4e2b34: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e2b38:
    // 0x4e2b38: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e2b3c:
    if (ctx->pc == 0x4E2B3Cu) {
        ctx->pc = 0x4E2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B38u;
        // 0x4e2b3c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B40u;
        goto label_4e2b40;
    }
    ctx->pc = 0x4E2B38u;
    {
        const bool branch_taken_0x4e2b38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e2b38) {
            ctx->pc = 0x4E2B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B38u;
            // 0x4e2b3c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2B44u;
            goto label_4e2b44;
        }
    }
    ctx->pc = 0x4E2B40u;
label_4e2b40:
    // 0x4e2b40: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e2b44:
    // 0x4e2b44: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e2b48:
    if (ctx->pc == 0x4E2B48u) {
        ctx->pc = 0x4E2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B44u;
        // 0x4e2b48: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B4Cu;
        goto label_4e2b4c;
    }
    ctx->pc = 0x4E2B44u;
    {
        const bool branch_taken_0x4e2b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B44u;
        // 0x4e2b48: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2b44) {
            ctx->pc = 0x4E2C3Cu;
            goto label_4e2c3c;
        }
    }
    ctx->pc = 0x4E2B4Cu;
label_4e2b4c:
    // 0x4e2b4c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e2b50:
    if (ctx->pc == 0x4E2B50u) {
        ctx->pc = 0x4E2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B4Cu;
        // 0x4e2b50: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B54u;
        goto label_4e2b54;
    }
    ctx->pc = 0x4E2B4Cu;
    {
        const bool branch_taken_0x4e2b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2b4c) {
            ctx->pc = 0x4E2B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B4Cu;
            // 0x4e2b50: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2B80u;
            goto label_4e2b80;
        }
    }
    ctx->pc = 0x4E2B54u;
label_4e2b54:
    // 0x4e2b54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e2b58:
    // 0x4e2b58: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e2b5c:
    if (ctx->pc == 0x4E2B5Cu) {
        ctx->pc = 0x4E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B58u;
        // 0x4e2b5c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B60u;
        goto label_4e2b60;
    }
    ctx->pc = 0x4E2B58u;
    {
        const bool branch_taken_0x4e2b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2b58) {
            ctx->pc = 0x4E2B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B58u;
            // 0x4e2b5c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2B80u;
            goto label_4e2b80;
        }
    }
    ctx->pc = 0x4E2B60u;
label_4e2b60:
    // 0x4e2b60: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e2b64:
    // 0x4e2b64: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e2b68:
    // 0x4e2b68: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2b6c:
    // 0x4e2b6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e2b70:
    // 0x4e2b70: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e2b74:
    // 0x4e2b74: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2b78:
    // 0x4e2b78: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e2b7c:
    if (ctx->pc == 0x4E2B7Cu) {
        ctx->pc = 0x4E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B78u;
        // 0x4e2b7c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B80u;
        goto label_4e2b80;
    }
    ctx->pc = 0x4E2B78u;
    {
        const bool branch_taken_0x4e2b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B78u;
        // 0x4e2b7c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2b78) {
            ctx->pc = 0x4E2C40u;
            goto label_4e2c40;
        }
    }
    ctx->pc = 0x4E2B80u;
label_4e2b80:
    // 0x4e2b80: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e2b84:
    // 0x4e2b84: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e2b88:
    if (ctx->pc == 0x4E2B88u) {
        ctx->pc = 0x4E2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B84u;
        // 0x4e2b88: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B8Cu;
        goto label_4e2b8c;
    }
    ctx->pc = 0x4E2B84u;
    {
        const bool branch_taken_0x4e2b84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e2b84) {
            ctx->pc = 0x4E2B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B84u;
            // 0x4e2b88: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2BDCu;
            goto label_4e2bdc;
        }
    }
    ctx->pc = 0x4E2B8Cu;
label_4e2b8c:
    // 0x4e2b8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e2b90:
    // 0x4e2b90: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e2b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e2b94:
    // 0x4e2b94: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e2b98:
    // 0x4e2b98: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e2b9c:
    // 0x4e2b9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e2ba0:
    if (ctx->pc == 0x4E2BA0u) {
        ctx->pc = 0x4E2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B9Cu;
        // 0x4e2ba0: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2BA4u;
        goto label_4e2ba4;
    }
    ctx->pc = 0x4E2B9Cu;
    {
        const bool branch_taken_0x4e2b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2b9c) {
            ctx->pc = 0x4E2BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2B9Cu;
            // 0x4e2ba0: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2BA4u;
            goto label_4e2ba4;
        }
    }
    ctx->pc = 0x4E2BA4u;
label_4e2ba4:
    // 0x4e2ba4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2ba8:
    // 0x4e2ba8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e2bac:
    // 0x4e2bac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2bb0:
    // 0x4e2bb0: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e2bb4:
    if (ctx->pc == 0x4E2BB4u) {
        ctx->pc = 0x4E2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2BB0u;
        // 0x4e2bb4: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2BB8u;
        goto label_4e2bb8;
    }
    ctx->pc = 0x4E2BB0u;
    {
        const bool branch_taken_0x4e2bb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2bb0) {
            ctx->pc = 0x4E2BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2BB0u;
            // 0x4e2bb4: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2BC0u;
            goto label_4e2bc0;
        }
    }
    ctx->pc = 0x4E2BB8u;
label_4e2bb8:
    // 0x4e2bb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e2bbc:
    if (ctx->pc == 0x4E2BBCu) {
        ctx->pc = 0x4E2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2BB8u;
        // 0x4e2bbc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2BC0u;
        goto label_4e2bc0;
    }
    ctx->pc = 0x4E2BB8u;
    {
        const bool branch_taken_0x4e2bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2BB8u;
        // 0x4e2bbc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2bb8) {
            ctx->pc = 0x4E2BD0u;
            goto label_4e2bd0;
        }
    }
    ctx->pc = 0x4E2BC0u;
label_4e2bc0:
    // 0x4e2bc0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e2bc4:
    // 0x4e2bc4: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e2bc8:
    if (ctx->pc == 0x4E2BC8u) {
        ctx->pc = 0x4E2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2BC4u;
        // 0x4e2bc8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2BCCu;
        goto label_4e2bcc;
    }
    ctx->pc = 0x4E2BC4u;
    {
        const bool branch_taken_0x4e2bc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e2bc4) {
            ctx->pc = 0x4E2BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2BC4u;
            // 0x4e2bc8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2BD0u;
            goto label_4e2bd0;
        }
    }
    ctx->pc = 0x4E2BCCu;
label_4e2bcc:
    // 0x4e2bcc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e2bd0:
    // 0x4e2bd0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e2bd4:
    // 0x4e2bd4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e2bd8:
    // 0x4e2bd8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2bdc:
    // 0x4e2bdc: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e2be0:
    // 0x4e2be0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2be4:
    // 0x4e2be4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2be8:
    // 0x4e2be8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e2bec:
    // 0x4e2bec: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2bf0:
    // 0x4e2bf0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e2bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2bf4:
    // 0x4e2bf4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e2bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e2bf8:
    // 0x4e2bf8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e2bfc:
    // 0x4e2bfc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e2c00:
    // 0x4e2c00: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e2c04:
    // 0x4e2c04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e2c08:
    if (ctx->pc == 0x4E2C08u) {
        ctx->pc = 0x4E2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C04u;
        // 0x4e2c08: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C0Cu;
        goto label_4e2c0c;
    }
    ctx->pc = 0x4E2C04u;
    {
        const bool branch_taken_0x4e2c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2c04) {
            ctx->pc = 0x4E2C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2C04u;
            // 0x4e2c08: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C0Cu;
            goto label_4e2c0c;
        }
    }
    ctx->pc = 0x4E2C0Cu;
label_4e2c0c:
    // 0x4e2c0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e2c10:
    // 0x4e2c10: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e2c14:
    // 0x4e2c14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2c18:
    // 0x4e2c18: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e2c1c:
    if (ctx->pc == 0x4E2C1Cu) {
        ctx->pc = 0x4E2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C18u;
        // 0x4e2c1c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C20u;
        goto label_4e2c20;
    }
    ctx->pc = 0x4E2C18u;
    {
        const bool branch_taken_0x4e2c18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2c18) {
            ctx->pc = 0x4E2C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2C18u;
            // 0x4e2c1c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C28u;
            goto label_4e2c28;
        }
    }
    ctx->pc = 0x4E2C20u;
label_4e2c20:
    // 0x4e2c20: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e2c24:
    if (ctx->pc == 0x4E2C24u) {
        ctx->pc = 0x4E2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C20u;
        // 0x4e2c24: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C28u;
        goto label_4e2c28;
    }
    ctx->pc = 0x4E2C20u;
    {
        const bool branch_taken_0x4e2c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C20u;
        // 0x4e2c24: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2c20) {
            ctx->pc = 0x4E2C38u;
            goto label_4e2c38;
        }
    }
    ctx->pc = 0x4E2C28u;
label_4e2c28:
    // 0x4e2c28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e2c2c:
    // 0x4e2c2c: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e2c30:
    if (ctx->pc == 0x4E2C30u) {
        ctx->pc = 0x4E2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C2Cu;
        // 0x4e2c30: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C34u;
        goto label_4e2c34;
    }
    ctx->pc = 0x4E2C2Cu;
    {
        const bool branch_taken_0x4e2c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e2c2c) {
            ctx->pc = 0x4E2C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2C2Cu;
            // 0x4e2c30: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C38u;
            goto label_4e2c38;
        }
    }
    ctx->pc = 0x4E2C34u;
label_4e2c34:
    // 0x4e2c34: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e2c38:
    // 0x4e2c38: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e2c3c:
    // 0x4e2c3c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e2c40:
    // 0x4e2c40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2c44:
    // 0x4e2c44: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e2c48:
    if (ctx->pc == 0x4E2C48u) {
        ctx->pc = 0x4E2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C44u;
        // 0x4e2c48: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C4Cu;
        goto label_4e2c4c;
    }
    ctx->pc = 0x4E2C44u;
    {
        const bool branch_taken_0x4e2c44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e2c44) {
            ctx->pc = 0x4E2C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2C44u;
            // 0x4e2c48: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C60u;
            goto label_4e2c60;
        }
    }
    ctx->pc = 0x4E2C4Cu;
label_4e2c4c:
    // 0x4e2c4c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2c50:
    // 0x4e2c50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2c54:
    // 0x4e2c54: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e2c58:
    if (ctx->pc == 0x4E2C58u) {
        ctx->pc = 0x4E2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C54u;
        // 0x4e2c58: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C5Cu;
        goto label_4e2c5c;
    }
    ctx->pc = 0x4E2C54u;
    {
        const bool branch_taken_0x4e2c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2c54) {
            ctx->pc = 0x4E2C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2C54u;
            // 0x4e2c58: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2a58;
        }
    }
    ctx->pc = 0x4E2C5Cu;
label_4e2c5c:
    // 0x4e2c5c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2c60:
    // 0x4e2c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2c64:
    // 0x4e2c64: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e2c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e2c68:
    // 0x4e2c68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e2c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e2c6c:
    // 0x4e2c6c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e2c70:
    // 0x4e2c70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e2c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e2c74:
    // 0x4e2c74: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e2c78:
    // 0x4e2c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e2c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2c7c:
    // 0x4e2c7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e2c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e2c80:
    // 0x4e2c80: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e2c84:
    // 0x4e2c84: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e2c88:
    // 0x4e2c88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e2c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2c8c:
    // 0x4e2c8c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e2c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2c90:
    // 0x4e2c90: 0x3e00008  jr          $ra
label_4e2c94:
    if (ctx->pc == 0x4E2C94u) {
        ctx->pc = 0x4E2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C90u;
        // 0x4e2c94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C98u;
        goto label_fallthrough_0x4e2c90;
    }
    ctx->pc = 0x4E2C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C90u;
        // 0x4e2c94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e2c90:
    ctx->pc = 0x4E2C98u;
}
