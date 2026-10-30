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

// Function: sub_001F8B30
// Address: 0x1f8b30 - 0x1f8d18
void sub_001F8B30_0x1f8b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8B30_0x1f8b30");
#endif

    switch (ctx->pc) {
        case 0x1f8b30u: goto label_1f8b30;
        case 0x1f8b34u: goto label_1f8b34;
        case 0x1f8b38u: goto label_1f8b38;
        case 0x1f8b3cu: goto label_1f8b3c;
        case 0x1f8b40u: goto label_1f8b40;
        case 0x1f8b44u: goto label_1f8b44;
        case 0x1f8b48u: goto label_1f8b48;
        case 0x1f8b4cu: goto label_1f8b4c;
        case 0x1f8b50u: goto label_1f8b50;
        case 0x1f8b54u: goto label_1f8b54;
        case 0x1f8b58u: goto label_1f8b58;
        case 0x1f8b5cu: goto label_1f8b5c;
        case 0x1f8b60u: goto label_1f8b60;
        case 0x1f8b64u: goto label_1f8b64;
        case 0x1f8b68u: goto label_1f8b68;
        case 0x1f8b6cu: goto label_1f8b6c;
        case 0x1f8b70u: goto label_1f8b70;
        case 0x1f8b74u: goto label_1f8b74;
        case 0x1f8b78u: goto label_1f8b78;
        case 0x1f8b7cu: goto label_1f8b7c;
        case 0x1f8b80u: goto label_1f8b80;
        case 0x1f8b84u: goto label_1f8b84;
        case 0x1f8b88u: goto label_1f8b88;
        case 0x1f8b8cu: goto label_1f8b8c;
        case 0x1f8b90u: goto label_1f8b90;
        case 0x1f8b94u: goto label_1f8b94;
        case 0x1f8b98u: goto label_1f8b98;
        case 0x1f8b9cu: goto label_1f8b9c;
        case 0x1f8ba0u: goto label_1f8ba0;
        case 0x1f8ba4u: goto label_1f8ba4;
        case 0x1f8ba8u: goto label_1f8ba8;
        case 0x1f8bacu: goto label_1f8bac;
        case 0x1f8bb0u: goto label_1f8bb0;
        case 0x1f8bb4u: goto label_1f8bb4;
        case 0x1f8bb8u: goto label_1f8bb8;
        case 0x1f8bbcu: goto label_1f8bbc;
        case 0x1f8bc0u: goto label_1f8bc0;
        case 0x1f8bc4u: goto label_1f8bc4;
        case 0x1f8bc8u: goto label_1f8bc8;
        case 0x1f8bccu: goto label_1f8bcc;
        case 0x1f8bd0u: goto label_1f8bd0;
        case 0x1f8bd4u: goto label_1f8bd4;
        case 0x1f8bd8u: goto label_1f8bd8;
        case 0x1f8bdcu: goto label_1f8bdc;
        case 0x1f8be0u: goto label_1f8be0;
        case 0x1f8be4u: goto label_1f8be4;
        case 0x1f8be8u: goto label_1f8be8;
        case 0x1f8becu: goto label_1f8bec;
        case 0x1f8bf0u: goto label_1f8bf0;
        case 0x1f8bf4u: goto label_1f8bf4;
        case 0x1f8bf8u: goto label_1f8bf8;
        case 0x1f8bfcu: goto label_1f8bfc;
        case 0x1f8c00u: goto label_1f8c00;
        case 0x1f8c04u: goto label_1f8c04;
        case 0x1f8c08u: goto label_1f8c08;
        case 0x1f8c0cu: goto label_1f8c0c;
        case 0x1f8c10u: goto label_1f8c10;
        case 0x1f8c14u: goto label_1f8c14;
        case 0x1f8c18u: goto label_1f8c18;
        case 0x1f8c1cu: goto label_1f8c1c;
        case 0x1f8c20u: goto label_1f8c20;
        case 0x1f8c24u: goto label_1f8c24;
        case 0x1f8c28u: goto label_1f8c28;
        case 0x1f8c2cu: goto label_1f8c2c;
        case 0x1f8c30u: goto label_1f8c30;
        case 0x1f8c34u: goto label_1f8c34;
        case 0x1f8c38u: goto label_1f8c38;
        case 0x1f8c3cu: goto label_1f8c3c;
        case 0x1f8c40u: goto label_1f8c40;
        case 0x1f8c44u: goto label_1f8c44;
        case 0x1f8c48u: goto label_1f8c48;
        case 0x1f8c4cu: goto label_1f8c4c;
        case 0x1f8c50u: goto label_1f8c50;
        case 0x1f8c54u: goto label_1f8c54;
        case 0x1f8c58u: goto label_1f8c58;
        case 0x1f8c5cu: goto label_1f8c5c;
        case 0x1f8c60u: goto label_1f8c60;
        case 0x1f8c64u: goto label_1f8c64;
        case 0x1f8c68u: goto label_1f8c68;
        case 0x1f8c6cu: goto label_1f8c6c;
        case 0x1f8c70u: goto label_1f8c70;
        case 0x1f8c74u: goto label_1f8c74;
        case 0x1f8c78u: goto label_1f8c78;
        case 0x1f8c7cu: goto label_1f8c7c;
        case 0x1f8c80u: goto label_1f8c80;
        case 0x1f8c84u: goto label_1f8c84;
        case 0x1f8c88u: goto label_1f8c88;
        case 0x1f8c8cu: goto label_1f8c8c;
        case 0x1f8c90u: goto label_1f8c90;
        case 0x1f8c94u: goto label_1f8c94;
        case 0x1f8c98u: goto label_1f8c98;
        case 0x1f8c9cu: goto label_1f8c9c;
        case 0x1f8ca0u: goto label_1f8ca0;
        case 0x1f8ca4u: goto label_1f8ca4;
        case 0x1f8ca8u: goto label_1f8ca8;
        case 0x1f8cacu: goto label_1f8cac;
        case 0x1f8cb0u: goto label_1f8cb0;
        case 0x1f8cb4u: goto label_1f8cb4;
        case 0x1f8cb8u: goto label_1f8cb8;
        case 0x1f8cbcu: goto label_1f8cbc;
        case 0x1f8cc0u: goto label_1f8cc0;
        case 0x1f8cc4u: goto label_1f8cc4;
        case 0x1f8cc8u: goto label_1f8cc8;
        case 0x1f8cccu: goto label_1f8ccc;
        case 0x1f8cd0u: goto label_1f8cd0;
        case 0x1f8cd4u: goto label_1f8cd4;
        case 0x1f8cd8u: goto label_1f8cd8;
        case 0x1f8cdcu: goto label_1f8cdc;
        case 0x1f8ce0u: goto label_1f8ce0;
        case 0x1f8ce4u: goto label_1f8ce4;
        case 0x1f8ce8u: goto label_1f8ce8;
        case 0x1f8cecu: goto label_1f8cec;
        case 0x1f8cf0u: goto label_1f8cf0;
        case 0x1f8cf4u: goto label_1f8cf4;
        case 0x1f8cf8u: goto label_1f8cf8;
        case 0x1f8cfcu: goto label_1f8cfc;
        case 0x1f8d00u: goto label_1f8d00;
        case 0x1f8d04u: goto label_1f8d04;
        case 0x1f8d08u: goto label_1f8d08;
        case 0x1f8d0cu: goto label_1f8d0c;
        case 0x1f8d10u: goto label_1f8d10;
        case 0x1f8d14u: goto label_1f8d14;
        default: break;
    }

    ctx->pc = 0x1f8b30u;

