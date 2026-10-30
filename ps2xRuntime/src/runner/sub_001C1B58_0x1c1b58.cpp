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

// Function: sub_001C1B58
// Address: 0x1c1b58 - 0x1c1cd0
void sub_001C1B58_0x1c1b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1B58_0x1c1b58");
#endif

    switch (ctx->pc) {
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b5cu: goto label_1c1b5c;
        case 0x1c1b60u: goto label_1c1b60;
        case 0x1c1b64u: goto label_1c1b64;
        case 0x1c1b68u: goto label_1c1b68;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1b70u: goto label_1c1b70;
        case 0x1c1b74u: goto label_1c1b74;
        case 0x1c1b78u: goto label_1c1b78;
        case 0x1c1b7cu: goto label_1c1b7c;
        case 0x1c1b80u: goto label_1c1b80;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1b88u: goto label_1c1b88;
        case 0x1c1b8cu: goto label_1c1b8c;
        case 0x1c1b90u: goto label_1c1b90;
        case 0x1c1b94u: goto label_1c1b94;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1b9cu: goto label_1c1b9c;
        case 0x1c1ba0u: goto label_1c1ba0;
        case 0x1c1ba4u: goto label_1c1ba4;
        case 0x1c1ba8u: goto label_1c1ba8;
        case 0x1c1bacu: goto label_1c1bac;
        case 0x1c1bb0u: goto label_1c1bb0;
        case 0x1c1bb4u: goto label_1c1bb4;
        case 0x1c1bb8u: goto label_1c1bb8;
        case 0x1c1bbcu: goto label_1c1bbc;
        case 0x1c1bc0u: goto label_1c1bc0;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bc8u: goto label_1c1bc8;
        case 0x1c1bccu: goto label_1c1bcc;
        case 0x1c1bd0u: goto label_1c1bd0;
        case 0x1c1bd4u: goto label_1c1bd4;
        case 0x1c1bd8u: goto label_1c1bd8;
        case 0x1c1bdcu: goto label_1c1bdc;
        case 0x1c1be0u: goto label_1c1be0;
        case 0x1c1be4u: goto label_1c1be4;
        case 0x1c1be8u: goto label_1c1be8;
        case 0x1c1becu: goto label_1c1bec;
        case 0x1c1bf0u: goto label_1c1bf0;
        case 0x1c1bf4u: goto label_1c1bf4;
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1bfcu: goto label_1c1bfc;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c04u: goto label_1c1c04;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c0cu: goto label_1c1c0c;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c14u: goto label_1c1c14;
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c20u: goto label_1c1c20;
        case 0x1c1c24u: goto label_1c1c24;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c2cu: goto label_1c1c2c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c34u: goto label_1c1c34;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c3cu: goto label_1c1c3c;
        case 0x1c1c40u: goto label_1c1c40;
        case 0x1c1c44u: goto label_1c1c44;
        case 0x1c1c48u: goto label_1c1c48;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c50u: goto label_1c1c50;
        case 0x1c1c54u: goto label_1c1c54;
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c5cu: goto label_1c1c5c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c64u: goto label_1c1c64;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c6cu: goto label_1c1c6c;
        case 0x1c1c70u: goto label_1c1c70;
        case 0x1c1c74u: goto label_1c1c74;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c7cu: goto label_1c1c7c;
        case 0x1c1c80u: goto label_1c1c80;
        case 0x1c1c84u: goto label_1c1c84;
        case 0x1c1c88u: goto label_1c1c88;
        case 0x1c1c8cu: goto label_1c1c8c;
        case 0x1c1c90u: goto label_1c1c90;
        case 0x1c1c94u: goto label_1c1c94;
        case 0x1c1c98u: goto label_1c1c98;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1ca0u: goto label_1c1ca0;
        case 0x1c1ca4u: goto label_1c1ca4;
        case 0x1c1ca8u: goto label_1c1ca8;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cbcu: goto label_1c1cbc;
        case 0x1c1cc0u: goto label_1c1cc0;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cccu: goto label_1c1ccc;
        default: break;
    }

    ctx->pc = 0x1c1b58u;

label_1c1b58:
    // 0x1c1b58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c1b5c:
    // 0x1c1b5c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c1b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c1b60:
    // 0x1c1b60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c1b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c1b64:
    // 0x1c1b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b68:
    // 0x1c1b68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c1b6c:
    // 0x1c1b6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1c1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1c1b70:
    // 0x1c1b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1b74:
    // 0x1c1b74: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c1b74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c1b78:
    // 0x1c1b78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1b7c:
    // 0x1c1b7c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1c1b80:
    // 0x1c1b80: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1c1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1c1b84:
    // 0x1c1b84: 0x40f809  jalr        $v0
label_1c1b88:
    if (ctx->pc == 0x1C1B88u) {
        ctx->pc = 0x1C1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B84u;
        // 0x1c1b88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B8Cu;
        goto label_1c1b8c;
    }
    ctx->pc = 0x1C1B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B8Cu);
        ctx->pc = 0x1C1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B84u;
        // 0x1c1b88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B84u, 0x1C1B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1B8Cu;
