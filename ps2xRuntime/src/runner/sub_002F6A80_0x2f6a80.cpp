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

// Function: sub_002F6A80
// Address: 0x2f6a80 - 0x2f6e28
void sub_002F6A80_0x2f6a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6A80_0x2f6a80");
#endif

    switch (ctx->pc) {
        case 0x2f6a80u: goto label_2f6a80;
        case 0x2f6a84u: goto label_2f6a84;
        case 0x2f6a88u: goto label_2f6a88;
        case 0x2f6a8cu: goto label_2f6a8c;
        case 0x2f6a90u: goto label_2f6a90;
        case 0x2f6a94u: goto label_2f6a94;
        case 0x2f6a98u: goto label_2f6a98;
        case 0x2f6a9cu: goto label_2f6a9c;
        case 0x2f6aa0u: goto label_2f6aa0;
        case 0x2f6aa4u: goto label_2f6aa4;
        case 0x2f6aa8u: goto label_2f6aa8;
        case 0x2f6aacu: goto label_2f6aac;
        case 0x2f6ab0u: goto label_2f6ab0;
        case 0x2f6ab4u: goto label_2f6ab4;
        case 0x2f6ab8u: goto label_2f6ab8;
        case 0x2f6abcu: goto label_2f6abc;
        case 0x2f6ac0u: goto label_2f6ac0;
        case 0x2f6ac4u: goto label_2f6ac4;
        case 0x2f6ac8u: goto label_2f6ac8;
        case 0x2f6accu: goto label_2f6acc;
        case 0x2f6ad0u: goto label_2f6ad0;
        case 0x2f6ad4u: goto label_2f6ad4;
        case 0x2f6ad8u: goto label_2f6ad8;
        case 0x2f6adcu: goto label_2f6adc;
        case 0x2f6ae0u: goto label_2f6ae0;
        case 0x2f6ae4u: goto label_2f6ae4;
        case 0x2f6ae8u: goto label_2f6ae8;
        case 0x2f6aecu: goto label_2f6aec;
        case 0x2f6af0u: goto label_2f6af0;
        case 0x2f6af4u: goto label_2f6af4;
        case 0x2f6af8u: goto label_2f6af8;
        case 0x2f6afcu: goto label_2f6afc;
        case 0x2f6b00u: goto label_2f6b00;
        case 0x2f6b04u: goto label_2f6b04;
        case 0x2f6b08u: goto label_2f6b08;
        case 0x2f6b0cu: goto label_2f6b0c;
        case 0x2f6b10u: goto label_2f6b10;
        case 0x2f6b14u: goto label_2f6b14;
        case 0x2f6b18u: goto label_2f6b18;
        case 0x2f6b1cu: goto label_2f6b1c;
        case 0x2f6b20u: goto label_2f6b20;
        case 0x2f6b24u: goto label_2f6b24;
        case 0x2f6b28u: goto label_2f6b28;
        case 0x2f6b2cu: goto label_2f6b2c;
        case 0x2f6b30u: goto label_2f6b30;
        case 0x2f6b34u: goto label_2f6b34;
        case 0x2f6b38u: goto label_2f6b38;
        case 0x2f6b3cu: goto label_2f6b3c;
        case 0x2f6b40u: goto label_2f6b40;
        case 0x2f6b44u: goto label_2f6b44;
        case 0x2f6b48u: goto label_2f6b48;
        case 0x2f6b4cu: goto label_2f6b4c;
        case 0x2f6b50u: goto label_2f6b50;
        case 0x2f6b54u: goto label_2f6b54;
        case 0x2f6b58u: goto label_2f6b58;
        case 0x2f6b5cu: goto label_2f6b5c;
        case 0x2f6b60u: goto label_2f6b60;
        case 0x2f6b64u: goto label_2f6b64;
        case 0x2f6b68u: goto label_2f6b68;
        case 0x2f6b6cu: goto label_2f6b6c;
        case 0x2f6b70u: goto label_2f6b70;
        case 0x2f6b74u: goto label_2f6b74;
        case 0x2f6b78u: goto label_2f6b78;
        case 0x2f6b7cu: goto label_2f6b7c;
        case 0x2f6b80u: goto label_2f6b80;
        case 0x2f6b84u: goto label_2f6b84;
        case 0x2f6b88u: goto label_2f6b88;
        case 0x2f6b8cu: goto label_2f6b8c;
        case 0x2f6b90u: goto label_2f6b90;
        case 0x2f6b94u: goto label_2f6b94;
        case 0x2f6b98u: goto label_2f6b98;
        case 0x2f6b9cu: goto label_2f6b9c;
        case 0x2f6ba0u: goto label_2f6ba0;
        case 0x2f6ba4u: goto label_2f6ba4;
        case 0x2f6ba8u: goto label_2f6ba8;
        case 0x2f6bacu: goto label_2f6bac;
        case 0x2f6bb0u: goto label_2f6bb0;
        case 0x2f6bb4u: goto label_2f6bb4;
        case 0x2f6bb8u: goto label_2f6bb8;
        case 0x2f6bbcu: goto label_2f6bbc;
        case 0x2f6bc0u: goto label_2f6bc0;
        case 0x2f6bc4u: goto label_2f6bc4;
        case 0x2f6bc8u: goto label_2f6bc8;
        case 0x2f6bccu: goto label_2f6bcc;
        case 0x2f6bd0u: goto label_2f6bd0;
        case 0x2f6bd4u: goto label_2f6bd4;
        case 0x2f6bd8u: goto label_2f6bd8;
        case 0x2f6bdcu: goto label_2f6bdc;
        case 0x2f6be0u: goto label_2f6be0;
        case 0x2f6be4u: goto label_2f6be4;
        case 0x2f6be8u: goto label_2f6be8;
        case 0x2f6becu: goto label_2f6bec;
        case 0x2f6bf0u: goto label_2f6bf0;
        case 0x2f6bf4u: goto label_2f6bf4;
        case 0x2f6bf8u: goto label_2f6bf8;
        case 0x2f6bfcu: goto label_2f6bfc;
        case 0x2f6c00u: goto label_2f6c00;
        case 0x2f6c04u: goto label_2f6c04;
        case 0x2f6c08u: goto label_2f6c08;
        case 0x2f6c0cu: goto label_2f6c0c;
        case 0x2f6c10u: goto label_2f6c10;
        case 0x2f6c14u: goto label_2f6c14;
        case 0x2f6c18u: goto label_2f6c18;
        case 0x2f6c1cu: goto label_2f6c1c;
        case 0x2f6c20u: goto label_2f6c20;
        case 0x2f6c24u: goto label_2f6c24;
        case 0x2f6c28u: goto label_2f6c28;
        case 0x2f6c2cu: goto label_2f6c2c;
        case 0x2f6c30u: goto label_2f6c30;
        case 0x2f6c34u: goto label_2f6c34;
        case 0x2f6c38u: goto label_2f6c38;
        case 0x2f6c3cu: goto label_2f6c3c;
        case 0x2f6c40u: goto label_2f6c40;
        case 0x2f6c44u: goto label_2f6c44;
        case 0x2f6c48u: goto label_2f6c48;
        case 0x2f6c4cu: goto label_2f6c4c;
        case 0x2f6c50u: goto label_2f6c50;
        case 0x2f6c54u: goto label_2f6c54;
        case 0x2f6c58u: goto label_2f6c58;
        case 0x2f6c5cu: goto label_2f6c5c;
        case 0x2f6c60u: goto label_2f6c60;
        case 0x2f6c64u: goto label_2f6c64;
        case 0x2f6c68u: goto label_2f6c68;
        case 0x2f6c6cu: goto label_2f6c6c;
        case 0x2f6c70u: goto label_2f6c70;
        case 0x2f6c74u: goto label_2f6c74;
        case 0x2f6c78u: goto label_2f6c78;
        case 0x2f6c7cu: goto label_2f6c7c;
        case 0x2f6c80u: goto label_2f6c80;
        case 0x2f6c84u: goto label_2f6c84;
        case 0x2f6c88u: goto label_2f6c88;
        case 0x2f6c8cu: goto label_2f6c8c;
        case 0x2f6c90u: goto label_2f6c90;
        case 0x2f6c94u: goto label_2f6c94;
        case 0x2f6c98u: goto label_2f6c98;
        case 0x2f6c9cu: goto label_2f6c9c;
        case 0x2f6ca0u: goto label_2f6ca0;
        case 0x2f6ca4u: goto label_2f6ca4;
        case 0x2f6ca8u: goto label_2f6ca8;
        case 0x2f6cacu: goto label_2f6cac;
        case 0x2f6cb0u: goto label_2f6cb0;
        case 0x2f6cb4u: goto label_2f6cb4;
        case 0x2f6cb8u: goto label_2f6cb8;
        case 0x2f6cbcu: goto label_2f6cbc;
        case 0x2f6cc0u: goto label_2f6cc0;
        case 0x2f6cc4u: goto label_2f6cc4;
        case 0x2f6cc8u: goto label_2f6cc8;
        case 0x2f6cccu: goto label_2f6ccc;
        case 0x2f6cd0u: goto label_2f6cd0;
        case 0x2f6cd4u: goto label_2f6cd4;
        case 0x2f6cd8u: goto label_2f6cd8;
        case 0x2f6cdcu: goto label_2f6cdc;
        case 0x2f6ce0u: goto label_2f6ce0;
        case 0x2f6ce4u: goto label_2f6ce4;
        case 0x2f6ce8u: goto label_2f6ce8;
        case 0x2f6cecu: goto label_2f6cec;
        case 0x2f6cf0u: goto label_2f6cf0;
        case 0x2f6cf4u: goto label_2f6cf4;
        case 0x2f6cf8u: goto label_2f6cf8;
        case 0x2f6cfcu: goto label_2f6cfc;
        case 0x2f6d00u: goto label_2f6d00;
        case 0x2f6d04u: goto label_2f6d04;
        case 0x2f6d08u: goto label_2f6d08;
        case 0x2f6d0cu: goto label_2f6d0c;
        case 0x2f6d10u: goto label_2f6d10;
        case 0x2f6d14u: goto label_2f6d14;
        case 0x2f6d18u: goto label_2f6d18;
        case 0x2f6d1cu: goto label_2f6d1c;
        case 0x2f6d20u: goto label_2f6d20;
        case 0x2f6d24u: goto label_2f6d24;
        case 0x2f6d28u: goto label_2f6d28;
        case 0x2f6d2cu: goto label_2f6d2c;
        case 0x2f6d30u: goto label_2f6d30;
        case 0x2f6d34u: goto label_2f6d34;
        case 0x2f6d38u: goto label_2f6d38;
        case 0x2f6d3cu: goto label_2f6d3c;
        case 0x2f6d40u: goto label_2f6d40;
        case 0x2f6d44u: goto label_2f6d44;
        case 0x2f6d48u: goto label_2f6d48;
        case 0x2f6d4cu: goto label_2f6d4c;
        case 0x2f6d50u: goto label_2f6d50;
        case 0x2f6d54u: goto label_2f6d54;
        case 0x2f6d58u: goto label_2f6d58;
        case 0x2f6d5cu: goto label_2f6d5c;
        case 0x2f6d60u: goto label_2f6d60;
        case 0x2f6d64u: goto label_2f6d64;
        case 0x2f6d68u: goto label_2f6d68;
        case 0x2f6d6cu: goto label_2f6d6c;
        case 0x2f6d70u: goto label_2f6d70;
        case 0x2f6d74u: goto label_2f6d74;
        case 0x2f6d78u: goto label_2f6d78;
        case 0x2f6d7cu: goto label_2f6d7c;
        case 0x2f6d80u: goto label_2f6d80;
        case 0x2f6d84u: goto label_2f6d84;
        case 0x2f6d88u: goto label_2f6d88;
        case 0x2f6d8cu: goto label_2f6d8c;
        case 0x2f6d90u: goto label_2f6d90;
        case 0x2f6d94u: goto label_2f6d94;
        case 0x2f6d98u: goto label_2f6d98;
        case 0x2f6d9cu: goto label_2f6d9c;
        case 0x2f6da0u: goto label_2f6da0;
        case 0x2f6da4u: goto label_2f6da4;
        case 0x2f6da8u: goto label_2f6da8;
        case 0x2f6dacu: goto label_2f6dac;
        case 0x2f6db0u: goto label_2f6db0;
        case 0x2f6db4u: goto label_2f6db4;
        case 0x2f6db8u: goto label_2f6db8;
        case 0x2f6dbcu: goto label_2f6dbc;
        case 0x2f6dc0u: goto label_2f6dc0;
        case 0x2f6dc4u: goto label_2f6dc4;
        case 0x2f6dc8u: goto label_2f6dc8;
        case 0x2f6dccu: goto label_2f6dcc;
        case 0x2f6dd0u: goto label_2f6dd0;
        case 0x2f6dd4u: goto label_2f6dd4;
        case 0x2f6dd8u: goto label_2f6dd8;
        case 0x2f6ddcu: goto label_2f6ddc;
        case 0x2f6de0u: goto label_2f6de0;
        case 0x2f6de4u: goto label_2f6de4;
        case 0x2f6de8u: goto label_2f6de8;
        case 0x2f6decu: goto label_2f6dec;
        case 0x2f6df0u: goto label_2f6df0;
        case 0x2f6df4u: goto label_2f6df4;
        case 0x2f6df8u: goto label_2f6df8;
        case 0x2f6dfcu: goto label_2f6dfc;
        case 0x2f6e00u: goto label_2f6e00;
        case 0x2f6e04u: goto label_2f6e04;
        case 0x2f6e08u: goto label_2f6e08;
        case 0x2f6e0cu: goto label_2f6e0c;
        case 0x2f6e10u: goto label_2f6e10;
        case 0x2f6e14u: goto label_2f6e14;
        case 0x2f6e18u: goto label_2f6e18;
        case 0x2f6e1cu: goto label_2f6e1c;
        case 0x2f6e20u: goto label_2f6e20;
        case 0x2f6e24u: goto label_2f6e24;
        default: break;
    }

    ctx->pc = 0x2f6a80u;

