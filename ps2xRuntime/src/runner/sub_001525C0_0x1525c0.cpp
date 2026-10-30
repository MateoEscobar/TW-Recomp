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

// Function: sub_001525C0
// Address: 0x1525c0 - 0x152740
void sub_001525C0_0x1525c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001525C0_0x1525c0");
#endif

    switch (ctx->pc) {
        case 0x152624u: goto label_152624;
        case 0x152644u: goto label_152644;
        case 0x152664u: goto label_152664;
        case 0x1526a0u: goto label_1526a0;
        case 0x1526c0u: goto label_1526c0;
        case 0x152728u: goto label_152728;
        default: break;
    }

    ctx->pc = 0x1525c0u;

    // 0x1525c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1525c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1525c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1525c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1525c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1525cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1525ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525d0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1525d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1525d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1525d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1525d8: 0x8e23c5d8  lw          $v1, -0x3A28($s1)
    ctx->pc = 0x1525d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x1525dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1525DCu;
    {
        const bool branch_taken_0x1525dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525DCu;
        // 0x1525e0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525dc) {
            ctx->pc = 0x1525F8u;
            goto label_1525f8;
        }
    }
    ctx->pc = 0x1525E4u;
    // 0x1525e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1525e8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1525E8u;
    {
        const bool branch_taken_0x1525e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1525ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525E8u;
        // 0x1525ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525e8) {
            ctx->pc = 0x152678u;
            goto label_152678;
        }
    }
    ctx->pc = 0x1525F0u;
    // 0x1525f0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1525F0u;
    {
        const bool branch_taken_0x1525f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525F0u;
        // 0x1525f4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525f0) {
            ctx->pc = 0x152730u;
            goto label_152730;
        }
    }
    ctx->pc = 0x1525F8u;
label_1525f8:
    // 0x1525f8: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1525f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x1525fc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1525fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152600: 0x261046a4  addiu       $s0, $s0, 0x46A4
    ctx->pc = 0x152600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18084));
    // 0x152604: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152608: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x15260c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152610: 0x24a5d580  addiu       $a1, $a1, -0x2A80
    ctx->pc = 0x152610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
    // 0x152614: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152618: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x15261c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x15261Cu;
    SET_GPR_U32(ctx, 31, 0x152624u);
    ctx->pc = 0x152620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15261Cu;
    // 0x152620: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15261Cu, 0x152624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152624u;
label_152624:
    // 0x152624: 0x8e05ffc8  lw          $a1, -0x38($s0)
    ctx->pc = 0x152624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967240)));
    // 0x152628: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x152628u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x15262c: 0x8e04ffc4  lw          $a0, -0x3C($s0)
    ctx->pc = 0x15262cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967236)));
    // 0x152630: 0x25294b40  addiu       $t1, $t1, 0x4B40
    ctx->pc = 0x152630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19264));
    // 0x152634: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15263c: 0xc111638  jal         func_4458E0
    ctx->pc = 0x15263Cu;
    SET_GPR_U32(ctx, 31, 0x152644u);
    ctx->pc = 0x152640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15263Cu;
    // 0x152640: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x15263Cu, 0x152644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152644u;
label_152644:
    // 0x152644: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152648: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152648u;
    {
        const bool branch_taken_0x152648 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152648u;
        // 0x15264c: 0x8e22c5d8  lw          $v0, -0x3A28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152648) {
            ctx->pc = 0x15266Cu;
            goto label_15266c;
        }
    }
    ctx->pc = 0x152650u;
    // 0x152650: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152654: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x152654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152658: 0xac43c5ec  sw          $v1, -0x3A14($v0)
    ctx->pc = 0x152658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
    // 0x15265c: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x15265Cu;
    SET_GPR_U32(ctx, 31, 0x152664u);
    ctx->pc = 0x152660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15265Cu;
    // 0x152660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x15265Cu, 0x152664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152664u;
label_152664:
    // 0x152664: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x152664u;
    {
        const bool branch_taken_0x152664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152664u;
        // 0x152668: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152664) {
            ctx->pc = 0x15272Cu;
            goto label_15272c;
        }
    }
    ctx->pc = 0x15266Cu;
