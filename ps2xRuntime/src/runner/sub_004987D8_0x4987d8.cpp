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

// Function: sub_004987D8
// Address: 0x4987d8 - 0x498890
void sub_004987D8_0x4987d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004987D8_0x4987d8");
#endif

    switch (ctx->pc) {
        case 0x49880cu: goto label_49880c;
        case 0x498868u: goto label_498868;
        default: break;
    }

    ctx->pc = 0x4987d8u;

    // 0x4987d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4987d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4987dc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4987dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4987e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4987e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4987e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4987e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4987e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4987e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4987ec: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x4987ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x4987f0: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x4987f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x4987f4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4987f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4987f8: 0x1444001d  bne         $v0, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4987F8u;
    {
        const bool branch_taken_0x4987f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4987FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987F8u;
        // 0x4987fc: 0x8f8286e0  lw          $v0, -0x7920($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4987f8) {
            ctx->pc = 0x498870u;
            goto label_498870;
        }
    }
    ctx->pc = 0x498800u;
    // 0x498800: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x498800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x498804: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x498804u;
    SET_GPR_U32(ctx, 31, 0x49880Cu);
    ctx->pc = 0x498808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498804u;
    // 0x498808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x498804u, 0x49880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49880Cu;
label_49880c:
    // 0x49880c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x49880cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x498810: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x498810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x498814: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x498814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x498818: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x498818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x49881c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x49881cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x498820: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x498820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x498824: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x498824u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x498828: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x498828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x49882c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49882cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x498830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498834: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x498834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x498838: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x498838u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x49883c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x49883cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x498840: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x498840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x498844: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498848: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x498848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x49884c: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x49884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x498850: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x498850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x498854: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x498854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x498858: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x498858u;
    {
        const bool branch_taken_0x498858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498858u;
        // 0x49885c: 0x8f8286e0  lw          $v0, -0x7920($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498858) {
            ctx->pc = 0x498870u;
            goto label_498870;
        }
    }
    ctx->pc = 0x498860u;
    // 0x498860: 0xc125f4c  jal         func_497D30
    ctx->pc = 0x498860u;
    SET_GPR_U32(ctx, 31, 0x498868u);
    ctx->pc = 0x497D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497D30u, 0x498860u, 0x498868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498868u;
label_498868:
    // 0x498868: 0x8f8286e0  lw          $v0, -0x7920($gp)
    ctx->pc = 0x498868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x49886c: 0x0  nop
    ctx->pc = 0x49886cu;
    // NOP
label_498870:
    // 0x498870: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x498870u;
    {
        const bool branch_taken_0x498870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x498870) {
            ctx->pc = 0x498874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498870u;
            // 0x498874: 0xaf8086e0  sw          $zero, -0x7920($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498878u;
            goto label_498878;
        }
    }
    ctx->pc = 0x498878u;
label_498878:
    // 0x498878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x498878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49887c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498884: 0x3e00008  jr          $ra
    ctx->pc = 0x498884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498884u;
        // 0x498888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49888Cu;
    // 0x49888c: 0x0  nop
    ctx->pc = 0x49888cu;
    // NOP
    ctx->pc = 0x498890u;
}