label_2f6a80:
    // 0x2f6a80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f6a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f6a84:
    // 0x2f6a84: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f6a88:
    // 0x2f6a88: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2f6a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2f6a8c:
    // 0x2f6a8c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2f6a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2f6a90:
    // 0x2f6a90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f6a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f6a94:
    // 0x2f6a94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f6a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f6a98:
    // 0x2f6a98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2f6a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2f6a9c:
    // 0x2f6a9c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2f6a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2f6aa0:
    // 0x2f6aa0: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x2f6aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f6aa4:
    // 0x2f6aa4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2f6aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2f6aa8:
    // 0x2f6aa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f6aac:
    // 0x2f6aac: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2f6aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f6ab0:
    // 0x2f6ab0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6ab4:
    // 0x2f6ab4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2f6ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6ab8:
    // 0x2f6ab8: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x2f6ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f6abc:
    // 0x2f6abc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2f6abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f6ac0:
    // 0x2f6ac0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f6ac4:
    // 0x2f6ac4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2f6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2f6ac8:
    // 0x2f6ac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f6ac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6acc:
    // 0x2f6acc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f6accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2f6ad0:
    // 0x2f6ad0: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2f6ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2f6ad4:
    // 0x2f6ad4: 0x1c4000c9  bgtz        $v0, . + 4 + (0xC9 << 2)
