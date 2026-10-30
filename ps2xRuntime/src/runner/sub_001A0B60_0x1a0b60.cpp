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

// Function: sub_001A0B60
// Address: 0x1a0b60 - 0x1a0c90
void sub_001A0B60_0x1a0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0B60_0x1a0b60");
#endif

    switch (ctx->pc) {
        case 0x1a0b60u: goto label_1a0b60;
        case 0x1a0b64u: goto label_1a0b64;
        case 0x1a0b68u: goto label_1a0b68;
        case 0x1a0b6cu: goto label_1a0b6c;
        case 0x1a0b70u: goto label_1a0b70;
        case 0x1a0b74u: goto label_1a0b74;
        case 0x1a0b78u: goto label_1a0b78;
        case 0x1a0b7cu: goto label_1a0b7c;
        case 0x1a0b80u: goto label_1a0b80;
        case 0x1a0b84u: goto label_1a0b84;
        case 0x1a0b88u: goto label_1a0b88;
        case 0x1a0b8cu: goto label_1a0b8c;
        case 0x1a0b90u: goto label_1a0b90;
        case 0x1a0b94u: goto label_1a0b94;
        case 0x1a0b98u: goto label_1a0b98;
        case 0x1a0b9cu: goto label_1a0b9c;
        case 0x1a0ba0u: goto label_1a0ba0;
        case 0x1a0ba4u: goto label_1a0ba4;
        case 0x1a0ba8u: goto label_1a0ba8;
        case 0x1a0bacu: goto label_1a0bac;
        case 0x1a0bb0u: goto label_1a0bb0;
        case 0x1a0bb4u: goto label_1a0bb4;
        case 0x1a0bb8u: goto label_1a0bb8;
        case 0x1a0bbcu: goto label_1a0bbc;
        case 0x1a0bc0u: goto label_1a0bc0;
        case 0x1a0bc4u: goto label_1a0bc4;
        case 0x1a0bc8u: goto label_1a0bc8;
        case 0x1a0bccu: goto label_1a0bcc;
        case 0x1a0bd0u: goto label_1a0bd0;
        case 0x1a0bd4u: goto label_1a0bd4;
        case 0x1a0bd8u: goto label_1a0bd8;
        case 0x1a0bdcu: goto label_1a0bdc;
        case 0x1a0be0u: goto label_1a0be0;
        case 0x1a0be4u: goto label_1a0be4;
        case 0x1a0be8u: goto label_1a0be8;
        case 0x1a0becu: goto label_1a0bec;
        case 0x1a0bf0u: goto label_1a0bf0;
        case 0x1a0bf4u: goto label_1a0bf4;
        case 0x1a0bf8u: goto label_1a0bf8;
        case 0x1a0bfcu: goto label_1a0bfc;
        case 0x1a0c00u: goto label_1a0c00;
        case 0x1a0c04u: goto label_1a0c04;
        case 0x1a0c08u: goto label_1a0c08;
        case 0x1a0c0cu: goto label_1a0c0c;
        case 0x1a0c10u: goto label_1a0c10;
        case 0x1a0c14u: goto label_1a0c14;
        case 0x1a0c18u: goto label_1a0c18;
        case 0x1a0c1cu: goto label_1a0c1c;
        case 0x1a0c20u: goto label_1a0c20;
        case 0x1a0c24u: goto label_1a0c24;
        case 0x1a0c28u: goto label_1a0c28;
        case 0x1a0c2cu: goto label_1a0c2c;
        case 0x1a0c30u: goto label_1a0c30;
        case 0x1a0c34u: goto label_1a0c34;
        case 0x1a0c38u: goto label_1a0c38;
        case 0x1a0c3cu: goto label_1a0c3c;
        case 0x1a0c40u: goto label_1a0c40;
        case 0x1a0c44u: goto label_1a0c44;
        case 0x1a0c48u: goto label_1a0c48;
        case 0x1a0c4cu: goto label_1a0c4c;
        case 0x1a0c50u: goto label_1a0c50;
        case 0x1a0c54u: goto label_1a0c54;
        case 0x1a0c58u: goto label_1a0c58;
        case 0x1a0c5cu: goto label_1a0c5c;
        case 0x1a0c60u: goto label_1a0c60;
        case 0x1a0c64u: goto label_1a0c64;
        case 0x1a0c68u: goto label_1a0c68;
        case 0x1a0c6cu: goto label_1a0c6c;
        case 0x1a0c70u: goto label_1a0c70;
        case 0x1a0c74u: goto label_1a0c74;
        case 0x1a0c78u: goto label_1a0c78;
        case 0x1a0c7cu: goto label_1a0c7c;
        case 0x1a0c80u: goto label_1a0c80;
        case 0x1a0c84u: goto label_1a0c84;
        case 0x1a0c88u: goto label_1a0c88;
        case 0x1a0c8cu: goto label_1a0c8c;
        default: break;
    }

    ctx->pc = 0x1a0b60u;

