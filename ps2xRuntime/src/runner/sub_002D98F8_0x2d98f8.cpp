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

// Function: sub_002D98F8
// Address: 0x2d98f8 - 0x2d9ce0
void sub_002D98F8_0x2d98f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D98F8_0x2d98f8");
#endif

    switch (ctx->pc) {
        case 0x2d98f8u: goto label_2d98f8;
        case 0x2d98fcu: goto label_2d98fc;
        case 0x2d9900u: goto label_2d9900;
        case 0x2d9904u: goto label_2d9904;
        case 0x2d9908u: goto label_2d9908;
        case 0x2d990cu: goto label_2d990c;
        case 0x2d9910u: goto label_2d9910;
        case 0x2d9914u: goto label_2d9914;
        case 0x2d9918u: goto label_2d9918;
        case 0x2d991cu: goto label_2d991c;
        case 0x2d9920u: goto label_2d9920;
        case 0x2d9924u: goto label_2d9924;
        case 0x2d9928u: goto label_2d9928;
        case 0x2d992cu: goto label_2d992c;
        case 0x2d9930u: goto label_2d9930;
        case 0x2d9934u: goto label_2d9934;
        case 0x2d9938u: goto label_2d9938;
        case 0x2d993cu: goto label_2d993c;
        case 0x2d9940u: goto label_2d9940;
        case 0x2d9944u: goto label_2d9944;
        case 0x2d9948u: goto label_2d9948;
        case 0x2d994cu: goto label_2d994c;
        case 0x2d9950u: goto label_2d9950;
        case 0x2d9954u: goto label_2d9954;
        case 0x2d9958u: goto label_2d9958;
        case 0x2d995cu: goto label_2d995c;
        case 0x2d9960u: goto label_2d9960;
        case 0x2d9964u: goto label_2d9964;
        case 0x2d9968u: goto label_2d9968;
        case 0x2d996cu: goto label_2d996c;
        case 0x2d9970u: goto label_2d9970;
        case 0x2d9974u: goto label_2d9974;
        case 0x2d9978u: goto label_2d9978;
        case 0x2d997cu: goto label_2d997c;
        case 0x2d9980u: goto label_2d9980;
        case 0x2d9984u: goto label_2d9984;
        case 0x2d9988u: goto label_2d9988;
        case 0x2d998cu: goto label_2d998c;
        case 0x2d9990u: goto label_2d9990;
        case 0x2d9994u: goto label_2d9994;
        case 0x2d9998u: goto label_2d9998;
        case 0x2d999cu: goto label_2d999c;
        case 0x2d99a0u: goto label_2d99a0;
        case 0x2d99a4u: goto label_2d99a4;
        case 0x2d99a8u: goto label_2d99a8;
        case 0x2d99acu: goto label_2d99ac;
        case 0x2d99b0u: goto label_2d99b0;
        case 0x2d99b4u: goto label_2d99b4;
        case 0x2d99b8u: goto label_2d99b8;
        case 0x2d99bcu: goto label_2d99bc;
        case 0x2d99c0u: goto label_2d99c0;
        case 0x2d99c4u: goto label_2d99c4;
        case 0x2d99c8u: goto label_2d99c8;
        case 0x2d99ccu: goto label_2d99cc;
        case 0x2d99d0u: goto label_2d99d0;
        case 0x2d99d4u: goto label_2d99d4;
        case 0x2d99d8u: goto label_2d99d8;
        case 0x2d99dcu: goto label_2d99dc;
        case 0x2d99e0u: goto label_2d99e0;
        case 0x2d99e4u: goto label_2d99e4;
        case 0x2d99e8u: goto label_2d99e8;
        case 0x2d99ecu: goto label_2d99ec;
        case 0x2d99f0u: goto label_2d99f0;
        case 0x2d99f4u: goto label_2d99f4;
        case 0x2d99f8u: goto label_2d99f8;
        case 0x2d99fcu: goto label_2d99fc;
        case 0x2d9a00u: goto label_2d9a00;
        case 0x2d9a04u: goto label_2d9a04;
        case 0x2d9a08u: goto label_2d9a08;
        case 0x2d9a0cu: goto label_2d9a0c;
        case 0x2d9a10u: goto label_2d9a10;
        case 0x2d9a14u: goto label_2d9a14;
        case 0x2d9a18u: goto label_2d9a18;
        case 0x2d9a1cu: goto label_2d9a1c;
        case 0x2d9a20u: goto label_2d9a20;
        case 0x2d9a24u: goto label_2d9a24;
        case 0x2d9a28u: goto label_2d9a28;
        case 0x2d9a2cu: goto label_2d9a2c;
        case 0x2d9a30u: goto label_2d9a30;
        case 0x2d9a34u: goto label_2d9a34;
        case 0x2d9a38u: goto label_2d9a38;
        case 0x2d9a3cu: goto label_2d9a3c;
        case 0x2d9a40u: goto label_2d9a40;
        case 0x2d9a44u: goto label_2d9a44;
        case 0x2d9a48u: goto label_2d9a48;
        case 0x2d9a4cu: goto label_2d9a4c;
        case 0x2d9a50u: goto label_2d9a50;
        case 0x2d9a54u: goto label_2d9a54;
        case 0x2d9a58u: goto label_2d9a58;
        case 0x2d9a5cu: goto label_2d9a5c;
        case 0x2d9a60u: goto label_2d9a60;
        case 0x2d9a64u: goto label_2d9a64;
        case 0x2d9a68u: goto label_2d9a68;
        case 0x2d9a6cu: goto label_2d9a6c;
        case 0x2d9a70u: goto label_2d9a70;
        case 0x2d9a74u: goto label_2d9a74;
        case 0x2d9a78u: goto label_2d9a78;
        case 0x2d9a7cu: goto label_2d9a7c;
        case 0x2d9a80u: goto label_2d9a80;
        case 0x2d9a84u: goto label_2d9a84;
        case 0x2d9a88u: goto label_2d9a88;
        case 0x2d9a8cu: goto label_2d9a8c;
        case 0x2d9a90u: goto label_2d9a90;
        case 0x2d9a94u: goto label_2d9a94;
        case 0x2d9a98u: goto label_2d9a98;
        case 0x2d9a9cu: goto label_2d9a9c;
        case 0x2d9aa0u: goto label_2d9aa0;
        case 0x2d9aa4u: goto label_2d9aa4;
        case 0x2d9aa8u: goto label_2d9aa8;
        case 0x2d9aacu: goto label_2d9aac;
        case 0x2d9ab0u: goto label_2d9ab0;
        case 0x2d9ab4u: goto label_2d9ab4;
        case 0x2d9ab8u: goto label_2d9ab8;
        case 0x2d9abcu: goto label_2d9abc;
        case 0x2d9ac0u: goto label_2d9ac0;
        case 0x2d9ac4u: goto label_2d9ac4;
        case 0x2d9ac8u: goto label_2d9ac8;
        case 0x2d9accu: goto label_2d9acc;
        case 0x2d9ad0u: goto label_2d9ad0;
        case 0x2d9ad4u: goto label_2d9ad4;
        case 0x2d9ad8u: goto label_2d9ad8;
        case 0x2d9adcu: goto label_2d9adc;
        case 0x2d9ae0u: goto label_2d9ae0;
        case 0x2d9ae4u: goto label_2d9ae4;
        case 0x2d9ae8u: goto label_2d9ae8;
        case 0x2d9aecu: goto label_2d9aec;
        case 0x2d9af0u: goto label_2d9af0;
        case 0x2d9af4u: goto label_2d9af4;
        case 0x2d9af8u: goto label_2d9af8;
        case 0x2d9afcu: goto label_2d9afc;
        case 0x2d9b00u: goto label_2d9b00;
        case 0x2d9b04u: goto label_2d9b04;
        case 0x2d9b08u: goto label_2d9b08;
        case 0x2d9b0cu: goto label_2d9b0c;
        case 0x2d9b10u: goto label_2d9b10;
        case 0x2d9b14u: goto label_2d9b14;
        case 0x2d9b18u: goto label_2d9b18;
        case 0x2d9b1cu: goto label_2d9b1c;
        case 0x2d9b20u: goto label_2d9b20;
        case 0x2d9b24u: goto label_2d9b24;
        case 0x2d9b28u: goto label_2d9b28;
        case 0x2d9b2cu: goto label_2d9b2c;
        case 0x2d9b30u: goto label_2d9b30;
        case 0x2d9b34u: goto label_2d9b34;
        case 0x2d9b38u: goto label_2d9b38;
        case 0x2d9b3cu: goto label_2d9b3c;
        case 0x2d9b40u: goto label_2d9b40;
        case 0x2d9b44u: goto label_2d9b44;
        case 0x2d9b48u: goto label_2d9b48;
        case 0x2d9b4cu: goto label_2d9b4c;
        case 0x2d9b50u: goto label_2d9b50;
        case 0x2d9b54u: goto label_2d9b54;
        case 0x2d9b58u: goto label_2d9b58;
        case 0x2d9b5cu: goto label_2d9b5c;
        case 0x2d9b60u: goto label_2d9b60;
        case 0x2d9b64u: goto label_2d9b64;
        case 0x2d9b68u: goto label_2d9b68;
        case 0x2d9b6cu: goto label_2d9b6c;
        case 0x2d9b70u: goto label_2d9b70;
        case 0x2d9b74u: goto label_2d9b74;
        case 0x2d9b78u: goto label_2d9b78;
        case 0x2d9b7cu: goto label_2d9b7c;
        case 0x2d9b80u: goto label_2d9b80;
        case 0x2d9b84u: goto label_2d9b84;
        case 0x2d9b88u: goto label_2d9b88;
        case 0x2d9b8cu: goto label_2d9b8c;
        case 0x2d9b90u: goto label_2d9b90;
        case 0x2d9b94u: goto label_2d9b94;
        case 0x2d9b98u: goto label_2d9b98;
        case 0x2d9b9cu: goto label_2d9b9c;
        case 0x2d9ba0u: goto label_2d9ba0;
        case 0x2d9ba4u: goto label_2d9ba4;
        case 0x2d9ba8u: goto label_2d9ba8;
        case 0x2d9bacu: goto label_2d9bac;
        case 0x2d9bb0u: goto label_2d9bb0;
        case 0x2d9bb4u: goto label_2d9bb4;
        case 0x2d9bb8u: goto label_2d9bb8;
        case 0x2d9bbcu: goto label_2d9bbc;
        case 0x2d9bc0u: goto label_2d9bc0;
        case 0x2d9bc4u: goto label_2d9bc4;
        case 0x2d9bc8u: goto label_2d9bc8;
        case 0x2d9bccu: goto label_2d9bcc;
        case 0x2d9bd0u: goto label_2d9bd0;
        case 0x2d9bd4u: goto label_2d9bd4;
        case 0x2d9bd8u: goto label_2d9bd8;
        case 0x2d9bdcu: goto label_2d9bdc;
        case 0x2d9be0u: goto label_2d9be0;
        case 0x2d9be4u: goto label_2d9be4;
        case 0x2d9be8u: goto label_2d9be8;
        case 0x2d9becu: goto label_2d9bec;
        case 0x2d9bf0u: goto label_2d9bf0;
        case 0x2d9bf4u: goto label_2d9bf4;
        case 0x2d9bf8u: goto label_2d9bf8;
        case 0x2d9bfcu: goto label_2d9bfc;
        case 0x2d9c00u: goto label_2d9c00;
        case 0x2d9c04u: goto label_2d9c04;
        case 0x2d9c08u: goto label_2d9c08;
        case 0x2d9c0cu: goto label_2d9c0c;
        case 0x2d9c10u: goto label_2d9c10;
        case 0x2d9c14u: goto label_2d9c14;
        case 0x2d9c18u: goto label_2d9c18;
        case 0x2d9c1cu: goto label_2d9c1c;
        case 0x2d9c20u: goto label_2d9c20;
        case 0x2d9c24u: goto label_2d9c24;
        case 0x2d9c28u: goto label_2d9c28;
        case 0x2d9c2cu: goto label_2d9c2c;
        case 0x2d9c30u: goto label_2d9c30;
        case 0x2d9c34u: goto label_2d9c34;
        case 0x2d9c38u: goto label_2d9c38;
        case 0x2d9c3cu: goto label_2d9c3c;
        case 0x2d9c40u: goto label_2d9c40;
        case 0x2d9c44u: goto label_2d9c44;
        case 0x2d9c48u: goto label_2d9c48;
        case 0x2d9c4cu: goto label_2d9c4c;
        case 0x2d9c50u: goto label_2d9c50;
        case 0x2d9c54u: goto label_2d9c54;
        case 0x2d9c58u: goto label_2d9c58;
        case 0x2d9c5cu: goto label_2d9c5c;
        case 0x2d9c60u: goto label_2d9c60;
        case 0x2d9c64u: goto label_2d9c64;
        case 0x2d9c68u: goto label_2d9c68;
        case 0x2d9c6cu: goto label_2d9c6c;
        case 0x2d9c70u: goto label_2d9c70;
        case 0x2d9c74u: goto label_2d9c74;
        case 0x2d9c78u: goto label_2d9c78;
        case 0x2d9c7cu: goto label_2d9c7c;
        case 0x2d9c80u: goto label_2d9c80;
        case 0x2d9c84u: goto label_2d9c84;
        case 0x2d9c88u: goto label_2d9c88;
        case 0x2d9c8cu: goto label_2d9c8c;
        case 0x2d9c90u: goto label_2d9c90;
        case 0x2d9c94u: goto label_2d9c94;
        case 0x2d9c98u: goto label_2d9c98;
        case 0x2d9c9cu: goto label_2d9c9c;
        case 0x2d9ca0u: goto label_2d9ca0;
        case 0x2d9ca4u: goto label_2d9ca4;
        case 0x2d9ca8u: goto label_2d9ca8;
        case 0x2d9cacu: goto label_2d9cac;
        case 0x2d9cb0u: goto label_2d9cb0;
        case 0x2d9cb4u: goto label_2d9cb4;
        case 0x2d9cb8u: goto label_2d9cb8;
        case 0x2d9cbcu: goto label_2d9cbc;
        case 0x2d9cc0u: goto label_2d9cc0;
        case 0x2d9cc4u: goto label_2d9cc4;
        case 0x2d9cc8u: goto label_2d9cc8;
        case 0x2d9cccu: goto label_2d9ccc;
        case 0x2d9cd0u: goto label_2d9cd0;
        case 0x2d9cd4u: goto label_2d9cd4;
        case 0x2d9cd8u: goto label_2d9cd8;
        case 0x2d9cdcu: goto label_2d9cdc;
        default: break;
    }

    ctx->pc = 0x2d98f8u;

