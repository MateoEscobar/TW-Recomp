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

// Function: sub_00216A60
// Address: 0x216a60 - 0x216d48
void sub_00216A60_0x216a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216A60_0x216a60");
#endif

    switch (ctx->pc) {
        case 0x216a60u: goto label_216a60;
        case 0x216a64u: goto label_216a64;
        case 0x216a68u: goto label_216a68;
        case 0x216a6cu: goto label_216a6c;
        case 0x216a70u: goto label_216a70;
        case 0x216a74u: goto label_216a74;
        case 0x216a78u: goto label_216a78;
        case 0x216a7cu: goto label_216a7c;
        case 0x216a80u: goto label_216a80;
        case 0x216a84u: goto label_216a84;
        case 0x216a88u: goto label_216a88;
        case 0x216a8cu: goto label_216a8c;
        case 0x216a90u: goto label_216a90;
        case 0x216a94u: goto label_216a94;
        case 0x216a98u: goto label_216a98;
        case 0x216a9cu: goto label_216a9c;
        case 0x216aa0u: goto label_216aa0;
        case 0x216aa4u: goto label_216aa4;
        case 0x216aa8u: goto label_216aa8;
        case 0x216aacu: goto label_216aac;
        case 0x216ab0u: goto label_216ab0;
        case 0x216ab4u: goto label_216ab4;
        case 0x216ab8u: goto label_216ab8;
        case 0x216abcu: goto label_216abc;
        case 0x216ac0u: goto label_216ac0;
        case 0x216ac4u: goto label_216ac4;
        case 0x216ac8u: goto label_216ac8;
        case 0x216accu: goto label_216acc;
        case 0x216ad0u: goto label_216ad0;
        case 0x216ad4u: goto label_216ad4;
        case 0x216ad8u: goto label_216ad8;
        case 0x216adcu: goto label_216adc;
        case 0x216ae0u: goto label_216ae0;
        case 0x216ae4u: goto label_216ae4;
        case 0x216ae8u: goto label_216ae8;
        case 0x216aecu: goto label_216aec;
        case 0x216af0u: goto label_216af0;
        case 0x216af4u: goto label_216af4;
        case 0x216af8u: goto label_216af8;
        case 0x216afcu: goto label_216afc;
        case 0x216b00u: goto label_216b00;
        case 0x216b04u: goto label_216b04;
        case 0x216b08u: goto label_216b08;
        case 0x216b0cu: goto label_216b0c;
        case 0x216b10u: goto label_216b10;
        case 0x216b14u: goto label_216b14;
        case 0x216b18u: goto label_216b18;
        case 0x216b1cu: goto label_216b1c;
        case 0x216b20u: goto label_216b20;
        case 0x216b24u: goto label_216b24;
        case 0x216b28u: goto label_216b28;
        case 0x216b2cu: goto label_216b2c;
        case 0x216b30u: goto label_216b30;
        case 0x216b34u: goto label_216b34;
        case 0x216b38u: goto label_216b38;
        case 0x216b3cu: goto label_216b3c;
        case 0x216b40u: goto label_216b40;
        case 0x216b44u: goto label_216b44;
        case 0x216b48u: goto label_216b48;
        case 0x216b4cu: goto label_216b4c;
        case 0x216b50u: goto label_216b50;
        case 0x216b54u: goto label_216b54;
        case 0x216b58u: goto label_216b58;
        case 0x216b5cu: goto label_216b5c;
        case 0x216b60u: goto label_216b60;
        case 0x216b64u: goto label_216b64;
        case 0x216b68u: goto label_216b68;
        case 0x216b6cu: goto label_216b6c;
        case 0x216b70u: goto label_216b70;
        case 0x216b74u: goto label_216b74;
        case 0x216b78u: goto label_216b78;
        case 0x216b7cu: goto label_216b7c;
        case 0x216b80u: goto label_216b80;
        case 0x216b84u: goto label_216b84;
        case 0x216b88u: goto label_216b88;
        case 0x216b8cu: goto label_216b8c;
        case 0x216b90u: goto label_216b90;
        case 0x216b94u: goto label_216b94;
        case 0x216b98u: goto label_216b98;
        case 0x216b9cu: goto label_216b9c;
        case 0x216ba0u: goto label_216ba0;
        case 0x216ba4u: goto label_216ba4;
        case 0x216ba8u: goto label_216ba8;
        case 0x216bacu: goto label_216bac;
        case 0x216bb0u: goto label_216bb0;
        case 0x216bb4u: goto label_216bb4;
        case 0x216bb8u: goto label_216bb8;
        case 0x216bbcu: goto label_216bbc;
        case 0x216bc0u: goto label_216bc0;
        case 0x216bc4u: goto label_216bc4;
        case 0x216bc8u: goto label_216bc8;
        case 0x216bccu: goto label_216bcc;
        case 0x216bd0u: goto label_216bd0;
        case 0x216bd4u: goto label_216bd4;
        case 0x216bd8u: goto label_216bd8;
        case 0x216bdcu: goto label_216bdc;
        case 0x216be0u: goto label_216be0;
        case 0x216be4u: goto label_216be4;
        case 0x216be8u: goto label_216be8;
        case 0x216becu: goto label_216bec;
        case 0x216bf0u: goto label_216bf0;
        case 0x216bf4u: goto label_216bf4;
        case 0x216bf8u: goto label_216bf8;
        case 0x216bfcu: goto label_216bfc;
        case 0x216c00u: goto label_216c00;
        case 0x216c04u: goto label_216c04;
        case 0x216c08u: goto label_216c08;
        case 0x216c0cu: goto label_216c0c;
        case 0x216c10u: goto label_216c10;
        case 0x216c14u: goto label_216c14;
        case 0x216c18u: goto label_216c18;
        case 0x216c1cu: goto label_216c1c;
        case 0x216c20u: goto label_216c20;
        case 0x216c24u: goto label_216c24;
        case 0x216c28u: goto label_216c28;
        case 0x216c2cu: goto label_216c2c;
        case 0x216c30u: goto label_216c30;
        case 0x216c34u: goto label_216c34;
        case 0x216c38u: goto label_216c38;
        case 0x216c3cu: goto label_216c3c;
        case 0x216c40u: goto label_216c40;
        case 0x216c44u: goto label_216c44;
        case 0x216c48u: goto label_216c48;
        case 0x216c4cu: goto label_216c4c;
        case 0x216c50u: goto label_216c50;
        case 0x216c54u: goto label_216c54;
        case 0x216c58u: goto label_216c58;
        case 0x216c5cu: goto label_216c5c;
        case 0x216c60u: goto label_216c60;
        case 0x216c64u: goto label_216c64;
        case 0x216c68u: goto label_216c68;
        case 0x216c6cu: goto label_216c6c;
        case 0x216c70u: goto label_216c70;
        case 0x216c74u: goto label_216c74;
        case 0x216c78u: goto label_216c78;
        case 0x216c7cu: goto label_216c7c;
        case 0x216c80u: goto label_216c80;
        case 0x216c84u: goto label_216c84;
        case 0x216c88u: goto label_216c88;
        case 0x216c8cu: goto label_216c8c;
        case 0x216c90u: goto label_216c90;
        case 0x216c94u: goto label_216c94;
        case 0x216c98u: goto label_216c98;
        case 0x216c9cu: goto label_216c9c;
        case 0x216ca0u: goto label_216ca0;
        case 0x216ca4u: goto label_216ca4;
        case 0x216ca8u: goto label_216ca8;
        case 0x216cacu: goto label_216cac;
        case 0x216cb0u: goto label_216cb0;
        case 0x216cb4u: goto label_216cb4;
        case 0x216cb8u: goto label_216cb8;
        case 0x216cbcu: goto label_216cbc;
        case 0x216cc0u: goto label_216cc0;
        case 0x216cc4u: goto label_216cc4;
        case 0x216cc8u: goto label_216cc8;
        case 0x216cccu: goto label_216ccc;
        case 0x216cd0u: goto label_216cd0;
        case 0x216cd4u: goto label_216cd4;
        case 0x216cd8u: goto label_216cd8;
        case 0x216cdcu: goto label_216cdc;
        case 0x216ce0u: goto label_216ce0;
        case 0x216ce4u: goto label_216ce4;
        case 0x216ce8u: goto label_216ce8;
        case 0x216cecu: goto label_216cec;
        case 0x216cf0u: goto label_216cf0;
        case 0x216cf4u: goto label_216cf4;
        case 0x216cf8u: goto label_216cf8;
        case 0x216cfcu: goto label_216cfc;
        case 0x216d00u: goto label_216d00;
        case 0x216d04u: goto label_216d04;
        case 0x216d08u: goto label_216d08;
        case 0x216d0cu: goto label_216d0c;
        case 0x216d10u: goto label_216d10;
        case 0x216d14u: goto label_216d14;
        case 0x216d18u: goto label_216d18;
        case 0x216d1cu: goto label_216d1c;
        case 0x216d20u: goto label_216d20;
        case 0x216d24u: goto label_216d24;
        case 0x216d28u: goto label_216d28;
        case 0x216d2cu: goto label_216d2c;
        case 0x216d30u: goto label_216d30;
        case 0x216d34u: goto label_216d34;
        case 0x216d38u: goto label_216d38;
        case 0x216d3cu: goto label_216d3c;
        case 0x216d40u: goto label_216d40;
        case 0x216d44u: goto label_216d44;
        default: break;
    }

    ctx->pc = 0x216a60u;