label_1f8b30:
    // 0x1f8b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f8b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f8b34:
    // 0x1f8b34: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f8b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1f8b38:
    // 0x1f8b38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1f8b3c:
    // 0x1f8b3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f8b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8b40:
    // 0x1f8b40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f8b44:
    // 0x1f8b44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f8b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f8b48:
    // 0x1f8b48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f8b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1f8b4c:
    // 0x1f8b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8b50:
    // 0x1f8b50: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1f8b54:
    // 0x1f8b54: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_1f8b58:
    if (ctx->pc == 0x1F8B58u) {
        ctx->pc = 0x1F8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B54u;
        // 0x1f8b58: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B5Cu;
        goto label_1f8b5c;
    }
    ctx->pc = 0x1F8B54u;
    {
        const bool branch_taken_0x1f8b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B54u;
        // 0x1f8b58: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b54) {
            ctx->pc = 0x1F8CF8u;
            goto label_1f8cf8;
        }
    }
    ctx->pc = 0x1F8B5Cu;
label_1f8b5c:
    // 0x1f8b5c: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x1f8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_1f8b60:
    // 0x1f8b60: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1f8b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8b64:
    // 0x1f8b64: 0xc073462  jal         func_1CD188
label_1f8b68:
    if (ctx->pc == 0x1F8B68u) {
        ctx->pc = 0x1F8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B64u;
        // 0x1f8b68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B6Cu;
        goto label_1f8b6c;
    }
    ctx->pc = 0x1F8B64u;
    SET_GPR_U32(ctx, 31, 0x1F8B6Cu);
    ctx->pc = 0x1F8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B64u;
    // 0x1f8b68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1F8B64u, 0x1F8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B6Cu;
