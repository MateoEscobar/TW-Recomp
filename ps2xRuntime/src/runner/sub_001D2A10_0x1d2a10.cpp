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

// Function: sub_001D2A10
// Address: 0x1d2a10 - 0x1d2b90
void sub_001D2A10_0x1d2a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2A10_0x1d2a10");
#endif

    switch (ctx->pc) {
        case 0x1d2a50u: goto label_1d2a50;
        case 0x1d2a94u: goto label_1d2a94;
        case 0x1d2aa0u: goto label_1d2aa0;
        case 0x1d2afcu: goto label_1d2afc;
        case 0x1d2b08u: goto label_1d2b08;
        case 0x1d2b18u: goto label_1d2b18;
        case 0x1d2b24u: goto label_1d2b24;
        case 0x1d2b48u: goto label_1d2b48;
        case 0x1d2b54u: goto label_1d2b54;
        case 0x1d2b68u: goto label_1d2b68;
        default: break;
    }

    ctx->pc = 0x1d2a10u;

    // 0x1d2a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2a14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d2a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d2a18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d2a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2a24: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d2a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d2a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2a2c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1d2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1d2a30: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2A30u;
    {
        const bool branch_taken_0x1d2a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a30) {
            ctx->pc = 0x1D2A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2A30u;
            // 0x1d2a34: 0x8e020cb0  lw          $v0, 0xCB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A40u;
            goto label_1d2a40;
        }
    }
    ctx->pc = 0x1D2A38u;
    // 0x1d2a38: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1D2A38u;
    {
        const bool branch_taken_0x1d2a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A38u;
        // 0x1d2a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a38) {
            ctx->pc = 0x1D2B74u;
            goto label_1d2b74;
        }
    }
    ctx->pc = 0x1D2A40u;
label_1d2a40:
    // 0x1d2a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2A40u;
    {
        const bool branch_taken_0x1d2a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A40u;
        // 0x1d2a44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a40) {
            ctx->pc = 0x1D2A58u;
            goto label_1d2a58;
        }
    }
    ctx->pc = 0x1D2A48u;
    // 0x1d2a48: 0xc074a5c  jal         func_1D2970
    ctx->pc = 0x1D2A48u;
    SET_GPR_U32(ctx, 31, 0x1D2A50u);
    ctx->pc = 0x1D2A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A48u;
    // 0x1d2a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2970u, 0x1D2A48u, 0x1D2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A50u;
label_1d2a50:
    // 0x1d2a50: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1D2A50u;
    {
        const bool branch_taken_0x1d2a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A50u;
        // 0x1d2a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a50) {
            ctx->pc = 0x1D2B74u;
            goto label_1d2b74;
        }
    }
    ctx->pc = 0x1D2A58u;
label_1d2a58:
    // 0x1d2a58: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2A58u;
    {
        const bool branch_taken_0x1d2a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A58u;
        // 0x1d2a5c: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a58) {
            ctx->pc = 0x1D2A70u;
            goto label_1d2a70;
        }
    }
    ctx->pc = 0x1D2A60u;
    // 0x1d2a60: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D2A60u;
    {
        const bool branch_taken_0x1d2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a60) {
            ctx->pc = 0x1D2A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2A60u;
            // 0x1d2a64: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B70u;
            goto label_1d2b70;
        }
    }
    ctx->pc = 0x1D2A68u;
    // 0x1d2a68: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D2A68u;
    {
        const bool branch_taken_0x1d2a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A68u;
        // 0x1d2a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a68) {
            ctx->pc = 0x1D2B74u;
            goto label_1d2b74;
        }
    }
    ctx->pc = 0x1D2A70u;
label_1d2a70:
    // 0x1d2a70: 0x261207e0  addiu       $s2, $s0, 0x7E0
    ctx->pc = 0x1d2a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    // 0x1d2a74: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d2a74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2a78: 0xae5104c0  sw          $s1, 0x4C0($s2)
    ctx->pc = 0x1d2a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 17));
    // 0x1d2a7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2a80: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1d2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1d2a84: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d2a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d2a88: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d2a8c: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1D2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A94u);
    ctx->pc = 0x1D2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A8Cu;
    // 0x1d2a90: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D2A8Cu, 0x1D2A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A94u;