label_216a60:
    // 0x216a60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x216a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_216a64:
    // 0x216a64: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x216a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_216a68:
    // 0x216a68: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x216a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_216a6c:
    // 0x216a6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x216a6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216a70:
    // 0x216a70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x216a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_216a74:
    // 0x216a74: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x216a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_216a78:
    // 0x216a78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x216a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_216a7c:
    // 0x216a7c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x216a7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_216a80:
    // 0x216a80: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x216a80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_216a84:
    // 0x216a84: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x216a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_216a88:
    // 0x216a88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_216a8c:
    // 0x216a8c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_216a90:
    // 0x216a90: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x216a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_216a94:
    // 0x216a94: 0x40f809  jalr        $v0
label_216a98:
    if (ctx->pc == 0x216A98u) {
        ctx->pc = 0x216A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A94u;
        // 0x216a98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216A9Cu;
        goto label_216a9c;
    }
    ctx->pc = 0x216A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216A9Cu);
        ctx->pc = 0x216A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A94u;
        // 0x216a98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A94u, 0x216A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216A9Cu;
label_216a9c:
    // 0x216a9c: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_216aa0:
    if (ctx->pc == 0x216AA0u) {
        ctx->pc = 0x216AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A9Cu;
        // 0x216aa0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216AA4u;
        goto label_216aa4;
    }
    ctx->pc = 0x216A9Cu;
    {
        const bool branch_taken_0x216a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A9Cu;
        // 0x216aa0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a9c) {
            ctx->pc = 0x216D1Cu;
            goto label_216d1c;
        }
    }
    ctx->pc = 0x216AA4u;
