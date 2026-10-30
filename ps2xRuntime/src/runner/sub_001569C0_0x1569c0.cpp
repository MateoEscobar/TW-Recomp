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

// Function: sub_001569C0
// Address: 0x1569c0 - 0x156d20
void sub_001569C0_0x1569c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001569C0_0x1569c0");
#endif

    switch (ctx->pc) {
        case 0x1569c0u: goto label_1569c0;
        case 0x1569c4u: goto label_1569c4;
        case 0x1569c8u: goto label_1569c8;
        case 0x1569ccu: goto label_1569cc;
        case 0x1569d0u: goto label_1569d0;
        case 0x1569d4u: goto label_1569d4;
        case 0x1569d8u: goto label_1569d8;
        case 0x1569dcu: goto label_1569dc;
        case 0x1569e0u: goto label_1569e0;
        case 0x1569e4u: goto label_1569e4;
        case 0x1569e8u: goto label_1569e8;
        case 0x1569ecu: goto label_1569ec;
        case 0x1569f0u: goto label_1569f0;
        case 0x1569f4u: goto label_1569f4;
        case 0x1569f8u: goto label_1569f8;
        case 0x1569fcu: goto label_1569fc;
        case 0x156a00u: goto label_156a00;
        case 0x156a04u: goto label_156a04;
        case 0x156a08u: goto label_156a08;
        case 0x156a0cu: goto label_156a0c;
        case 0x156a10u: goto label_156a10;
        case 0x156a14u: goto label_156a14;
        case 0x156a18u: goto label_156a18;
        case 0x156a1cu: goto label_156a1c;
        case 0x156a20u: goto label_156a20;
        case 0x156a24u: goto label_156a24;
        case 0x156a28u: goto label_156a28;
        case 0x156a2cu: goto label_156a2c;
        case 0x156a30u: goto label_156a30;
        case 0x156a34u: goto label_156a34;
        case 0x156a38u: goto label_156a38;
        case 0x156a3cu: goto label_156a3c;
        case 0x156a40u: goto label_156a40;
        case 0x156a44u: goto label_156a44;
        case 0x156a48u: goto label_156a48;
        case 0x156a4cu: goto label_156a4c;
        case 0x156a50u: goto label_156a50;
        case 0x156a54u: goto label_156a54;
        case 0x156a58u: goto label_156a58;
        case 0x156a5cu: goto label_156a5c;
        case 0x156a60u: goto label_156a60;
        case 0x156a64u: goto label_156a64;
        case 0x156a68u: goto label_156a68;
        case 0x156a6cu: goto label_156a6c;
        case 0x156a70u: goto label_156a70;
        case 0x156a74u: goto label_156a74;
        case 0x156a78u: goto label_156a78;
        case 0x156a7cu: goto label_156a7c;
        case 0x156a80u: goto label_156a80;
        case 0x156a84u: goto label_156a84;
        case 0x156a88u: goto label_156a88;
        case 0x156a8cu: goto label_156a8c;
        case 0x156a90u: goto label_156a90;
        case 0x156a94u: goto label_156a94;
        case 0x156a98u: goto label_156a98;
        case 0x156a9cu: goto label_156a9c;
        case 0x156aa0u: goto label_156aa0;
        case 0x156aa4u: goto label_156aa4;
        case 0x156aa8u: goto label_156aa8;
        case 0x156aacu: goto label_156aac;
        case 0x156ab0u: goto label_156ab0;
        case 0x156ab4u: goto label_156ab4;
        case 0x156ab8u: goto label_156ab8;
        case 0x156abcu: goto label_156abc;
        case 0x156ac0u: goto label_156ac0;
        case 0x156ac4u: goto label_156ac4;
        case 0x156ac8u: goto label_156ac8;
        case 0x156accu: goto label_156acc;
        case 0x156ad0u: goto label_156ad0;
        case 0x156ad4u: goto label_156ad4;
        case 0x156ad8u: goto label_156ad8;
        case 0x156adcu: goto label_156adc;
        case 0x156ae0u: goto label_156ae0;
        case 0x156ae4u: goto label_156ae4;
        case 0x156ae8u: goto label_156ae8;
        case 0x156aecu: goto label_156aec;
        case 0x156af0u: goto label_156af0;
        case 0x156af4u: goto label_156af4;
        case 0x156af8u: goto label_156af8;
        case 0x156afcu: goto label_156afc;
        case 0x156b00u: goto label_156b00;
        case 0x156b04u: goto label_156b04;
        case 0x156b08u: goto label_156b08;
        case 0x156b0cu: goto label_156b0c;
        case 0x156b10u: goto label_156b10;
        case 0x156b14u: goto label_156b14;
        case 0x156b18u: goto label_156b18;
        case 0x156b1cu: goto label_156b1c;
        case 0x156b20u: goto label_156b20;
        case 0x156b24u: goto label_156b24;
        case 0x156b28u: goto label_156b28;
        case 0x156b2cu: goto label_156b2c;
        case 0x156b30u: goto label_156b30;
        case 0x156b34u: goto label_156b34;
        case 0x156b38u: goto label_156b38;
        case 0x156b3cu: goto label_156b3c;
        case 0x156b40u: goto label_156b40;
        case 0x156b44u: goto label_156b44;
        case 0x156b48u: goto label_156b48;
        case 0x156b4cu: goto label_156b4c;
        case 0x156b50u: goto label_156b50;
        case 0x156b54u: goto label_156b54;
        case 0x156b58u: goto label_156b58;
        case 0x156b5cu: goto label_156b5c;
        case 0x156b60u: goto label_156b60;
        case 0x156b64u: goto label_156b64;
        case 0x156b68u: goto label_156b68;
        case 0x156b6cu: goto label_156b6c;
        case 0x156b70u: goto label_156b70;
        case 0x156b74u: goto label_156b74;
        case 0x156b78u: goto label_156b78;
        case 0x156b7cu: goto label_156b7c;
        case 0x156b80u: goto label_156b80;
        case 0x156b84u: goto label_156b84;
        case 0x156b88u: goto label_156b88;
        case 0x156b8cu: goto label_156b8c;
        case 0x156b90u: goto label_156b90;
        case 0x156b94u: goto label_156b94;
        case 0x156b98u: goto label_156b98;
        case 0x156b9cu: goto label_156b9c;
        case 0x156ba0u: goto label_156ba0;
        case 0x156ba4u: goto label_156ba4;
        case 0x156ba8u: goto label_156ba8;
        case 0x156bacu: goto label_156bac;
        case 0x156bb0u: goto label_156bb0;
        case 0x156bb4u: goto label_156bb4;
        case 0x156bb8u: goto label_156bb8;
        case 0x156bbcu: goto label_156bbc;
        case 0x156bc0u: goto label_156bc0;
        case 0x156bc4u: goto label_156bc4;
        case 0x156bc8u: goto label_156bc8;
        case 0x156bccu: goto label_156bcc;
        case 0x156bd0u: goto label_156bd0;
        case 0x156bd4u: goto label_156bd4;
        case 0x156bd8u: goto label_156bd8;
        case 0x156bdcu: goto label_156bdc;
        case 0x156be0u: goto label_156be0;
        case 0x156be4u: goto label_156be4;
        case 0x156be8u: goto label_156be8;
        case 0x156becu: goto label_156bec;
        case 0x156bf0u: goto label_156bf0;
        case 0x156bf4u: goto label_156bf4;
        case 0x156bf8u: goto label_156bf8;
        case 0x156bfcu: goto label_156bfc;
        case 0x156c00u: goto label_156c00;
        case 0x156c04u: goto label_156c04;
        case 0x156c08u: goto label_156c08;
        case 0x156c0cu: goto label_156c0c;
        case 0x156c10u: goto label_156c10;
        case 0x156c14u: goto label_156c14;
        case 0x156c18u: goto label_156c18;
        case 0x156c1cu: goto label_156c1c;
        case 0x156c20u: goto label_156c20;
        case 0x156c24u: goto label_156c24;
        case 0x156c28u: goto label_156c28;
        case 0x156c2cu: goto label_156c2c;
        case 0x156c30u: goto label_156c30;
        case 0x156c34u: goto label_156c34;
        case 0x156c38u: goto label_156c38;
        case 0x156c3cu: goto label_156c3c;
        case 0x156c40u: goto label_156c40;
        case 0x156c44u: goto label_156c44;
        case 0x156c48u: goto label_156c48;
        case 0x156c4cu: goto label_156c4c;
        case 0x156c50u: goto label_156c50;
        case 0x156c54u: goto label_156c54;
        case 0x156c58u: goto label_156c58;
        case 0x156c5cu: goto label_156c5c;
        case 0x156c60u: goto label_156c60;
        case 0x156c64u: goto label_156c64;
        case 0x156c68u: goto label_156c68;
        case 0x156c6cu: goto label_156c6c;
        case 0x156c70u: goto label_156c70;
        case 0x156c74u: goto label_156c74;
        case 0x156c78u: goto label_156c78;
        case 0x156c7cu: goto label_156c7c;
        case 0x156c80u: goto label_156c80;
        case 0x156c84u: goto label_156c84;
        case 0x156c88u: goto label_156c88;
        case 0x156c8cu: goto label_156c8c;
        case 0x156c90u: goto label_156c90;
        case 0x156c94u: goto label_156c94;
        case 0x156c98u: goto label_156c98;
        case 0x156c9cu: goto label_156c9c;
        case 0x156ca0u: goto label_156ca0;
        case 0x156ca4u: goto label_156ca4;
        case 0x156ca8u: goto label_156ca8;
        case 0x156cacu: goto label_156cac;
        case 0x156cb0u: goto label_156cb0;
        case 0x156cb4u: goto label_156cb4;
        case 0x156cb8u: goto label_156cb8;
        case 0x156cbcu: goto label_156cbc;
        case 0x156cc0u: goto label_156cc0;
        case 0x156cc4u: goto label_156cc4;
        case 0x156cc8u: goto label_156cc8;
        case 0x156cccu: goto label_156ccc;
        case 0x156cd0u: goto label_156cd0;
        case 0x156cd4u: goto label_156cd4;
        case 0x156cd8u: goto label_156cd8;
        case 0x156cdcu: goto label_156cdc;
        case 0x156ce0u: goto label_156ce0;
        case 0x156ce4u: goto label_156ce4;
        case 0x156ce8u: goto label_156ce8;
        case 0x156cecu: goto label_156cec;
        case 0x156cf0u: goto label_156cf0;
        case 0x156cf4u: goto label_156cf4;
        case 0x156cf8u: goto label_156cf8;
        case 0x156cfcu: goto label_156cfc;
        case 0x156d00u: goto label_156d00;
        case 0x156d04u: goto label_156d04;
        case 0x156d08u: goto label_156d08;
        case 0x156d0cu: goto label_156d0c;
        case 0x156d10u: goto label_156d10;
        case 0x156d14u: goto label_156d14;
        case 0x156d18u: goto label_156d18;
        case 0x156d1cu: goto label_156d1c;
        default: break;
    }

    ctx->pc = 0x1569c0u;

