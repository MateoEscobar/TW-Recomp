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

// Function: sub_00145A10
// Address: 0x145a10 - 0x145dc8
void sub_00145A10_0x145a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145A10_0x145a10");
#endif

    switch (ctx->pc) {
        case 0x145a10u: goto label_145a10;
        case 0x145a14u: goto label_145a14;
        case 0x145a18u: goto label_145a18;
        case 0x145a1cu: goto label_145a1c;
        case 0x145a20u: goto label_145a20;
        case 0x145a24u: goto label_145a24;
        case 0x145a28u: goto label_145a28;
        case 0x145a2cu: goto label_145a2c;
        case 0x145a30u: goto label_145a30;
        case 0x145a34u: goto label_145a34;
        case 0x145a38u: goto label_145a38;
        case 0x145a3cu: goto label_145a3c;
        case 0x145a40u: goto label_145a40;
        case 0x145a44u: goto label_145a44;
        case 0x145a48u: goto label_145a48;
        case 0x145a4cu: goto label_145a4c;
        case 0x145a50u: goto label_145a50;
        case 0x145a54u: goto label_145a54;
        case 0x145a58u: goto label_145a58;
        case 0x145a5cu: goto label_145a5c;
        case 0x145a60u: goto label_145a60;
        case 0x145a64u: goto label_145a64;
        case 0x145a68u: goto label_145a68;
        case 0x145a6cu: goto label_145a6c;
        case 0x145a70u: goto label_145a70;
        case 0x145a74u: goto label_145a74;
        case 0x145a78u: goto label_145a78;
        case 0x145a7cu: goto label_145a7c;
        case 0x145a80u: goto label_145a80;
        case 0x145a84u: goto label_145a84;
        case 0x145a88u: goto label_145a88;
        case 0x145a8cu: goto label_145a8c;
        case 0x145a90u: goto label_145a90;
        case 0x145a94u: goto label_145a94;
        case 0x145a98u: goto label_145a98;
        case 0x145a9cu: goto label_145a9c;
        case 0x145aa0u: goto label_145aa0;
        case 0x145aa4u: goto label_145aa4;
        case 0x145aa8u: goto label_145aa8;
        case 0x145aacu: goto label_145aac;
        case 0x145ab0u: goto label_145ab0;
        case 0x145ab4u: goto label_145ab4;
        case 0x145ab8u: goto label_145ab8;
        case 0x145abcu: goto label_145abc;
        case 0x145ac0u: goto label_145ac0;
        case 0x145ac4u: goto label_145ac4;
        case 0x145ac8u: goto label_145ac8;
        case 0x145accu: goto label_145acc;
        case 0x145ad0u: goto label_145ad0;
        case 0x145ad4u: goto label_145ad4;
        case 0x145ad8u: goto label_145ad8;
        case 0x145adcu: goto label_145adc;
        case 0x145ae0u: goto label_145ae0;
        case 0x145ae4u: goto label_145ae4;
        case 0x145ae8u: goto label_145ae8;
        case 0x145aecu: goto label_145aec;
        case 0x145af0u: goto label_145af0;
        case 0x145af4u: goto label_145af4;
        case 0x145af8u: goto label_145af8;
        case 0x145afcu: goto label_145afc;
        case 0x145b00u: goto label_145b00;
        case 0x145b04u: goto label_145b04;
        case 0x145b08u: goto label_145b08;
        case 0x145b0cu: goto label_145b0c;
        case 0x145b10u: goto label_145b10;
        case 0x145b14u: goto label_145b14;
        case 0x145b18u: goto label_145b18;
        case 0x145b1cu: goto label_145b1c;
        case 0x145b20u: goto label_145b20;
        case 0x145b24u: goto label_145b24;
        case 0x145b28u: goto label_145b28;
        case 0x145b2cu: goto label_145b2c;
        case 0x145b30u: goto label_145b30;
        case 0x145b34u: goto label_145b34;
        case 0x145b38u: goto label_145b38;
        case 0x145b3cu: goto label_145b3c;
        case 0x145b40u: goto label_145b40;
        case 0x145b44u: goto label_145b44;
        case 0x145b48u: goto label_145b48;
        case 0x145b4cu: goto label_145b4c;
        case 0x145b50u: goto label_145b50;
        case 0x145b54u: goto label_145b54;
        case 0x145b58u: goto label_145b58;
        case 0x145b5cu: goto label_145b5c;
        case 0x145b60u: goto label_145b60;
        case 0x145b64u: goto label_145b64;
        case 0x145b68u: goto label_145b68;
        case 0x145b6cu: goto label_145b6c;
        case 0x145b70u: goto label_145b70;
        case 0x145b74u: goto label_145b74;
        case 0x145b78u: goto label_145b78;
        case 0x145b7cu: goto label_145b7c;
        case 0x145b80u: goto label_145b80;
        case 0x145b84u: goto label_145b84;
        case 0x145b88u: goto label_145b88;
        case 0x145b8cu: goto label_145b8c;
        case 0x145b90u: goto label_145b90;
        case 0x145b94u: goto label_145b94;
        case 0x145b98u: goto label_145b98;
        case 0x145b9cu: goto label_145b9c;
        case 0x145ba0u: goto label_145ba0;
        case 0x145ba4u: goto label_145ba4;
        case 0x145ba8u: goto label_145ba8;
        case 0x145bacu: goto label_145bac;
        case 0x145bb0u: goto label_145bb0;
        case 0x145bb4u: goto label_145bb4;
        case 0x145bb8u: goto label_145bb8;
        case 0x145bbcu: goto label_145bbc;
        case 0x145bc0u: goto label_145bc0;
        case 0x145bc4u: goto label_145bc4;
        case 0x145bc8u: goto label_145bc8;
        case 0x145bccu: goto label_145bcc;
        case 0x145bd0u: goto label_145bd0;
        case 0x145bd4u: goto label_145bd4;
        case 0x145bd8u: goto label_145bd8;
        case 0x145bdcu: goto label_145bdc;
        case 0x145be0u: goto label_145be0;
        case 0x145be4u: goto label_145be4;
        case 0x145be8u: goto label_145be8;
        case 0x145becu: goto label_145bec;
        case 0x145bf0u: goto label_145bf0;
        case 0x145bf4u: goto label_145bf4;
        case 0x145bf8u: goto label_145bf8;
        case 0x145bfcu: goto label_145bfc;
        case 0x145c00u: goto label_145c00;
        case 0x145c04u: goto label_145c04;
        case 0x145c08u: goto label_145c08;
        case 0x145c0cu: goto label_145c0c;
        case 0x145c10u: goto label_145c10;
        case 0x145c14u: goto label_145c14;
        case 0x145c18u: goto label_145c18;
        case 0x145c1cu: goto label_145c1c;
        case 0x145c20u: goto label_145c20;
        case 0x145c24u: goto label_145c24;
        case 0x145c28u: goto label_145c28;
        case 0x145c2cu: goto label_145c2c;
        case 0x145c30u: goto label_145c30;
        case 0x145c34u: goto label_145c34;
        case 0x145c38u: goto label_145c38;
        case 0x145c3cu: goto label_145c3c;
        case 0x145c40u: goto label_145c40;
        case 0x145c44u: goto label_145c44;
        case 0x145c48u: goto label_145c48;
        case 0x145c4cu: goto label_145c4c;
        case 0x145c50u: goto label_145c50;
        case 0x145c54u: goto label_145c54;
        case 0x145c58u: goto label_145c58;
        case 0x145c5cu: goto label_145c5c;
        case 0x145c60u: goto label_145c60;
        case 0x145c64u: goto label_145c64;
        case 0x145c68u: goto label_145c68;
        case 0x145c6cu: goto label_145c6c;
        case 0x145c70u: goto label_145c70;
        case 0x145c74u: goto label_145c74;
        case 0x145c78u: goto label_145c78;
        case 0x145c7cu: goto label_145c7c;
        case 0x145c80u: goto label_145c80;
        case 0x145c84u: goto label_145c84;
        case 0x145c88u: goto label_145c88;
        case 0x145c8cu: goto label_145c8c;
        case 0x145c90u: goto label_145c90;
        case 0x145c94u: goto label_145c94;
        case 0x145c98u: goto label_145c98;
        case 0x145c9cu: goto label_145c9c;
        case 0x145ca0u: goto label_145ca0;
        case 0x145ca4u: goto label_145ca4;
        case 0x145ca8u: goto label_145ca8;
        case 0x145cacu: goto label_145cac;
        case 0x145cb0u: goto label_145cb0;
        case 0x145cb4u: goto label_145cb4;
        case 0x145cb8u: goto label_145cb8;
        case 0x145cbcu: goto label_145cbc;
        case 0x145cc0u: goto label_145cc0;
        case 0x145cc4u: goto label_145cc4;
        case 0x145cc8u: goto label_145cc8;
        case 0x145cccu: goto label_145ccc;
        case 0x145cd0u: goto label_145cd0;
        case 0x145cd4u: goto label_145cd4;
        case 0x145cd8u: goto label_145cd8;
        case 0x145cdcu: goto label_145cdc;
        case 0x145ce0u: goto label_145ce0;
        case 0x145ce4u: goto label_145ce4;
        case 0x145ce8u: goto label_145ce8;
        case 0x145cecu: goto label_145cec;
        case 0x145cf0u: goto label_145cf0;
        case 0x145cf4u: goto label_145cf4;
        case 0x145cf8u: goto label_145cf8;
        case 0x145cfcu: goto label_145cfc;
        case 0x145d00u: goto label_145d00;
        case 0x145d04u: goto label_145d04;
        case 0x145d08u: goto label_145d08;
        case 0x145d0cu: goto label_145d0c;
        case 0x145d10u: goto label_145d10;
        case 0x145d14u: goto label_145d14;
        case 0x145d18u: goto label_145d18;
        case 0x145d1cu: goto label_145d1c;
        case 0x145d20u: goto label_145d20;
        case 0x145d24u: goto label_145d24;
        case 0x145d28u: goto label_145d28;
        case 0x145d2cu: goto label_145d2c;
        case 0x145d30u: goto label_145d30;
        case 0x145d34u: goto label_145d34;
        case 0x145d38u: goto label_145d38;
        case 0x145d3cu: goto label_145d3c;
        case 0x145d40u: goto label_145d40;
        case 0x145d44u: goto label_145d44;
        case 0x145d48u: goto label_145d48;
        case 0x145d4cu: goto label_145d4c;
        case 0x145d50u: goto label_145d50;
        case 0x145d54u: goto label_145d54;
        case 0x145d58u: goto label_145d58;
        case 0x145d5cu: goto label_145d5c;
        case 0x145d60u: goto label_145d60;
        case 0x145d64u: goto label_145d64;
        case 0x145d68u: goto label_145d68;
        case 0x145d6cu: goto label_145d6c;
        case 0x145d70u: goto label_145d70;
        case 0x145d74u: goto label_145d74;
        case 0x145d78u: goto label_145d78;
        case 0x145d7cu: goto label_145d7c;
        case 0x145d80u: goto label_145d80;
        case 0x145d84u: goto label_145d84;
        case 0x145d88u: goto label_145d88;
        case 0x145d8cu: goto label_145d8c;
        case 0x145d90u: goto label_145d90;
        case 0x145d94u: goto label_145d94;
        case 0x145d98u: goto label_145d98;
        case 0x145d9cu: goto label_145d9c;
        case 0x145da0u: goto label_145da0;
        case 0x145da4u: goto label_145da4;
        case 0x145da8u: goto label_145da8;
        case 0x145dacu: goto label_145dac;
        case 0x145db0u: goto label_145db0;
        case 0x145db4u: goto label_145db4;
        case 0x145db8u: goto label_145db8;
        case 0x145dbcu: goto label_145dbc;
        case 0x145dc0u: goto label_145dc0;
        case 0x145dc4u: goto label_145dc4;
        default: break;
    }

    ctx->pc = 0x145a10u;

