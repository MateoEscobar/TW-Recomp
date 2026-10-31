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

// Function: sub_004B42D0
// Address: 0x4b42d0 - 0x4b4348
void sub_004B42D0_0x4b42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B42D0_0x4b42d0");
#endif

    switch (ctx->pc) {
        case 0x4b42f0u: goto label_4b42f0;
        case 0x4b42f8u: goto label_4b42f8;
        case 0x4b4338u: goto label_4b4338;
        default: break;
    }

    ctx->pc = 0x4b42d0u;

    // 0x4b42d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b42d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b42d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b42d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b42dc: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x4b42dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x4b42e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B42E0u;
    {
        const bool branch_taken_0x4b42e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B42E0u;
        // 0x4b42e4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b42e0) {
            ctx->pc = 0x4B430Cu;
            goto label_4b430c;
        }
    }
    ctx->pc = 0x4B42E8u;
    // 0x4b42e8: 0x24053d09  addiu       $a1, $zero, 0x3D09
    ctx->pc = 0x4b42e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
    // 0x4b42ec: 0x0  nop
    ctx->pc = 0x4b42ecu;
    // NOP
label_4b42f0:
    // 0x4b42f0: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B42F0u;
    SET_GPR_U32(ctx, 31, 0x4B42F8u);
    ctx->pc = 0x4B42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B42F0u;
    // 0x4b42f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B42F0u, 0x4B42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B42F8u;
label_4b42f8:
    // 0x4b42f8: 0x2610fffa  addiu       $s0, $s0, -0x6
    ctx->pc = 0x4b42f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x4b42fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b42fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4300: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x4b4300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x4b4304: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B4304u;
    {
        const bool branch_taken_0x4b4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4304u;
        // 0x4b4308: 0x24053d09  addiu       $a1, $zero, 0x3D09 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4304) {
            ctx->pc = 0x4B42F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b42f0;
        }
    }
    ctx->pc = 0x4B430Cu;
label_4b430c:
    // 0x4b430c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B430Cu;
    {
        const bool branch_taken_0x4b430c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B430Cu;
        // 0x4b4310: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b430c) {
            ctx->pc = 0x4B431Cu;
            goto label_4b431c;
        }
    }
    ctx->pc = 0x4B4314u;
    // 0x4b4314: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4314u;
    {
        const bool branch_taken_0x4b4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4314u;
        // 0x4b4318: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4314) {
            ctx->pc = 0x4B4338u;
            goto label_4b4338;
        }
    }
    ctx->pc = 0x4B431Cu;
label_4b431c:
    // 0x4b431c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4b4320: 0x244222f0  addiu       $v0, $v0, 0x22F0
    ctx->pc = 0x4b4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8944));
    // 0x4b4324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b4324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b4328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b4328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b432c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b432cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4330: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B4330u;
    SET_GPR_U32(ctx, 31, 0x4B4338u);
    ctx->pc = 0x4B4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4330u;
    // 0x4b4334: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B4330u, 0x4B4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4338u;
label_4b4338:
    // 0x4b4338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b4338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4340: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4340u;
        // 0x4b4344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4348u;
}