label_1569c0:
    // 0x1569c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1569c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1569c4:
    // 0x1569c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1569c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1569c8:
    // 0x1569c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1569c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1569cc:
    // 0x1569cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1569ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1569d0:
    // 0x1569d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1569d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1569d4:
    // 0x1569d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1569d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1569d8:
    // 0x1569d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1569d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1569dc:
    // 0x1569dc: 0x24425450  addiu       $v0, $v0, 0x5450
    ctx->pc = 0x1569dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
label_1569e0:
    // 0x1569e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1569e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1569e4:
    // 0x1569e4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1569e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1569e8:
    // 0x1569e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1569e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1569ec:
    // 0x1569ec: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1569ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1569f0:
    // 0x1569f0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1569f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1569f4:
    // 0x1569f4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1569f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1569f8:
    // 0x1569f8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1569f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1569fc:
    // 0x1569fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1569fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_156a00:
    // 0x156a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_156a04:
    // 0x156a04: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x156a04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_156a08:
    // 0x156a08: 0x8c68b8b8  lw          $t0, -0x4748($v1)
    ctx->pc = 0x156a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_156a0c:
    // 0x156a0c: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x156a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_156a10:
    // 0x156a10: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x156a10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
label_156a14:
    // 0x156a14: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x156a14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
label_156a18:
    // 0x156a18: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x156a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_156a1c:
    // 0x156a1c: 0x8cc3c654  lw          $v1, -0x39AC($a2)
    ctx->pc = 0x156a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952532)));