label_145a10:
    // 0x145a10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x145a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_145a14:
    // 0x145a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145a18:
    // 0x145a18: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x145a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_145a1c:
    // 0x145a1c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x145a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_145a20:
    // 0x145a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_145a24:
    // 0x145a24: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x145a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_145a28:
    // 0x145a28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x145a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_145a2c:
    // 0x145a2c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x145a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_145a30:
    // 0x145a30: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x145a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_145a34:
    // 0x145a34: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x145a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_145a38:
    // 0x145a38: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x145a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_145a3c:
    // 0x145a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_145a40:
    // 0x145a40: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x145a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_145a44:
    // 0x145a44: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x145a44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_145a48:
    // 0x145a48: 0x1622001b  bne         $s1, $v0, . + 4 + (0x1B << 2)
label_145a4c:
    if (ctx->pc == 0x145A4Cu) {
        ctx->pc = 0x145A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A48u;
        // 0x145a4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A50u;
        goto label_145a50;
    }
    ctx->pc = 0x145A48u;
    {
        const bool branch_taken_0x145a48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x145A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A48u;
        // 0x145a4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a48) {
            ctx->pc = 0x145AB8u;
            goto label_145ab8;
        }
    }
    ctx->pc = 0x145A50u;
label_145a50:
    // 0x145a50: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_145a54:
    // 0x145a54: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x145a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_145a58:
    // 0x145a58: 0x40f809  jalr        $v0