label_1c1b8c:
    // 0x1c1b8c: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_1c1b90:
    if (ctx->pc == 0x1C1B90u) {
        ctx->pc = 0x1C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B8Cu;
        // 0x1c1b90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B94u;
        goto label_1c1b94;
    }
    ctx->pc = 0x1C1B8Cu;
    {
        const bool branch_taken_0x1c1b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b8c) {
            ctx->pc = 0x1C1B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1B8Cu;
            // 0x1c1b90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1CB0u;
            goto label_1c1cb0;
        }
    }
    ctx->pc = 0x1C1B94u;
label_1c1b94:
    // 0x1c1b94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1b98:
    // 0x1c1b98: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c1b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c1b9c:
    // 0x1c1b9c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c1ba0:
    // 0x1c1ba0: 0x40f809  jalr        $v0
label_1c1ba4:
    if (ctx->pc == 0x1C1BA4u) {
        ctx->pc = 0x1C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BA0u;
        // 0x1c1ba4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BA8u;
        goto label_1c1ba8;
    }
    ctx->pc = 0x1C1BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1BA8u);
        ctx->pc = 0x1C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BA0u;
        // 0x1c1ba4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BA0u, 0x1C1BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1BA8u;
label_1c1ba8:
    // 0x1c1ba8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1c1bac:
    if (ctx->pc == 0x1C1BACu) {
        ctx->pc = 0x1C1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BA8u;
        // 0x1c1bac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BB0u;
        goto label_1c1bb0;
    }
    ctx->pc = 0x1C1BA8u;
    {
        const bool branch_taken_0x1c1ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BA8u;
        // 0x1c1bac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ba8) {
            ctx->pc = 0x1C1CACu;
            goto label_1c1cac;
        }
    }
    ctx->pc = 0x1C1BB0u;
label_1c1bb0:
    // 0x1c1bb0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1c1bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_1c1bb4:
    // 0x1c1bb4: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x1c1bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
label_1c1bb8:
    // 0x1c1bb8: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_1c1bbc:
    if (ctx->pc == 0x1C1BBCu) {
        ctx->pc = 0x1C1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BB8u;
        // 0x1c1bbc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BC0u;
        goto label_1c1bc0;
    }
    ctx->pc = 0x1C1BB8u;
    {
        const bool branch_taken_0x1c1bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BB8u;
        // 0x1c1bbc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bb8) {
            ctx->pc = 0x1C1CACu;
            goto label_1c1cac;
        }
    }
    ctx->pc = 0x1C1BC0u;
label_1c1bc0:
    // 0x1c1bc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c1bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c1bc4:
    // 0x1c1bc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c1bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c1bc8:
    // 0x1c1bc8: 0x26130048  addiu       $s3, $s0, 0x48
    ctx->pc = 0x1c1bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1c1bcc:
    // 0x1c1bcc: 0x2612004c  addiu       $s2, $s0, 0x4C
    ctx->pc = 0x1c1bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_1c1bd0:
    // 0x1c1bd0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c1bd4:
    // 0x1c1bd4: 0x0  nop
    ctx->pc = 0x1c1bd4u;
    // NOP
label_1c1bd8:
    // 0x1c1bd8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1c1bdc:
    if (ctx->pc == 0x1C1BDCu) {
        ctx->pc = 0x1C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD8u;
        // 0x1c1bdc: 0xc6020038  lwc1        $f2, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BE0u;
        goto label_1c1be0;
    }
    ctx->pc = 0x1C1BD8u;
    {
        const bool branch_taken_0x1c1bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd8) {
            ctx->pc = 0x1C1BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1BD8u;
            // 0x1c1bdc: 0xc6020038  lwc1        $f2, 0x38($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1C0Cu;
            goto label_1c1c0c;
        }
    }
    ctx->pc = 0x1C1BE0u;
label_1c1be0:
    // 0x1c1be0: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x1c1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1be4:
    // 0x1c1be4: 0x44912800  mtc1        $s1, $f5
    ctx->pc = 0x1c1be4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c1be8:
    // 0x1c1be8: 0x0  nop
    ctx->pc = 0x1c1be8u;
    // NOP
label_1c1bec:
    // 0x1c1bec: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1c1becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1c1bf0:
    // 0x1c1bf0: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1c1bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1bf4:
    // 0x1c1bf4: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x1c1bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c1bf8:
    // 0x1c1bf8: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x1c1bf8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1c1bfc:
    // 0x1c1bfc: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x1c1bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c1c00:
    // 0x1c1c00: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c1c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1c1c04:
    // 0x1c1c04: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c1c08:
    if (ctx->pc == 0x1C1C08u) {
        ctx->pc = 0x1C1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C04u;
        // 0x1c1c08: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C0Cu;
        goto label_1c1c0c;
    }
    ctx->pc = 0x1C1C04u;
    {
        const bool branch_taken_0x1c1c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C04u;
        // 0x1c1c08: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c04) {
            ctx->pc = 0x1C1C34u;
            goto label_1c1c34;
        }
    }
    ctx->pc = 0x1C1C0Cu;
