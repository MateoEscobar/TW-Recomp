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

// Function: sub_0014E6A0
// Address: 0x14e6a0 - 0x14e770
void sub_0014E6A0_0x14e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E6A0_0x14e6a0");
#endif

    switch (ctx->pc) {
        case 0x14e6c4u: goto label_14e6c4;
        case 0x14e6dcu: goto label_14e6dc;
        case 0x14e71cu: goto label_14e71c;
        case 0x14e73cu: goto label_14e73c;
        case 0x14e748u: goto label_14e748;
        case 0x14e750u: goto label_14e750;
        case 0x14e758u: goto label_14e758;
        default: break;
    }

    ctx->pc = 0x14e6a0u;

    // 0x14e6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e6a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6ac: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E6ACu;
    {
        const bool branch_taken_0x14e6ac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6ACu;
        // 0x14e6b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6ac) {
            ctx->pc = 0x14E6BCu;
            goto label_14e6bc;
        }
    }
    ctx->pc = 0x14E6B4u;
    // 0x14e6b4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14E6B4u;
    {
        const bool branch_taken_0x14e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6B4u;
        // 0x14e6b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6b4) {
            ctx->pc = 0x14E75Cu;
            goto label_14e75c;
        }
    }
    ctx->pc = 0x14E6BCu;
label_14e6bc:
    // 0x14e6bc: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E6BCu;
    SET_GPR_U32(ctx, 31, 0x14E6C4u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E6BCu, 0x14E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6C4u;
label_14e6c4:
    // 0x14e6c4: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x14e6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14e6c8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14E6C8u;
    {
        const bool branch_taken_0x14e6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C8u;
        // 0x14e6cc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6c8) {
            ctx->pc = 0x14E724u;
            goto label_14e724;
        }
    }
    ctx->pc = 0x14E6D0u;
    // 0x14e6d0: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x14e6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x14e6d4: 0xc0540d2  jal         func_150348
    ctx->pc = 0x14E6D4u;
    SET_GPR_U32(ctx, 31, 0x14E6DCu);
    ctx->pc = 0x14E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6D4u;
    // 0x14e6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150348u, 0x14E6D4u, 0x14E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6DCu;
label_14e6dc:
    // 0x14e6dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14e6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6e0: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x14E6E0u;
    {
        const bool branch_taken_0x14e6e0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x14E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6E0u;
        // 0x14e6e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6e0) {
            ctx->pc = 0x14E714u;
            goto label_14e714;
        }
    }
    ctx->pc = 0x14E6E8u;
    // 0x14e6e8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14e6ec: 0x2442c278  addiu       $v0, $v0, -0x3D88
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951544));
    // 0x14e6f0: 0x24633ac8  addiu       $v1, $v1, 0x3AC8
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15048));
    // 0x14e6f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14e6f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e6fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14e700: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e704: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x14e704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14e708: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14e708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e70c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14E70Cu;
    {
        const bool branch_taken_0x14e70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E70Cu;
        // 0x14e710: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e70c) {
            ctx->pc = 0x14E734u;
            goto label_14e734;
        }
    }
    ctx->pc = 0x14E714u;
label_14e714:
    // 0x14e714: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E714u;
    SET_GPR_U32(ctx, 31, 0x14E71Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E714u, 0x14E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E71Cu;
label_14e71c:
    // 0x14e71c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14E71Cu;
    {
        const bool branch_taken_0x14e71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E71Cu;
        // 0x14e720: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e71c) {
            ctx->pc = 0x14E75Cu;
            goto label_14e75c;
        }
    }
    ctx->pc = 0x14E724u;
label_14e724:
    // 0x14e724: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14e724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e728: 0x24423ac8  addiu       $v0, $v0, 0x3AC8
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x14e72c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14e730: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x14e730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_14e734:
    // 0x14e734: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E734u;
    SET_GPR_U32(ctx, 31, 0x14E73Cu);
    ctx->pc = 0x14E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E734u;
    // 0x14e738: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E734u, 0x14E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E73Cu;
label_14e73c:
    // 0x14e73c: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x14e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e740: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E740u;
    SET_GPR_U32(ctx, 31, 0x14E748u);
    ctx->pc = 0x14E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E740u;
    // 0x14e744: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E740u, 0x14E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E748u;
label_14e748:
    // 0x14e748: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E748u;
    SET_GPR_U32(ctx, 31, 0x14E750u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E748u, 0x14E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E750u;
label_14e750:
    // 0x14e750: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E750u;
    SET_GPR_U32(ctx, 31, 0x14E758u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E750u, 0x14E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E758u;
label_14e758:
    // 0x14e758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14e758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e75c:
    // 0x14e75c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e764: 0x3e00008  jr          $ra
    ctx->pc = 0x14E764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E764u;
        // 0x14e768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E76Cu;
    // 0x14e76c: 0x0  nop
    ctx->pc = 0x14e76cu;
    // NOP
    ctx->pc = 0x14e770u;
}