label_1f8b6c:
    // 0x1f8b6c: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x1f8b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_1f8b70:
    // 0x1f8b70: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_1f8b74:
    // 0x1f8b74: 0x26057910  addiu       $a1, $s0, 0x7910
    ctx->pc = 0x1f8b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 30992));
label_1f8b78:
    // 0x1f8b78: 0xc139138  jal         func_4E44E0
label_1f8b7c:
    if (ctx->pc == 0x1F8B7Cu) {
        ctx->pc = 0x1F8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B78u;
        // 0x1f8b7c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B80u;
        goto label_1f8b80;
    }
    ctx->pc = 0x1F8B78u;
    SET_GPR_U32(ctx, 31, 0x1F8B80u);
    ctx->pc = 0x1F8B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B78u;
    // 0x1f8b7c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1F8B78u, 0x1F8B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B80u;
label_1f8b80:
    // 0x1f8b80: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1f8b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f8b84:
    // 0x1f8b84: 0x0  nop
    ctx->pc = 0x1f8b84u;
    // NOP
label_1f8b88:
    // 0x1f8b88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f8b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f8b8c:
    // 0x1f8b8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8b90:
    // 0x1f8b90: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f8b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f8b94:
    // 0x1f8b94: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f8b98:
    // 0x1f8b98: 0x60f809  jalr        $v1
label_1f8b9c:
    if (ctx->pc == 0x1F8B9Cu) {
        ctx->pc = 0x1F8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B98u;
        // 0x1f8b9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BA0u;
        goto label_1f8ba0;
    }
    ctx->pc = 0x1F8B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8BA0u);
        ctx->pc = 0x1F8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B98u;
        // 0x1f8b9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8B98u, 0x1F8BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8BA0u;
label_1f8ba0:
    // 0x1f8ba0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f8ba4:
    // 0x1f8ba4: 0x26857910  addiu       $a1, $s4, 0x7910
    ctx->pc = 0x1f8ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
label_1f8ba8:
    // 0x1f8ba8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f8ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f8bac:
    // 0x1f8bac: 0xc138e72  jal         func_4E39C8
label_1f8bb0:
    if (ctx->pc == 0x1F8BB0u) {
        ctx->pc = 0x1F8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BACu;
        // 0x1f8bb0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BB4u;
        goto label_1f8bb4;
    }
    ctx->pc = 0x1F8BACu;
    SET_GPR_U32(ctx, 31, 0x1F8BB4u);
    ctx->pc = 0x1F8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BACu;
    // 0x1f8bb0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1F8BACu, 0x1F8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BB4u;
label_1f8bb4:
    // 0x1f8bb4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1f8bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f8bb8:
    // 0x1f8bb8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_1f8bbc:
    if (ctx->pc == 0x1F8BBCu) {
        ctx->pc = 0x1F8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BB8u;
        // 0x1f8bbc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BC0u;
        goto label_1f8bc0;
    }
    ctx->pc = 0x1F8BB8u;
    {
        const bool branch_taken_0x1f8bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8bb8) {
            ctx->pc = 0x1F8BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8BB8u;
            // 0x1f8bbc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8b88;
        }
    }
    ctx->pc = 0x1F8BC0u;
label_1f8bc0:
    // 0x1f8bc0: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x1f8bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1f8bc4:
    // 0x1f8bc4: 0x26907910  addiu       $s0, $s4, 0x7910
    ctx->pc = 0x1f8bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