label_145a5c:
    if (ctx->pc == 0x145A5Cu) {
        ctx->pc = 0x145A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A58u;
        // 0x145a5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A60u;
        goto label_145a60;
    }
    ctx->pc = 0x145A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145A60u);
        ctx->pc = 0x145A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A58u;
        // 0x145a5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A58u, 0x145A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145A60u;
label_145a60:
    // 0x145a60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_145a64:
    if (ctx->pc == 0x145A64u) {
        ctx->pc = 0x145A68u;
        goto label_145a68;
    }
    ctx->pc = 0x145A60u;
    {
        const bool branch_taken_0x145a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a60) {
            ctx->pc = 0x145A74u;
            goto label_145a74;
        }
    }
    ctx->pc = 0x145A68u;
label_145a68:
    // 0x145a68: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x145a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_145a6c:
    // 0x145a6c: 0x54510053  bnel        $v0, $s1, . + 4 + (0x53 << 2)
label_145a70:
    if (ctx->pc == 0x145A70u) {
        ctx->pc = 0x145A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A6Cu;
        // 0x145a70: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A74u;
        goto label_145a74;
    }
    ctx->pc = 0x145A6Cu;
    {
        const bool branch_taken_0x145a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x145a6c) {
            ctx->pc = 0x145A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145A6Cu;
            // 0x145a70: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145BBCu;
            goto label_145bbc;
        }
    }
    ctx->pc = 0x145A74u;
label_145a74:
    // 0x145a74: 0x3c014d8c  lui         $at, 0x4D8C
    ctx->pc = 0x145a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19852 << 16));
label_145a78:
    // 0x145a78: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x145a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
label_145a7c:
    // 0x145a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145a80:
    // 0x145a80: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x145a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_145a84:
    // 0x145a84: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x145a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145a88:
    // 0x145a88: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x145a88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_145a8c:
    // 0x145a8c: 0xc10ac10  jal         func_42B040
label_145a90:
    if (ctx->pc == 0x145A90u) {
        ctx->pc = 0x145A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A8Cu;
        // 0x145a90: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A94u;
        goto label_145a94;
    }
    ctx->pc = 0x145A8Cu;
    SET_GPR_U32(ctx, 31, 0x145A94u);
    ctx->pc = 0x145A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A8Cu;
    // 0x145a90: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B040u, 0x145A8Cu, 0x145A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A94u;
label_145a94:
    // 0x145a94: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x145a94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_145a98:
    // 0x145a98: 0x3c050096  lui         $a1, 0x96
    ctx->pc = 0x145a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)150 << 16));
label_145a9c:
    // 0x145a9c: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x145a9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_145aa0:
    // 0x145aa0: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x145aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_145aa4:
    // 0x145aa4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x145aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_145aa8:
    // 0x145aa8: 0xfe040040  sd          $a0, 0x40($s0)
    ctx->pc = 0x145aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 4));
label_145aac:
    // 0x145aac: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x145aacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
label_145ab0:
    // 0x145ab0: 0x10000042  b           . + 4 + (0x42 << 2)
label_145ab4:
    if (ctx->pc == 0x145AB4u) {
        ctx->pc = 0x145AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AB0u;
        // 0x145ab4: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145AB8u;
        goto label_145ab8;
    }
    ctx->pc = 0x145AB0u;
    {
        const bool branch_taken_0x145ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AB0u;
        // 0x145ab4: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ab0) {
            ctx->pc = 0x145BBCu;
            goto label_145bbc;
        }
    }
    ctx->pc = 0x145AB8u;
label_145ab8:
    // 0x145ab8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x145ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_145abc:
    // 0x145abc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x145abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_145ac0:
    // 0x145ac0: 0x40f809  jalr        $v0
label_145ac4:
    if (ctx->pc == 0x145AC4u) {
        ctx->pc = 0x145AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AC0u;
        // 0x145ac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145AC8u;
        goto label_145ac8;
    }
    ctx->pc = 0x145AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145AC8u);
        ctx->pc = 0x145AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AC0u;
        // 0x145ac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145AC0u, 0x145AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145AC8u;
label_145ac8:
    // 0x145ac8: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_145acc:
    if (ctx->pc == 0x145ACCu) {
        ctx->pc = 0x145ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AC8u;
        // 0x145acc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145AD0u;
        goto label_145ad0;
    }
    ctx->pc = 0x145AC8u;
    {
        const bool branch_taken_0x145ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145ac8) {
            ctx->pc = 0x145ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145AC8u;
            // 0x145acc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145BC0u;
            goto label_145bc0;
        }
    }
    ctx->pc = 0x145AD0u;