label_2d98f8:
    // 0x2d98f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d98f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2d98fc:
    // 0x2d98fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d98fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2d9900:
    // 0x2d9900: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d9900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2d9904:
    // 0x2d9904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d9904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9908:
    // 0x2d9908: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d9908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2d990c:
    // 0x2d990c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d990cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9910:
    // 0x2d9910: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d9910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2d9914:
    // 0x2d9914: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2d9918:
    // 0x2d9918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d991c:
    // 0x2d991c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2d991cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2d9920:
    // 0x2d9920: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2d9920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2d9924:
    // 0x2d9924: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d9924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9928:
    // 0x2d9928: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d9928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d992c:
    // 0x2d992c: 0x1c4000e1  bgtz        $v0, . + 4 + (0xE1 << 2)
label_2d9930:
    if (ctx->pc == 0x2D9930u) {
        ctx->pc = 0x2D9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D992Cu;
        // 0x2d9930: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9934u;
        goto label_2d9934;
    }
    ctx->pc = 0x2D992Cu;
    {
        const bool branch_taken_0x2d992c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D992Cu;
        // 0x2d9930: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d992c) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D9934u;
label_2d9934:
    // 0x2d9934: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x2d9934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
label_2d9938:
    // 0x2d9938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d993c:
    // 0x2d993c: 0xc089998  jal         func_226660
label_2d9940:
    if (ctx->pc == 0x2D9940u) {
        ctx->pc = 0x2D9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D993Cu;
        // 0x2d9940: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9944u;
        goto label_2d9944;
    }
    ctx->pc = 0x2D993Cu;
    SET_GPR_U32(ctx, 31, 0x2D9944u);
    ctx->pc = 0x2D9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D993Cu;
    // 0x2d9940: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D993Cu, 0x2D9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9944u;
label_2d9944:
    // 0x2d9944: 0x105400db  beq         $v0, $s4, . + 4 + (0xDB << 2)
label_2d9948:
    if (ctx->pc == 0x2D9948u) {
        ctx->pc = 0x2D9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9944u;
        // 0x2d9948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D994Cu;
        goto label_2d994c;
    }
    ctx->pc = 0x2D9944u;
    {
        const bool branch_taken_0x2d9944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2D9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9944u;
        // 0x2d9948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9944) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D994Cu;
label_2d994c:
    // 0x2d994c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d9950:
    // 0x2d9950: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d9950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9954:
    // 0x2d9954: 0xc0e409a  jal         func_390268
label_2d9958:
    if (ctx->pc == 0x2D9958u) {
        ctx->pc = 0x2D9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9954u;
        // 0x2d9958: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D995Cu;
        goto label_2d995c;
    }
    ctx->pc = 0x2D9954u;
    SET_GPR_U32(ctx, 31, 0x2D995Cu);
    ctx->pc = 0x2D9958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9954u;
    // 0x2d9958: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D9954u, 0x2D995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D995Cu;
label_2d995c:
    // 0x2d995c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9960:
    // 0x2d9960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d9960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9964:
    // 0x2d9964: 0xc0a352c  jal         func_28D4B0
label_2d9968:
    if (ctx->pc == 0x2D9968u) {
        ctx->pc = 0x2D9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9964u;
        // 0x2d9968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D996Cu;
        goto label_2d996c;
    }
    ctx->pc = 0x2D9964u;
    SET_GPR_U32(ctx, 31, 0x2D996Cu);
    ctx->pc = 0x2D9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9964u;
    // 0x2d9968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D9964u, 0x2D996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D996Cu;
label_2d996c:
    // 0x2d996c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d996cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9970:
    // 0x2d9970: 0x120000d0  beqz        $s0, . + 4 + (0xD0 << 2)
label_2d9974:
    if (ctx->pc == 0x2D9974u) {
        ctx->pc = 0x2D9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9970u;
        // 0x2d9974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9978u;
        goto label_2d9978;
    }
    ctx->pc = 0x2D9970u;
    {
        const bool branch_taken_0x2d9970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9970u;
        // 0x2d9974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9970) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D9978u;
label_2d9978:
    // 0x2d9978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d997c:
    // 0x2d997c: 0xc0a33f8  jal         func_28CFE0
label_2d9980:
    if (ctx->pc == 0x2D9980u) {
        ctx->pc = 0x2D9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D997Cu;
        // 0x2d9980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9984u;
        goto label_2d9984;
    }
    ctx->pc = 0x2D997Cu;
    SET_GPR_U32(ctx, 31, 0x2D9984u);
    ctx->pc = 0x2D9980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D997Cu;
    // 0x2d9980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2D997Cu, 0x2D9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9984u;
label_2d9984:
    // 0x2d9984: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9988:
    // 0x2d9988: 0xc0e409a  jal         func_390268
label_2d998c:
    if (ctx->pc == 0x2D998Cu) {
        ctx->pc = 0x2D998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9988u;
        // 0x2d998c: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9990u;
        goto label_2d9990;
    }
    ctx->pc = 0x2D9988u;
    SET_GPR_U32(ctx, 31, 0x2D9990u);
    ctx->pc = 0x2D998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9988u;
    // 0x2d998c: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D9988u, 0x2D9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9990u;
label_2d9990:
    // 0x2d9990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9994:
    // 0x2d9994: 0x120000c7  beqz        $s0, . + 4 + (0xC7 << 2)
label_2d9998:
    if (ctx->pc == 0x2D9998u) {
        ctx->pc = 0x2D9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9994u;
        // 0x2d9998: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D999Cu;
        goto label_2d999c;
    }
    ctx->pc = 0x2D9994u;
    {
        const bool branch_taken_0x2d9994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9994u;
        // 0x2d9998: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9994) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D999Cu;
label_2d999c:
    // 0x2d999c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2d999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d99a0:
    // 0x2d99a0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_2d99a4:
    if (ctx->pc == 0x2D99A4u) {
        ctx->pc = 0x2D99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99A0u;
        // 0x2d99a4: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D99A8u;
        goto label_2d99a8;
    }
    ctx->pc = 0x2D99A0u;
    {
        const bool branch_taken_0x2d99a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d99a0) {
            ctx->pc = 0x2D99A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D99A0u;
            // 0x2d99a4: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D99C8u;
            goto label_2d99c8;
        }
    }
    ctx->pc = 0x2D99A8u;
label_2d99a8:
    // 0x2d99a8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2d99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2d99ac:
    // 0x2d99ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d99acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d99b0:
    // 0x2d99b0: 0x684664e7  ldl         $a2, 0x64E7($v0)
    ctx->pc = 0x2d99b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2d99b4:
    // 0x2d99b4: 0x6c4664e0  ldr         $a2, 0x64E0($v0)
    ctx->pc = 0x2d99b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2d99b8:
    // 0x2d99b8: 0xc0a39c2  jal         func_28E708
label_2d99bc:
    if (ctx->pc == 0x2D99BCu) {
        ctx->pc = 0x2D99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99B8u;
        // 0x2d99bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D99C0u;
        goto label_2d99c0;
    }
    ctx->pc = 0x2D99B8u;
    SET_GPR_U32(ctx, 31, 0x2D99C0u);
    ctx->pc = 0x2D99BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D99B8u;
    // 0x2d99bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2D99B8u, 0x2D99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99C0u;
label_2d99c0:
    // 0x2d99c0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2d99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2d99c4:
    // 0x2d99c4: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2d99c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2d99c8:
    // 0x2d99c8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2d99cc:
    // 0x2d99cc: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2d99ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2d99d0:
    // 0x2d99d0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2d99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d99d4:
    // 0x2d99d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d99d8:
    // 0x2d99d8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d99d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d99dc:
    // 0x2d99dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d99e0:
    // 0x2d99e0: 0xc0cdb38  jal         func_336CE0
label_2d99e4:
    if (ctx->pc == 0x2D99E4u) {
        ctx->pc = 0x2D99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99E0u;
        // 0x2d99e4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D99E8u;
        goto label_2d99e8;
    }
    ctx->pc = 0x2D99E0u;
    SET_GPR_U32(ctx, 31, 0x2D99E8u);
    ctx->pc = 0x2D99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D99E0u;
    // 0x2d99e4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D99E0u, 0x2D99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99E8u;
label_2d99e8:
    // 0x2d99e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d99e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2d99ec:
    // 0x2d99ec: 0xc08bfa0  jal         func_22FE80
label_2d99f0:
    if (ctx->pc == 0x2D99F0u) {
        ctx->pc = 0x2D99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99ECu;
        // 0x2d99f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D99F4u;
        goto label_2d99f4;
    }
    ctx->pc = 0x2D99ECu;
    SET_GPR_U32(ctx, 31, 0x2D99F4u);
    ctx->pc = 0x2D99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D99ECu;
    // 0x2d99f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2D99ECu, 0x2D99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99F4u;
label_2d99f4:
    // 0x2d99f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d99f8:
    // 0x2d99f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d99f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d99fc:
    // 0x2d99fc: 0xc0a41ae  jal         func_2906B8
label_2d9a00:
    if (ctx->pc == 0x2D9A00u) {
        ctx->pc = 0x2D9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99FCu;
        // 0x2d9a00: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A04u;
        goto label_2d9a04;
    }
    ctx->pc = 0x2D99FCu;
    SET_GPR_U32(ctx, 31, 0x2D9A04u);
    ctx->pc = 0x2D9A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D99FCu;
    // 0x2d9a00: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2D99FCu, 0x2D9A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A04u;
label_2d9a04:
    // 0x2d9a04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d9a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a08:
    // 0x2d9a08: 0x1674007f  bne         $s3, $s4, . + 4 + (0x7F << 2)
label_2d9a0c:
    if (ctx->pc == 0x2D9A0Cu) {
        ctx->pc = 0x2D9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A08u;
        // 0x2d9a0c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A10u;
        goto label_2d9a10;
    }
    ctx->pc = 0x2D9A08u;
    {
        const bool branch_taken_0x2d9a08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A08u;
        // 0x2d9a0c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a08) {
            ctx->pc = 0x2D9C08u;
            goto label_2d9c08;
        }
    }
    ctx->pc = 0x2D9A10u;
label_2d9a10:
    // 0x2d9a10: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2d9a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d9a14:
    // 0x2d9a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a18:
    // 0x2d9a18: 0xc08c340  jal         func_230D00
label_2d9a1c:
    if (ctx->pc == 0x2D9A1Cu) {
        ctx->pc = 0x2D9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A18u;
        // 0x2d9a1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A20u;
        goto label_2d9a20;
    }
    ctx->pc = 0x2D9A18u;
    SET_GPR_U32(ctx, 31, 0x2D9A20u);
    ctx->pc = 0x2D9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A18u;
    // 0x2d9a1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2D9A18u, 0x2D9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A20u;
label_2d9a20:
    // 0x2d9a20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d9a20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2d9a24:
    // 0x2d9a24: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2d9a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d9a28:
    // 0x2d9a28: 0x0  nop
    ctx->pc = 0x2d9a28u;
    // NOP
label_2d9a2c:
    // 0x2d9a2c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_2d9a30:
    if (ctx->pc == 0x2D9A30u) {
        ctx->pc = 0x2D9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A2Cu;
        // 0x2d9a30: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A34u;
        goto label_2d9a34;
    }
    ctx->pc = 0x2D9A2Cu;
    {
        const bool branch_taken_0x2d9a2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d9a2c) {
            ctx->pc = 0x2D9A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9A2Cu;
            // 0x2d9a30: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9A6Cu;
            goto label_2d9a6c;
        }
    }
    ctx->pc = 0x2D9A34u;
label_2d9a34:
    // 0x2d9a34: 0xc086618  jal         func_219860
label_2d9a38:
    if (ctx->pc == 0x2D9A38u) {
        ctx->pc = 0x2D9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A34u;
        // 0x2d9a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A3Cu;
        goto label_2d9a3c;
    }
    ctx->pc = 0x2D9A34u;
    SET_GPR_U32(ctx, 31, 0x2D9A3Cu);
    ctx->pc = 0x2D9A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A34u;
    // 0x2d9a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2D9A34u, 0x2D9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A3Cu;
label_2d9a3c:
    // 0x2d9a3c: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2d9a3cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d9a40:
    // 0x2d9a40: 0x0  nop
    ctx->pc = 0x2d9a40u;
    // NOP
label_2d9a44:
    // 0x2d9a44: 0x0  nop
    ctx->pc = 0x2d9a44u;
    // NOP
label_2d9a48:
    // 0x2d9a48: 0x46140044  c1          0x140044
    ctx->pc = 0x2d9a48u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2d9a4c:
    // 0x2d9a4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d9a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d9a50:
    // 0x2d9a50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d9a54:
    // 0x2d9a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d9a58:
    // 0x2d9a58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9a5c:
    // 0x2d9a5c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2d9a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2d9a60:
    // 0x2d9a60: 0x46000d28  max.s       $f20, $f1, $f0
    ctx->pc = 0x2d9a60u;
    ctx->f[20] = std::max(ctx->f[1], ctx->f[0]);
label_2d9a64:
    // 0x2d9a64: 0x10000088  b           . + 4 + (0x88 << 2)
label_2d9a68:
    if (ctx->pc == 0x2D9A68u) {
        ctx->pc = 0x2D9A6Cu;
        goto label_2d9a6c;
    }
    ctx->pc = 0x2D9A64u;
    {
        const bool branch_taken_0x2d9a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a64) {
            ctx->pc = 0x2D9C88u;
            goto label_2d9c88;
        }
    }
    ctx->pc = 0x2D9A6Cu;
