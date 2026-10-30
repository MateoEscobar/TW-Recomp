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

// Function: sub_0022FCE8
// Address: 0x22fce8 - 0x22fe10
void sub_0022FCE8_0x22fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FCE8_0x22fce8");
#endif

    switch (ctx->pc) {
        case 0x22fd3cu: goto label_22fd3c;
        case 0x22fd4cu: goto label_22fd4c;
        case 0x22fd64u: goto label_22fd64;
        case 0x22fd84u: goto label_22fd84;
        case 0x22fd94u: goto label_22fd94;
        case 0x22fda4u: goto label_22fda4;
        case 0x22fdb4u: goto label_22fdb4;
        case 0x22fdc4u: goto label_22fdc4;
        case 0x22fdd4u: goto label_22fdd4;
        case 0x22fdfcu: goto label_22fdfc;
        default: break;
    }

    ctx->pc = 0x22fce8u;

    // 0x22fce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fcec: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x22fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x22fcf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22fcf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fcf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22fcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcfc: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x22fcfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x22fd00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fd04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22fd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22fd08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22fd0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22fd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22fd10: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x22FD10u;
    {
        const bool branch_taken_0x22fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd10) {
            ctx->pc = 0x22FD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD10u;
            // 0x22fd14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FD18u;
    // 0x22fd18: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x22fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x22fd1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fd20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22fd20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22fd24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22fd28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22fd28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22fd2c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x22FD2Cu;
    {
        const bool branch_taken_0x22fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd2c) {
            ctx->pc = 0x22FD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD2Cu;
            // 0x22fd30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FD34u;
    // 0x22fd34: 0xc089f98  jal         func_227E60
    ctx->pc = 0x22FD34u;
    SET_GPR_U32(ctx, 31, 0x22FD3Cu);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x22FD34u, 0x22FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD3Cu;
label_22fd3c:
    // 0x22fd3c: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x22FD3Cu;
    {
        const bool branch_taken_0x22fd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd3c) {
            ctx->pc = 0x22FD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD3Cu;
            // 0x22fd40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FD44u;
    // 0x22fd44: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x22FD44u;
    SET_GPR_U32(ctx, 31, 0x22FD4Cu);
    ctx->pc = 0x22FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD44u;
    // 0x22fd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x22FD44u, 0x22FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD4Cu;
label_22fd4c:
    // 0x22fd4c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x22FD4Cu;
    {
        const bool branch_taken_0x22fd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd4c) {
            ctx->pc = 0x22FD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD4Cu;
            // 0x22fd50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FD54u;
    // 0x22fd54: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x22fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x22fd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd5c: 0xc089998  jal         func_226660
    ctx->pc = 0x22FD5Cu;
    SET_GPR_U32(ctx, 31, 0x22FD64u);
    ctx->pc = 0x22FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD5Cu;
    // 0x22fd60: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22FD5Cu, 0x22FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD64u;
label_22fd64:
    // 0x22fd64: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x22FD64u;
    {
        const bool branch_taken_0x22fd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd64) {
            ctx->pc = 0x22FD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD64u;
            // 0x22fd68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FD6Cu;
    // 0x22fd6c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x22fd70: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22fd70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22fd74: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x22FD74u;
    {
        const bool branch_taken_0x22fd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd74) {
            ctx->pc = 0x22FD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD74u;
            // 0x22fd78: 0xae0006c0  sw          $zero, 0x6C0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDF4u;
            goto label_22fdf4;
        }
    }
    ctx->pc = 0x22FD7Cu;
    // 0x22fd7c: 0xc088e90  jal         func_223A40
    ctx->pc = 0x22FD7Cu;
    SET_GPR_U32(ctx, 31, 0x22FD84u);
    ctx->pc = 0x22FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD7Cu;
    // 0x22fd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x22FD7Cu, 0x22FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD84u;
label_22fd84:
    // 0x22fd84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22FD84u;
    {
        const bool branch_taken_0x22fd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd84) {
            ctx->pc = 0x22FDBCu;
            goto label_22fdbc;
        }
    }
    ctx->pc = 0x22FD8Cu;
    // 0x22fd8c: 0xc088e94  jal         func_223A50
    ctx->pc = 0x22FD8Cu;
    SET_GPR_U32(ctx, 31, 0x22FD94u);
    ctx->pc = 0x22FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD8Cu;
    // 0x22fd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x22FD8Cu, 0x22FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD94u;
label_22fd94:
    // 0x22fd94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22FD94u;
    {
        const bool branch_taken_0x22fd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd94) {
            ctx->pc = 0x22FDBCu;
            goto label_22fdbc;
        }
    }
    ctx->pc = 0x22FD9Cu;
    // 0x22fd9c: 0xc088e98  jal         func_223A60
    ctx->pc = 0x22FD9Cu;
    SET_GPR_U32(ctx, 31, 0x22FDA4u);
    ctx->pc = 0x22FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD9Cu;
    // 0x22fda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x22FD9Cu, 0x22FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDA4u;
label_22fda4:
    // 0x22fda4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FDA4u;
    {
        const bool branch_taken_0x22fda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fda4) {
            ctx->pc = 0x22FDBCu;
            goto label_22fdbc;
        }
    }
    ctx->pc = 0x22FDACu;
    // 0x22fdac: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x22FDACu;
    SET_GPR_U32(ctx, 31, 0x22FDB4u);
    ctx->pc = 0x22FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDACu;
    // 0x22fdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x22FDACu, 0x22FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDB4u;
label_22fdb4:
    // 0x22fdb4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x22FDB4u;
    {
        const bool branch_taken_0x22fdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fdb4) {
            ctx->pc = 0x22FDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FDB4u;
            // 0x22fdb8: 0xae0006c0  sw          $zero, 0x6C0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDF4u;
            goto label_22fdf4;
        }
    }
    ctx->pc = 0x22FDBCu;