label_1a0b60:
    // 0x1a0b60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a0b64:
    // 0x1a0b64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0b68:
    // 0x1a0b68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a0b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a0b6c:
    // 0x1a0b6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a0b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a0b70:
    // 0x1a0b70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a0b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b74:
    // 0x1a0b74: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a0b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1a0b78:
    // 0x1a0b78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a0b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b7c:
    // 0x1a0b7c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1a0b7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a0b80:
    // 0x1a0b80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a0b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b84:
    // 0x1a0b84: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1a0b84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1a0b88:
    // 0x1a0b88: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1a0b88u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_1a0b8c:
    // 0x1a0b8c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a0b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1a0b90:
    // 0x1a0b90: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a0b90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1a0b94:
    // 0x1a0b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a0b98:
    // 0x1a0b98: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1a0b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1a0b9c:
    // 0x1a0b9c: 0x8c47cdb4  lw          $a3, -0x324C($v0)
    ctx->pc = 0x1a0b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a0ba0:
    // 0x1a0ba0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1a0ba4:
    // 0x1a0ba4: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1a0ba8:
    // 0x1a0ba8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1a0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1a0bac:
    // 0x1a0bac: 0x40f809  jalr        $v0
label_1a0bb0:
    if (ctx->pc == 0x1A0BB0u) {
        ctx->pc = 0x1A0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BACu;
        // 0x1a0bb0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BB4u;
        goto label_1a0bb4;
    }
    ctx->pc = 0x1A0BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0BB4u);
        ctx->pc = 0x1A0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BACu;
        // 0x1a0bb0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0BACu, 0x1A0BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0BB4u;
label_1a0bb4:
    // 0x1a0bb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a0bb8:
    if (ctx->pc == 0x1A0BB8u) {
        ctx->pc = 0x1A0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BB4u;
        // 0x1a0bb8: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BBCu;
        goto label_1a0bbc;
    }
    ctx->pc = 0x1A0BB4u;
    {
        const bool branch_taken_0x1a0bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BB4u;
        // 0x1a0bb8: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bb4) {
            ctx->pc = 0x1A0BD4u;
            goto label_1a0bd4;
        }
    }
    ctx->pc = 0x1A0BBCu;
label_1a0bbc:
    // 0x1a0bbc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1a0bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1a0bc0:
    // 0x1a0bc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a0bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a0bc4:
    // 0x1a0bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0bc8:
    // 0x1a0bc8: 0x0  nop
    ctx->pc = 0x1a0bc8u;
    // NOP
label_1a0bcc:
    // 0x1a0bcc: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x1a0bccu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_1a0bd0:
    // 0x1a0bd0: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1a0bd0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1a0bd4:
    // 0x1a0bd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0bd8:
    // 0x1a0bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0bdc:
    // 0x1a0bdc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a0bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a0be0:
    // 0x1a0be0: 0xc068818  jal         func_1A2060
label_1a0be4:
    if (ctx->pc == 0x1A0BE4u) {
        ctx->pc = 0x1A0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BE0u;
        // 0x1a0be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BE8u;
        goto label_1a0be8;
    }
    ctx->pc = 0x1A0BE0u;
    SET_GPR_U32(ctx, 31, 0x1A0BE8u);
    ctx->pc = 0x1A0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BE0u;
    // 0x1a0be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1A0BE0u, 0x1A0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BE8u;
label_1a0be8:
    // 0x1a0be8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a0be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1a0bec:
    // 0x1a0bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0bf0:
    // 0x1a0bf0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a0bf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1a0bf4:
    // 0x1a0bf4: 0xc068848  jal         func_1A2120