label_216aa4:
    // 0x216aa4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x216aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_216aa8:
    // 0x216aa8: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x216aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_216aac:
    // 0x216aac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x216aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216ab0:
    // 0x216ab0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x216ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_216ab4:
    // 0x216ab4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x216ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_216ab8:
    // 0x216ab8: 0x40f809  jalr        $v0
label_216abc:
    if (ctx->pc == 0x216ABCu) {
        ctx->pc = 0x216ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AB8u;
        // 0x216abc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216AC0u;
        goto label_216ac0;
    }
    ctx->pc = 0x216AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216AC0u);
        ctx->pc = 0x216ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AB8u;
        // 0x216abc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216AB8u, 0x216AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216AC0u;
label_216ac0:
    // 0x216ac0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x216ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_216ac4:
    // 0x216ac4: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x216ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_216ac8:
    // 0x216ac8: 0x8c83011c  lw          $v1, 0x11C($a0)
    ctx->pc = 0x216ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_216acc:
    // 0x216acc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x216accu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_216ad0:
    // 0x216ad0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x216ad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_216ad4:
    // 0x216ad4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_216ad8:
    if (ctx->pc == 0x216AD8u) {
        ctx->pc = 0x216AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AD4u;
        // 0x216ad8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216ADCu;
        goto label_216adc;
    }
    ctx->pc = 0x216AD4u;
    {
        const bool branch_taken_0x216ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AD4u;
        // 0x216ad8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ad4) {
            ctx->pc = 0x216B20u;
            goto label_216b20;
        }
    }
    ctx->pc = 0x216ADCu;