label_22fdbc:
    // 0x22fdbc: 0xc089fee  jal         func_227FB8
    ctx->pc = 0x22FDBCu;
    SET_GPR_U32(ctx, 31, 0x22FDC4u);
    ctx->pc = 0x22FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDBCu;
    // 0x22fdc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x22FDBCu, 0x22FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDC4u;
label_22fdc4:
    // 0x22fdc4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FDC4u;
    {
        const bool branch_taken_0x22fdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fdc4) {
            ctx->pc = 0x22FDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FDC4u;
            // 0x22fdc8: 0x8e0206c0  lw          $v0, 0x6C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDDCu;
            goto label_22fddc;
        }
    }
    ctx->pc = 0x22FDCCu;
    // 0x22fdcc: 0xc08648e  jal         func_219238
    ctx->pc = 0x22FDCCu;
    SET_GPR_U32(ctx, 31, 0x22FDD4u);
    ctx->pc = 0x22FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDCCu;
    // 0x22fdd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219238u, 0x22FDCCu, 0x22FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDD4u;
label_22fdd4:
    // 0x22fdd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22FDD4u;
    {
        const bool branch_taken_0x22fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDD4u;
        // 0x22fdd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdd4) {
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FDDCu;
label_22fddc:
    // 0x22fddc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FDDCu;
    {
        const bool branch_taken_0x22fddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fddc) {
            ctx->pc = 0x22FDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FDDCu;
            // 0x22fde0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FDE4u;
    // 0x22fde4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x22fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x22fde8: 0x8c430224  lw          $v1, 0x224($v0)
    ctx->pc = 0x22fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510224u));
    // 0x22fdec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22FDECu;
    {
        const bool branch_taken_0x22fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDECu;
        // 0x22fdf0: 0xae0306c0  sw          $v1, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdec) {
            ctx->pc = 0x22FDFCu;
            goto label_22fdfc;
        }
    }
    ctx->pc = 0x22FDF4u;
label_22fdf4:
    // 0x22fdf4: 0xc08648e  jal         func_219238
    ctx->pc = 0x22FDF4u;
    SET_GPR_U32(ctx, 31, 0x22FDFCu);
    ctx->pc = 0x22FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDF4u;
    // 0x22fdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219238u, 0x22FDF4u, 0x22FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDFCu;
label_22fdfc:
    // 0x22fdfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22fdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22fe00:
    // 0x22fe00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fe04: 0x3e00008  jr          $ra
    ctx->pc = 0x22FE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE04u;
        // 0x22fe08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FE0Cu;
    // 0x22fe0c: 0x0  nop
    ctx->pc = 0x22fe0cu;
    // NOP
    ctx->pc = 0x22fe10u;
}