label_2d9a6c:
    // 0x2d9a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a70:
    // 0x2d9a70: 0xc0891de  jal         func_224778
label_2d9a74:
    if (ctx->pc == 0x2D9A74u) {
        ctx->pc = 0x2D9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A70u;
        // 0x2d9a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A78u;
        goto label_2d9a78;
    }
    ctx->pc = 0x2D9A70u;
    SET_GPR_U32(ctx, 31, 0x2D9A78u);
    ctx->pc = 0x2D9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A70u;
    // 0x2d9a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2D9A70u, 0x2D9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A78u;
label_2d9a78:
    // 0x2d9a78: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2d9a7c:
    if (ctx->pc == 0x2D9A7Cu) {
        ctx->pc = 0x2D9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A78u;
        // 0x2d9a7c: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A80u;
        goto label_2d9a80;
    }
    ctx->pc = 0x2D9A78u;
    {
        const bool branch_taken_0x2d9a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a78) {
            ctx->pc = 0x2D9A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9A78u;
            // 0x2d9a7c: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9AA0u;
            goto label_2d9aa0;
        }
    }
    ctx->pc = 0x2D9A80u;
label_2d9a80:
    // 0x2d9a80: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2d9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2d9a84:
    // 0x2d9a84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9a88:
    // 0x2d9a88: 0x684664ef  ldl         $a2, 0x64EF($v0)
    ctx->pc = 0x2d9a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2d9a8c:
    // 0x2d9a8c: 0x6c4664e8  ldr         $a2, 0x64E8($v0)
    ctx->pc = 0x2d9a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2d9a90:
    // 0x2d9a90: 0xc0a39c2  jal         func_28E708