label_15266c:
    // 0x15266c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152670: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x152670u;
    {
        const bool branch_taken_0x152670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152670u;
        // 0x152674: 0xae22c5d8  sw          $v0, -0x3A28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152670) {
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x152678u;
label_152678:
    // 0x152678: 0x14c3002d  bne         $a2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x152678u;
    {
        const bool branch_taken_0x152678 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x15267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152678u;
        // 0x15267c: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152678) {
            ctx->pc = 0x152730u;
            goto label_152730;
        }
    }
    ctx->pc = 0x152680u;
    // 0x152680: 0x4e00020  bltz        $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x152680u;
    {
        const bool branch_taken_0x152680 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x152684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152680u;
        // 0x152684: 0x24e2fffe  addiu       $v0, $a3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152680) {
            ctx->pc = 0x152704u;
            goto label_152704;
        }
    }
    ctx->pc = 0x152688u;
    // 0x152688: 0x28420013  slti        $v0, $v0, 0x13
    ctx->pc = 0x152688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x15268c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15268Cu;
    {
        const bool branch_taken_0x15268c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15268Cu;
        // 0x152690: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15268c) {
            ctx->pc = 0x1526A8u;
            goto label_1526a8;
        }
    }
    ctx->pc = 0x152694u;
    // 0x152694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152698: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152698u;
    SET_GPR_U32(ctx, 31, 0x1526A0u);
    ctx->pc = 0x15269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152698u;
    // 0x15269c: 0x8c45c5ec  lw          $a1, -0x3A14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152698u, 0x1526A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526A0u;
label_1526a0:
    // 0x1526a0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1526A0u;
    {
        const bool branch_taken_0x1526a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526A0u;
        // 0x1526a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526a0) {
            ctx->pc = 0x15272Cu;
            goto label_15272c;
        }
    }
    ctx->pc = 0x1526A8u;
label_1526a8:
    // 0x1526a8: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1526A8u;
    {
        const bool branch_taken_0x1526a8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1526ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526A8u;
        // 0x1526ac: 0x24e4ffff  addiu       $a0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526a8) {
            ctx->pc = 0x1526DCu;
            goto label_1526dc;
        }
    }
    ctx->pc = 0x1526B0u;
    // 0x1526b0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1526b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1526b4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1526b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526b8: 0x24424b40  addiu       $v0, $v0, 0x4B40
    ctx->pc = 0x1526b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19264));
    // 0x1526bc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1526bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1526c0:
    // 0x1526c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1526c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1526c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1526c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1526c8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1526c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1526cc: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1526ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1526d0: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x1526d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x1526d4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1526D4u;
    {
        const bool branch_taken_0x1526d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1526D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D4u;
        // 0x1526d8: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d4) {
            ctx->pc = 0x1526C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1526c0;
        }
    }
    ctx->pc = 0x1526DCu;
label_1526dc:
    // 0x1526dc: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x1526dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1526e0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1526e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1526e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1526e8: 0x24634668  addiu       $v1, $v1, 0x4668
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18024));
    // 0x1526ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1526ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1526f0: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1526f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1526f4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1526f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1526f8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1526f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1526fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1526FCu;
    {
        const bool branch_taken_0x1526fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526FCu;
        // 0x152700: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526fc) {
            ctx->pc = 0x15271Cu;
            goto label_15271c;
        }
    }
    ctx->pc = 0x152704u;
label_152704:
    // 0x152704: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x152704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x152708: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x152708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15270c: 0x8c434680  lw          $v1, 0x4680($v0)
    ctx->pc = 0x15270cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E4680u));
    // 0x152710: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x152710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x152714: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x152714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x152718: 0xac87c5ec  sw          $a3, -0x3A14($a0)
    ctx->pc = 0x152718u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
label_15271c:
    // 0x15271c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152720: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152720u;
    SET_GPR_U32(ctx, 31, 0x152728u);
    ctx->pc = 0x152724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152720u;
    // 0x152724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152720u, 0x152728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152728u;
label_152728:
    // 0x152728: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x152728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15272c:
    // 0x15272c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x15272cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_152730:
    // 0x152730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152734: 0x3e00008  jr          $ra
    ctx->pc = 0x152734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152734u;
        // 0x152738: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15273Cu;
    // 0x15273c: 0x0  nop
    ctx->pc = 0x15273cu;
    // NOP
    ctx->pc = 0x152740u;
}
