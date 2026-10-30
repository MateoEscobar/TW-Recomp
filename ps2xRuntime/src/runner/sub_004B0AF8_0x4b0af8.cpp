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

// Function: sub_004B0AF8
// Address: 0x4b0af8 - 0x4b0c98
void sub_004B0AF8_0x4b0af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0AF8_0x4b0af8");
#endif

    switch (ctx->pc) {
        case 0x4b0b20u: goto label_4b0b20;
        case 0x4b0b58u: goto label_4b0b58;
        case 0x4b0b84u: goto label_4b0b84;
        case 0x4b0b98u: goto label_4b0b98;
        case 0x4b0bb4u: goto label_4b0bb4;
        case 0x4b0bc8u: goto label_4b0bc8;
        case 0x4b0bfcu: goto label_4b0bfc;
        case 0x4b0c30u: goto label_4b0c30;
        case 0x4b0c50u: goto label_4b0c50;
        default: break;
    }

    ctx->pc = 0x4b0af8u;

    // 0x4b0af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b0af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b0afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b0b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b0b08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b0b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b0b0c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b0b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b0b10: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b0b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b0b14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b0b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b0b18: 0xc12c246  jal         func_4B0918
    ctx->pc = 0x4B0B18u;
    SET_GPR_U32(ctx, 31, 0x4B0B20u);
    ctx->pc = 0x4B0B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B18u;
    // 0x4b0b1c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0918u, 0x4B0B18u, 0x4B0B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0B20u;
label_4b0b20:
    // 0x4b0b20: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4b0b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b0b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b28: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4b0b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4b0b2c: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x4b0b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4b0b30: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x4b0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4b0b34: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x4b0b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4b0b38: 0x719023  subu        $s2, $v1, $s1
    ctx->pc = 0x4b0b38u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4b0b3c: 0x1043023  subu        $a2, $t0, $a0
    ctx->pc = 0x4b0b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x4b0b40: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x4b0b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4b0b44: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4B0B44u;
    {
        const bool branch_taken_0x4b0b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0b44) {
            ctx->pc = 0x4B0BE4u;
            goto label_4b0be4;
        }
    }
    ctx->pc = 0x4B0B4Cu;
    // 0x4b0b4c: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x4b0b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x4b0b50: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x4B0B50u;
    SET_GPR_U32(ctx, 31, 0x4B0B58u);
    ctx->pc = 0x4B0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B50u;
    // 0x4b0b54: 0x24150064  addiu       $s5, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4B0B50u, 0x4B0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0B58u;
label_4b0b58:
    // 0x4b0b58: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b0b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b5c: 0x12800044  beqz        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x4B0B5Cu;
    {
        const bool branch_taken_0x4b0b5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B5Cu;
        // 0x4b0b60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b5c) {
            ctx->pc = 0x4B0C70u;
            goto label_4b0c70;
        }
    }
    ctx->pc = 0x4B0B64u;
    // 0x4b0b64: 0x623000e  bgezl       $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4B0B64u;
    {
        const bool branch_taken_0x4b0b64 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x4b0b64) {
            ctx->pc = 0x4B0B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0B64u;
            // 0x4b0b68: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0BA0u;
            goto label_4b0ba0;
        }
    }
    ctx->pc = 0x4B0B6Cu;
    // 0x4b0b6c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x4b0b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4b0b70: 0x26930064  addiu       $s3, $s4, 0x64
    ctx->pc = 0x4b0b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x4b0b74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b0b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b78: 0x113023  negu        $a2, $s1
    ctx->pc = 0x4b0b78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x4b0b7c: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B0B7Cu;
    SET_GPR_U32(ctx, 31, 0x4B0B84u);
    ctx->pc = 0x4B0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B7Cu;
    // 0x4b0b80: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B0B7Cu, 0x4B0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0B84u;
label_4b0b84:
    // 0x4b0b84: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4b0b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4b0b88: 0x2712023  subu        $a0, $s3, $s1
    ctx->pc = 0x4b0b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x4b0b8c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4b0b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0b90: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B0B90u;
    SET_GPR_U32(ctx, 31, 0x4B0B98u);
    ctx->pc = 0x4B0B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B90u;
    // 0x4b0b94: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B0B90u, 0x4B0B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0B98u;
label_4b0b98:
    // 0x4b0b98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B0B98u;
    {
        const bool branch_taken_0x4b0b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B98u;
        // 0x4b0b9c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b98) {
            ctx->pc = 0x4B0BB8u;
            goto label_4b0bb8;
        }
    }
    ctx->pc = 0x4B0BA0u;
