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

// Function: sub_002739D8
// Address: 0x2739d8 - 0x273a68
void sub_002739D8_0x2739d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002739D8_0x2739d8");
#endif

    switch (ctx->pc) {
        case 0x2739ecu: goto label_2739ec;
        case 0x273a04u: goto label_273a04;
        case 0x273a18u: goto label_273a18;
        case 0x273a30u: goto label_273a30;
        default: break;
    }

    ctx->pc = 0x2739d8u;

    // 0x2739d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2739d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2739dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2739dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2739e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2739e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2739e4: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x2739E4u;
    SET_GPR_U32(ctx, 31, 0x2739ECu);
    ctx->pc = 0x2739E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739E4u;
    // 0x2739e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x2739E4u, 0x2739ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739ECu;
label_2739ec:
    // 0x2739ec: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x2739ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x2739f0: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x2739f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2739f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2739F4u;
    {
        const bool branch_taken_0x2739f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739f4) {
            ctx->pc = 0x273A10u;
            goto label_273a10;
        }
    }
    ctx->pc = 0x2739FCu;
    // 0x2739fc: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x2739FCu;
    SET_GPR_U32(ctx, 31, 0x273A04u);
    ctx->pc = 0x273A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739FCu;
    // 0x273a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x2739FCu, 0x273A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A04u;
label_273a04:
    // 0x273a04: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x273a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x273a08: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x273A08u;
    {
        const bool branch_taken_0x273a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A08u;
        // 0x273a0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a08) {
            ctx->pc = 0x273A38u;
            goto label_273a38;
        }
    }
    ctx->pc = 0x273A10u;
label_273a10:
    // 0x273a10: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x273A10u;
    SET_GPR_U32(ctx, 31, 0x273A18u);
    ctx->pc = 0x273A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A10u;
    // 0x273a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x273A10u, 0x273A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A18u;
label_273a18:
    // 0x273a18: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x273a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x273a1c: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x273a1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x273a20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x273A20u;
    {
        const bool branch_taken_0x273a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A20u;
        // 0x273a24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a20) {
            ctx->pc = 0x273A38u;
            goto label_273a38;
        }
    }
    ctx->pc = 0x273A28u;
    // 0x273a28: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x273A28u;
    SET_GPR_U32(ctx, 31, 0x273A30u);
    ctx->pc = 0x273A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A28u;
    // 0x273a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x273A28u, 0x273A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A30u;
label_273a30:
    // 0x273a30: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x273a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x273a34: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x273a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_273a38:
    // 0x273a38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x273a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x273a3c: 0x24450918  addiu       $a1, $v0, 0x918
    ctx->pc = 0x273a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2328));
    // 0x273a40: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x273a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510940u));
    // 0x273a44: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A44u;
    {
        const bool branch_taken_0x273a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A44u;
        // 0x273a48: 0x24a20024  addiu       $v0, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a44) {
            ctx->pc = 0x273A58u;
            goto label_273a58;
        }
    }
    ctx->pc = 0x273A4Cu;
    // 0x273a4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x273a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x273a50: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x273a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x273a54: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x273a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_273a58:
    // 0x273a58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273a60: 0x3e00008  jr          $ra
    ctx->pc = 0x273A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A60u;
        // 0x273a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273A68u;
}
