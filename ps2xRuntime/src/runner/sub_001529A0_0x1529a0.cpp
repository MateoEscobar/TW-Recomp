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

// Function: sub_001529A0
// Address: 0x1529a0 - 0x152bf0
void sub_001529A0_0x1529a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001529A0_0x1529a0");
#endif

    switch (ctx->pc) {
        case 0x152a1cu: goto label_152a1c;
        case 0x152a3cu: goto label_152a3c;
        case 0x152a88u: goto label_152a88;
        case 0x152aa8u: goto label_152aa8;
        case 0x152ad8u: goto label_152ad8;
        case 0x152ae0u: goto label_152ae0;
        case 0x152bd0u: goto label_152bd0;
        default: break;
    }

    ctx->pc = 0x1529a0u;

    // 0x1529a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1529a4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1529a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1529a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1529a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1529ac: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1529acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1529b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1529b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529b4: 0x8e43c5d8  lw          $v1, -0x3A28($s2)
    ctx->pc = 0x1529b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x1529b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1529b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1529bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1529bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1529c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1529c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1529c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1529c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1529C8u;
    {
        const bool branch_taken_0x1529c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529C8u;
        // 0x1529cc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529c8) {
            ctx->pc = 0x1529E4u;
            goto label_1529e4;
        }
    }
    ctx->pc = 0x1529D0u;
    // 0x1529d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1529d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1529d4: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1529D4u;
    {
        const bool branch_taken_0x1529d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1529D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529D4u;
        // 0x1529d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529d4) {
            ctx->pc = 0x152A64u;
            goto label_152a64;
        }
    }
    ctx->pc = 0x1529DCu;
    // 0x1529dc: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1529DCu;
    {
        const bool branch_taken_0x1529dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529DCu;
        // 0x1529e0: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529dc) {
            ctx->pc = 0x152BD8u;
            goto label_152bd8;
        }
    }
    ctx->pc = 0x1529E4u;
label_1529e4:
    // 0x1529e4: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x1529e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x1529e8: 0x26304668  addiu       $s0, $s1, 0x4668
    ctx->pc = 0x1529e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18024));
    // 0x1529ec: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1529ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E4690u));
    // 0x1529f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1529F0u;
    {
        const bool branch_taken_0x1529f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1529f0) {
            ctx->pc = 0x1529F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1529F0u;
            // 0x1529f4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1529F8u;
            goto label_1529f8;
        }
    }
    ctx->pc = 0x1529F8u;
label_1529f8:
    // 0x1529f8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1529fc: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x1529fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152a00: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a08: 0x24a5d580  addiu       $a1, $a1, -0x2A80
    ctx->pc = 0x152a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
    // 0x152a0c: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152a10: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152a14: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x152A14u;
    SET_GPR_U32(ctx, 31, 0x152A1Cu);
    ctx->pc = 0x152A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A14u;
    // 0x152a18: 0x2608003c  addiu       $t0, $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x152A14u, 0x152A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A1Cu;
label_152a1c:
    // 0x152a1c: 0x8e244668  lw          $a0, 0x4668($s1)
    ctx->pc = 0x152a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18024)));
    // 0x152a20: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x152a20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x152a24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x152a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152a28: 0x25294b40  addiu       $t1, $t1, 0x4B40
    ctx->pc = 0x152a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19264));
    // 0x152a2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a34: 0xc111638  jal         func_4458E0
    ctx->pc = 0x152A34u;
    SET_GPR_U32(ctx, 31, 0x152A3Cu);
    ctx->pc = 0x152A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A34u;
    // 0x152a38: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x152A34u, 0x152A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A3Cu;
label_152a3c:
    // 0x152a3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152a3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a40: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152A40u;
    {
        const bool branch_taken_0x152a40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A40u;
        // 0x152a44: 0x8e42c5d8  lw          $v0, -0x3A28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a40) {
            ctx->pc = 0x152A58u;
            goto label_152a58;
        }
    }
    ctx->pc = 0x152A48u;
    // 0x152a48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152a4c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x152a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152A50u;
    {
        const bool branch_taken_0x152a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A50u;
        // 0x152a54: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a50) {
            ctx->pc = 0x152A80u;
            goto label_152a80;
        }
    }
    ctx->pc = 0x152A58u;