label_145ad0:
    // 0x145ad0: 0xc0523f6  jal         func_148FD8
label_145ad4:
    if (ctx->pc == 0x145AD4u) {
        ctx->pc = 0x145AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AD0u;
        // 0x145ad4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145AD8u;
        goto label_145ad8;
    }
    ctx->pc = 0x145AD0u;
    SET_GPR_U32(ctx, 31, 0x145AD8u);
    ctx->pc = 0x145AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AD0u;
    // 0x145ad4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FD8u, 0x145AD0u, 0x145AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145AD8u;
label_145ad8:
    // 0x145ad8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145adc:
    // 0x145adc: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x145adcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_145ae0:
    // 0x145ae0: 0x242202f  dsubu       $a0, $s2, $v0
    ctx->pc = 0x145ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_145ae4:
    // 0x145ae4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_145ae8:
    if (ctx->pc == 0x145AE8u) {
        ctx->pc = 0x145AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AE4u;
        // 0x145ae8: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145AECu;
        goto label_145aec;
    }
    ctx->pc = 0x145AE4u;
    {
        const bool branch_taken_0x145ae4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x145AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AE4u;
        // 0x145ae8: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ae4) {
            ctx->pc = 0x145AFCu;
            goto label_145afc;
        }
    }
    ctx->pc = 0x145AECu;
label_145aec:
    // 0x145aec: 0xc10ac74  jal         func_42B1D0
label_145af0:
    if (ctx->pc == 0x145AF0u) {
        ctx->pc = 0x145AF4u;
        goto label_145af4;
    }
    ctx->pc = 0x145AECu;
    SET_GPR_U32(ctx, 31, 0x145AF4u);
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x145AECu, 0x145AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145AF4u;
label_145af4:
    // 0x145af4: 0x10000006  b           . + 4 + (0x6 << 2)
label_145af8:
    if (ctx->pc == 0x145AF8u) {
        ctx->pc = 0x145AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AF4u;
        // 0x145af8: 0xc60c0050  lwc1        $f12, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145AFCu;
        goto label_145afc;
    }
    ctx->pc = 0x145AF4u;
    {
        const bool branch_taken_0x145af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AF4u;
        // 0x145af8: 0xc60c0050  lwc1        $f12, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145af4) {
            ctx->pc = 0x145B10u;
            goto label_145b10;
        }
    }
    ctx->pc = 0x145AFCu;
label_145afc:
    // 0x145afc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x145afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_145b00:
    // 0x145b00: 0xc10ac74  jal         func_42B1D0
label_145b04:
    if (ctx->pc == 0x145B04u) {
        ctx->pc = 0x145B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B00u;
        // 0x145b04: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B08u;
        goto label_145b08;
    }
    ctx->pc = 0x145B00u;
    SET_GPR_U32(ctx, 31, 0x145B08u);
    ctx->pc = 0x145B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B00u;
    // 0x145b04: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x145B00u, 0x145B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B08u;
label_145b08:
    // 0x145b08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x145b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_145b0c:
    // 0x145b0c: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x145b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_145b10:
    // 0x145b10: 0xc10ac10  jal         func_42B040
label_145b14:
    if (ctx->pc == 0x145B14u) {
        ctx->pc = 0x145B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B10u;
        // 0x145b14: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B18u;
        goto label_145b18;
    }
    ctx->pc = 0x145B10u;
    SET_GPR_U32(ctx, 31, 0x145B18u);
    ctx->pc = 0x145B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B10u;
    // 0x145b14: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B040u, 0x145B10u, 0x145B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B18u;
label_145b18:
    // 0x145b18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145b1c:
    // 0x145b1c: 0xc047e6c  jal         func_11F9B0
label_145b20:
    if (ctx->pc == 0x145B20u) {
        ctx->pc = 0x145B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B1Cu;
        // 0x145b20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B24u;
        goto label_145b24;
    }
    ctx->pc = 0x145B1Cu;
    SET_GPR_U32(ctx, 31, 0x145B24u);
    ctx->pc = 0x145B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B1Cu;
    // 0x145b20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x145B1Cu, 0x145B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B24u;
label_145b24:
    // 0x145b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145b28:
    // 0x145b28: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_145b2c:
    if (ctx->pc == 0x145B2Cu) {
        ctx->pc = 0x145B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B28u;
        // 0x145b2c: 0xde020040  ld          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B30u;
        goto label_145b30;
    }
    ctx->pc = 0x145B28u;
    {
        const bool branch_taken_0x145b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b28) {
            ctx->pc = 0x145B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145B28u;
            // 0x145b2c: 0xde020040  ld          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145B68u;
            goto label_145b68;
        }
    }
    ctx->pc = 0x145B30u;
label_145b30:
    // 0x145b30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_145b34:
    // 0x145b34: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x145b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_145b38:
    // 0x145b38: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x145b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_145b3c:
    // 0x145b3c: 0x40f809  jalr        $v0
label_145b40:
    if (ctx->pc == 0x145B40u) {
        ctx->pc = 0x145B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B3Cu;
        // 0x145b40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B44u;
        goto label_145b44;
    }
    ctx->pc = 0x145B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145B44u);
        ctx->pc = 0x145B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B3Cu;
        // 0x145b40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145B3Cu, 0x145B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145B44u;
label_145b44:
    // 0x145b44: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x145b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_145b48:
    // 0x145b48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_145b4c:
    if (ctx->pc == 0x145B4Cu) {
        ctx->pc = 0x145B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B48u;
        // 0x145b4c: 0x3c0300b4  lui         $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)180 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B50u;
        goto label_145b50;
    }
    ctx->pc = 0x145B48u;
    {
        const bool branch_taken_0x145b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B48u;
        // 0x145b4c: 0x3c0300b4  lui         $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)180 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b48) {
            ctx->pc = 0x145B64u;
            goto label_145b64;
        }
    }
    ctx->pc = 0x145B50u;