label_2d9a94:
    if (ctx->pc == 0x2D9A94u) {
        ctx->pc = 0x2D9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A90u;
        // 0x2d9a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9A98u;
        goto label_2d9a98;
    }
    ctx->pc = 0x2D9A90u;
    SET_GPR_U32(ctx, 31, 0x2D9A98u);
    ctx->pc = 0x2D9A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A90u;
    // 0x2d9a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2D9A90u, 0x2D9A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A98u;
label_2d9a98:
    // 0x2d9a98: 0x10000086  b           . + 4 + (0x86 << 2)
label_2d9a9c:
    if (ctx->pc == 0x2D9A9Cu) {
        ctx->pc = 0x2D9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A98u;
        // 0x2d9a9c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9AA0u;
        goto label_2d9aa0;
    }
    ctx->pc = 0x2D9A98u;
    {
        const bool branch_taken_0x2d9a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A98u;
        // 0x2d9a9c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a98) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D9AA0u;
label_2d9aa0:
    // 0x2d9aa0: 0x38c2002d  xori        $v0, $a2, 0x2D
    ctx->pc = 0x2d9aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)45);
label_2d9aa4:
    // 0x2d9aa4: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_2d9aa8:
    if (ctx->pc == 0x2D9AA8u) {
        ctx->pc = 0x2D9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AA4u;
        // 0x2d9aa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9AACu;
        goto label_2d9aac;
    }
    ctx->pc = 0x2D9AA4u;
    {
        const bool branch_taken_0x2d9aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AA4u;
        // 0x2d9aa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9aa4) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D9AACu;
label_2d9aac:
    // 0x2d9aac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9ab0:
    // 0x2d9ab0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d9ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2d9ab4:
    // 0x2d9ab4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d9ab8:
    // 0x2d9ab8: 0xc0a3892  jal         func_28E248
label_2d9abc:
    if (ctx->pc == 0x2D9ABCu) {
        ctx->pc = 0x2D9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AB8u;
        // 0x2d9abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9AC0u;
        goto label_2d9ac0;
    }
    ctx->pc = 0x2D9AB8u;
    SET_GPR_U32(ctx, 31, 0x2D9AC0u);
    ctx->pc = 0x2D9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9AB8u;
    // 0x2d9abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2D9AB8u, 0x2D9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AC0u;
label_2d9ac0:
    // 0x2d9ac0: 0x8e4203e8  lw          $v0, 0x3E8($s2)
    ctx->pc = 0x2d9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
label_2d9ac4:
    // 0x2d9ac4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d9ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d9ac8:
    // 0x2d9ac8: 0x1453004d  bne         $v0, $s3, . + 4 + (0x4D << 2)
label_2d9acc:
    if (ctx->pc == 0x2D9ACCu) {
        ctx->pc = 0x2D9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AC8u;
        // 0x2d9acc: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9AD0u;
        goto label_2d9ad0;
    }
    ctx->pc = 0x2D9AC8u;
    {
        const bool branch_taken_0x2d9ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AC8u;
        // 0x2d9acc: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ac8) {
            ctx->pc = 0x2D9C00u;
            goto label_2d9c00;
        }
    }
    ctx->pc = 0x2D9AD0u;