label_152a58:
    // 0x152a58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152a5c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x152A5Cu;
    {
        const bool branch_taken_0x152a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A5Cu;
        // 0x152a60: 0xae42c5d8  sw          $v0, -0x3A28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a5c) {
            ctx->pc = 0x152BD0u;
            goto label_152bd0;
        }
    }
    ctx->pc = 0x152A64u;
label_152a64:
    // 0x152a64: 0x54c3005c  bnel        $a2, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x152A64u;
    {
        const bool branch_taken_0x152a64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x152a64) {
            ctx->pc = 0x152A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152A64u;
            // 0x152a68: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152BD8u;
            goto label_152bd8;
        }
    }
    ctx->pc = 0x152A6Cu;
    // 0x152a6c: 0x6210008  bgez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152A6Cu;
    {
        const bool branch_taken_0x152a6c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x152A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A6Cu;
        // 0x152a70: 0x2622fffe  addiu       $v0, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a6c) {
            ctx->pc = 0x152A90u;
            goto label_152a90;
        }
    }
    ctx->pc = 0x152A74u;
    // 0x152a74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a7c: 0xac51c5ec  sw          $s1, -0x3A14($v0)
    ctx->pc = 0x152a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
label_152a80:
    // 0x152a80: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152A80u;
    SET_GPR_U32(ctx, 31, 0x152A88u);
    ctx->pc = 0x152A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A80u;
    // 0x152a84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152A80u, 0x152A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A88u;
label_152a88:
    // 0x152a88: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x152A88u;
    {
        const bool branch_taken_0x152a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A88u;
        // 0x152a8c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a88) {
            ctx->pc = 0x152BD4u;
            goto label_152bd4;
        }
    }
    ctx->pc = 0x152A90u;
label_152a90:
    // 0x152a90: 0x28420013  slti        $v0, $v0, 0x13
    ctx->pc = 0x152a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x152a94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x152A94u;
    {
        const bool branch_taken_0x152a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A94u;
        // 0x152a98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a94) {
            ctx->pc = 0x152AB0u;
            goto label_152ab0;
        }
    }
    ctx->pc = 0x152A9Cu;
    // 0x152a9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152aa0: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152AA0u;
    SET_GPR_U32(ctx, 31, 0x152AA8u);
    ctx->pc = 0x152AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AA0u;
    // 0x152aa4: 0x8c45c5ec  lw          $a1, -0x3A14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152AA0u, 0x152AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AA8u;
label_152aa8:
    // 0x152aa8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x152AA8u;
    {
        const bool branch_taken_0x152aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AA8u;
        // 0x152aac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152aa8) {
            ctx->pc = 0x152BD4u;
            goto label_152bd4;
        }
    }
    ctx->pc = 0x152AB0u;
label_152ab0:
    // 0x152ab0: 0x1a20003d  blez        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x152AB0u;
    {
        const bool branch_taken_0x152ab0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x152AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AB0u;
        // 0x152ab4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ab0) {
            ctx->pc = 0x152BA8u;
            goto label_152ba8;
        }
    }
    ctx->pc = 0x152AB8u;
    // 0x152ab8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x152abc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x152abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x152ac0: 0x24424b60  addiu       $v0, $v0, 0x4B60
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19296));
    // 0x152ac4: 0x247446c4  addiu       $s4, $v1, 0x46C4
    ctx->pc = 0x152ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 18116));
    // 0x152ac8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x152ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152acc: 0x2450ffe0  addiu       $s0, $v0, -0x20
    ctx->pc = 0x152accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x152ad0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ad4: 0x0  nop
    ctx->pc = 0x152ad4u;
    // NOP
label_152ad8:
    // 0x152ad8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x152AD8u;
    SET_GPR_U32(ctx, 31, 0x152AE0u);
    ctx->pc = 0x152ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AD8u;
    // 0x152adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x152AD8u, 0x152AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AE0u;