label_145b50:
    // 0x145b50: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x145b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_145b54:
    // 0x145b54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_145b58:
    if (ctx->pc == 0x145B58u) {
        ctx->pc = 0x145B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B54u;
        // 0x145b58: 0xde020040  ld          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B5Cu;
        goto label_145b5c;
    }
    ctx->pc = 0x145B54u;
    {
        const bool branch_taken_0x145b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B54u;
        // 0x145b58: 0xde020040  ld          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b54) {
            ctx->pc = 0x145B68u;
            goto label_145b68;
        }
    }
    ctx->pc = 0x145B5Cu;
label_145b5c:
    // 0x145b5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_145b60:
    if (ctx->pc == 0x145B60u) {
        ctx->pc = 0x145B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B5Cu;
        // 0x145b60: 0x43102d  daddu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B64u;
        goto label_145b64;
    }
    ctx->pc = 0x145B5Cu;
    {
        const bool branch_taken_0x145b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B5Cu;
        // 0x145b60: 0x43102d  daddu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b5c) {
            ctx->pc = 0x145B6Cu;
            goto label_145b6c;
        }
    }
    ctx->pc = 0x145B64u;
label_145b64:
    // 0x145b64: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x145b64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_145b68:
    // 0x145b68: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x145b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_145b6c:
    // 0x145b6c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x145b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_145b70:
    // 0x145b70: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x145b70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
label_145b74:
    // 0x145b74: 0x242202f  dsubu       $a0, $s2, $v0
    ctx->pc = 0x145b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_145b78:
    // 0x145b78: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_145b7c:
    if (ctx->pc == 0x145B7Cu) {
        ctx->pc = 0x145B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B78u;
        // 0x145b7c: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B80u;
        goto label_145b80;
    }
    ctx->pc = 0x145B78u;
    {
        const bool branch_taken_0x145b78 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x145B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B78u;
        // 0x145b7c: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b78) {
            ctx->pc = 0x145B90u;
            goto label_145b90;
        }
    }
    ctx->pc = 0x145B80u;
label_145b80:
    // 0x145b80: 0xc10ac74  jal         func_42B1D0
label_145b84:
    if (ctx->pc == 0x145B84u) {
        ctx->pc = 0x145B88u;
        goto label_145b88;
    }
    ctx->pc = 0x145B80u;
    SET_GPR_U32(ctx, 31, 0x145B88u);
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x145B80u, 0x145B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B88u;
label_145b88:
    // 0x145b88: 0x10000005  b           . + 4 + (0x5 << 2)
label_145b8c:
    if (ctx->pc == 0x145B8Cu) {
        ctx->pc = 0x145B90u;
        goto label_145b90;
    }
    ctx->pc = 0x145B88u;
    {
        const bool branch_taken_0x145b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b88) {
            ctx->pc = 0x145BA0u;
            goto label_145ba0;
        }
    }
    ctx->pc = 0x145B90u;
label_145b90:
    // 0x145b90: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x145b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_145b94:
    // 0x145b94: 0xc10ac74  jal         func_42B1D0
label_145b98:
    if (ctx->pc == 0x145B98u) {
        ctx->pc = 0x145B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B94u;
        // 0x145b98: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145B9Cu;
        goto label_145b9c;
    }
    ctx->pc = 0x145B94u;
    SET_GPR_U32(ctx, 31, 0x145B9Cu);
    ctx->pc = 0x145B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B94u;
    // 0x145b98: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x145B94u, 0x145B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B9Cu;
label_145b9c:
    // 0x145b9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x145b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_145ba0:
    // 0x145ba0: 0xc10ac10  jal         func_42B040
label_145ba4:
    if (ctx->pc == 0x145BA4u) {
        ctx->pc = 0x145BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BA0u;
        // 0x145ba4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145BA8u;
        goto label_145ba8;
    }
    ctx->pc = 0x145BA0u;
    SET_GPR_U32(ctx, 31, 0x145BA8u);
    ctx->pc = 0x145BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145BA0u;
    // 0x145ba4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B040u, 0x145BA0u, 0x145BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BA8u;
label_145ba8:
    // 0x145ba8: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x145ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_145bac:
    // 0x145bac: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x145bacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
label_145bb0:
    // 0x145bb0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x145bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_145bb4:
    // 0x145bb4: 0xfe120028  sd          $s2, 0x28($s0)
    ctx->pc = 0x145bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 18));
label_145bb8:
    // 0x145bb8: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x145bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
label_145bbc:
    // 0x145bbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x145bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145bc0:
    // 0x145bc0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x145bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_145bc4:
    // 0x145bc4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x145bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_145bc8:
    // 0x145bc8: 0x40f809  jalr        $v0
label_145bcc:
    if (ctx->pc == 0x145BCCu) {
        ctx->pc = 0x145BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BC8u;
        // 0x145bcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145BD0u;
        goto label_145bd0;
    }
    ctx->pc = 0x145BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145BD0u);
        ctx->pc = 0x145BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BC8u;
        // 0x145bcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BC8u, 0x145BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145BD0u;
label_145bd0:
    // 0x145bd0: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
label_145bd4:
    if (ctx->pc == 0x145BD4u) {
        ctx->pc = 0x145BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BD0u;
        // 0x145bd4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145BD8u;
        goto label_145bd8;
    }
    ctx->pc = 0x145BD0u;
    {
        const bool branch_taken_0x145bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145bd0) {
            ctx->pc = 0x145BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145BD0u;
            // 0x145bd4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145D50u;
            goto label_145d50;
        }
    }
    ctx->pc = 0x145BD8u;