label_2f6ad8:
    if (ctx->pc == 0x2F6AD8u) {
        ctx->pc = 0x2F6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AD4u;
        // 0x2f6ad8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6ADCu;
        goto label_2f6adc;
    }
    ctx->pc = 0x2F6AD4u;
    {
        const bool branch_taken_0x2f6ad4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AD4u;
        // 0x2f6ad8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ad4) {
            ctx->pc = 0x2F6DFCu;
            goto label_2f6dfc;
        }
    }
    ctx->pc = 0x2F6ADCu;
label_2f6adc:
    // 0x2f6adc: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2f6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2f6ae0:
    // 0x2f6ae0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f6ae4:
    if (ctx->pc == 0x2F6AE4u) {
        ctx->pc = 0x2F6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AE0u;
        // 0x2f6ae4: 0xac800284  sw          $zero, 0x284($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6AE8u;
        goto label_2f6ae8;
    }
    ctx->pc = 0x2F6AE0u;
    {
        const bool branch_taken_0x2f6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ae0) {
            ctx->pc = 0x2F6AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6AE0u;
            // 0x2f6ae4: 0xac800284  sw          $zero, 0x284($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6AE8u;
            goto label_2f6ae8;
        }
    }
    ctx->pc = 0x2F6AE8u;
label_2f6ae8:
    // 0x2f6ae8: 0x92420010  lbu         $v0, 0x10($s2)
    ctx->pc = 0x2f6ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_2f6aec:
    // 0x2f6aec: 0x1454002c  bne         $v0, $s4, . + 4 + (0x2C << 2)
label_2f6af0:
    if (ctx->pc == 0x2F6AF0u) {
        ctx->pc = 0x2F6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AECu;
        // 0x2f6af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6AF4u;
        goto label_2f6af4;
    }
    ctx->pc = 0x2F6AECu;
    {
        const bool branch_taken_0x2f6aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2F6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AECu;
        // 0x2f6af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6aec) {
            ctx->pc = 0x2F6BA0u;
            goto label_2f6ba0;
        }
    }
    ctx->pc = 0x2F6AF4u;
label_2f6af4:
    // 0x2f6af4: 0xc047e6c  jal         func_11F9B0
label_2f6af8:
    if (ctx->pc == 0x2F6AF8u) {
        ctx->pc = 0x2F6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AF4u;
        // 0x2f6af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6AFCu;
        goto label_2f6afc;
    }
    ctx->pc = 0x2F6AF4u;
    SET_GPR_U32(ctx, 31, 0x2F6AFCu);
    ctx->pc = 0x2F6AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6AF4u;
    // 0x2f6af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2F6AF4u, 0x2F6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6AFCu;
label_2f6afc:
    // 0x2f6afc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f6afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6b00:
    // 0x2f6b00: 0x50a000be  beql        $a1, $zero, . + 4 + (0xBE << 2)
label_2f6b04:
    if (ctx->pc == 0x2F6B04u) {
        ctx->pc = 0x2F6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B00u;
        // 0x2f6b04: 0xa2400010  sb          $zero, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B08u;
        goto label_2f6b08;
    }
    ctx->pc = 0x2F6B00u;
    {
        const bool branch_taken_0x2f6b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b00) {
            ctx->pc = 0x2F6B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6B00u;
            // 0x2f6b04: 0xa2400010  sb          $zero, 0x10($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6DFCu;
            goto label_2f6dfc;
        }
    }
    ctx->pc = 0x2F6B08u;
label_2f6b08:
    // 0x2f6b08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f6b0c:
    // 0x2f6b0c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x2f6b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_2f6b10:
    // 0x2f6b10: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2f6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_2f6b14:
    // 0x2f6b14: 0x40f809  jalr        $v0