label_1a0bf8:
    if (ctx->pc == 0x1A0BF8u) {
        ctx->pc = 0x1A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BF4u;
        // 0x1a0bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BFCu;
        goto label_1a0bfc;
    }
    ctx->pc = 0x1A0BF4u;
    SET_GPR_U32(ctx, 31, 0x1A0BFCu);
    ctx->pc = 0x1A0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BF4u;
    // 0x1a0bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A0BF4u, 0x1A0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BFCu;
label_1a0bfc:
    // 0x1a0bfc: 0x26500140  addiu       $s0, $s2, 0x140
    ctx->pc = 0x1a0bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1a0c00:
    // 0x1a0c00: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1a0c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0c04:
    // 0x1a0c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a0c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c08:
    // 0x1a0c08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a0c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c0c:
    // 0x1a0c0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a0c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c10:
    // 0x1a0c10: 0xc136b18  jal         func_4DAC60
label_1a0c14:
    if (ctx->pc == 0x1A0C14u) {
        ctx->pc = 0x1A0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C10u;
        // 0x1a0c14: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C18u;
        goto label_1a0c18;
    }
    ctx->pc = 0x1A0C10u;
    SET_GPR_U32(ctx, 31, 0x1A0C18u);
    ctx->pc = 0x1A0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C10u;
    // 0x1a0c14: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1A0C10u, 0x1A0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C18u;
label_1a0c18:
    // 0x1a0c18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0c1c:
    // 0x1a0c1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a0c20:
    // 0x1a0c20: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a0c24:
    // 0x1a0c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c28:
    // 0x1a0c28: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a0c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0c2c:
    // 0x1a0c2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a0c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c30:
    // 0x1a0c30: 0xc443d018  lwc1        $f3, -0x2FE8($v0)
    ctx->pc = 0x1a0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a0c34:
    // 0x1a0c34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0c38:
    // 0x1a0c38: 0xc462d01c  lwc1        $f2, -0x2FE4($v1)
    ctx->pc = 0x1a0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a0c3c:
    // 0x1a0c3c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a0c3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a0c40:
    // 0x1a0c40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a0c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a0c44:
    // 0x1a0c44: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a0c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a0c48:
    // 0x1a0c48: 0xc068818  jal         func_1A2060
label_1a0c4c:
    if (ctx->pc == 0x1A0C4Cu) {
        ctx->pc = 0x1A0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C48u;
        // 0x1a0c4c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C50u;
        goto label_1a0c50;
    }
    ctx->pc = 0x1A0C48u;
    SET_GPR_U32(ctx, 31, 0x1A0C50u);
    ctx->pc = 0x1A0C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C48u;
    // 0x1a0c4c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1A0C48u, 0x1A0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C50u;
label_1a0c50:
    // 0x1a0c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c54:
    // 0x1a0c54: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a0c54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a0c58:
    // 0x1a0c58: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a0c58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1a0c5c:
    // 0x1a0c5c: 0xc068848  jal         func_1A2120
label_1a0c60:
    if (ctx->pc == 0x1A0C60u) {
        ctx->pc = 0x1A0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C5Cu;
        // 0x1a0c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C64u;
        goto label_1a0c64;
    }
    ctx->pc = 0x1A0C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A0C64u);
    ctx->pc = 0x1A0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C5Cu;
    // 0x1a0c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A0C5Cu, 0x1A0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C64u;
label_1a0c64:
    // 0x1a0c64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a0c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0c68:
    // 0x1a0c68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a0c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0c6c:
    // 0x1a0c6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a0c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0c70:
    // 0x1a0c70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a0c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0c74:
    // 0x1a0c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0c78:
    // 0x1a0c78: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1a0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a0c7c:
    // 0x1a0c7c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1a0c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a0c80:
    // 0x1a0c80: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1a0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a0c84:
    // 0x1a0c84: 0x3e00008  jr          $ra
label_1a0c88:
    if (ctx->pc == 0x1A0C88u) {
        ctx->pc = 0x1A0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C84u;
        // 0x1a0c88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C8Cu;
        goto label_1a0c8c;
    }
    ctx->pc = 0x1A0C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C84u;
        // 0x1a0c88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C8Cu;
label_1a0c8c:
    // 0x1a0c8c: 0x0  nop
    ctx->pc = 0x1a0c8cu;
    // NOP
    ctx->pc = 0x1a0c90u;
}