label_145bd8:
    // 0x145bd8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x145bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_145bdc:
    // 0x145bdc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_145be0:
    if (ctx->pc == 0x145BE0u) {
        ctx->pc = 0x145BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BDCu;
        // 0x145be0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145BE4u;
        goto label_145be4;
    }
    ctx->pc = 0x145BDCu;
    {
        const bool branch_taken_0x145bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BDCu;
        // 0x145be0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145bdc) {
            ctx->pc = 0x145D4Cu;
            goto label_145d4c;
        }
    }
    ctx->pc = 0x145BE4u;
label_145be4:
    // 0x145be4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x145be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_145be8:
    // 0x145be8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_145bec:
    // 0x145bec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x145becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_145bf0:
    // 0x145bf0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x145bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_145bf4:
    // 0x145bf4: 0x40f809  jalr        $v0
label_145bf8:
    if (ctx->pc == 0x145BF8u) {
        ctx->pc = 0x145BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BF4u;
        // 0x145bf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145BFCu;
        goto label_145bfc;
    }
    ctx->pc = 0x145BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145BFCu);
        ctx->pc = 0x145BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BF4u;
        // 0x145bf8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BF4u, 0x145BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145BFCu;
label_145bfc:
    // 0x145bfc: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x145bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_145c00:
    // 0x145c00: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x145c00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_145c04:
    // 0x145c04: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_145c08:
    if (ctx->pc == 0x145C08u) {
        ctx->pc = 0x145C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C04u;
        // 0x145c08: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C0Cu;
        goto label_145c0c;
    }
    ctx->pc = 0x145C04u;
    {
        const bool branch_taken_0x145c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c04) {
            ctx->pc = 0x145C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145C04u;
            // 0x145c08: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145C40u;
            goto label_145c40;
        }
    }
    ctx->pc = 0x145C0Cu;
label_145c0c:
    // 0x145c0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x145c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145c10:
    // 0x145c10: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x145c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_145c14:
    // 0x145c14: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x145c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_145c18:
    // 0x145c18: 0x60f809  jalr        $v1
label_145c1c:
    if (ctx->pc == 0x145C1Cu) {
        ctx->pc = 0x145C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C18u;
        // 0x145c1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C20u;
        goto label_145c20;
    }
    ctx->pc = 0x145C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145C20u);
        ctx->pc = 0x145C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C18u;
        // 0x145c1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C18u, 0x145C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145C20u;
label_145c20:
    // 0x145c20: 0x1000004b  b           . + 4 + (0x4B << 2)
label_145c24:
    if (ctx->pc == 0x145C24u) {
        ctx->pc = 0x145C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C20u;
        // 0x145c24: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C28u;
        goto label_145c28;
    }
    ctx->pc = 0x145C20u;
    {
        const bool branch_taken_0x145c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C20u;
        // 0x145c24: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c20) {
            ctx->pc = 0x145D50u;
            goto label_145d50;
        }
    }
    ctx->pc = 0x145C28u;
label_145c28:
    // 0x145c28: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x145c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_145c2c:
    // 0x145c2c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x145c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_145c30:
    // 0x145c30: 0x60f809  jalr        $v1
label_145c34:
    if (ctx->pc == 0x145C34u) {
        ctx->pc = 0x145C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C30u;
        // 0x145c34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C38u;
        goto label_145c38;
    }
    ctx->pc = 0x145C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145C38u);
        ctx->pc = 0x145C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C30u;
        // 0x145c34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C30u, 0x145C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145C38u;
label_145c38:
    // 0x145c38: 0x1000003a  b           . + 4 + (0x3A << 2)
label_145c3c:
    if (ctx->pc == 0x145C3Cu) {
        ctx->pc = 0x145C40u;
        goto label_145c40;
    }
    ctx->pc = 0x145C38u;
    {
        const bool branch_taken_0x145c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c38) {
            ctx->pc = 0x145D24u;
            goto label_145d24;
        }
    }
    ctx->pc = 0x145C40u;
label_145c40:
    // 0x145c40: 0xc072b96  jal         func_1CAE58
label_145c44:
    if (ctx->pc == 0x145C44u) {
        ctx->pc = 0x145C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C40u;
        // 0x145c44: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C48u;
        goto label_145c48;
    }
    ctx->pc = 0x145C40u;
    SET_GPR_U32(ctx, 31, 0x145C48u);
    ctx->pc = 0x145C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C40u;
    // 0x145c44: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAE58u, 0x145C40u, 0x145C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C48u;
label_145c48:
    // 0x145c48: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_145c4c:
    if (ctx->pc == 0x145C4Cu) {
        ctx->pc = 0x145C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C48u;
        // 0x145c4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C50u;
        goto label_145c50;
    }
    ctx->pc = 0x145C48u;
    {
        const bool branch_taken_0x145c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145c48) {
            ctx->pc = 0x145C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145C48u;
            // 0x145c4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145D50u;
            goto label_145d50;
        }
    }
    ctx->pc = 0x145C50u;
label_145c50:
    // 0x145c50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x145c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_145c54:
    // 0x145c54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x145c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145c58:
    // 0x145c58: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_145c5c:
    // 0x145c5c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x145c5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145c60:
    // 0x145c60: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x145c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_145c64:
    // 0x145c64: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
label_145c68:
    if (ctx->pc == 0x145C68u) {
        ctx->pc = 0x145C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C64u;
        // 0x145c68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C6Cu;
        goto label_145c6c;
    }
    ctx->pc = 0x145C64u;
    {
        const bool branch_taken_0x145c64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x145C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C64u;
        // 0x145c68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c64) {
            ctx->pc = 0x145D24u;
            goto label_145d24;
        }
    }
    ctx->pc = 0x145C6Cu;
label_145c6c:
    // 0x145c6c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x145c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_145c70:
    // 0x145c70: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x145c70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_145c74:
    // 0x145c74: 0x2456d810  addiu       $s6, $v0, -0x27F0
    ctx->pc = 0x145c74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_145c78:
    // 0x145c78: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x145c78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_145c7c:
    // 0x145c7c: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x145c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_145c80:
    // 0x145c80: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x145c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_145c84:
    // 0x145c84: 0xc0e409a  jal         func_390268