label_156a20:
    // 0x156a20: 0x84a40048  lh          $a0, 0x48($a1)
    ctx->pc = 0x156a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
label_156a24:
    // 0x156a24: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x156a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_156a28:
    // 0x156a28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_156a2c:
    // 0x156a2c: 0xdce5c688  ld          $a1, -0x3978($a3)
    ctx->pc = 0x156a2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294952584)));
label_156a30:
    // 0x156a30: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x156a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_156a34:
    // 0x156a34: 0x40f809  jalr        $v0
label_156a38:
    if (ctx->pc == 0x156A38u) {
        ctx->pc = 0x156A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A34u;
        // 0x156a38: 0xacc3c654  sw          $v1, -0x39AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294952532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A3Cu;
        goto label_156a3c;
    }
    ctx->pc = 0x156A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156A3Cu);
        ctx->pc = 0x156A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A34u;
        // 0x156a38: 0xacc3c654  sw          $v1, -0x39AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294952532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A34u, 0x156A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156A3Cu;
label_156a3c:
    // 0x156a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x156a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156a40:
    // 0x156a40: 0x8e425554  lw          $v0, 0x5554($s2)
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21844)));
label_156a44:
    // 0x156a44: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_156a48:
    if (ctx->pc == 0x156A48u) {
        ctx->pc = 0x156A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A44u;
        // 0x156a48: 0x8e65b8b8  lw          $a1, -0x4748($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A4Cu;
        goto label_156a4c;
    }
    ctx->pc = 0x156A44u;
    {
        const bool branch_taken_0x156a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A44u;
        // 0x156a48: 0x8e65b8b8  lw          $a1, -0x4748($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a44) {
            ctx->pc = 0x156A70u;
            goto label_156a70;
        }
    }
    ctx->pc = 0x156A4Cu;