label_4b0ba0:
    // 0x4b0ba0: 0x26930064  addiu       $s3, $s4, 0x64
    ctx->pc = 0x4b0ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x4b0ba4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0ba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4b0ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0bac: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B0BACu;
    SET_GPR_U32(ctx, 31, 0x4B0BB4u);
    ctx->pc = 0x4B0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BACu;
    // 0x4b0bb0: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B0BACu, 0x4B0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0BB4u;
label_4b0bb4:
    // 0x4b0bb4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x4b0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4b0bb8:
    // 0x4b0bb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0BB8u;
    {
        const bool branch_taken_0x4b0bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BB8u;
        // 0x4b0bbc: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0bb8) {
            ctx->pc = 0x4B0BCCu;
            goto label_4b0bcc;
        }
    }
    ctx->pc = 0x4B0BC0u;
    // 0x4b0bc0: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x4B0BC0u;
    SET_GPR_U32(ctx, 31, 0x4B0BC8u);
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4B0BC0u, 0x4B0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0BC8u;
label_4b0bc8:
    // 0x4b0bc8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x4b0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_4b0bcc:
    // 0x4b0bcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0bd0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x4b0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x4b0bd4: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x4b0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x4b0bd8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4b0bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0bdc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4B0BDCu;
    {
        const bool branch_taken_0x4b0bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BDCu;
        // 0x4b0be0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0bdc) {
            ctx->pc = 0x4B0C3Cu;
            goto label_4b0c3c;
        }
    }
    ctx->pc = 0x4B0BE4u;
label_4b0be4:
    // 0x4b0be4: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4B0BE4u;
    {
        const bool branch_taken_0x4b0be4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4B0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BE4u;
        // 0x4b0be8: 0xd2a823  subu        $s5, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0be4) {
            ctx->pc = 0x4B0C18u;
            goto label_4b0c18;
        }
    }
    ctx->pc = 0x4B0BECu;
    // 0x4b0bec: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x4b0becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x4b0bf0: 0x1112821  addu        $a1, $t0, $s1
    ctx->pc = 0x4b0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x4b0bf4: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x4B0BF4u;
    SET_GPR_U32(ctx, 31, 0x4B0BFCu);
    ctx->pc = 0x4B0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BF4u;
    // 0x4b0bf8: 0x113023  negu        $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4B0BF4u, 0x4B0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0BFCu;
label_4b0bfc:
    // 0x4b0bfc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x4b0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4b0c00: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4b0c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4b0c04: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4b0c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0c08: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x4b0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x4b0c0c: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x4b0c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x4b0c10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B0C10u;
    {
        const bool branch_taken_0x4b0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C10u;
        // 0x4b0c14: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c10) {
            ctx->pc = 0x4B0C28u;
            goto label_4b0c28;
        }
    }
    ctx->pc = 0x4B0C18u;
label_4b0c18:
    // 0x4b0c18: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B0C18u;
    {
        const bool branch_taken_0x4b0c18 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4B0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C18u;
        // 0x4b0c1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c18) {
            ctx->pc = 0x4B0C3Cu;
            goto label_4b0c3c;
        }
    }
    ctx->pc = 0x4B0C20u;
    // 0x4b0c20: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x4b0c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x4b0c24: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x4b0c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_4b0c28:
    // 0x4b0c28: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B0C28u;
    SET_GPR_U32(ctx, 31, 0x4B0C30u);
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B0C28u, 0x4B0C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0C30u;
label_4b0c30:
    // 0x4b0c30: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4b0c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0c34: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4b0c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4b0c38: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x4b0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4b0c3c:
    // 0x4b0c3c: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x4b0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x4b0c40: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x4b0c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4b0c44: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x4b0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4b0c48: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B0C48u;
    {
        const bool branch_taken_0x4b0c48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C48u;
        // 0x4b0c4c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c48) {
            ctx->pc = 0x4B0C6Cu;
            goto label_4b0c6c;
        }
    }
    ctx->pc = 0x4B0C50u;
label_4b0c50:
    // 0x4b0c50: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4b0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4b0c54: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b0c58: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x4b0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x4b0c5c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4b0c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b0c60: 0x0  nop
    ctx->pc = 0x4b0c60u;
    // NOP
    // 0x4b0c64: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B0C64u;
    {
        const bool branch_taken_0x4b0c64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0c64) {
            ctx->pc = 0x4B0C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0c50;
        }
    }
    ctx->pc = 0x4B0C6Cu;
label_4b0c6c:
    // 0x4b0c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b0c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0c70:
    // 0x4b0c70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b0c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b0c74: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b0c74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b0c78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b0c78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b0c7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b0c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0c80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b0c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0c84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b0c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C8Cu;
        // 0x4b0c90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0C94u;
    // 0x4b0c94: 0x0  nop
    ctx->pc = 0x4b0c94u;
    // NOP
    ctx->pc = 0x4b0c98u;
}