label_2d9ad0:
    // 0x2d9ad0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d9ad4:
    // 0x2d9ad4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2d9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2d9ad8:
    // 0x2d9ad8: 0x2452b880  addiu       $s2, $v0, -0x4780
    ctx->pc = 0x2d9ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2d9adc:
    // 0x2d9adc: 0xc0cd4ee  jal         func_3353B8
label_2d9ae0:
    if (ctx->pc == 0x2D9AE0u) {
        ctx->pc = 0x2D9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9ADCu;
        // 0x2d9ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9AE4u;
        goto label_2d9ae4;
    }
    ctx->pc = 0x2D9ADCu;
    SET_GPR_U32(ctx, 31, 0x2D9AE4u);
    ctx->pc = 0x2D9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9ADCu;
    // 0x2d9ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D9ADCu, 0x2D9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AE4u;
label_2d9ae4:
    // 0x2d9ae4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d9ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ae8:
    // 0x2d9ae8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2d9ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2d9aec:
    // 0x2d9aec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2d9af0:
    if (ctx->pc == 0x2D9AF0u) {
        ctx->pc = 0x2D9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AECu;
        // 0x2d9af0: 0x2c620014  sltiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9AF4u;
        goto label_2d9af4;
    }
    ctx->pc = 0x2D9AECu;
    {
        const bool branch_taken_0x2d9aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AECu;
        // 0x2d9af0: 0x2c620014  sltiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9aec) {
            ctx->pc = 0x2D9B2Cu;
            goto label_2d9b2c;
        }
    }
    ctx->pc = 0x2D9AF4u;