label_1d2a94:
    // 0x1d2a94: 0xae02078c  sw          $v0, 0x78C($s0)
    ctx->pc = 0x1d2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1932), GPR_U32(ctx, 2));
    // 0x1d2a98: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x1D2A98u;
    SET_GPR_U32(ctx, 31, 0x1D2AA0u);
    ctx->pc = 0x1D2A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A98u;
    // 0x1d2a9c: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1D2A98u, 0x1D2AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AA0u;
label_1d2aa0:
    // 0x1d2aa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d2aa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2aa4: 0x50710010  beql        $v1, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D2AA4u;
    {
        const bool branch_taken_0x1d2aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1d2aa4) {
            ctx->pc = 0x1D2AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2AA4u;
            // 0x1d2aa8: 0x8e0207d0  lw          $v0, 0x7D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2AE8u;
            goto label_1d2ae8;
        }
    }
    ctx->pc = 0x1D2AACu;
    // 0x1d2aac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2AACu;
    {
        const bool branch_taken_0x1d2aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AACu;
        // 0x1d2ab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aac) {
            ctx->pc = 0x1D2AC4u;
            goto label_1d2ac4;
        }
    }
    ctx->pc = 0x1D2AB4u;
    // 0x1d2ab4: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D2AB4u;
    {
        const bool branch_taken_0x1d2ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2ab4) {
            ctx->pc = 0x1D2AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2AB4u;
            // 0x1d2ab8: 0xae1107a0  sw          $s1, 0x7A0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1952), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B3Cu;
            goto label_1d2b3c;
        }
    }
    ctx->pc = 0x1D2ABCu;
    // 0x1d2abc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D2ABCu;
    {
        const bool branch_taken_0x1d2abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ABCu;
        // 0x1d2ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2abc) {
            ctx->pc = 0x1D2B74u;
            goto label_1d2b74;
        }
    }
    ctx->pc = 0x1D2AC4u;
label_1d2ac4:
    // 0x1d2ac4: 0x8e0207d0  lw          $v0, 0x7D0($s0)
    ctx->pc = 0x1d2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2000)));
    // 0x1d2ac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2AC8u;
    {
        const bool branch_taken_0x1d2ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AC8u;
        // 0x1d2acc: 0xae110060  sw          $s1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ac8) {
            ctx->pc = 0x1D2AD8u;
            goto label_1d2ad8;
        }
    }
    ctx->pc = 0x1D2AD0u;
    // 0x1d2ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2AD0u;
    {
        const bool branch_taken_0x1d2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AD0u;
        // 0x1d2ad4: 0xae1107ac  sw          $s1, 0x7AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1964), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ad0) {
            ctx->pc = 0x1D2ADCu;
            goto label_1d2adc;
        }
    }
    ctx->pc = 0x1D2AD8u;
label_1d2ad8:
    // 0x1d2ad8: 0xae1107a8  sw          $s1, 0x7A8($s0)
    ctx->pc = 0x1d2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1960), GPR_U32(ctx, 17));
label_1d2adc:
    // 0x1d2adc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2ae0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2AE0u;
    {
        const bool branch_taken_0x1d2ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AE0u;
        // 0x1d2ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ae0) {
            ctx->pc = 0x1D2B5Cu;
            goto label_1d2b5c;
        }
    }
    ctx->pc = 0x1D2AE8u;