label_216adc:
    // 0x216adc: 0x926200ac  lbu         $v0, 0xAC($s3)
    ctx->pc = 0x216adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 172)));
label_216ae0:
    // 0x216ae0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x216ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_216ae4:
    // 0x216ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216ae8:
    // 0x216ae8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x216ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_216aec:
    // 0x216aec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x216aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_216af0:
    // 0x216af0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_216af4:
    if (ctx->pc == 0x216AF4u) {
        ctx->pc = 0x216AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AF0u;
        // 0x216af4: 0xa26400ac  sb          $a0, 0xAC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216AF8u;
        goto label_216af8;
    }
    ctx->pc = 0x216AF0u;
    {
        const bool branch_taken_0x216af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x216AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AF0u;
        // 0x216af4: 0xa26400ac  sb          $a0, 0xAC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216af0) {
            ctx->pc = 0x216AFCu;
            goto label_216afc;
        }
    }
    ctx->pc = 0x216AF8u;
label_216af8:
    // 0x216af8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x216af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216afc:
    // 0x216afc: 0xa26500ac  sb          $a1, 0xAC($s3)
    ctx->pc = 0x216afcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 172), (uint8_t)GPR_U32(ctx, 5));
label_216b00:
    // 0x216b00: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x216b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_216b04:
    // 0x216b04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x216b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216b08:
    // 0x216b08: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x216b08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_216b0c:
    // 0x216b0c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x216b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_216b10:
    // 0x216b10: 0x40f809  jalr        $v0
label_216b14:
    if (ctx->pc == 0x216B14u) {
        ctx->pc = 0x216B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B10u;
        // 0x216b14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B18u;
        goto label_216b18;
    }
    ctx->pc = 0x216B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216B18u);
        ctx->pc = 0x216B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B10u;
        // 0x216b14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B10u, 0x216B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216B18u;
label_216b18:
    // 0x216b18: 0x1000001f  b           . + 4 + (0x1F << 2)
label_216b1c:
    if (ctx->pc == 0x216B1Cu) {
        ctx->pc = 0x216B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B18u;
        // 0x216b1c: 0xae6200a8  sw          $v0, 0xA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B20u;
        goto label_216b20;
    }
    ctx->pc = 0x216B18u;
    {
        const bool branch_taken_0x216b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B18u;
        // 0x216b1c: 0xae6200a8  sw          $v0, 0xA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b18) {
            ctx->pc = 0x216B98u;
            goto label_216b98;
        }
    }
    ctx->pc = 0x216B20u;
label_216b20:
    // 0x216b20: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_216b24:
    if (ctx->pc == 0x216B24u) {
        ctx->pc = 0x216B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B20u;
        // 0x216b24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B28u;
        goto label_216b28;
    }
    ctx->pc = 0x216B20u;
    {
        const bool branch_taken_0x216b20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x216B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B20u;
        // 0x216b24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b20) {
            ctx->pc = 0x216B3Cu;
            goto label_216b3c;
        }
    }
    ctx->pc = 0x216B28u;
label_216b28:
    // 0x216b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216b2c:
    // 0x216b2c: 0x0  nop
    ctx->pc = 0x216b2cu;
    // NOP
label_216b30:
    // 0x216b30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_216b34:
    // 0x216b34: 0x10000008  b           . + 4 + (0x8 << 2)
label_216b38:
    if (ctx->pc == 0x216B38u) {
        ctx->pc = 0x216B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B34u;
        // 0x216b38: 0x8cc2011c  lw          $v0, 0x11C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B3Cu;
        goto label_216b3c;
    }
    ctx->pc = 0x216B34u;
    {
        const bool branch_taken_0x216b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B34u;
        // 0x216b38: 0x8cc2011c  lw          $v0, 0x11C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b34) {
            ctx->pc = 0x216B58u;
            goto label_216b58;
        }
    }
    ctx->pc = 0x216B3Cu;
label_216b3c:
    // 0x216b3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x216b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_216b40:
    // 0x216b40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x216b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_216b44:
    // 0x216b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216b48:
    // 0x216b48: 0x0  nop
    ctx->pc = 0x216b48u;
    // NOP