label_156a4c:
    // 0x156a4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156a50:
    // 0x156a50: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x156a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_156a54:
    // 0x156a54: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_156a58:
    // 0x156a58: 0x40f809  jalr        $v0
label_156a5c:
    if (ctx->pc == 0x156A5Cu) {
        ctx->pc = 0x156A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A58u;
        // 0x156a5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A60u;
        goto label_156a60;
    }
    ctx->pc = 0x156A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156A60u);
        ctx->pc = 0x156A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A58u;
        // 0x156a5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A58u, 0x156A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156A60u;
label_156a60:
    // 0x156a60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156a64:
    // 0x156a64: 0xae225550  sw          $v0, 0x5550($s1)
    ctx->pc = 0x156a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 21840), GPR_U32(ctx, 2));
label_156a68:
    // 0x156a68: 0xae435554  sw          $v1, 0x5554($s2)
    ctx->pc = 0x156a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 21844), GPR_U32(ctx, 3));
label_156a6c:
    // 0x156a6c: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x156a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_156a70:
    // 0x156a70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156a74:
    // 0x156a74: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x156a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_156a78:
    // 0x156a78: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_156a7c:
    // 0x156a7c: 0x40f809  jalr        $v0
label_156a80:
    if (ctx->pc == 0x156A80u) {
        ctx->pc = 0x156A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A7Cu;
        // 0x156a80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A84u;
        goto label_156a84;
    }
    ctx->pc = 0x156A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156A84u);
        ctx->pc = 0x156A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A7Cu;
        // 0x156a80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A7Cu, 0x156A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156A84u;
label_156a84:
    // 0x156a84: 0x8e235550  lw          $v1, 0x5550($s1)
    ctx->pc = 0x156a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21840)));
label_156a88:
    // 0x156a88: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
label_156a8c:
    if (ctx->pc == 0x156A8Cu) {
        ctx->pc = 0x156A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A88u;
        // 0x156a8c: 0x8e65b8b8  lw          $a1, -0x4748($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A90u;
        goto label_156a90;
    }
    ctx->pc = 0x156A88u;
    {
        const bool branch_taken_0x156a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x156A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A88u;
        // 0x156a8c: 0x8e65b8b8  lw          $a1, -0x4748($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a88) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156A90u;
label_156a90:
    // 0x156a90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156a94:
    // 0x156a94: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x156a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_156a98:
    // 0x156a98: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x156a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_156a9c:
    // 0x156a9c: 0x40f809  jalr        $v0
label_156aa0:
    if (ctx->pc == 0x156AA0u) {
        ctx->pc = 0x156AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A9Cu;
        // 0x156aa0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AA4u;
        goto label_156aa4;
    }
    ctx->pc = 0x156A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156AA4u);
        ctx->pc = 0x156AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A9Cu;
        // 0x156aa0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A9Cu, 0x156AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156AA4u;
label_156aa4:
    // 0x156aa4: 0x8e245550  lw          $a0, 0x5550($s1)
    ctx->pc = 0x156aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21840)));
label_156aa8:
    // 0x156aa8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x156aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_156aac:
    // 0x156aac: 0x2466c680  addiu       $a2, $v1, -0x3980
    ctx->pc = 0x156aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952576));