label_2f6b18:
    if (ctx->pc == 0x2F6B18u) {
        ctx->pc = 0x2F6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B14u;
        // 0x2f6b18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B1Cu;
        goto label_2f6b1c;
    }
    ctx->pc = 0x2F6B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F6B1Cu);
        ctx->pc = 0x2F6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B14u;
        // 0x2f6b18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6B14u, 0x2F6B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6B1Cu;
label_2f6b1c:
    // 0x2f6b1c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f6b1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6b20:
    // 0x2f6b20: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6b24:
    // 0x2f6b24: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f6b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2f6b28:
    // 0x2f6b28: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6b2c:
    // 0x2f6b2c: 0xc0a367c  jal         func_28D9F0
label_2f6b30:
    if (ctx->pc == 0x2F6B30u) {
        ctx->pc = 0x2F6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B2Cu;
        // 0x2f6b30: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B34u;
        goto label_2f6b34;
    }
    ctx->pc = 0x2F6B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B34u);
    ctx->pc = 0x2F6B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B2Cu;
    // 0x2f6b30: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6B2Cu, 0x2F6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B34u;
label_2f6b34:
    // 0x2f6b34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f6b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6b38:
    // 0x2f6b38: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2f6b3c:
    if (ctx->pc == 0x2F6B3Cu) {
        ctx->pc = 0x2F6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B38u;
        // 0x2f6b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B40u;
        goto label_2f6b40;
    }
    ctx->pc = 0x2F6B38u;
    {
        const bool branch_taken_0x2f6b38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B38u;
        // 0x2f6b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b38) {
            ctx->pc = 0x2F6B60u;
            goto label_2f6b60;
        }
    }
    ctx->pc = 0x2F6B40u;
label_2f6b40:
    // 0x2f6b40: 0xc0884f6  jal         func_2213D8
label_2f6b44:
    if (ctx->pc == 0x2F6B44u) {
        ctx->pc = 0x2F6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B40u;
        // 0x2f6b44: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B48u;
        goto label_2f6b48;
    }
    ctx->pc = 0x2F6B40u;
    SET_GPR_U32(ctx, 31, 0x2F6B48u);
    ctx->pc = 0x2F6B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B40u;
    // 0x2f6b44: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F6B40u, 0x2F6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B48u;
label_2f6b48:
    // 0x2f6b48: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6b4c:
    // 0x2f6b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6b50:
    // 0x2f6b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6b54:
    // 0x2f6b54: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f6b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2f6b58:
    // 0x2f6b58: 0xc0bf800  jal         func_2FE000
label_2f6b5c:
    if (ctx->pc == 0x2F6B5Cu) {
        ctx->pc = 0x2F6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B58u;
        // 0x2f6b5c: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B60u;
        goto label_2f6b60;
    }
    ctx->pc = 0x2F6B58u;
    SET_GPR_U32(ctx, 31, 0x2F6B60u);
    ctx->pc = 0x2F6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B58u;
    // 0x2f6b5c: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2F6B58u, 0x2F6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B60u;
label_2f6b60:
    // 0x2f6b60: 0xc0a367c  jal         func_28D9F0
label_2f6b64:
    if (ctx->pc == 0x2F6B64u) {
        ctx->pc = 0x2F6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B60u;
        // 0x2f6b64: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B68u;
        goto label_2f6b68;
    }
    ctx->pc = 0x2F6B60u;
    SET_GPR_U32(ctx, 31, 0x2F6B68u);
    ctx->pc = 0x2F6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B60u;
    // 0x2f6b64: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6B60u, 0x2F6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B68u;
label_2f6b68:
    // 0x2f6b68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f6b6c:
    if (ctx->pc == 0x2F6B6Cu) {
        ctx->pc = 0x2F6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B68u;
        // 0x2f6b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B70u;
        goto label_2f6b70;
    }
    ctx->pc = 0x2F6B68u;
    {
        const bool branch_taken_0x2f6b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B68u;
        // 0x2f6b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b68) {
            ctx->pc = 0x2F6B98u;
            goto label_2f6b98;
        }
    }
    ctx->pc = 0x2F6B70u;
label_2f6b70:
    // 0x2f6b70: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f6b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2f6b74:
    // 0x2f6b74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f6b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f6b78:
    // 0x2f6b78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f6b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6b7c:
    // 0x2f6b7c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6b80:
    // 0x2f6b80: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2f6b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2f6b84:
    // 0x2f6b84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f6b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6b88:
    // 0x2f6b88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f6b88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f6b8c:
    // 0x2f6b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6b90:
    // 0x2f6b90: 0xc0be968  jal         func_2FA5A0
label_2f6b94:
    if (ctx->pc == 0x2F6B94u) {
        ctx->pc = 0x2F6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B90u;
        // 0x2f6b94: 0x240901f4  addiu       $t1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6B98u;
        goto label_2f6b98;
    }
    ctx->pc = 0x2F6B90u;
    SET_GPR_U32(ctx, 31, 0x2F6B98u);
    ctx->pc = 0x2F6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B90u;
    // 0x2f6b94: 0x240901f4  addiu       $t1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F6B90u, 0x2F6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B98u;
label_2f6b98:
    // 0x2f6b98: 0x10000098  b           . + 4 + (0x98 << 2)
label_2f6b9c:
    if (ctx->pc == 0x2F6B9Cu) {
        ctx->pc = 0x2F6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B98u;
        // 0x2f6b9c: 0xa2400010  sb          $zero, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6BA0u;
        goto label_2f6ba0;
    }
    ctx->pc = 0x2F6B98u;
    {
        const bool branch_taken_0x2f6b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B98u;
        // 0x2f6b9c: 0xa2400010  sb          $zero, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b98) {
            ctx->pc = 0x2F6DFCu;
            goto label_2f6dfc;
        }
    }
    ctx->pc = 0x2F6BA0u;
label_2f6ba0:
    // 0x2f6ba0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f6ba4:
    // 0x2f6ba4: 0xc0a7c8c  jal         func_29F230
label_2f6ba8:
    if (ctx->pc == 0x2F6BA8u) {
        ctx->pc = 0x2F6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BA4u;
        // 0x2f6ba8: 0x34a5fbfb  ori         $a1, $a1, 0xFBFB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64507);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6BACu;
        goto label_2f6bac;
    }
    ctx->pc = 0x2F6BA4u;
    SET_GPR_U32(ctx, 31, 0x2F6BACu);
    ctx->pc = 0x2F6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BA4u;
    // 0x2f6ba8: 0x34a5fbfb  ori         $a1, $a1, 0xFBFB (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64507);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F6BA4u, 0x2F6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BACu;