label_216b4c:
    // 0x216b4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_216b50:
    // 0x216b50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x216b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_216b54:
    // 0x216b54: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x216b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
label_216b58:
    // 0x216b58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_216b5c:
    if (ctx->pc == 0x216B5Cu) {
        ctx->pc = 0x216B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B58u;
        // 0x216b5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B60u;
        goto label_216b60;
    }
    ctx->pc = 0x216B58u;
    {
        const bool branch_taken_0x216b58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x216B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B58u;
        // 0x216b5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b58) {
            ctx->pc = 0x216B74u;
            goto label_216b74;
        }
    }
    ctx->pc = 0x216B60u;
label_216b60:
    // 0x216b60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x216b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_216b64:
    // 0x216b64: 0x0  nop
    ctx->pc = 0x216b64u;
    // NOP
label_216b68:
    // 0x216b68: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x216b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_216b6c:
    // 0x216b6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_216b70:
    if (ctx->pc == 0x216B70u) {
        ctx->pc = 0x216B74u;
        goto label_216b74;
    }
    ctx->pc = 0x216B6Cu;
    {
        const bool branch_taken_0x216b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216b6c) {
            ctx->pc = 0x216B8Cu;
            goto label_216b8c;
        }
    }
    ctx->pc = 0x216B74u;
label_216b74:
    // 0x216b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x216b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_216b78:
    // 0x216b78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x216b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_216b7c:
    // 0x216b7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x216b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_216b80:
    // 0x216b80: 0x0  nop
    ctx->pc = 0x216b80u;
    // NOP
label_216b84:
    // 0x216b84: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x216b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_216b88:
    // 0x216b88: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x216b88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_216b8c:
    // 0x216b8c: 0x0  nop
    ctx->pc = 0x216b8cu;
    // NOP
label_216b90:
    // 0x216b90: 0x0  nop
    ctx->pc = 0x216b90u;
    // NOP
label_216b94:
    // 0x216b94: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x216b94u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_216b98:
    // 0x216b98: 0x926300ac  lbu         $v1, 0xAC($s3)
    ctx->pc = 0x216b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 172)));
label_216b9c:
    // 0x216b9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x216b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_216ba0:
    // 0x216ba0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_216ba4:
    if (ctx->pc == 0x216BA4u) {
        ctx->pc = 0x216BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BA0u;
        // 0x216ba4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BA8u;
        goto label_216ba8;
    }
    ctx->pc = 0x216BA0u;
    {
        const bool branch_taken_0x216ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BA0u;
        // 0x216ba4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ba0) {
            ctx->pc = 0x216BB0u;
            goto label_216bb0;
        }
    }
    ctx->pc = 0x216BA8u;
label_216ba8:
    // 0x216ba8: 0x10000002  b           . + 4 + (0x2 << 2)
label_216bac:
    if (ctx->pc == 0x216BACu) {
        ctx->pc = 0x216BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BA8u;
        // 0x216bac: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BB0u;
        goto label_216bb0;
    }
    ctx->pc = 0x216BA8u;
    {
        const bool branch_taken_0x216ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BA8u;
        // 0x216bac: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ba8) {
            ctx->pc = 0x216BB4u;
            goto label_216bb4;
        }
    }
    ctx->pc = 0x216BB0u;
label_216bb0:
    // 0x216bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216bb4:
    // 0x216bb4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x216bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_216bb8:
    // 0x216bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x216bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_216bbc:
    // 0x216bbc: 0x24420c60  addiu       $v0, $v0, 0xC60
    ctx->pc = 0x216bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
label_216bc0:
    // 0x216bc0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x216bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_216bc4:
    // 0x216bc4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x216bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_216bc8:
    // 0x216bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216bcc:
    // 0x216bcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x216bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_216bd0:
    // 0x216bd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x216bd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_216bd4:
    // 0x216bd4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x216bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_216bd8:
    // 0x216bd8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x216bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_216bdc:
    // 0x216bdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_216be0:
    // 0x216be0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x216be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_216be4:
    // 0x216be4: 0xc05e896  jal         func_17A258
