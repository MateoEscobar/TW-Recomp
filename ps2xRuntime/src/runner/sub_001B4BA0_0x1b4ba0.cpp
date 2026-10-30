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

// Function: sub_001B4BA0
// Address: 0x1b4ba0 - 0x1b4c78
void sub_001B4BA0_0x1b4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4BA0_0x1b4ba0");
#endif

    switch (ctx->pc) {
        case 0x1b4ba0u: goto label_1b4ba0;
        case 0x1b4ba4u: goto label_1b4ba4;
        case 0x1b4ba8u: goto label_1b4ba8;
        case 0x1b4bacu: goto label_1b4bac;
        case 0x1b4bb0u: goto label_1b4bb0;
        case 0x1b4bb4u: goto label_1b4bb4;
        case 0x1b4bb8u: goto label_1b4bb8;
        case 0x1b4bbcu: goto label_1b4bbc;
        case 0x1b4bc0u: goto label_1b4bc0;
        case 0x1b4bc4u: goto label_1b4bc4;
        case 0x1b4bc8u: goto label_1b4bc8;
        case 0x1b4bccu: goto label_1b4bcc;
        case 0x1b4bd0u: goto label_1b4bd0;
        case 0x1b4bd4u: goto label_1b4bd4;
        case 0x1b4bd8u: goto label_1b4bd8;
        case 0x1b4bdcu: goto label_1b4bdc;
        case 0x1b4be0u: goto label_1b4be0;
        case 0x1b4be4u: goto label_1b4be4;
        case 0x1b4be8u: goto label_1b4be8;
        case 0x1b4becu: goto label_1b4bec;
        case 0x1b4bf0u: goto label_1b4bf0;
        case 0x1b4bf4u: goto label_1b4bf4;
        case 0x1b4bf8u: goto label_1b4bf8;
        case 0x1b4bfcu: goto label_1b4bfc;
        case 0x1b4c00u: goto label_1b4c00;
        case 0x1b4c04u: goto label_1b4c04;
        case 0x1b4c08u: goto label_1b4c08;
        case 0x1b4c0cu: goto label_1b4c0c;
        case 0x1b4c10u: goto label_1b4c10;
        case 0x1b4c14u: goto label_1b4c14;
        case 0x1b4c18u: goto label_1b4c18;
        case 0x1b4c1cu: goto label_1b4c1c;
        case 0x1b4c20u: goto label_1b4c20;
        case 0x1b4c24u: goto label_1b4c24;
        case 0x1b4c28u: goto label_1b4c28;
        case 0x1b4c2cu: goto label_1b4c2c;
        case 0x1b4c30u: goto label_1b4c30;
        case 0x1b4c34u: goto label_1b4c34;
        case 0x1b4c38u: goto label_1b4c38;
        case 0x1b4c3cu: goto label_1b4c3c;
        case 0x1b4c40u: goto label_1b4c40;
        case 0x1b4c44u: goto label_1b4c44;
        case 0x1b4c48u: goto label_1b4c48;
        case 0x1b4c4cu: goto label_1b4c4c;
        case 0x1b4c50u: goto label_1b4c50;
        case 0x1b4c54u: goto label_1b4c54;
        case 0x1b4c58u: goto label_1b4c58;
        case 0x1b4c5cu: goto label_1b4c5c;
        case 0x1b4c60u: goto label_1b4c60;
        case 0x1b4c64u: goto label_1b4c64;
        case 0x1b4c68u: goto label_1b4c68;
        case 0x1b4c6cu: goto label_1b4c6c;
        case 0x1b4c70u: goto label_1b4c70;
        case 0x1b4c74u: goto label_1b4c74;
        default: break;
    }

    ctx->pc = 0x1b4ba0u;

label_1b4ba0:
    // 0x1b4ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b4ba4:
    // 0x1b4ba4: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
label_1b4ba8:
    if (ctx->pc == 0x1B4BA8u) {
        ctx->pc = 0x1B4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BA4u;
        // 0x1b4ba8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4BACu;
        goto label_1b4bac;
    }
    ctx->pc = 0x1B4BA4u;
    {
        const bool branch_taken_0x1b4ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BA4u;
        // 0x1b4ba8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ba4) {
            ctx->pc = 0x1B4C4Cu;
            goto label_1b4c4c;
        }
    }
    ctx->pc = 0x1B4BACu;
label_1b4bac:
    // 0x1b4bac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1b4bb0:
    // 0x1b4bb0: 0x2444a1b0  addiu       $a0, $v0, -0x5E50
    ctx->pc = 0x1b4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
label_1b4bb4:
    // 0x1b4bb4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b4bb8:
    // 0x1b4bb8: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_1b4bbc:
    if (ctx->pc == 0x1B4BBCu) {
        ctx->pc = 0x1B4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BB8u;
        // 0x1b4bbc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4BC0u;
        goto label_1b4bc0;
    }
    ctx->pc = 0x1B4BB8u;
    {
        const bool branch_taken_0x1b4bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BB8u;
        // 0x1b4bbc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bb8) {
            ctx->pc = 0x1B4C6Cu;
            goto label_1b4c6c;
        }
    }
    ctx->pc = 0x1B4BC0u;