label_2f6bac:
    // 0x2f6bac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f6bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6bb0:
    // 0x2f6bb0: 0x12200073  beqz        $s1, . + 4 + (0x73 << 2)
label_2f6bb4:
    if (ctx->pc == 0x2F6BB4u) {
        ctx->pc = 0x2F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BB0u;
        // 0x2f6bb4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6BB8u;
        goto label_2f6bb8;
    }
    ctx->pc = 0x2F6BB0u;
    {
        const bool branch_taken_0x2f6bb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BB0u;
        // 0x2f6bb4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bb0) {
            ctx->pc = 0x2F6D80u;
            goto label_2f6d80;
        }
    }
    ctx->pc = 0x2F6BB8u;
label_2f6bb8:
    // 0x2f6bb8: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x2f6bb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2f6bbc:
    // 0x2f6bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f6bc0:
    // 0x2f6bc0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f6bc4:
    // 0x2f6bc4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2f6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2f6bc8:
    // 0x2f6bc8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f6bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f6bcc:
    // 0x2f6bcc: 0xc0cdb38  jal         func_336CE0
label_2f6bd0:
    if (ctx->pc == 0x2F6BD0u) {
        ctx->pc = 0x2F6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BCCu;
        // 0x2f6bd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6BD4u;
        goto label_2f6bd4;
    }
    ctx->pc = 0x2F6BCCu;
    SET_GPR_U32(ctx, 31, 0x2F6BD4u);
    ctx->pc = 0x2F6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BCCu;
    // 0x2f6bd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F6BCCu, 0x2F6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BD4u;
label_2f6bd4:
    // 0x2f6bd4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6bd8:
    // 0x2f6bd8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2f6bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2f6bdc:
    // 0x2f6bdc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f6bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f6be0:
    // 0x2f6be0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f6be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f6be4:
    // 0x2f6be4: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2f6be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6be8:
    // 0x2f6be8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f6be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2f6bec:
    // 0x2f6bec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2f6becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2f6bf0:
    // 0x2f6bf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6bf4:
    // 0x2f6bf4: 0x0  nop
    ctx->pc = 0x2f6bf4u;
    // NOP
label_2f6bf8:
    // 0x2f6bf8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2f6bfc:
    if (ctx->pc == 0x2F6BFCu) {
        ctx->pc = 0x2F6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BF8u;
        // 0x2f6bfc: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C00u;
        goto label_2f6c00;
    }
    ctx->pc = 0x2F6BF8u;
    {
        const bool branch_taken_0x2f6bf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BF8u;
        // 0x2f6bfc: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bf8) {
            ctx->pc = 0x2F6C1Cu;
            goto label_2f6c1c;
        }
    }
    ctx->pc = 0x2F6C00u;
label_2f6c00:
    // 0x2f6c00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c04:
    // 0x2f6c04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f6c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c08:
    // 0x2f6c08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f6c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f6c0c:
    // 0x2f6c0c: 0xc0888a2  jal         func_222288
label_2f6c10:
    if (ctx->pc == 0x2F6C10u) {
        ctx->pc = 0x2F6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C0Cu;
        // 0x2f6c10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C14u;
        goto label_2f6c14;
    }
    ctx->pc = 0x2F6C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C14u);
    ctx->pc = 0x2F6C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C0Cu;
    // 0x2f6c10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2F6C0Cu, 0x2F6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C14u;
label_2f6c14:
    // 0x2f6c14: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2f6c18:
    if (ctx->pc == 0x2F6C18u) {
        ctx->pc = 0x2F6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C14u;
        // 0x2f6c18: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C1Cu;
        goto label_2f6c1c;
    }
    ctx->pc = 0x2F6C14u;
    {
        const bool branch_taken_0x2f6c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C14u;
        // 0x2f6c18: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c14) {
            ctx->pc = 0x2F6C6Cu;
            goto label_2f6c6c;
        }
    }
    ctx->pc = 0x2F6C1Cu;
label_2f6c1c:
    // 0x2f6c1c: 0xc0a4e54  jal         func_293950
label_2f6c20:
    if (ctx->pc == 0x2F6C20u) {
        ctx->pc = 0x2F6C24u;
        goto label_2f6c24;
    }
    ctx->pc = 0x2F6C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C24u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F6C1Cu, 0x2F6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C24u;
label_2f6c24:
    // 0x2f6c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c28:
    // 0x2f6c28: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2f6c2c:
    if (ctx->pc == 0x2F6C2Cu) {
        ctx->pc = 0x2F6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C28u;
        // 0x2f6c2c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C30u;
        goto label_2f6c30;
    }
    ctx->pc = 0x2F6C28u;
    {
        const bool branch_taken_0x2f6c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c28) {
            ctx->pc = 0x2F6C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6C28u;
            // 0x2f6c2c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6C5Cu;
            goto label_2f6c5c;
        }
    }
    ctx->pc = 0x2F6C30u;
label_2f6c30:
    // 0x2f6c30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6c34:
    // 0x2f6c34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f6c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f6c38:
    // 0x2f6c38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f6c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f6c3c:
    // 0x2f6c3c: 0x40f809  jalr        $v0
label_2f6c40:
    if (ctx->pc == 0x2F6C40u) {
        ctx->pc = 0x2F6C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C3Cu;
        // 0x2f6c40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C44u;
        goto label_2f6c44;
    }
    ctx->pc = 0x2F6C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F6C44u);
        ctx->pc = 0x2F6C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C3Cu;
        // 0x2f6c40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6C3Cu, 0x2F6C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6C44u;
label_2f6c44:
    // 0x2f6c44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f6c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6c48:
    // 0x2f6c48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f6c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c4c:
    // 0x2f6c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c50:
    // 0x2f6c50: 0xc0abd6c  jal         func_2AF5B0
label_2f6c54:
    if (ctx->pc == 0x2F6C54u) {
        ctx->pc = 0x2F6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C50u;
        // 0x2f6c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C58u;
        goto label_2f6c58;
    }
    ctx->pc = 0x2F6C50u;
    SET_GPR_U32(ctx, 31, 0x2F6C58u);
    ctx->pc = 0x2F6C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C50u;
    // 0x2f6c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2F6C50u, 0x2F6C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C58u;
label_2f6c58:
    // 0x2f6c58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6c5c:
    // 0x2f6c5c: 0xc0a35d6  jal         func_28D758