label_145c88:
    if (ctx->pc == 0x145C88u) {
        ctx->pc = 0x145C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C84u;
        // 0x145c88: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C8Cu;
        goto label_145c8c;
    }
    ctx->pc = 0x145C84u;
    SET_GPR_U32(ctx, 31, 0x145C8Cu);
    ctx->pc = 0x145C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C84u;
    // 0x145c88: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x145C84u, 0x145C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C8Cu;
label_145c8c:
    // 0x145c8c: 0xc0874fa  jal         func_21D3E8
label_145c90:
    if (ctx->pc == 0x145C90u) {
        ctx->pc = 0x145C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C8Cu;
        // 0x145c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C94u;
        goto label_145c94;
    }
    ctx->pc = 0x145C8Cu;
    SET_GPR_U32(ctx, 31, 0x145C94u);
    ctx->pc = 0x145C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C8Cu;
    // 0x145c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x145C8Cu, 0x145C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C94u;
label_145c94:
    // 0x145c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145c98:
    // 0x145c98: 0x82220019  lb          $v0, 0x19($s1)
    ctx->pc = 0x145c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
label_145c9c:
    // 0x145c9c: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_145ca0:
    if (ctx->pc == 0x145CA0u) {
        ctx->pc = 0x145CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C9Cu;
        // 0x145ca0: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CA4u;
        goto label_145ca4;
    }
    ctx->pc = 0x145C9Cu;
    {
        const bool branch_taken_0x145c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x145CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C9Cu;
        // 0x145ca0: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c9c) {
            ctx->pc = 0x145CACu;
            goto label_145cac;
        }
    }
    ctx->pc = 0x145CA4u;
label_145ca4:
    // 0x145ca4: 0x10000002  b           . + 4 + (0x2 << 2)
label_145ca8:
    if (ctx->pc == 0x145CA8u) {
        ctx->pc = 0x145CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CA4u;
        // 0x145ca8: 0x761021  addu        $v0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CACu;
        goto label_145cac;
    }
    ctx->pc = 0x145CA4u;
    {
        const bool branch_taken_0x145ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CA4u;
        // 0x145ca8: 0x761021  addu        $v0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ca4) {
            ctx->pc = 0x145CB0u;
            goto label_145cb0;
        }
    }
    ctx->pc = 0x145CACu;
label_145cac:
    // 0x145cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x145cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145cb0:
    // 0x145cb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_145cb4:
    if (ctx->pc == 0x145CB4u) {
        ctx->pc = 0x145CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CB0u;
        // 0x145cb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CB8u;
        goto label_145cb8;
    }
    ctx->pc = 0x145CB0u;
    {
        const bool branch_taken_0x145cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CB0u;
        // 0x145cb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cb0) {
            ctx->pc = 0x145D0Cu;
            goto label_145d0c;
        }
    }
    ctx->pc = 0x145CB8u;
label_145cb8:
    // 0x145cb8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x145cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145cbc:
    // 0x145cbc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x145cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_145cc0:
    // 0x145cc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_145cc4:
    // 0x145cc4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x145cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_145cc8:
    // 0x145cc8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x145cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_145ccc:
    // 0x145ccc: 0x40f809  jalr        $v0
label_145cd0:
    if (ctx->pc == 0x145CD0u) {
        ctx->pc = 0x145CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CCCu;
        // 0x145cd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CD4u;
        goto label_145cd4;
    }
    ctx->pc = 0x145CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145CD4u);
        ctx->pc = 0x145CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CCCu;
        // 0x145cd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CCCu, 0x145CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145CD4u;
label_145cd4:
    // 0x145cd4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x145cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_145cd8:
    // 0x145cd8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x145cd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_145cdc:
    // 0x145cdc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_145ce0:
    if (ctx->pc == 0x145CE0u) {
        ctx->pc = 0x145CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CDCu;
        // 0x145ce0: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CE4u;
        goto label_145ce4;
    }
    ctx->pc = 0x145CDCu;
    {
        const bool branch_taken_0x145cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CDCu;
        // 0x145ce0: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cdc) {
            ctx->pc = 0x145D10u;
            goto label_145d10;
        }
    }
    ctx->pc = 0x145CE4u;
label_145ce4:
    // 0x145ce4: 0x82220019  lb          $v0, 0x19($s1)
    ctx->pc = 0x145ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
label_145ce8:
    // 0x145ce8: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_145cec:
    if (ctx->pc == 0x145CECu) {
        ctx->pc = 0x145CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CE8u;
        // 0x145cec: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CF0u;
        goto label_145cf0;
    }
    ctx->pc = 0x145CE8u;
    {
        const bool branch_taken_0x145ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x145CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CE8u;
        // 0x145cec: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ce8) {
            ctx->pc = 0x145CF8u;
            goto label_145cf8;
        }
    }
    ctx->pc = 0x145CF0u;
label_145cf0:
    // 0x145cf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_145cf4:
    if (ctx->pc == 0x145CF4u) {
        ctx->pc = 0x145CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CF0u;
        // 0x145cf4: 0x762021  addu        $a0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CF8u;
        goto label_145cf8;
    }
    ctx->pc = 0x145CF0u;
    {
        const bool branch_taken_0x145cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CF0u;
        // 0x145cf4: 0x762021  addu        $a0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cf0) {
            ctx->pc = 0x145CFCu;
            goto label_145cfc;
        }
    }
    ctx->pc = 0x145CF8u;
label_145cf8:
    // 0x145cf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x145cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145cfc:
    // 0x145cfc: 0xc0512ea  jal         func_144BA8
label_145d00:
    if (ctx->pc == 0x145D00u) {
        ctx->pc = 0x145D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CFCu;
        // 0x145d00: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D04u;
        goto label_145d04;
    }
    ctx->pc = 0x145CFCu;
    SET_GPR_U32(ctx, 31, 0x145D04u);
    ctx->pc = 0x145D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145CFCu;
    // 0x145d00: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BA8u, 0x145CFCu, 0x145D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D04u;