label_1f8bc8:
    // 0x1f8bc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8bcc:
    // 0x1f8bcc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f8bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f8bd0:
    // 0x1f8bd0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f8bd4:
    // 0x1f8bd4: 0x60f809  jalr        $v1
label_1f8bd8:
    if (ctx->pc == 0x1F8BD8u) {
        ctx->pc = 0x1F8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD4u;
        // 0x1f8bd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BDCu;
        goto label_1f8bdc;
    }
    ctx->pc = 0x1F8BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8BDCu);
        ctx->pc = 0x1F8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD4u;
        // 0x1f8bd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8BD4u, 0x1F8BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8BDCu;
label_1f8bdc:
    // 0x1f8bdc: 0x8e6400a4  lw          $a0, 0xA4($s3)
    ctx->pc = 0x1f8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1f8be0:
    // 0x1f8be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8be4:
    // 0x1f8be4: 0xc139fe8  jal         func_4E7FA0
label_1f8be8:
    if (ctx->pc == 0x1F8BE8u) {
        ctx->pc = 0x1F8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BE4u;
        // 0x1f8be8: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BECu;
        goto label_1f8bec;
    }
    ctx->pc = 0x1F8BE4u;
    SET_GPR_U32(ctx, 31, 0x1F8BECu);
    ctx->pc = 0x1F8BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BE4u;
    // 0x1f8be8: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1F8BE4u, 0x1F8BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BECu;
label_1f8bec:
    // 0x1f8bec: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x1f8becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1f8bf0:
    // 0x1f8bf0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8bf4:
    // 0x1f8bf4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f8bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f8bf8:
    // 0x1f8bf8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f8bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f8bfc:
    // 0x1f8bfc: 0x60f809  jalr        $v1
label_1f8c00:
    if (ctx->pc == 0x1F8C00u) {
        ctx->pc = 0x1F8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BFCu;
        // 0x1f8c00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C04u;
        goto label_1f8c04;
    }
    ctx->pc = 0x1F8BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8C04u);
        ctx->pc = 0x1F8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BFCu;
        // 0x1f8c00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8BFCu, 0x1F8C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8C04u;
label_1f8c04:
    // 0x1f8c04: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x1f8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1f8c08:
    // 0x1f8c08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8c0c:
    // 0x1f8c0c: 0xc13a4ae  jal         func_4E92B8
label_1f8c10:
    if (ctx->pc == 0x1F8C10u) {
        ctx->pc = 0x1F8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C0Cu;
        // 0x1f8c10: 0x24060107  addiu       $a2, $zero, 0x107 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C14u;
        goto label_1f8c14;
    }
    ctx->pc = 0x1F8C0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8C14u);
    ctx->pc = 0x1F8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C0Cu;
    // 0x1f8c10: 0x24060107  addiu       $a2, $zero, 0x107 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E92B8u, 0x1F8C0Cu, 0x1F8C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C14u;
label_1f8c14:
    // 0x1f8c14: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1f8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1f8c18:
    // 0x1f8c18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f8c1c:
    // 0x1f8c1c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1f8c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f8c20:
    // 0x1f8c20: 0x52230025  beql        $s1, $v1, . + 4 + (0x25 << 2)
label_1f8c24:
    if (ctx->pc == 0x1F8C24u) {
        ctx->pc = 0x1F8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C20u;
        // 0x1f8c24: 0x8e71008c  lw          $s1, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C28u;
        goto label_1f8c28;
    }
    ctx->pc = 0x1F8C20u;
    {
        const bool branch_taken_0x1f8c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8c20) {
            ctx->pc = 0x1F8C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C20u;
            // 0x1f8c24: 0x8e71008c  lw          $s1, 0x8C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8CB8u;
            goto label_1f8cb8;
        }
    }
    ctx->pc = 0x1F8C28u;
label_1f8c28:
    // 0x1f8c28: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f8c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f8c2c:
    // 0x1f8c2c: 0x0  nop
    ctx->pc = 0x1f8c2cu;
    // NOP
label_1f8c30:
    // 0x1f8c30: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8c34:
    // 0x1f8c34: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_1f8c38:
    if (ctx->pc == 0x1F8C38u) {
        ctx->pc = 0x1F8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C34u;
        // 0x1f8c38: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C3Cu;
        goto label_1f8c3c;
    }
    ctx->pc = 0x1F8C34u;
    {
        const bool branch_taken_0x1f8c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c34) {
            ctx->pc = 0x1F8C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C34u;
            // 0x1f8c38: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C64u;
            goto label_1f8c64;
        }
    }
    ctx->pc = 0x1F8C3Cu;