label_156ab0:
    // 0x156ab0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x156ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_156ab4:
    // 0x156ab4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_156ab8:
    if (ctx->pc == 0x156AB8u) {
        ctx->pc = 0x156AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AB4u;
        // 0x156ab8: 0xae225550  sw          $v0, 0x5550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 21840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156ABCu;
        goto label_156abc;
    }
    ctx->pc = 0x156AB4u;
    {
        const bool branch_taken_0x156ab4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x156AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AB4u;
        // 0x156ab8: 0xae225550  sw          $v0, 0x5550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 21840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ab4) {
            ctx->pc = 0x156AD0u;
            goto label_156ad0;
        }
    }
    ctx->pc = 0x156ABCu;
label_156abc:
    // 0x156abc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_156ac0:
    // 0x156ac0: 0x0  nop
    ctx->pc = 0x156ac0u;
    // NOP
label_156ac4:
    // 0x156ac4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x156ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_156ac8:
    // 0x156ac8: 0x10000008  b           . + 4 + (0x8 << 2)
label_156acc:
    if (ctx->pc == 0x156ACCu) {
        ctx->pc = 0x156AD0u;
        goto label_156ad0;
    }
    ctx->pc = 0x156AC8u;
    {
        const bool branch_taken_0x156ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ac8) {
            ctx->pc = 0x156AECu;
            goto label_156aec;
        }
    }
    ctx->pc = 0x156AD0u;
label_156ad0:
    // 0x156ad0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x156ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_156ad4:
    // 0x156ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x156ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_156ad8:
    // 0x156ad8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x156ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_156adc:
    // 0x156adc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_156ae0:
    // 0x156ae0: 0x0  nop
    ctx->pc = 0x156ae0u;
    // NOP
label_156ae4:
    // 0x156ae4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x156ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_156ae8:
    // 0x156ae8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x156ae8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_156aec:
    // 0x156aec: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x156aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_156af0:
    // 0x156af0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x156af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_156af4:
    // 0x156af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156af8:
    // 0x156af8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_156afc:
    // 0x156afc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_156b00:
    // 0x156b00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x156b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_156b04:
    // 0x156b04: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x156b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_156b08:
    // 0x156b08: 0x0  nop
    ctx->pc = 0x156b08u;
    // NOP
label_156b0c:
    // 0x156b0c: 0x0  nop
    ctx->pc = 0x156b0cu;
    // NOP
label_156b10:
    // 0x156b10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156b10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_156b14:
    // 0x156b14: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x156b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_156b18:
    // 0x156b18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156b1c:
    // 0x156b1c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x156b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_156b20:
    // 0x156b20: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x156b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_156b24:
    // 0x156b24: 0x40f809  jalr        $v0
label_156b28:
    if (ctx->pc == 0x156B28u) {
        ctx->pc = 0x156B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B24u;
        // 0x156b28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156B2Cu;
        goto label_156b2c;
    }
    ctx->pc = 0x156B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156B2Cu);
        ctx->pc = 0x156B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B24u;
        // 0x156b28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B24u, 0x156B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156B2Cu;
label_156b2c:
    // 0x156b2c: 0xae225550  sw          $v0, 0x5550($s1)
    ctx->pc = 0x156b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 21840), GPR_U32(ctx, 2));
label_156b30:
    // 0x156b30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_156b34:
    // 0x156b34: 0x8c62c678  lw          $v0, -0x3988($v1)
    ctx->pc = 0x156b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952568)));
label_156b38:
    // 0x156b38: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x156b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_156b3c:
    // 0x156b3c: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
label_156b40:
    if (ctx->pc == 0x156B40u) {
        ctx->pc = 0x156B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B3Cu;
        // 0x156b40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156B44u;
        goto label_156b44;
    }
    ctx->pc = 0x156B3Cu;
    {
        const bool branch_taken_0x156b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156b3c) {
            ctx->pc = 0x156B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156B3Cu;
            // 0x156b40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156CF8u;
            goto label_156cf8;
        }
    }
    ctx->pc = 0x156B44u;
label_156b44:
    // 0x156b44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x156b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156b48:
    // 0x156b48: 0x8ea5c654  lw          $a1, -0x39AC($s5)
    ctx->pc = 0x156b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952532)));
label_156b4c:
    // 0x156b4c: 0x8c43c690  lw          $v1, -0x3970($v0)
    ctx->pc = 0x156b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952592)));
label_156b50:
    // 0x156b50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x156b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_156b54:
    // 0x156b54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x156b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156b58:
    // 0x156b58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156b5c:
    // 0x156b5c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x156b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_156b60:
    // 0x156b60: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_156b64:
    if (ctx->pc == 0x156B64u) {
        ctx->pc = 0x156B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B60u;
        // 0x156b64: 0x2486c67c  addiu       $a2, $a0, -0x3984 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952572));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156B68u;
        goto label_156b68;
    }
    ctx->pc = 0x156B60u;
    {
        const bool branch_taken_0x156b60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x156B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B60u;
        // 0x156b64: 0x2486c67c  addiu       $a2, $a0, -0x3984 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b60) {
            ctx->pc = 0x156B7Cu;
            goto label_156b7c;
        }
    }
    ctx->pc = 0x156B68u;