label_145d04:
    // 0x145d04: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
label_145d08:
    if (ctx->pc == 0x145D08u) {
        ctx->pc = 0x145D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D04u;
        // 0x145d08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D0Cu;
        goto label_145d0c;
    }
    ctx->pc = 0x145D04u;
    {
        const bool branch_taken_0x145d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145d04) {
            ctx->pc = 0x145D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145D04u;
            // 0x145d08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145c28;
        }
    }
    ctx->pc = 0x145D0Cu;
label_145d0c:
    // 0x145d0c: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x145d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_145d10:
    // 0x145d10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x145d10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_145d14:
    // 0x145d14: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x145d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_145d18:
    // 0x145d18: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x145d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_145d1c:
    // 0x145d1c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_145d20:
    if (ctx->pc == 0x145D20u) {
        ctx->pc = 0x145D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D1Cu;
        // 0x145d20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D24u;
        goto label_145d24;
    }
    ctx->pc = 0x145D1Cu;
    {
        const bool branch_taken_0x145d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D1Cu;
        // 0x145d20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d1c) {
            ctx->pc = 0x145C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145c80;
        }
    }
    ctx->pc = 0x145D24u;
label_145d24:
    // 0x145d24: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_145d28:
    if (ctx->pc == 0x145D28u) {
        ctx->pc = 0x145D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D24u;
        // 0x145d28: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D2Cu;
        goto label_145d2c;
    }
    ctx->pc = 0x145D24u;
    {
        const bool branch_taken_0x145d24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x145d24) {
            ctx->pc = 0x145D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145D24u;
            // 0x145d28: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145D44u;
            goto label_145d44;
        }
    }
    ctx->pc = 0x145D2Cu;
label_145d2c:
    // 0x145d2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x145d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145d30:
    // 0x145d30: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x145d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_145d34:
    // 0x145d34: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_145d38:
    // 0x145d38: 0x60f809  jalr        $v1
label_145d3c:
    if (ctx->pc == 0x145D3Cu) {
        ctx->pc = 0x145D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D38u;
        // 0x145d3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D40u;
        goto label_145d40;
    }
    ctx->pc = 0x145D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145D40u);
        ctx->pc = 0x145D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D38u;
        // 0x145d3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145D38u, 0x145D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145D40u;
label_145d40:
    // 0x145d40: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x145d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_145d44:
    // 0x145d44: 0xc073720  jal         func_1CDC80
label_145d48:
    if (ctx->pc == 0x145D48u) {
        ctx->pc = 0x145D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D44u;
        // 0x145d48: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D4Cu;
        goto label_145d4c;
    }
    ctx->pc = 0x145D44u;
    SET_GPR_U32(ctx, 31, 0x145D4Cu);
    ctx->pc = 0x145D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D44u;
    // 0x145d48: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC80u, 0x145D44u, 0x145D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D4Cu;
label_145d4c:
    // 0x145d4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x145d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145d50:
    // 0x145d50: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x145d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_145d54:
    // 0x145d54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x145d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_145d58:
    // 0x145d58: 0x40f809  jalr        $v0
label_145d5c:
    if (ctx->pc == 0x145D5Cu) {
        ctx->pc = 0x145D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D58u;
        // 0x145d5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D60u;
        goto label_145d60;
    }
    ctx->pc = 0x145D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145D60u);
        ctx->pc = 0x145D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D58u;
        // 0x145d5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145D58u, 0x145D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145D60u;
label_145d60:
    // 0x145d60: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x145d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_145d64:
    // 0x145d64: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x145d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_145d68:
    // 0x145d68: 0xc10acae  jal         func_42B2B8
label_145d6c:
    if (ctx->pc == 0x145D6Cu) {
        ctx->pc = 0x145D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D68u;
        // 0x145d6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D70u;
        goto label_145d70;
    }
    ctx->pc = 0x145D68u;
    SET_GPR_U32(ctx, 31, 0x145D70u);
    ctx->pc = 0x145D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D68u;
    // 0x145d6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x145D68u, 0x145D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D70u;
label_145d70:
    // 0x145d70: 0xde040030  ld          $a0, 0x30($s0)
    ctx->pc = 0x145d70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_145d74:
    // 0x145d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x145d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_145d78:
    // 0x145d78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x145d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_145d7c:
    // 0x145d7c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x145d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_145d80:
    // 0x145d80: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x145d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_145d84:
    // 0x145d84: 0xc10acae  jal         func_42B2B8
label_145d88:
    if (ctx->pc == 0x145D88u) {
        ctx->pc = 0x145D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D84u;
        // 0x145d88: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D8Cu;
        goto label_145d8c;
    }
    ctx->pc = 0x145D84u;
    SET_GPR_U32(ctx, 31, 0x145D8Cu);
    ctx->pc = 0x145D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D84u;
    // 0x145d88: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x145D84u, 0x145D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D8Cu;
label_145d8c:
    // 0x145d8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x145d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_145d90:
    // 0x145d90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x145d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_145d94:
    // 0x145d94: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x145d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_145d98:
    // 0x145d98: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x145d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_145d9c:
    // 0x145d9c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x145d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_145da0:
    // 0x145da0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x145da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_145da4:
    // 0x145da4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x145da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_145da8:
    // 0x145da8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x145da8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_145dac:
    // 0x145dac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x145dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_145db0:
    // 0x145db0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x145db0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_145db4:
    // 0x145db4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x145db4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_145db8:
    // 0x145db8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x145db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145dbc:
    // 0x145dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145dc0:
    // 0x145dc0: 0x3e00008  jr          $ra
label_145dc4:
    if (ctx->pc == 0x145DC4u) {
        ctx->pc = 0x145DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DC0u;
        // 0x145dc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145DC8u;
        goto label_fallthrough_0x145dc0;
    }
    ctx->pc = 0x145DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DC0u;
        // 0x145dc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x145dc0:
    ctx->pc = 0x145DC8u;
}