label_216be8:
    if (ctx->pc == 0x216BE8u) {
        ctx->pc = 0x216BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BE4u;
        // 0x216be8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BECu;
        goto label_216bec;
    }
    ctx->pc = 0x216BE4u;
    SET_GPR_U32(ctx, 31, 0x216BECu);
    ctx->pc = 0x216BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BE4u;
    // 0x216be8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x216BE4u, 0x216BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BECu;
label_216bec:
    // 0x216bec: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x216becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_216bf0:
    // 0x216bf0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x216bf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_216bf4:
    // 0x216bf4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x216bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_216bf8:
    // 0x216bf8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x216bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_216bfc:
    // 0x216bfc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x216bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_216c00:
    // 0x216c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_216c04:
    // 0x216c04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_216c08:
    // 0x216c08: 0x8e660078  lw          $a2, 0x78($s3)
    ctx->pc = 0x216c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_216c0c:
    // 0x216c0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x216c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_216c10:
    // 0x216c10: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x216c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_216c14:
    // 0x216c14: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_216c18:
    // 0x216c18: 0x60f809  jalr        $v1
label_216c1c:
    if (ctx->pc == 0x216C1Cu) {
        ctx->pc = 0x216C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C18u;
        // 0x216c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C20u;
        goto label_216c20;
    }
    ctx->pc = 0x216C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216C20u);
        ctx->pc = 0x216C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C18u;
        // 0x216c1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C18u, 0x216C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216C20u;
label_216c20:
    // 0x216c20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x216c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_216c24:
    // 0x216c24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_216c28:
    // 0x216c28: 0xc48c00e8  lwc1        $f12, 0xE8($a0)
    ctx->pc = 0x216c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_216c2c:
    // 0x216c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216c30:
    // 0x216c30: 0xc44d00ec  lwc1        $f13, 0xEC($v0)
    ctx->pc = 0x216c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_216c34:
    // 0x216c34: 0xc068848  jal         func_1A2120
label_216c38:
    if (ctx->pc == 0x216C38u) {
        ctx->pc = 0x216C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C34u;
        // 0x216c38: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C3Cu;
        goto label_216c3c;
    }
    ctx->pc = 0x216C34u;
    SET_GPR_U32(ctx, 31, 0x216C3Cu);
    ctx->pc = 0x216C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C34u;
    // 0x216c38: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x216C34u, 0x216C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C3Cu;
label_216c3c:
    // 0x216c3c: 0x8e660078  lw          $a2, 0x78($s3)
    ctx->pc = 0x216c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_216c40:
    // 0x216c40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x216c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_216c44:
    // 0x216c44: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x216c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_216c48:
    // 0x216c48: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x216c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_216c4c:
    // 0x216c4c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x216c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_216c50:
    // 0x216c50: 0x60f809  jalr        $v1
label_216c54:
    if (ctx->pc == 0x216C54u) {
        ctx->pc = 0x216C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C50u;
        // 0x216c54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C58u;
        goto label_216c58;
    }
    ctx->pc = 0x216C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216C58u);
        ctx->pc = 0x216C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C50u;
        // 0x216c54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C50u, 0x216C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216C58u;
label_216c58:
    // 0x216c58: 0x8e650084  lw          $a1, 0x84($s3)
    ctx->pc = 0x216c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_216c5c:
    // 0x216c5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216c60:
    // 0x216c60: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x216c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_216c64:
    // 0x216c64: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x216c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_216c68:
    // 0x216c68: 0x60f809  jalr        $v1
label_216c6c:
    if (ctx->pc == 0x216C6Cu) {
        ctx->pc = 0x216C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C68u;
        // 0x216c6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C70u;
        goto label_216c70;
    }
    ctx->pc = 0x216C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216C70u);
        ctx->pc = 0x216C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C68u;
        // 0x216c6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C68u, 0x216C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216C70u;
label_216c70:
    // 0x216c70: 0xc085a78  jal         func_2169E0
label_216c74:
    if (ctx->pc == 0x216C74u) {
        ctx->pc = 0x216C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C70u;
        // 0x216c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C78u;
        goto label_216c78;
    }
    ctx->pc = 0x216C70u;
    SET_GPR_U32(ctx, 31, 0x216C78u);
    ctx->pc = 0x216C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C70u;
    // 0x216c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2169E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2169E0u, 0x216C70u, 0x216C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C78u;