label_1f8c3c:
    // 0x1f8c3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8c40:
    // 0x1f8c40: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f8c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f8c44:
    // 0x1f8c44: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f8c48:
    // 0x1f8c48: 0x60f809  jalr        $v1
label_1f8c4c:
    if (ctx->pc == 0x1F8C4Cu) {
        ctx->pc = 0x1F8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C48u;
        // 0x1f8c4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C50u;
        goto label_1f8c50;
    }
    ctx->pc = 0x1F8C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8C50u);
        ctx->pc = 0x1F8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C48u;
        // 0x1f8c4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8C48u, 0x1F8C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8C50u;
label_1f8c50:
    // 0x1f8c50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8c54:
    // 0x1f8c54: 0x26857910  addiu       $a1, $s4, 0x7910
    ctx->pc = 0x1f8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
label_1f8c58:
    // 0x1f8c58: 0xc13abae  jal         func_4EAEB8
label_1f8c5c:
    if (ctx->pc == 0x1F8C5Cu) {
        ctx->pc = 0x1F8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C58u;
        // 0x1f8c5c: 0x2406010e  addiu       $a2, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C60u;
        goto label_1f8c60;
    }
    ctx->pc = 0x1F8C58u;
    SET_GPR_U32(ctx, 31, 0x1F8C60u);
    ctx->pc = 0x1F8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C58u;
    // 0x1f8c5c: 0x2406010e  addiu       $a2, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAEB8u, 0x1F8C58u, 0x1F8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C60u;
label_1f8c60:
    // 0x1f8c60: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8c64:
    // 0x1f8c64: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_1f8c68:
    if (ctx->pc == 0x1F8C68u) {
        ctx->pc = 0x1F8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C64u;
        // 0x1f8c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C6Cu;
        goto label_1f8c6c;
    }
    ctx->pc = 0x1F8C64u;
    {
        const bool branch_taken_0x1f8c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c64) {
            ctx->pc = 0x1F8C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C64u;
            // 0x1f8c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C94u;
            goto label_1f8c94;
        }
    }
    ctx->pc = 0x1F8C6Cu;
label_1f8c6c:
    // 0x1f8c6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8c70:
    // 0x1f8c70: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f8c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f8c74:
    // 0x1f8c74: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f8c78:
    // 0x1f8c78: 0x60f809  jalr        $v1
label_1f8c7c:
    if (ctx->pc == 0x1F8C7Cu) {
        ctx->pc = 0x1F8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C78u;
        // 0x1f8c7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C80u;
        goto label_1f8c80;
    }
    ctx->pc = 0x1F8C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8C80u);
        ctx->pc = 0x1F8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C78u;
        // 0x1f8c7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8C78u, 0x1F8C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8C80u;
label_1f8c80:
    // 0x1f8c80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f8c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8c84:
    // 0x1f8c84: 0x26857910  addiu       $a1, $s4, 0x7910
    ctx->pc = 0x1f8c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
label_1f8c88:
    // 0x1f8c88: 0xc13abae  jal         func_4EAEB8
label_1f8c8c:
    if (ctx->pc == 0x1F8C8Cu) {
        ctx->pc = 0x1F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C88u;
        // 0x1f8c8c: 0x24060113  addiu       $a2, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C90u;
        goto label_1f8c90;
    }
    ctx->pc = 0x1F8C88u;
    SET_GPR_U32(ctx, 31, 0x1F8C90u);
    ctx->pc = 0x1F8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C88u;
    // 0x1f8c8c: 0x24060113  addiu       $a2, $zero, 0x113 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAEB8u, 0x1F8C88u, 0x1F8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C90u;
label_1f8c90:
    // 0x1f8c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8c94:
    // 0x1f8c94: 0x26857910  addiu       $a1, $s4, 0x7910
    ctx->pc = 0x1f8c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
label_1f8c98:
    // 0x1f8c98: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x1f8c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_1f8c9c:
    // 0x1f8c9c: 0xc13abce  jal         func_4EAF38