label_156b68:
    // 0x156b68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_156b6c:
    // 0x156b6c: 0x0  nop
    ctx->pc = 0x156b6cu;
    // NOP
label_156b70:
    // 0x156b70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x156b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_156b74:
    // 0x156b74: 0x10000008  b           . + 4 + (0x8 << 2)
label_156b78:
    if (ctx->pc == 0x156B78u) {
        ctx->pc = 0x156B7Cu;
        goto label_156b7c;
    }
    ctx->pc = 0x156B74u;
    {
        const bool branch_taken_0x156b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b74) {
            ctx->pc = 0x156B98u;
            goto label_156b98;
        }
    }
    ctx->pc = 0x156B7Cu;
label_156b7c:
    // 0x156b7c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x156b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_156b80:
    // 0x156b80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x156b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_156b84:
    // 0x156b84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x156b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_156b88:
    // 0x156b88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_156b8c:
    // 0x156b8c: 0x0  nop
    ctx->pc = 0x156b8cu;
    // NOP
label_156b90:
    // 0x156b90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x156b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_156b94:
    // 0x156b94: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x156b94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_156b98:
    // 0x156b98: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_156b9c:
    if (ctx->pc == 0x156B9Cu) {
        ctx->pc = 0x156B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B98u;
        // 0x156b9c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156BA0u;
        goto label_156ba0;
    }
    ctx->pc = 0x156B98u;
    {
        const bool branch_taken_0x156b98 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x156B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B98u;
        // 0x156b9c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b98) {
            ctx->pc = 0x156BB4u;
            goto label_156bb4;
        }
    }
    ctx->pc = 0x156BA0u;
label_156ba0:
    // 0x156ba0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x156ba0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156ba4:
    // 0x156ba4: 0x0  nop
    ctx->pc = 0x156ba4u;
    // NOP
label_156ba8:
    // 0x156ba8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x156ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_156bac:
    // 0x156bac: 0x10000007  b           . + 4 + (0x7 << 2)
label_156bb0:
    if (ctx->pc == 0x156BB0u) {
        ctx->pc = 0x156BB4u;
        goto label_156bb4;
    }
    ctx->pc = 0x156BACu;
    {
        const bool branch_taken_0x156bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156bac) {
            ctx->pc = 0x156BCCu;
            goto label_156bcc;
        }
    }
    ctx->pc = 0x156BB4u;
label_156bb4:
    // 0x156bb4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x156bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_156bb8:
    // 0x156bb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x156bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_156bbc:
    // 0x156bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156bc0:
    // 0x156bc0: 0x0  nop
    ctx->pc = 0x156bc0u;
    // NOP
label_156bc4:
    // 0x156bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x156bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_156bc8:
    // 0x156bc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x156bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_156bcc:
    // 0x156bcc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x156bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_156bd0:
    // 0x156bd0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x156bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_156bd4:
    // 0x156bd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_156bd8:
    // 0x156bd8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x156bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_156bdc:
    // 0x156bdc: 0x8ca3c6c4  lw          $v1, -0x393C($a1)
    ctx->pc = 0x156bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952644)));
label_156be0:
    // 0x156be0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x156be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_156be4:
    // 0x156be4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x156be4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_156be8:
    // 0x156be8: 0x244253d8  addiu       $v0, $v0, 0x53D8
    ctx->pc = 0x156be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21464));
label_156bec:
    // 0x156bec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x156becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_156bf0:
    // 0x156bf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_156bf4:
    // 0x156bf4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x156bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_156bf8:
    // 0x156bf8: 0x0  nop
    ctx->pc = 0x156bf8u;
    // NOP
label_156bfc:
    // 0x156bfc: 0x0  nop
    ctx->pc = 0x156bfcu;
    // NOP
label_156c00:
    // 0x156c00: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x156c00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_156c04:
    // 0x156c04: 0xaca3c6c4  sw          $v1, -0x393C($a1)
    ctx->pc = 0x156c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952644), GPR_U32(ctx, 3));