label_2d9af4:
    // 0x2d9af4: 0xc0a367c  jal         func_28D9F0
label_2d9af8:
    if (ctx->pc == 0x2D9AF8u) {
        ctx->pc = 0x2D9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AF4u;
        // 0x2d9af8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9AFCu;
        goto label_2d9afc;
    }
    ctx->pc = 0x2D9AF4u;
    SET_GPR_U32(ctx, 31, 0x2D9AFCu);
    ctx->pc = 0x2D9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9AF4u;
    // 0x2d9af8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D9AF4u, 0x2D9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AFCu;
label_2d9afc:
    // 0x2d9afc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_2d9b00:
    if (ctx->pc == 0x2D9B00u) {
        ctx->pc = 0x2D9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AFCu;
        // 0x2d9b00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B04u;
        goto label_2d9b04;
    }
    ctx->pc = 0x2D9AFCu;
    {
        const bool branch_taken_0x2d9afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AFCu;
        // 0x2d9b00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9afc) {
            ctx->pc = 0x2D9BFCu;
            goto label_2d9bfc;
        }
    }
    ctx->pc = 0x2D9B04u;
label_2d9b04:
    // 0x2d9b04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9b08:
    // 0x2d9b08: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d9b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d9b0c:
    // 0x2d9b0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d9b0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d9b10:
    // 0x2d9b10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d9b14:
    // 0x2d9b14: 0x2406025b  addiu       $a2, $zero, 0x25B
    ctx->pc = 0x2d9b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
label_2d9b18:
    // 0x2d9b18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b1c:
    // 0x2d9b1c: 0xc0be8c0  jal         func_2FA300
label_2d9b20:
    if (ctx->pc == 0x2D9B20u) {
        ctx->pc = 0x2D9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B1Cu;
        // 0x2d9b20: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B24u;
        goto label_2d9b24;
    }
    ctx->pc = 0x2D9B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B24u);
    ctx->pc = 0x2D9B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B1Cu;
    // 0x2d9b20: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D9B1Cu, 0x2D9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B24u;
label_2d9b24:
    // 0x2d9b24: 0x10000036  b           . + 4 + (0x36 << 2)
label_2d9b28:
    if (ctx->pc == 0x2D9B28u) {
        ctx->pc = 0x2D9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B24u;
        // 0x2d9b28: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B2Cu;
        goto label_2d9b2c;
    }
    ctx->pc = 0x2D9B24u;
    {
        const bool branch_taken_0x2d9b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B24u;
        // 0x2d9b28: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b24) {
            ctx->pc = 0x2D9C00u;
            goto label_2d9c00;
        }
    }
    ctx->pc = 0x2D9B2Cu;
label_2d9b2c:
    // 0x2d9b2c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2d9b30:
    if (ctx->pc == 0x2D9B30u) {
        ctx->pc = 0x2D9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B2Cu;
        // 0x2d9b30: 0x2c62001e  sltiu       $v0, $v1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B34u;
        goto label_2d9b34;
    }
    ctx->pc = 0x2D9B2Cu;
    {
        const bool branch_taken_0x2d9b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B2Cu;
        // 0x2d9b30: 0x2c62001e  sltiu       $v0, $v1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b2c) {
            ctx->pc = 0x2D9B64u;
            goto label_2d9b64;
        }
    }
    ctx->pc = 0x2D9B34u;
label_2d9b34:
    // 0x2d9b34: 0xc0a367c  jal         func_28D9F0
label_2d9b38:
    if (ctx->pc == 0x2D9B38u) {
        ctx->pc = 0x2D9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B34u;
        // 0x2d9b38: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B3Cu;
        goto label_2d9b3c;
    }
    ctx->pc = 0x2D9B34u;
    SET_GPR_U32(ctx, 31, 0x2D9B3Cu);
    ctx->pc = 0x2D9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B34u;
    // 0x2d9b38: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D9B34u, 0x2D9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B3Cu;
label_2d9b3c:
    // 0x2d9b3c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2d9b40:
    if (ctx->pc == 0x2D9B40u) {
        ctx->pc = 0x2D9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B3Cu;
        // 0x2d9b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B44u;
        goto label_2d9b44;
    }
    ctx->pc = 0x2D9B3Cu;
    {
        const bool branch_taken_0x2d9b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B3Cu;
        // 0x2d9b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b3c) {
            ctx->pc = 0x2D9BFCu;
            goto label_2d9bfc;
        }
    }
    ctx->pc = 0x2D9B44u;
label_2d9b44:
    // 0x2d9b44: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d9b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d9b48:
    // 0x2d9b48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d9b4c:
    // 0x2d9b4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d9b50:
    // 0x2d9b50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9b54:
    // 0x2d9b54: 0x2406025e  addiu       $a2, $zero, 0x25E
    ctx->pc = 0x2d9b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 606));
label_2d9b58:
    // 0x2d9b58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d9b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9b5c:
    // 0x2d9b5c: 0x10000016  b           . + 4 + (0x16 << 2)
label_2d9b60:
    if (ctx->pc == 0x2D9B60u) {
        ctx->pc = 0x2D9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B5Cu;
        // 0x2d9b60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B64u;
        goto label_2d9b64;
    }
    ctx->pc = 0x2D9B5Cu;
    {
        const bool branch_taken_0x2d9b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B5Cu;
        // 0x2d9b60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b5c) {
            ctx->pc = 0x2D9BB8u;
            goto label_2d9bb8;
        }
    }
    ctx->pc = 0x2D9B64u;
label_2d9b64:
    // 0x2d9b64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2d9b68:
    if (ctx->pc == 0x2D9B68u) {
        ctx->pc = 0x2D9B6Cu;
        goto label_2d9b6c;
    }
    ctx->pc = 0x2D9B64u;
    {
        const bool branch_taken_0x2d9b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b64) {
            ctx->pc = 0x2D9BCCu;
            goto label_2d9bcc;
        }
    }
    ctx->pc = 0x2D9B6Cu;
label_2d9b6c:
    // 0x2d9b6c: 0xc0a367c  jal         func_28D9F0
label_2d9b70:
    if (ctx->pc == 0x2D9B70u) {
        ctx->pc = 0x2D9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B6Cu;
        // 0x2d9b70: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B74u;
        goto label_2d9b74;
    }
    ctx->pc = 0x2D9B6Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B74u);
    ctx->pc = 0x2D9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B6Cu;
    // 0x2d9b70: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D9B6Cu, 0x2D9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B74u;
label_2d9b74:
    // 0x2d9b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b78:
    // 0x2d9b78: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_2d9b7c:
    if (ctx->pc == 0x2D9B7Cu) {
        ctx->pc = 0x2D9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B78u;
        // 0x2d9b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B80u;
        goto label_2d9b80;
    }
    ctx->pc = 0x2D9B78u;
    {
        const bool branch_taken_0x2d9b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B78u;
        // 0x2d9b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b78) {
            ctx->pc = 0x2D9BFCu;
            goto label_2d9bfc;
        }
    }
    ctx->pc = 0x2D9B80u;