label_152ae0:
    // 0x152ae0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x152ae0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x152ae4: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x152AE4u;
    {
        const bool branch_taken_0x152ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AE4u;
        // 0x152ae8: 0x2684ffa4  addiu       $a0, $s4, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ae4) {
            ctx->pc = 0x152B8Cu;
            goto label_152b8c;
        }
    }
    ctx->pc = 0x152AECu;
    // 0x152aec: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x152aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x152af0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x152AF0u;
    {
        const bool branch_taken_0x152af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152af0) {
            ctx->pc = 0x152AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152AF0u;
            // 0x152af4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152B04u;
            goto label_152b04;
        }
    }
    ctx->pc = 0x152AF8u;
    // 0x152af8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x152af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x152afc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x152afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x152b00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x152b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_152b04:
    // 0x152b04: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x152B04u;
    {
        const bool branch_taken_0x152b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b04) {
            ctx->pc = 0x152B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152B04u;
            // 0x152b08: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152B90u;
            goto label_152b90;
        }
    }
    ctx->pc = 0x152B0Cu;
    // 0x152b0c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x152b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x152b10: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x152b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x152b14: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x152b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x152b18: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x152b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x152b1c: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x152b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x152b20: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x152b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x152b24: 0x6a07001f  ldl         $a3, 0x1F($s0)
    ctx->pc = 0x152b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x152b28: 0x6e070018  ldr         $a3, 0x18($s0)
    ctx->pc = 0x152b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x152b2c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x152b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b30: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x152b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b34: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x152b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b38: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x152b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b3c: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x152b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b40: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x152b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b44: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x152b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b48: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x152b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b4c: 0x6a030027  ldl         $v1, 0x27($s0)
    ctx->pc = 0x152b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x152b50: 0x6e030020  ldr         $v1, 0x20($s0)
    ctx->pc = 0x152b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x152b54: 0x6a04002f  ldl         $a0, 0x2F($s0)
    ctx->pc = 0x152b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x152b58: 0x6e040028  ldr         $a0, 0x28($s0)
    ctx->pc = 0x152b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x152b5c: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x152b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x152b60: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x152b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x152b64: 0x6a07003f  ldl         $a3, 0x3F($s0)
    ctx->pc = 0x152b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x152b68: 0x6e070038  ldr         $a3, 0x38($s0)
    ctx->pc = 0x152b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x152b6c: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x152b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b70: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x152b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b74: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x152b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b78: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x152b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b7c: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x152b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b80: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x152b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b84: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x152b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152b88: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x152b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_152b8c:
    // 0x152b8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x152b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_152b90:
    // 0x152b90: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x152b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x152b94: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x152b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x152b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152B98u;
    {
        const bool branch_taken_0x152b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B98u;
        // 0x152b9c: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b98) {
            ctx->pc = 0x152BA8u;
            goto label_152ba8;
        }
    }
    ctx->pc = 0x152BA0u;
    // 0x152ba0: 0x50a0ffcd  beql        $a1, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x152BA0u;
    {
        const bool branch_taken_0x152ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ba0) {
            ctx->pc = 0x152BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152BA0u;
            // 0x152ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152ad8;
        }
    }
    ctx->pc = 0x152BA8u;
label_152ba8:
    // 0x152ba8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x152BA8u;
    {
        const bool branch_taken_0x152ba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x152BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BA8u;
        // 0x152bac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ba8) {
            ctx->pc = 0x152BC8u;
            goto label_152bc8;
        }
    }
    ctx->pc = 0x152BB0u;
    // 0x152bb0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x152bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x152bb4: 0x8c434690  lw          $v1, 0x4690($v0)
    ctx->pc = 0x152bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E4690u));
    // 0x152bb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152BB8u;
    {
        const bool branch_taken_0x152bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BB8u;
        // 0x152bbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bb8) {
            ctx->pc = 0x152BC8u;
            goto label_152bc8;
        }
    }
    ctx->pc = 0x152BC0u;
    // 0x152bc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x152bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x152bc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152bc8:
    // 0x152bc8: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152BC8u;
    SET_GPR_U32(ctx, 31, 0x152BD0u);
    ctx->pc = 0x152BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BC8u;
    // 0x152bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152BC8u, 0x152BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BD0u;
label_152bd0:
    // 0x152bd0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x152bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_152bd4:
    // 0x152bd4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x152bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_152bd8:
    // 0x152bd8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x152bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152bdc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x152bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152be0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x152be0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152be4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152be8: 0x3e00008  jr          $ra
    ctx->pc = 0x152BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BE8u;
        // 0x152bec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152BF0u;
}
