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

// Function: sub_001523D8
// Address: 0x1523d8 - 0x1524c8
void sub_001523D8_0x1523d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001523D8_0x1523d8");
#endif

    switch (ctx->pc) {
        case 0x152428u: goto label_152428;
        case 0x15245cu: goto label_15245c;
        case 0x15246cu: goto label_15246c;
        case 0x1524a0u: goto label_1524a0;
        case 0x1524b0u: goto label_1524b0;
        default: break;
    }

    ctx->pc = 0x1523d8u;

    // 0x1523d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1523d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1523dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1523dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1523e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1523e4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1523e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1523e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1523e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1523ec: 0x8e23c5d8  lw          $v1, -0x3A28($s1)
    ctx->pc = 0x1523ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x1523f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1523F0u;
    {
        const bool branch_taken_0x1523f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523F0u;
        // 0x1523f4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523f0) {
            ctx->pc = 0x15240Cu;
            goto label_15240c;
        }
    }
    ctx->pc = 0x1523F8u;
    // 0x1523f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1523fc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1523FCu;
    {
        const bool branch_taken_0x1523fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523FCu;
        // 0x152400: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523fc) {
            ctx->pc = 0x15247Cu;
            goto label_15247c;
        }
    }
    ctx->pc = 0x152404u;
    // 0x152404: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x152404u;
    {
        const bool branch_taken_0x152404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152404u;
        // 0x152408: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152404) {
            ctx->pc = 0x1524B8u;
            goto label_1524b8;
        }
    }
    ctx->pc = 0x15240Cu;
label_15240c:
    // 0x15240c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15240cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x152410: 0x8c62c5e4  lw          $v0, -0x3A1C($v1)
    ctx->pc = 0x152410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C5E4u));
    // 0x152414: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x152414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x152418: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152418u;
    {
        const bool branch_taken_0x152418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152418u;
        // 0x15241c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152418) {
            ctx->pc = 0x152430u;
            goto label_152430;
        }
    }
    ctx->pc = 0x152420u;
    // 0x152420: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152420u;
    SET_GPR_U32(ctx, 31, 0x152428u);
    ctx->pc = 0x152424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152420u;
    // 0x152424: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152420u, 0x152428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152428u;
label_152428:
    // 0x152428: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x152428u;
    {
        const bool branch_taken_0x152428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152428u;
        // 0x15242c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152428) {
            ctx->pc = 0x1524B4u;
            goto label_1524b4;
        }
    }
    ctx->pc = 0x152430u;
label_152430:
    // 0x152430: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x152434: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x152434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152438: 0x261046a4  addiu       $s0, $s0, 0x46A4
    ctx->pc = 0x152438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18084));
    // 0x15243c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x15243cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152440: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152448: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x152448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15244c: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x15244cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152450: 0x24a5d590  addiu       $a1, $a1, -0x2A70
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
    // 0x152454: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x152454u;
    SET_GPR_U32(ctx, 31, 0x15245Cu);
    ctx->pc = 0x152458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152454u;
    // 0x152458: 0x24c64650  addiu       $a2, $a2, 0x4650 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x152454u, 0x15245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15245Cu;
label_15245c:
    // 0x15245c: 0x8e05ffc8  lw          $a1, -0x38($s0)
    ctx->pc = 0x15245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967240)));
    // 0x152460: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152464: 0xc111482  jal         func_445208
    ctx->pc = 0x152464u;
    SET_GPR_U32(ctx, 31, 0x15246Cu);
    ctx->pc = 0x152468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152464u;
    // 0x152468: 0x8e04ffc4  lw          $a0, -0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445208u, 0x152464u, 0x15246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15246Cu;
label_15246c:
    // 0x15246c: 0x8e23c5d8  lw          $v1, -0x3A28($s1)
    ctx->pc = 0x15246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952408)));
    // 0x152470: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x152474: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x152474u;
    {
        const bool branch_taken_0x152474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152474u;
        // 0x152478: 0xae23c5d8  sw          $v1, -0x3A28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152474) {
            ctx->pc = 0x1524B0u;
            goto label_1524b0;
        }
    }
    ctx->pc = 0x15247Cu;
label_15247c:
    // 0x15247c: 0x14c3000e  bne         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15247Cu;
    {
        const bool branch_taken_0x15247c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x152480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15247Cu;
        // 0x152480: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15247c) {
            ctx->pc = 0x1524B8u;
            goto label_1524b8;
        }
    }
    ctx->pc = 0x152484u;
    // 0x152484: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x152484u;
    {
        const bool branch_taken_0x152484 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x152484) {
            ctx->pc = 0x152488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152484u;
            // 0x152488: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1524A8u;
            goto label_1524a8;
        }
    }
    ctx->pc = 0x15248Cu;
    // 0x15248c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152490: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x152490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152494: 0xac44c5ec  sw          $a0, -0x3A14($v0)
    ctx->pc = 0x152494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
    // 0x152498: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152498u;
    SET_GPR_U32(ctx, 31, 0x1524A0u);
    ctx->pc = 0x15249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152498u;
    // 0x15249c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152498u, 0x1524A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524A0u;
label_1524a0:
    // 0x1524a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1524A0u;
    {
        const bool branch_taken_0x1524a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524A0u;
        // 0x1524a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524a0) {
            ctx->pc = 0x1524B4u;
            goto label_1524b4;
        }
    }
    ctx->pc = 0x1524A8u;
label_1524a8:
    // 0x1524a8: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1524A8u;
    SET_GPR_U32(ctx, 31, 0x1524B0u);
    ctx->pc = 0x1524ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524A8u;
    // 0x1524ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1524A8u, 0x1524B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524B0u;
label_1524b0:
    // 0x1524b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1524b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1524b4:
    // 0x1524b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1524b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1524b8:
    // 0x1524b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1524b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1524bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1524BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1524C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524BCu;
        // 0x1524c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1524BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1524C4u;
    // 0x1524c4: 0x0  nop
    ctx->pc = 0x1524c4u;
    // NOP
    ctx->pc = 0x1524c8u;
}