label_156c08:
    // 0x156c08: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x156c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_156c0c:
    // 0x156c0c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x156c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_156c10:
    // 0x156c10: 0xc620c67c  lwc1        $f0, -0x3984($s1)
    ctx->pc = 0x156c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156c14:
    // 0x156c14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_156c18:
    if (ctx->pc == 0x156C18u) {
        ctx->pc = 0x156C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C14u;
        // 0x156c18: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C1Cu;
        goto label_156c1c;
    }
    ctx->pc = 0x156C14u;
    {
        const bool branch_taken_0x156c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C14u;
        // 0x156c18: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c14) {
            ctx->pc = 0x156C20u;
            goto label_156c20;
        }
    }
    ctx->pc = 0x156C1Cu;
label_156c1c:
    // 0x156c1c: 0xaca0c6c4  sw          $zero, -0x393C($a1)
    ctx->pc = 0x156c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952644), GPR_U32(ctx, 0));
label_156c20:
    // 0x156c20: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x156c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_156c24:
    // 0x156c24: 0x26945450  addiu       $s4, $s4, 0x5450
    ctx->pc = 0x156c24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 21584));
label_156c28:
    // 0x156c28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156c2c:
    // 0x156c2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x156c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_156c30:
    // 0x156c30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x156c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_156c34:
    // 0x156c34: 0x40f809  jalr        $v0
label_156c38:
    if (ctx->pc == 0x156C38u) {
        ctx->pc = 0x156C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C34u;
        // 0x156c38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C3Cu;
        goto label_156c3c;
    }
    ctx->pc = 0x156C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156C3Cu);
        ctx->pc = 0x156C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C34u;
        // 0x156c38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C34u, 0x156C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156C3Cu;
label_156c3c:
    // 0x156c3c: 0x8ea3c654  lw          $v1, -0x39AC($s5)
    ctx->pc = 0x156c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952532)));
label_156c40:
    // 0x156c40: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_156c44:
    // 0x156c44: 0xc62cc67c  lwc1        $f12, -0x3984($s1)
    ctx->pc = 0x156c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_156c48:
    // 0x156c48: 0x2610e9c8  addiu       $s0, $s0, -0x1638
    ctx->pc = 0x156c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961608));
label_156c4c:
    // 0x156c4c: 0xae43c690  sw          $v1, -0x3970($s2)
    ctx->pc = 0x156c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952592), GPR_U32(ctx, 3));
label_156c50:
    // 0x156c50: 0xc10b1f8  jal         func_42C7E0
label_156c54:
    if (ctx->pc == 0x156C54u) {
        ctx->pc = 0x156C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C50u;
        // 0x156c54: 0xfec2c688  sd          $v0, -0x3978($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 4294952584), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C58u;
        goto label_156c58;
    }
    ctx->pc = 0x156C50u;
    SET_GPR_U32(ctx, 31, 0x156C58u);
    ctx->pc = 0x156C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C50u;
    // 0x156c54: 0xfec2c688  sd          $v0, -0x3978($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294952584), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x156C50u, 0x156C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C58u;
label_156c58:
    // 0x156c58: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x156c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_156c5c:
    // 0x156c5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x156c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156c60:
    // 0x156c60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156c64:
    // 0x156c64: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x156c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_156c68:
    // 0x156c68: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x156c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_156c6c:
    // 0x156c6c: 0x40f809  jalr        $v0
label_156c70:
    if (ctx->pc == 0x156C70u) {
        ctx->pc = 0x156C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C6Cu;
        // 0x156c70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C74u;
        goto label_156c74;
    }
    ctx->pc = 0x156C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156C74u);
        ctx->pc = 0x156C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C6Cu;
        // 0x156c70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C6Cu, 0x156C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156C74u;
label_156c74:
    // 0x156c74: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x156c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_156c78:
    // 0x156c78: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x156c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_156c7c:
    // 0x156c7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x156c7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_156c80:
    // 0x156c80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_156c84:
    if (ctx->pc == 0x156C84u) {
        ctx->pc = 0x156C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C80u;
        // 0x156c84: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C88u;
        goto label_156c88;
    }
    ctx->pc = 0x156C80u;
    {
        const bool branch_taken_0x156c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156c80) {
            ctx->pc = 0x156C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156C80u;
            // 0x156c84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C88u;
            goto label_156c88;
        }
    }
    ctx->pc = 0x156C88u;
label_156c88:
    // 0x156c88: 0x9012  mflo        $s2
    ctx->pc = 0x156c88u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_156c8c:
    // 0x156c8c: 0xc103840  jal         func_40E100