label_1c1c0c:
    // 0x1c1c0c: 0x44912800  mtc1        $s1, $f5
    ctx->pc = 0x1c1c0cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c1c10:
    // 0x1c1c10: 0x0  nop
    ctx->pc = 0x1c1c10u;
    // NOP
label_1c1c14:
    // 0x1c1c14: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1c1c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1c1c18:
    // 0x1c1c18: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x1c1c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1c1c:
    // 0x1c1c1c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1c1c1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1c1c20:
    // 0x1c1c20: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1c1c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1c24:
    // 0x1c1c24: 0xc60300ac  lwc1        $f3, 0xAC($s0)
    ctx->pc = 0x1c1c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c1c28:
    // 0x1c1c28: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x1c1c28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1c1c2c:
    // 0x1c1c2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c1c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1c1c30:
    // 0x1c1c30: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1c1c30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1c1c34:
    // 0x1c1c34: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1c1c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1c1c38:
    // 0x1c1c38: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1c1c38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_1c1c3c:
    // 0x1c1c3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c1c40:
    // 0x1c1c40: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c1c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c1c44:
    // 0x1c1c44: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1c1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1c1c48:
    // 0x1c1c48: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1c1c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1c1c4c:
    // 0x1c1c4c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1c1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1c1c50:
    // 0x1c1c50: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c1c50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c1c54:
    // 0x1c1c54: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1c1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1c1c58:
    // 0x1c1c58: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c1c5c:
    // 0x1c1c5c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1c1c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c1c60:
    // 0x1c1c60: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1c1c64:
    // 0x1c1c64: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x1c1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1c1c68:
    // 0x1c1c68: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1c1c68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1c1c6c:
    // 0x1c1c6c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1c1c70:
    // 0x1c1c70: 0x1675823  subu        $t3, $t3, $a3
    ctx->pc = 0x1c1c70u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_1c1c74:
    // 0x1c1c74: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1c1c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c1c78:
    // 0x1c1c78: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x1c1c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c1c7c:
    // 0x1c1c7c: 0x8e0700b8  lw          $a3, 0xB8($s0)
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1c1c80:
    // 0x1c1c80: 0x8e0800bc  lw          $t0, 0xBC($s0)
    ctx->pc = 0x1c1c80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1c1c84:
    // 0x1c1c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c1c88:
    // 0x1c1c88: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1c1c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c1c8c:
    // 0x1c1c8c: 0xc05e70c  jal         func_179C30
label_1c1c90:
    if (ctx->pc == 0x1C1C90u) {
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x920a00c0  lbu         $t2, 0xC0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C94u;
        goto label_1c1c94;
    }
    ctx->pc = 0x1C1C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C94u);
    ctx->pc = 0x1C1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C8Cu;
    // 0x1c1c90: 0x920a00c0  lbu         $t2, 0xC0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C30u, 0x1C1C8Cu, 0x1C1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C94u;
label_1c1c94:
    // 0x1c1c94: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1c1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c1c98:
    // 0x1c1c98: 0x92020098  lbu         $v0, 0x98($s0)
    ctx->pc = 0x1c1c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
label_1c1c9c:
    // 0x1c1c9c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1c1c9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c1ca0:
    // 0x1c1ca0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1c1ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c1ca4:
    // 0x1c1ca4: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
label_1c1ca8:
    if (ctx->pc == 0x1C1CA8u) {
        ctx->pc = 0x1C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CA4u;
        // 0x1c1ca8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CACu;
        goto label_1c1cac;
    }
    ctx->pc = 0x1C1CA4u;
    {
        const bool branch_taken_0x1c1ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ca4) {
            ctx->pc = 0x1C1CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1CA4u;
            // 0x1c1ca8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1bd8;
        }
    }
    ctx->pc = 0x1C1CACu;
label_1c1cac:
    // 0x1c1cac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c1cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c1cb0:
    // 0x1c1cb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c1cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1cb4:
    // 0x1c1cb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c1cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1cb8:
    // 0x1c1cb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1c1cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1cbc:
    // 0x1c1cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1cc0:
    // 0x1c1cc0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c1cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c1cc4:
    // 0x1c1cc4: 0x3e00008  jr          $ra
label_1c1cc8:
    if (ctx->pc == 0x1C1CC8u) {
        ctx->pc = 0x1C1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC4u;
        // 0x1c1cc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CCCu;
        goto label_1c1ccc;
    }
    ctx->pc = 0x1C1CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC4u;
        // 0x1c1cc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1CCCu;
label_1c1ccc:
    // 0x1c1ccc: 0x0  nop
    ctx->pc = 0x1c1cccu;
    // NOP
    ctx->pc = 0x1c1cd0u;
}