label_216c78:
    // 0x216c78: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_216c7c:
    // 0x216c7c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x216c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_216c80:
    // 0x216c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216c84:
    // 0x216c84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x216c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_216c88:
    // 0x216c88: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_216c8c:
    // 0x216c8c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x216c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_216c90:
    // 0x216c90: 0x60f809  jalr        $v1
label_216c94:
    if (ctx->pc == 0x216C94u) {
        ctx->pc = 0x216C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C90u;
        // 0x216c94: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C98u;
        goto label_216c98;
    }
    ctx->pc = 0x216C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216C98u);
        ctx->pc = 0x216C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C90u;
        // 0x216c94: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C90u, 0x216C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216C98u;
label_216c98:
    // 0x216c98: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x216c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216c9c:
    // 0x216c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216ca0:
    // 0x216ca0: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x216ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216ca4:
    // 0x216ca4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x216ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_216ca8:
    // 0x216ca8: 0xc64200d8  lwc1        $f2, 0xD8($s2)
    ctx->pc = 0x216ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216cac:
    // 0x216cac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x216cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_216cb0:
    // 0x216cb0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x216cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_216cb4:
    // 0x216cb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x216cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_216cb8:
    // 0x216cb8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x216cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_216cbc:
    // 0x216cbc: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x216cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_216cc0:
    // 0x216cc0: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x216cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_216cc4:
    // 0x216cc4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x216cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_216cc8:
    // 0x216cc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x216cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_216ccc:
    // 0x216ccc: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_216cd0:
    // 0x216cd0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x216cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_216cd4:
    // 0x216cd4: 0x60f809  jalr        $v1
label_216cd8:
    if (ctx->pc == 0x216CD8u) {
        ctx->pc = 0x216CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CD4u;
        // 0x216cd8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CDCu;
        goto label_216cdc;
    }
    ctx->pc = 0x216CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216CDCu);
        ctx->pc = 0x216CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CD4u;
        // 0x216cd8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216CD4u, 0x216CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216CDCu;
label_216cdc:
    // 0x216cdc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x216cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216ce0:
    // 0x216ce0: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x216ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216ce4:
    // 0x216ce4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x216ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_216ce8:
    // 0x216ce8: 0xc64200d8  lwc1        $f2, 0xD8($s2)
    ctx->pc = 0x216ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216cec:
    // 0x216cec: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x216cecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_216cf0:
    // 0x216cf0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x216cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_216cf4:
    // 0x216cf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216cf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_216cf8:
    // 0x216cf8: 0x8e65008c  lw          $a1, 0x8C($s3)
    ctx->pc = 0x216cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_216cfc:
    // 0x216cfc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x216cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_216d00:
    // 0x216d00: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x216d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_216d04:
    // 0x216d04: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x216d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_216d08:
    // 0x216d08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216d0c:
    // 0x216d0c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x216d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_216d10:
    // 0x216d10: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x216d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_216d14:
    // 0x216d14: 0x60f809  jalr        $v1
label_216d18:
    if (ctx->pc == 0x216D18u) {
        ctx->pc = 0x216D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D14u;
        // 0x216d18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D1Cu;
        goto label_216d1c;
    }
    ctx->pc = 0x216D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216D1Cu);
        ctx->pc = 0x216D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D14u;
        // 0x216d18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216D14u, 0x216D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216D1Cu;
label_216d1c:
    // 0x216d1c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x216d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_216d20:
    // 0x216d20: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x216d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_216d24:
    // 0x216d24: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x216d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_216d28:
    // 0x216d28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x216d28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_216d2c:
    // 0x216d2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x216d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_216d30:
    // 0x216d30: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x216d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_216d34:
    // 0x216d34: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x216d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_216d38:
    // 0x216d38: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x216d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_216d3c:
    // 0x216d3c: 0x3e00008  jr          $ra
label_216d40:
    if (ctx->pc == 0x216D40u) {
        ctx->pc = 0x216D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D3Cu;
        // 0x216d40: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D44u;
        goto label_216d44;
    }
    ctx->pc = 0x216D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D3Cu;
        // 0x216d40: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216D44u;
label_216d44:
    // 0x216d44: 0x0  nop
    ctx->pc = 0x216d44u;
    // NOP
    ctx->pc = 0x216d48u;
}