label_156c90:
    if (ctx->pc == 0x156C90u) {
        ctx->pc = 0x156C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C8Cu;
        // 0x156c90: 0x8ca447c4  lw          $a0, 0x47C4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C94u;
        goto label_156c94;
    }
    ctx->pc = 0x156C8Cu;
    SET_GPR_U32(ctx, 31, 0x156C94u);
    ctx->pc = 0x156C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C8Cu;
    // 0x156c90: 0x8ca447c4  lw          $a0, 0x47C4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E100u, 0x156C8Cu, 0x156C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C94u;
label_156c94:
    // 0x156c94: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x156c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_156c98:
    // 0x156c98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x156c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_156c9c:
    // 0x156c9c: 0x0  nop
    ctx->pc = 0x156c9cu;
    // NOP
label_156ca0:
    // 0x156ca0: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x156ca0u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_156ca4:
    // 0x156ca4: 0xc10b1f8  jal         func_42C7E0
label_156ca8:
    if (ctx->pc == 0x156CA8u) {
        ctx->pc = 0x156CACu;
        goto label_156cac;
    }
    ctx->pc = 0x156CA4u;
    SET_GPR_U32(ctx, 31, 0x156CACu);
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x156CA4u, 0x156CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CACu;
label_156cac:
    // 0x156cac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156cb0:
    // 0x156cb0: 0xc047e6c  jal         func_11F9B0
label_156cb4:
    if (ctx->pc == 0x156CB4u) {
        ctx->pc = 0x156CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CB0u;
        // 0x156cb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CB8u;
        goto label_156cb8;
    }
    ctx->pc = 0x156CB0u;
    SET_GPR_U32(ctx, 31, 0x156CB8u);
    ctx->pc = 0x156CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CB0u;
    // 0x156cb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x156CB0u, 0x156CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CB8u;
label_156cb8:
    // 0x156cb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x156cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_156cbc:
    // 0x156cbc: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x156cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_156cc0:
    // 0x156cc0: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x156cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_156cc4:
    // 0x156cc4: 0xa0f809  jalr        $a1
label_156cc8:
    if (ctx->pc == 0x156CC8u) {
        ctx->pc = 0x156CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CC4u;
        // 0x156cc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CCCu;
        goto label_156ccc;
    }
    ctx->pc = 0x156CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x156CCCu);
        ctx->pc = 0x156CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CC4u;
        // 0x156cc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156CC4u, 0x156CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156CCCu;
label_156ccc:
    // 0x156ccc: 0xc10b1f8  jal         func_42C7E0
label_156cd0:
    if (ctx->pc == 0x156CD0u) {
        ctx->pc = 0x156CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CCCu;
        // 0x156cd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CD4u;
        goto label_156cd4;
    }
    ctx->pc = 0x156CCCu;
    SET_GPR_U32(ctx, 31, 0x156CD4u);
    ctx->pc = 0x156CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CCCu;
    // 0x156cd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x156CCCu, 0x156CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CD4u;
label_156cd4:
    // 0x156cd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_156cd8:
    // 0x156cd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x156cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156cdc:
    // 0x156cdc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x156cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_156ce0:
    // 0x156ce0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x156ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_156ce4:
    // 0x156ce4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x156ce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156ce8:
    // 0x156ce8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_156cec:
    // 0x156cec: 0xc10ca04  jal         func_432810
label_156cf0:
    if (ctx->pc == 0x156CF0u) {
        ctx->pc = 0x156CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CECu;
        // 0x156cf0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CF4u;
        goto label_156cf4;
    }
    ctx->pc = 0x156CECu;
    SET_GPR_U32(ctx, 31, 0x156CF4u);
    ctx->pc = 0x156CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CECu;
    // 0x156cf0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x156CECu, 0x156CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CF4u;
label_156cf4:
    // 0x156cf4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x156cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_156cf8:
    // 0x156cf8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x156cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_156cfc:
    // 0x156cfc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x156cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_156d00:
    // 0x156d00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x156d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_156d04:
    // 0x156d04: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x156d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156d08:
    // 0x156d08: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x156d08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156d0c:
    // 0x156d0c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x156d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156d10:
    // 0x156d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156d14:
    // 0x156d14: 0x3e00008  jr          $ra
label_156d18:
    if (ctx->pc == 0x156D18u) {
        ctx->pc = 0x156D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D14u;
        // 0x156d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D1Cu;
        goto label_156d1c;
    }
    ctx->pc = 0x156D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D14u;
        // 0x156d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D1Cu;
label_156d1c:
    // 0x156d1c: 0x0  nop
    ctx->pc = 0x156d1cu;
    // NOP
    ctx->pc = 0x156d20u;
}