label_2f6c60:
    if (ctx->pc == 0x2F6C60u) {
        ctx->pc = 0x2F6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C5Cu;
        // 0x2f6c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C64u;
        goto label_2f6c64;
    }
    ctx->pc = 0x2F6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C64u);
    ctx->pc = 0x2F6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C5Cu;
    // 0x2f6c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F6C5Cu, 0x2F6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C64u;
label_2f6c64:
    // 0x2f6c64: 0x10000066  b           . + 4 + (0x66 << 2)
label_2f6c68:
    if (ctx->pc == 0x2F6C68u) {
        ctx->pc = 0x2F6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C64u;
        // 0x2f6c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C6Cu;
        goto label_2f6c6c;
    }
    ctx->pc = 0x2F6C64u;
    {
        const bool branch_taken_0x2f6c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C64u;
        // 0x2f6c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c64) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6C6Cu;
label_2f6c6c:
    // 0x2f6c6c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f6c70:
    // 0x2f6c70: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2f6c74:
    if (ctx->pc == 0x2F6C74u) {
        ctx->pc = 0x2F6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C70u;
        // 0x2f6c74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C78u;
        goto label_2f6c78;
    }
    ctx->pc = 0x2F6C70u;
    {
        const bool branch_taken_0x2f6c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C70u;
        // 0x2f6c74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c70) {
            ctx->pc = 0x2F6C98u;
            goto label_2f6c98;
        }
    }
    ctx->pc = 0x2F6C78u;
label_2f6c78:
    // 0x2f6c78: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f6c7c:
    if (ctx->pc == 0x2F6C7Cu) {
        ctx->pc = 0x2F6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C78u;
        // 0x2f6c7c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C80u;
        goto label_2f6c80;
    }
    ctx->pc = 0x2F6C78u;
    {
        const bool branch_taken_0x2f6c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C78u;
        // 0x2f6c7c: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c78) {
            ctx->pc = 0x2F6C98u;
            goto label_2f6c98;
        }
    }
    ctx->pc = 0x2F6C80u;
label_2f6c80:
    // 0x2f6c80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f6c84:
    if (ctx->pc == 0x2F6C84u) {
        ctx->pc = 0x2F6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C80u;
        // 0x2f6c84: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C88u;
        goto label_2f6c88;
    }
    ctx->pc = 0x2F6C80u;
    {
        const bool branch_taken_0x2f6c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C80u;
        // 0x2f6c84: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c80) {
            ctx->pc = 0x2F6C98u;
            goto label_2f6c98;
        }
    }
    ctx->pc = 0x2F6C88u;
label_2f6c88:
    // 0x2f6c88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f6c8c:
    if (ctx->pc == 0x2F6C8Cu) {
        ctx->pc = 0x2F6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C88u;
        // 0x2f6c8c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6C90u;
        goto label_2f6c90;
    }
    ctx->pc = 0x2F6C88u;
    {
        const bool branch_taken_0x2f6c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C88u;
        // 0x2f6c8c: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c88) {
            ctx->pc = 0x2F6C98u;
            goto label_2f6c98;
        }
    }
    ctx->pc = 0x2F6C90u;
label_2f6c90:
    // 0x2f6c90: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_2f6c94:
    if (ctx->pc == 0x2F6C94u) {
        ctx->pc = 0x2F6C98u;
        goto label_2f6c98;
    }
    ctx->pc = 0x2F6C90u;
    {
        const bool branch_taken_0x2f6c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6c90) {
            ctx->pc = 0x2F6CF0u;
            goto label_2f6cf0;
        }
    }
    ctx->pc = 0x2F6C98u;
label_2f6c98:
    // 0x2f6c98: 0xc0a367c  jal         func_28D9F0
label_2f6c9c:
    if (ctx->pc == 0x2F6C9Cu) {
        ctx->pc = 0x2F6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C98u;
        // 0x2f6c9c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6CA0u;
        goto label_2f6ca0;
    }
    ctx->pc = 0x2F6C98u;
    SET_GPR_U32(ctx, 31, 0x2F6CA0u);
    ctx->pc = 0x2F6C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C98u;
    // 0x2f6c9c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6C98u, 0x2F6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CA0u;