label_2d9b80:
    // 0x2d9b80: 0xc0cd4ee  jal         func_3353B8
label_2d9b84:
    if (ctx->pc == 0x2D9B84u) {
        ctx->pc = 0x2D9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B80u;
        // 0x2d9b84: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9B88u;
        goto label_2d9b88;
    }
    ctx->pc = 0x2D9B80u;
    SET_GPR_U32(ctx, 31, 0x2D9B88u);
    ctx->pc = 0x2D9B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B80u;
    // 0x2d9b84: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D9B80u, 0x2D9B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B88u;
label_2d9b88:
    // 0x2d9b88: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2d9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2d9b8c:
    // 0x2d9b8c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d9b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d9b90:
    // 0x2d9b90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d9b94:
    // 0x2d9b94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d9b98:
    // 0x2d9b98: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2d9b98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d9b9c:
    // 0x2d9b9c: 0x24060263  addiu       $a2, $zero, 0x263
    ctx->pc = 0x2d9b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
label_2d9ba0:
    // 0x2d9ba0: 0x24020261  addiu       $v0, $zero, 0x261
    ctx->pc = 0x2d9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
label_2d9ba4:
    // 0x2d9ba4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9ba8:
    // 0x2d9ba8: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x2d9ba8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_2d9bac:
    // 0x2d9bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9bb0:
    // 0x2d9bb0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d9bb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d9bb4:
    // 0x2d9bb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d9bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9bb8:
    // 0x2d9bb8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d9bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9bbc:
    // 0x2d9bbc: 0xc0be968  jal         func_2FA5A0
label_2d9bc0:
    if (ctx->pc == 0x2D9BC0u) {
        ctx->pc = 0x2D9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BBCu;
        // 0x2d9bc0: 0x240901f4  addiu       $t1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9BC4u;
        goto label_2d9bc4;
    }
    ctx->pc = 0x2D9BBCu;
    SET_GPR_U32(ctx, 31, 0x2D9BC4u);
    ctx->pc = 0x2D9BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BBCu;
    // 0x2d9bc0: 0x240901f4  addiu       $t1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D9BBCu, 0x2D9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BC4u;
label_2d9bc4:
    // 0x2d9bc4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2d9bc8:
    if (ctx->pc == 0x2D9BC8u) {
        ctx->pc = 0x2D9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BC4u;
        // 0x2d9bc8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9BCCu;
        goto label_2d9bcc;
    }
    ctx->pc = 0x2D9BC4u;
    {
        const bool branch_taken_0x2d9bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BC4u;
        // 0x2d9bc8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bc4) {
            ctx->pc = 0x2D9C00u;
            goto label_2d9c00;
        }
    }
    ctx->pc = 0x2D9BCCu;
label_2d9bcc:
    // 0x2d9bcc: 0xc0a367c  jal         func_28D9F0
label_2d9bd0:
    if (ctx->pc == 0x2D9BD0u) {
        ctx->pc = 0x2D9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BCCu;
        // 0x2d9bd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9BD4u;
        goto label_2d9bd4;
    }
    ctx->pc = 0x2D9BCCu;
    SET_GPR_U32(ctx, 31, 0x2D9BD4u);
    ctx->pc = 0x2D9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BCCu;
    // 0x2d9bd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D9BCCu, 0x2D9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BD4u;
label_2d9bd4:
    // 0x2d9bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9bd8:
    // 0x2d9bd8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2d9bdc:
    if (ctx->pc == 0x2D9BDCu) {
        ctx->pc = 0x2D9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BD8u;
        // 0x2d9bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9BE0u;
        goto label_2d9be0;
    }
    ctx->pc = 0x2D9BD8u;
    {
        const bool branch_taken_0x2d9bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BD8u;
        // 0x2d9bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bd8) {
            ctx->pc = 0x2D9BFCu;
            goto label_2d9bfc;
        }
    }
    ctx->pc = 0x2D9BE0u;
label_2d9be0:
    // 0x2d9be0: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2d9be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2d9be4:
    // 0x2d9be4: 0xc0cd4fc  jal         func_3353F0
label_2d9be8:
    if (ctx->pc == 0x2D9BE8u) {
        ctx->pc = 0x2D9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BE4u;
        // 0x2d9be8: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9BECu;
        goto label_2d9bec;
    }
    ctx->pc = 0x2D9BE4u;
    SET_GPR_U32(ctx, 31, 0x2D9BECu);
    ctx->pc = 0x2D9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BE4u;
    // 0x2d9be8: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D9BE4u, 0x2D9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BECu;
label_2d9bec:
    // 0x2d9bec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9bf0:
    // 0x2d9bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9bf4:
    // 0x2d9bf4: 0xc0bebdc  jal         func_2FAF70
label_2d9bf8:
    if (ctx->pc == 0x2D9BF8u) {
        ctx->pc = 0x2D9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BF4u;
        // 0x2d9bf8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9BFCu;
        goto label_2d9bfc;
    }
    ctx->pc = 0x2D9BF4u;
    SET_GPR_U32(ctx, 31, 0x2D9BFCu);
    ctx->pc = 0x2D9BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BF4u;
    // 0x2d9bf8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2D9BF4u, 0x2D9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BFCu;
label_2d9bfc:
    // 0x2d9bfc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2d9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2d9c00:
    // 0x2d9c00: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2d9c04:
    if (ctx->pc == 0x2D9C04u) {
        ctx->pc = 0x2D9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C00u;
        // 0x2d9c04: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C08u;
        goto label_2d9c08;
    }
    ctx->pc = 0x2D9C00u;
    {
        const bool branch_taken_0x2d9c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C00u;
        // 0x2d9c04: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c00) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D9C08u;
label_2d9c08:
    // 0x2d9c08: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2d9c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2d9c0c:
    // 0x2d9c0c: 0xc0cd4ee  jal         func_3353B8
label_2d9c10:
    if (ctx->pc == 0x2D9C10u) {
        ctx->pc = 0x2D9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C0Cu;
        // 0x2d9c10: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C14u;
        goto label_2d9c14;
    }
    ctx->pc = 0x2D9C0Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C14u);
    ctx->pc = 0x2D9C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C0Cu;
    // 0x2d9c10: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D9C0Cu, 0x2D9C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C14u;
label_2d9c14:
    // 0x2d9c14: 0x2c42004b  sltiu       $v0, $v0, 0x4B
    ctx->pc = 0x2d9c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)75) ? 1 : 0);
label_2d9c18:
    // 0x2d9c18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2d9c1c:
    if (ctx->pc == 0x2D9C1Cu) {
        ctx->pc = 0x2D9C20u;
        goto label_2d9c20;
    }
    ctx->pc = 0x2D9C18u;
    {
        const bool branch_taken_0x2d9c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9c18) {
            ctx->pc = 0x2D9C68u;
            goto label_2d9c68;
        }
    }
    ctx->pc = 0x2D9C20u;