label_1d2ae8:
    // 0x1d2ae8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2AE8u;
    {
        const bool branch_taken_0x1d2ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ae8) {
            ctx->pc = 0x1D2AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2AE8u;
            // 0x1d2aec: 0xae1107a4  sw          $s1, 0x7A4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1956), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B10u;
            goto label_1d2b10;
        }
    }
    ctx->pc = 0x1D2AF0u;
    // 0x1d2af0: 0xae1107a0  sw          $s1, 0x7A0($s0)
    ctx->pc = 0x1d2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1952), GPR_U32(ctx, 17));
    // 0x1d2af4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2AF4u;
    SET_GPR_U32(ctx, 31, 0x1D2AFCu);
    ctx->pc = 0x1D2AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AF4u;
    // 0x1d2af8: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2AF4u, 0x1D2AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AFCu;
label_1d2afc:
    // 0x1d2afc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b00: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D2B00u;
    SET_GPR_U32(ctx, 31, 0x1D2B08u);
    ctx->pc = 0x1D2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B00u;
    // 0x1d2b04: 0x26040830  addiu       $a0, $s0, 0x830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D2B00u, 0x1D2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B08u;
label_1d2b08:
    // 0x1d2b08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2B08u;
    {
        const bool branch_taken_0x1d2b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B08u;
        // 0x1d2b0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b08) {
            ctx->pc = 0x1D2B28u;
            goto label_1d2b28;
        }
    }
    ctx->pc = 0x1D2B10u;
label_1d2b10:
    // 0x1d2b10: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2B10u;
    SET_GPR_U32(ctx, 31, 0x1D2B18u);
    ctx->pc = 0x1D2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B10u;
    // 0x1d2b14: 0x24040105  addiu       $a0, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2B10u, 0x1D2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B18u;
label_1d2b18:
    // 0x1d2b18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b1c: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D2B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B24u);
    ctx->pc = 0x1D2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B1Cu;
    // 0x1d2b20: 0x26040830  addiu       $a0, $s0, 0x830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D2B1Cu, 0x1D2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B24u;
label_1d2b24:
    // 0x1d2b24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d2b28:
    // 0x1d2b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2b2c: 0xc44cecc0  lwc1        $f12, -0x1340($v0)
    ctx->pc = 0x1d2b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d2b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D2B34u;
    {
        const bool branch_taken_0x1d2b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B34u;
        // 0x1d2b38: 0xae030cb0  sw          $v1, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b34) {
            ctx->pc = 0x1D2B60u;
            goto label_1d2b60;
        }
    }
    ctx->pc = 0x1D2B3Cu;
label_1d2b3c:
    // 0x1d2b3c: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1d2b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x1d2b40: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2B40u;
    SET_GPR_U32(ctx, 31, 0x1D2B48u);
    ctx->pc = 0x1D2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B40u;
    // 0x1d2b44: 0xae110cb0  sw          $s1, 0xCB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2B40u, 0x1D2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B48u;
label_1d2b48:
    // 0x1d2b48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b4c: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D2B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B54u);
    ctx->pc = 0x1D2B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B4Cu;
    // 0x1d2b50: 0x26040830  addiu       $a0, $s0, 0x830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D2B4Cu, 0x1D2B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B54u;
label_1d2b54:
    // 0x1d2b54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b5c:
    // 0x1d2b5c: 0xc44cecc0  lwc1        $f12, -0x1340($v0)
    ctx->pc = 0x1d2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d2b60:
    // 0x1d2b60: 0xc075920  jal         func_1D6480
    ctx->pc = 0x1D2B60u;
    SET_GPR_U32(ctx, 31, 0x1D2B68u);
    ctx->pc = 0x1D2B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B60u;
    // 0x1d2b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1D2B60u, 0x1D2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B68u;
label_1d2b68:
    // 0x1d2b68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2B68u;
    {
        const bool branch_taken_0x1d2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B68u;
        // 0x1d2b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b68) {
            ctx->pc = 0x1D2B74u;
            goto label_1d2b74;
        }
    }
    ctx->pc = 0x1D2B70u;
label_1d2b70:
    // 0x1d2b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b74:
    // 0x1d2b74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d2b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2b78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d2b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2b7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2b80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d2b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B88u;
        // 0x1d2b8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2B90u;
}