label_2f6ca0:
    // 0x2f6ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6ca4:
    // 0x2f6ca4: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_2f6ca8:
    if (ctx->pc == 0x2F6CA8u) {
        ctx->pc = 0x2F6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CA4u;
        // 0x2f6ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6CACu;
        goto label_2f6cac;
    }
    ctx->pc = 0x2F6CA4u;
    {
        const bool branch_taken_0x2f6ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CA4u;
        // 0x2f6ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ca4) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6CACu;
label_2f6cac:
    // 0x2f6cac: 0xc087420  jal         func_21D080
label_2f6cb0:
    if (ctx->pc == 0x2F6CB0u) {
        ctx->pc = 0x2F6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CACu;
        // 0x2f6cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6CB4u;
        goto label_2f6cb4;
    }
    ctx->pc = 0x2F6CACu;
    SET_GPR_U32(ctx, 31, 0x2F6CB4u);
    ctx->pc = 0x2F6CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CACu;
    // 0x2f6cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2F6CACu, 0x2F6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CB4u;
label_2f6cb4:
    // 0x2f6cb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2f6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2f6cb8:
    // 0x2f6cb8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f6cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6cbc:
    // 0x2f6cbc: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2f6cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2f6cc0:
    // 0x2f6cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6cc4:
    // 0x2f6cc4: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2f6cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2f6cc8:
    // 0x2f6cc8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2f6cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2f6ccc:
    // 0x2f6ccc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f6cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6cd0:
    // 0x2f6cd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f6cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6cd4:
    // 0x2f6cd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2f6cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f6cd8:
    // 0x2f6cd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f6cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6cdc:
    // 0x2f6cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f6cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6ce0:
    // 0x2f6ce0: 0xc0bee7a  jal         func_2FB9E8
label_2f6ce4:
    if (ctx->pc == 0x2F6CE4u) {
        ctx->pc = 0x2F6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CE0u;
        // 0x2f6ce4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6CE8u;
        goto label_2f6ce8;
    }
    ctx->pc = 0x2F6CE0u;
    SET_GPR_U32(ctx, 31, 0x2F6CE8u);
    ctx->pc = 0x2F6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CE0u;
    // 0x2f6ce4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2F6CE0u, 0x2F6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CE8u;
label_2f6ce8:
    // 0x2f6ce8: 0x10000045  b           . + 4 + (0x45 << 2)
label_2f6cec:
    if (ctx->pc == 0x2F6CECu) {
        ctx->pc = 0x2F6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CE8u;
        // 0x2f6cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6CF0u;
        goto label_2f6cf0;
    }
    ctx->pc = 0x2F6CE8u;
    {
        const bool branch_taken_0x2f6ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CE8u;
        // 0x2f6cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ce8) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6CF0u;
label_2f6cf0:
    // 0x2f6cf0: 0xc088ed2  jal         func_223B48
label_2f6cf4:
    if (ctx->pc == 0x2F6CF4u) {
        ctx->pc = 0x2F6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CF0u;
        // 0x2f6cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6CF8u;
        goto label_2f6cf8;
    }
    ctx->pc = 0x2F6CF0u;
    SET_GPR_U32(ctx, 31, 0x2F6CF8u);
    ctx->pc = 0x2F6CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CF0u;
    // 0x2f6cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F6CF0u, 0x2F6CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CF8u;
label_2f6cf8:
    // 0x2f6cf8: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
label_2f6cfc:
    if (ctx->pc == 0x2F6CFCu) {
        ctx->pc = 0x2F6D00u;
        goto label_2f6d00;
    }
    ctx->pc = 0x2F6CF8u;
    {
        const bool branch_taken_0x2f6cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2f6cf8) {
            ctx->pc = 0x2F6D48u;
            goto label_2f6d48;
        }
    }
    ctx->pc = 0x2F6D00u;
label_2f6d00:
    // 0x2f6d00: 0xc0a367c  jal         func_28D9F0
label_2f6d04:
    if (ctx->pc == 0x2F6D04u) {
        ctx->pc = 0x2F6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D00u;
        // 0x2f6d04: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D08u;
        goto label_2f6d08;
    }
    ctx->pc = 0x2F6D00u;
    SET_GPR_U32(ctx, 31, 0x2F6D08u);
    ctx->pc = 0x2F6D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D00u;
    // 0x2f6d04: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6D00u, 0x2F6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D08u;
label_2f6d08:
    // 0x2f6d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6d0c:
    // 0x2f6d0c: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_2f6d10:
    if (ctx->pc == 0x2F6D10u) {
        ctx->pc = 0x2F6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D0Cu;
        // 0x2f6d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D14u;
        goto label_2f6d14;
    }
    ctx->pc = 0x2F6D0Cu;
    {
        const bool branch_taken_0x2f6d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D0Cu;
        // 0x2f6d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d0c) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6D14u;
label_2f6d14:
    // 0x2f6d14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f6d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6d18:
    // 0x2f6d18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f6d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f6d1c:
    // 0x2f6d1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f6d20:
    // 0x2f6d20: 0x40f809  jalr        $v0
label_2f6d24:
    if (ctx->pc == 0x2F6D24u) {
        ctx->pc = 0x2F6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D20u;
        // 0x2f6d24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D28u;
        goto label_2f6d28;
    }
    ctx->pc = 0x2F6D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F6D28u);
        ctx->pc = 0x2F6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D20u;
        // 0x2f6d24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D20u, 0x2F6D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6D28u;
label_2f6d28:
    // 0x2f6d28: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6d2c:
    // 0x2f6d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6d30:
    // 0x2f6d30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f6d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6d34:
    // 0x2f6d34: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2f6d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2f6d38:
    // 0x2f6d38: 0xc0bfabe  jal         func_2FEAF8
label_2f6d3c:
    if (ctx->pc == 0x2F6D3Cu) {
        ctx->pc = 0x2F6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D38u;
        // 0x2f6d3c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D40u;
        goto label_2f6d40;
    }
    ctx->pc = 0x2F6D38u;
    SET_GPR_U32(ctx, 31, 0x2F6D40u);
    ctx->pc = 0x2F6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D38u;
    // 0x2f6d3c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2F6D38u, 0x2F6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D40u;
label_2f6d40:
    // 0x2f6d40: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2f6d44:
    if (ctx->pc == 0x2F6D44u) {
        ctx->pc = 0x2F6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D40u;
        // 0x2f6d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D48u;
        goto label_2f6d48;
    }
    ctx->pc = 0x2F6D40u;
    {
        const bool branch_taken_0x2f6d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D40u;
        // 0x2f6d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d40) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6D48u;
label_2f6d48:
    // 0x2f6d48: 0xc0a4e54  jal         func_293950
label_2f6d4c:
    if (ctx->pc == 0x2F6D4Cu) {
        ctx->pc = 0x2F6D50u;
        goto label_2f6d50;
    }
    ctx->pc = 0x2F6D48u;
    SET_GPR_U32(ctx, 31, 0x2F6D50u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F6D48u, 0x2F6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D50u;
label_2f6d50:
    // 0x2f6d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6d54:
    // 0x2f6d54: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2f6d58:
    if (ctx->pc == 0x2F6D58u) {
        ctx->pc = 0x2F6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D54u;
        // 0x2f6d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D5Cu;
        goto label_2f6d5c;
    }
    ctx->pc = 0x2F6D54u;
    {
        const bool branch_taken_0x2f6d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D54u;
        // 0x2f6d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d54) {
            ctx->pc = 0x2F6D6Cu;
            goto label_2f6d6c;
        }
    }
    ctx->pc = 0x2F6D5Cu;
label_2f6d5c:
    // 0x2f6d5c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f6d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6d60:
    // 0x2f6d60: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2f6d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2f6d64:
    // 0x2f6d64: 0xc0acb08  jal         func_2B2C20
label_2f6d68:
    if (ctx->pc == 0x2F6D68u) {
        ctx->pc = 0x2F6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D64u;
        // 0x2f6d68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D6Cu;
        goto label_2f6d6c;
    }
    ctx->pc = 0x2F6D64u;
    SET_GPR_U32(ctx, 31, 0x2F6D6Cu);
    ctx->pc = 0x2F6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D64u;
    // 0x2f6d68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2F6D64u, 0x2F6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D6Cu;
label_2f6d6c:
    // 0x2f6d6c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f6d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6d70:
    // 0x2f6d70: 0xc0a35d6  jal         func_28D758
label_2f6d74:
    if (ctx->pc == 0x2F6D74u) {
        ctx->pc = 0x2F6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D70u;
        // 0x2f6d74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D78u;
        goto label_2f6d78;
    }
    ctx->pc = 0x2F6D70u;
    SET_GPR_U32(ctx, 31, 0x2F6D78u);
    ctx->pc = 0x2F6D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D70u;
    // 0x2f6d74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F6D70u, 0x2F6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D78u;
label_2f6d78:
    // 0x2f6d78: 0x10000021  b           . + 4 + (0x21 << 2)
label_2f6d7c:
    if (ctx->pc == 0x2F6D7Cu) {
        ctx->pc = 0x2F6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D78u;
        // 0x2f6d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D80u;
        goto label_2f6d80;
    }
    ctx->pc = 0x2F6D78u;
    {
        const bool branch_taken_0x2f6d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D78u;
        // 0x2f6d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d78) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6D80u;
label_2f6d80:
    // 0x2f6d80: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2f6d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f6d84:
    // 0x2f6d84: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6d88:
    // 0x2f6d88: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f6d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f6d8c:
    // 0x2f6d8c: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x2f6d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_2f6d90:
    // 0x2f6d90: 0xc13b782  jal         func_4EDE08
label_2f6d94:
    if (ctx->pc == 0x2F6D94u) {
        ctx->pc = 0x2F6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D90u;
        // 0x2f6d94: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6D98u;
        goto label_2f6d98;
    }
    ctx->pc = 0x2F6D90u;
    SET_GPR_U32(ctx, 31, 0x2F6D98u);
    ctx->pc = 0x2F6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D90u;
    // 0x2f6d94: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2F6D90u, 0x2F6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D98u;
label_2f6d98:
    // 0x2f6d98: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2f6d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_2f6d9c:
    // 0x2f6d9c: 0xc0e409a  jal         func_390268
label_2f6da0:
    if (ctx->pc == 0x2F6DA0u) {
        ctx->pc = 0x2F6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D9Cu;
        // 0x2f6da0: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6DA4u;
        goto label_2f6da4;
    }
    ctx->pc = 0x2F6D9Cu;
    SET_GPR_U32(ctx, 31, 0x2F6DA4u);
    ctx->pc = 0x2F6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D9Cu;
    // 0x2f6da0: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F6D9Cu, 0x2F6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DA4u;
label_2f6da4:
    // 0x2f6da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6da8:
    // 0x2f6da8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f6da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f6dac:
    // 0x2f6dac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f6dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6db0:
    // 0x2f6db0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6db4:
    // 0x2f6db4: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2f6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6db8:
    // 0x2f6db8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2f6dbc:
    if (ctx->pc == 0x2F6DBCu) {
        ctx->pc = 0x2F6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DB8u;
        // 0x2f6dbc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6DC0u;
        goto label_2f6dc0;
    }
    ctx->pc = 0x2F6DB8u;
    {
        const bool branch_taken_0x2f6db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DB8u;
        // 0x2f6dbc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6db8) {
            ctx->pc = 0x2F6DFCu;
            goto label_2f6dfc;
        }
    }
    ctx->pc = 0x2F6DC0u;
label_2f6dc0:
    // 0x2f6dc0: 0xc08bfa0  jal         func_22FE80
label_2f6dc4:
    if (ctx->pc == 0x2F6DC4u) {
        ctx->pc = 0x2F6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DC0u;
        // 0x2f6dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6DC8u;
        goto label_2f6dc8;
    }
    ctx->pc = 0x2F6DC0u;
    SET_GPR_U32(ctx, 31, 0x2F6DC8u);
    ctx->pc = 0x2F6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DC0u;
    // 0x2f6dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F6DC0u, 0x2F6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DC8u;
label_2f6dc8:
    // 0x2f6dc8: 0xc0a367c  jal         func_28D9F0
label_2f6dcc:
    if (ctx->pc == 0x2F6DCCu) {
        ctx->pc = 0x2F6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DC8u;
        // 0x2f6dcc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6DD0u;
        goto label_2f6dd0;
    }
    ctx->pc = 0x2F6DC8u;
    SET_GPR_U32(ctx, 31, 0x2F6DD0u);
    ctx->pc = 0x2F6DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DC8u;
    // 0x2f6dcc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F6DC8u, 0x2F6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DD0u;
label_2f6dd0:
    // 0x2f6dd0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f6dd4:
    if (ctx->pc == 0x2F6DD4u) {
        ctx->pc = 0x2F6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DD0u;
        // 0x2f6dd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6DD8u;
        goto label_2f6dd8;
    }
    ctx->pc = 0x2F6DD0u;
    {
        const bool branch_taken_0x2f6dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DD0u;
        // 0x2f6dd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6dd0) {
            ctx->pc = 0x2F6DFCu;
            goto label_2f6dfc;
        }
    }
    ctx->pc = 0x2F6DD8u;
label_2f6dd8:
    // 0x2f6dd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f6ddc:
    // 0x2f6ddc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f6ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f6de0:
    // 0x2f6de0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f6de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f6de4:
    // 0x2f6de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6de8:
    // 0x2f6de8: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2f6de8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2f6dec:
    // 0x2f6dec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6df0:
    // 0x2f6df0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6df4:
    // 0x2f6df4: 0xc0bf3d4  jal         func_2FCF50
label_2f6df8:
    if (ctx->pc == 0x2F6DF8u) {
        ctx->pc = 0x2F6DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DF4u;
        // 0x2f6df8: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6DFCu;
        goto label_2f6dfc;
    }
    ctx->pc = 0x2F6DF4u;
    SET_GPR_U32(ctx, 31, 0x2F6DFCu);
    ctx->pc = 0x2F6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DF4u;
    // 0x2f6df8: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2F6DF4u, 0x2F6DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DFCu;
label_2f6dfc:
    // 0x2f6dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6e00:
    // 0x2f6e00: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2f6e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f6e04:
    // 0x2f6e04: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2f6e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f6e08:
    // 0x2f6e08: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2f6e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f6e0c:
    // 0x2f6e0c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2f6e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f6e10:
    // 0x2f6e10: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f6e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f6e14:
    // 0x2f6e14: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2f6e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f6e18:
    // 0x2f6e18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f6e1c:
    // 0x2f6e1c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2f6e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f6e20:
    // 0x2f6e20: 0x3e00008  jr          $ra
label_2f6e24:
    if (ctx->pc == 0x2F6E24u) {
        ctx->pc = 0x2F6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E20u;
        // 0x2f6e24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6E28u;
        goto label_fallthrough_0x2f6e20;
    }
    ctx->pc = 0x2F6E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E20u;
        // 0x2f6e24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f6e20:
    ctx->pc = 0x2F6E28u;
}