label_1b4bc0:
    // 0x1b4bc0: 0x3c013ed8  lui         $at, 0x3ED8
    ctx->pc = 0x1b4bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16088 << 16));
label_1b4bc4:
    // 0x1b4bc4: 0x34219375  ori         $at, $at, 0x9375
    ctx->pc = 0x1b4bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37749);
label_1b4bc8:
    // 0x1b4bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4bcc:
    // 0x1b4bcc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1b4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1b4bd0:
    // 0x1b4bd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4bd4:
    // 0x1b4bd4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b4bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b4bd8:
    // 0x1b4bd8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1b4bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b4bdc:
    // 0x1b4bdc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b4bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4be0:
    // 0x1b4be0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b4be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b4be4:
    // 0x1b4be4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1b4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_1b4be8:
    // 0x1b4be8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b4be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1b4bec:
    // 0x1b4bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4bf0:
    // 0x1b4bf0: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1b4bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_1b4bf4:
    // 0x1b4bf4: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1b4bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_1b4bf8:
    // 0x1b4bf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b4bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b4bfc:
    // 0x1b4bfc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b4bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b4c00:
    // 0x1b4c00: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b4c04:
    // 0x1b4c04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b4c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1b4c08:
    // 0x1b4c08: 0x3c07020a  lui         $a3, 0x20A
    ctx->pc = 0x1b4c08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)522 << 16));
label_1b4c0c:
    // 0x1b4c0c: 0xe7ae000c  swc1        $f14, 0xC($sp)
    ctx->pc = 0x1b4c0cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b4c10:
    // 0x1b4c10: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x1b4c10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
label_1b4c14:
    // 0x1b4c14: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b4c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b4c18:
    // 0x1b4c18: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b4c18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4c1c:
    // 0x1b4c1c: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x1b4c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
label_1b4c20:
    // 0x1b4c20: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x1b4c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_1b4c24:
    // 0x1b4c24: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1b4c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_1b4c28:
    // 0x1b4c28: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1b4c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1b4c2c:
    // 0x1b4c2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b4c30:
    // 0x1b4c30: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1b4c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1b4c34:
    // 0x1b4c34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4c34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b4c38:
    // 0x1b4c38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b4c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b4c3c:
    // 0x1b4c3c: 0xc070768  jal         func_1C1DA0
label_1b4c40:
    if (ctx->pc == 0x1B4C40u) {
        ctx->pc = 0x1B4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C3Cu;
        // 0x1b4c40: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4C44u;
        goto label_1b4c44;
    }
    ctx->pc = 0x1B4C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4C44u);
    ctx->pc = 0x1B4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C3Cu;
    // 0x1b4c40: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DA0u, 0x1B4C3Cu, 0x1B4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C44u;
label_1b4c44:
    // 0x1b4c44: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b4c48:
    if (ctx->pc == 0x1B4C48u) {
        ctx->pc = 0x1B4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C44u;
        // 0x1b4c48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4C4Cu;
        goto label_1b4c4c;
    }
    ctx->pc = 0x1B4C44u;
    {
        const bool branch_taken_0x1b4c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C44u;
        // 0x1b4c48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c44) {
            ctx->pc = 0x1B4C6Cu;
            goto label_1b4c6c;
        }
    }
    ctx->pc = 0x1B4C4Cu;
label_1b4c4c:
    // 0x1b4c4c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b4c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_1b4c50:
    // 0x1b4c50: 0x8c82a1b0  lw          $v0, -0x5E50($a0)
    ctx->pc = 0x1b4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943152)));
label_1b4c54:
    // 0x1b4c54: 0x2484a1b0  addiu       $a0, $a0, -0x5E50
    ctx->pc = 0x1b4c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943152));
label_1b4c58:
    // 0x1b4c58: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1b4c58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1b4c5c:
    // 0x1b4c5c: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1b4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1b4c60:
    // 0x1b4c60: 0xa0f809  jalr        $a1
label_1b4c64:
    if (ctx->pc == 0x1B4C64u) {
        ctx->pc = 0x1B4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C60u;
        // 0x1b4c64: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4C68u;
        goto label_1b4c68;
    }
    ctx->pc = 0x1B4C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B4C68u);
        ctx->pc = 0x1B4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C60u;
        // 0x1b4c64: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C60u, 0x1B4C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4C68u;
label_1b4c68:
    // 0x1b4c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b4c6c:
    // 0x1b4c6c: 0x3e00008  jr          $ra
label_1b4c70:
    if (ctx->pc == 0x1B4C70u) {
        ctx->pc = 0x1B4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C6Cu;
        // 0x1b4c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4C74u;
        goto label_1b4c74;
    }
    ctx->pc = 0x1B4C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C6Cu;
        // 0x1b4c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C74u;
label_1b4c74:
    // 0x1b4c74: 0x0  nop
    ctx->pc = 0x1b4c74u;
    // NOP
    ctx->pc = 0x1b4c78u;
}