label_1f8ca0:
    if (ctx->pc == 0x1F8CA0u) {
        ctx->pc = 0x1F8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C9Cu;
        // 0x1f8ca0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8CA4u;
        goto label_1f8ca4;
    }
    ctx->pc = 0x1F8C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F8CA4u);
    ctx->pc = 0x1F8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C9Cu;
    // 0x1f8ca0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAF38u, 0x1F8C9Cu, 0x1F8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CA4u;
label_1f8ca4:
    // 0x1f8ca4: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1f8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1f8ca8:
    // 0x1f8ca8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f8cac:
    // 0x1f8cac: 0x5623ffe0  bnel        $s1, $v1, . + 4 + (-0x20 << 2)
label_1f8cb0:
    if (ctx->pc == 0x1F8CB0u) {
        ctx->pc = 0x1F8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CACu;
        // 0x1f8cb0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8CB4u;
        goto label_1f8cb4;
    }
    ctx->pc = 0x1F8CACu;
    {
        const bool branch_taken_0x1f8cac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8cac) {
            ctx->pc = 0x1F8CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8CACu;
            // 0x1f8cb0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8c30;
        }
    }
    ctx->pc = 0x1F8CB4u;
label_1f8cb4:
    // 0x1f8cb4: 0x8e71008c  lw          $s1, 0x8C($s3)
    ctx->pc = 0x1f8cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1f8cb8:
    // 0x1f8cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8cbc:
    // 0x1f8cbc: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1f8cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f8cc0:
    // 0x1f8cc0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1f8cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f8cc4:
    // 0x1f8cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f8cc8:
    // 0x1f8cc8: 0xc10c1bb  jal         func_4306EC
label_1f8ccc:
    if (ctx->pc == 0x1F8CCCu) {
        ctx->pc = 0x1F8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CC8u;
        // 0x1f8ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8CD0u;
        goto label_1f8cd0;
    }
    ctx->pc = 0x1F8CC8u;
    SET_GPR_U32(ctx, 31, 0x1F8CD0u);
    ctx->pc = 0x1F8CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CC8u;
    // 0x1f8ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1F8CC8u, 0x1F8CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CD0u;
label_1f8cd0:
    // 0x1f8cd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f8cd4:
    // 0x1f8cd4: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1f8cd8:
    // 0x1f8cd8: 0x26857910  addiu       $a1, $s4, 0x7910
    ctx->pc = 0x1f8cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30992));
label_1f8cdc:
    // 0x1f8cdc: 0x2406011a  addiu       $a2, $zero, 0x11A
    ctx->pc = 0x1f8cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_1f8ce0:
    // 0x1f8ce0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1f8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1f8ce4:
    // 0x1f8ce4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1f8ce8:
    // 0x1f8ce8: 0xc13abea  jal         func_4EAFA8
label_1f8cec:
    if (ctx->pc == 0x1F8CECu) {
        ctx->pc = 0x1F8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CE8u;
        // 0x1f8cec: 0x8e64008c  lw          $a0, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8CF0u;
        goto label_1f8cf0;
    }
    ctx->pc = 0x1F8CE8u;
    SET_GPR_U32(ctx, 31, 0x1F8CF0u);
    ctx->pc = 0x1F8CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CE8u;
    // 0x1f8cec: 0x8e64008c  lw          $a0, 0x8C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAFA8u, 0x1F8CE8u, 0x1F8CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CF0u;
label_1f8cf0:
    // 0x1f8cf0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1f8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1f8cf4:
    // 0x1f8cf4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1f8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1f8cf8:
    // 0x1f8cf8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f8cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f8cfc:
    // 0x1f8cfc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f8cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8d00:
    // 0x1f8d00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f8d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f8d04:
    // 0x1f8d04: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f8d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f8d08:
    // 0x1f8d08: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f8d08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8d0c:
    // 0x1f8d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8d10:
    // 0x1f8d10: 0x3e00008  jr          $ra
label_1f8d14:
    if (ctx->pc == 0x1F8D14u) {
        ctx->pc = 0x1F8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D10u;
        // 0x1f8d14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D18u;
        goto label_fallthrough_0x1f8d10;
    }
    ctx->pc = 0x1F8D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D10u;
        // 0x1f8d14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8d10:
    ctx->pc = 0x1F8D18u;
}