label_2d9c20:
    // 0x2d9c20: 0xc0a367c  jal         func_28D9F0
label_2d9c24:
    if (ctx->pc == 0x2D9C24u) {
        ctx->pc = 0x2D9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C20u;
        // 0x2d9c24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C28u;
        goto label_2d9c28;
    }
    ctx->pc = 0x2D9C20u;
    SET_GPR_U32(ctx, 31, 0x2D9C28u);
    ctx->pc = 0x2D9C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C20u;
    // 0x2d9c24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D9C20u, 0x2D9C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C28u;
label_2d9c28:
    // 0x2d9c28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d9c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c2c:
    // 0x2d9c2c: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_2d9c30:
    if (ctx->pc == 0x2D9C30u) {
        ctx->pc = 0x2D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C2Cu;
        // 0x2d9c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C34u;
        goto label_2d9c34;
    }
    ctx->pc = 0x2D9C2Cu;
    {
        const bool branch_taken_0x2d9c2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C2Cu;
        // 0x2d9c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c2c) {
            ctx->pc = 0x2D9CB8u;
            goto label_2d9cb8;
        }
    }
    ctx->pc = 0x2D9C34u;
label_2d9c34:
    // 0x2d9c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9c38:
    // 0x2d9c38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d9c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d9c3c:
    // 0x2d9c3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d9c40:
    // 0x2d9c40: 0x40f809  jalr        $v0
label_2d9c44:
    if (ctx->pc == 0x2D9C44u) {
        ctx->pc = 0x2D9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C40u;
        // 0x2d9c44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C48u;
        goto label_2d9c48;
    }
    ctx->pc = 0x2D9C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9C48u);
        ctx->pc = 0x2D9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C40u;
        // 0x2d9c44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C40u, 0x2D9C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9C48u;
label_2d9c48:
    // 0x2d9c48: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9c4c:
    // 0x2d9c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c50:
    // 0x2d9c50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d9c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c54:
    // 0x2d9c54: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2d9c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2d9c58:
    // 0x2d9c58: 0xc0bfabe  jal         func_2FEAF8
label_2d9c5c:
    if (ctx->pc == 0x2D9C5Cu) {
        ctx->pc = 0x2D9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C58u;
        // 0x2d9c5c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C60u;
        goto label_2d9c60;
    }
    ctx->pc = 0x2D9C58u;
    SET_GPR_U32(ctx, 31, 0x2D9C60u);
    ctx->pc = 0x2D9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C58u;
    // 0x2d9c5c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2D9C58u, 0x2D9C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C60u;
label_2d9c60:
    // 0x2d9c60: 0x10000015  b           . + 4 + (0x15 << 2)
label_2d9c64:
    if (ctx->pc == 0x2D9C64u) {
        ctx->pc = 0x2D9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C60u;
        // 0x2d9c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C68u;
        goto label_2d9c68;
    }
    ctx->pc = 0x2D9C60u;
    {
        const bool branch_taken_0x2d9c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C60u;
        // 0x2d9c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c60) {
            ctx->pc = 0x2D9CB8u;
            goto label_2d9cb8;
        }
    }
    ctx->pc = 0x2D9C68u;
label_2d9c68:
    // 0x2d9c68: 0xc086618  jal         func_219860
label_2d9c6c:
    if (ctx->pc == 0x2D9C6Cu) {
        ctx->pc = 0x2D9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C68u;
        // 0x2d9c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C70u;
        goto label_2d9c70;
    }
    ctx->pc = 0x2D9C68u;
    SET_GPR_U32(ctx, 31, 0x2D9C70u);
    ctx->pc = 0x2D9C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C68u;
    // 0x2d9c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2D9C68u, 0x2D9C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C70u;
label_2d9c70:
    // 0x2d9c70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9c74:
    // 0x2d9c74: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2d9c74u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d9c78:
    // 0x2d9c78: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2d9c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2d9c7c:
    // 0x2d9c7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d9c80:
    // 0x2d9c80: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2d9c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d9c84:
    // 0x2d9c84: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2d9c84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d9c88:
    // 0x2d9c88: 0xc0a367c  jal         func_28D9F0
label_2d9c8c:
    if (ctx->pc == 0x2D9C8Cu) {
        ctx->pc = 0x2D9C90u;
        goto label_2d9c90;
    }
    ctx->pc = 0x2D9C88u;
    SET_GPR_U32(ctx, 31, 0x2D9C90u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D9C88u, 0x2D9C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C90u;
label_2d9c90:
    // 0x2d9c90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2d9c94:
    if (ctx->pc == 0x2D9C94u) {
        ctx->pc = 0x2D9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C90u;
        // 0x2d9c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C98u;
        goto label_2d9c98;
    }
    ctx->pc = 0x2D9C90u;
    {
        const bool branch_taken_0x2d9c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C90u;
        // 0x2d9c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c90) {
            ctx->pc = 0x2D9CB4u;
            goto label_2d9cb4;
        }
    }
    ctx->pc = 0x2D9C98u;
label_2d9c98:
    // 0x2d9c98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9c9c:
    // 0x2d9c9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d9c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ca0:
    // 0x2d9ca0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d9ca0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2d9ca4:
    // 0x2d9ca4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d9ca4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2d9ca8:
    // 0x2d9ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9cac:
    // 0x2d9cac: 0xc0bf3d4  jal         func_2FCF50
label_2d9cb0:
    if (ctx->pc == 0x2D9CB0u) {
        ctx->pc = 0x2D9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CACu;
        // 0x2d9cb0: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9CB4u;
        goto label_2d9cb4;
    }
    ctx->pc = 0x2D9CACu;
    SET_GPR_U32(ctx, 31, 0x2D9CB4u);
    ctx->pc = 0x2D9CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9CACu;
    // 0x2d9cb0: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2D9CACu, 0x2D9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CB4u;
label_2d9cb4:
    // 0x2d9cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9cb8:
    // 0x2d9cb8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d9cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d9cbc:
    // 0x2d9cbc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d9cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d9cc0:
    // 0x2d9cc0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d9cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d9cc4:
    // 0x2d9cc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9cc8:
    // 0x2d9cc8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d9cc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9ccc:
    // 0x2d9ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9cd0:
    // 0x2d9cd0: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2d9cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d9cd4:
    // 0x2d9cd4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2d9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d9cd8:
    // 0x2d9cd8: 0x3e00008  jr          $ra
label_2d9cdc:
    if (ctx->pc == 0x2D9CDCu) {
        ctx->pc = 0x2D9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CD8u;
        // 0x2d9cdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9CE0u;
        goto label_fallthrough_0x2d9cd8;
    }
    ctx->pc = 0x2D9CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CD8u;
        // 0x2d9cdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9cd8:
    ctx->pc = 0x2D9CE0u;
}
