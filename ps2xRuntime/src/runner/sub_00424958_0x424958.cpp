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

// Function: sub_00424958
// Address: 0x424958 - 0x424a20
void sub_00424958_0x424958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424958_0x424958");
#endif

    switch (ctx->pc) {
        case 0x424998u: goto label_424998;
        case 0x4249a0u: goto label_4249a0;
        case 0x4249c8u: goto label_4249c8;
        case 0x4249e0u: goto label_4249e0;
        default: break;
    }

    ctx->pc = 0x424958u;

    // 0x424958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x424958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x42495c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x42495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x424960: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x424960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x424964: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x424964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x424968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x42496c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42496cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424970: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x424970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x424974: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x424974u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x424978: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x424978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x42497c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x42497cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x424980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x424984: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x424984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x424988: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x424988u;
    {
        const bool branch_taken_0x424988 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424988u;
        // 0x42498c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424988) {
            ctx->pc = 0x4249F8u;
            goto label_4249f8;
        }
    }
    ctx->pc = 0x424990u;
    // 0x424990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x424990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424994: 0x0  nop
    ctx->pc = 0x424994u;
    // NOP
label_424998:
    // 0x424998: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x424998u;
    SET_GPR_U32(ctx, 31, 0x4249A0u);
    ctx->pc = 0x42499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424998u;
    // 0x42499c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x424998u, 0x4249A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4249A0u;
label_4249a0:
    // 0x4249a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4249a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4249a4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x4249a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x4249a8: 0x5452000f  bnel        $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x4249A8u;
    {
        const bool branch_taken_0x4249a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4249a8) {
            ctx->pc = 0x4249ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4249A8u;
            // 0x4249ac: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4249E8u;
            goto label_4249e8;
        }
    }
    ctx->pc = 0x4249B0u;
    // 0x4249b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4249b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4249b4: 0x5453000c  bnel        $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x4249B4u;
    {
        const bool branch_taken_0x4249b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x4249b4) {
            ctx->pc = 0x4249B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4249B4u;
            // 0x4249b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4249E8u;
            goto label_4249e8;
        }
    }
    ctx->pc = 0x4249BCu;
    // 0x4249bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4249bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4249c0: 0xc109032  jal         func_4240C8
    ctx->pc = 0x4249C0u;
    SET_GPR_U32(ctx, 31, 0x4249C8u);
    ctx->pc = 0x4249C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4249C0u;
    // 0x4249c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4240C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4240C8u, 0x4249C0u, 0x4249C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4249C8u;
label_4249c8:
    // 0x4249c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4249C8u;
    {
        const bool branch_taken_0x4249c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4249CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4249C8u;
        // 0x4249cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4249c8) {
            ctx->pc = 0x4249FCu;
            goto label_4249fc;
        }
    }
    ctx->pc = 0x4249D0u;
    // 0x4249d0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4249D0u;
    {
        const bool branch_taken_0x4249d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4249D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4249D0u;
        // 0x4249d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4249d0) {
            ctx->pc = 0x4249E0u;
            goto label_4249e0;
        }
    }
    ctx->pc = 0x4249D8u;
    // 0x4249d8: 0xc10903e  jal         func_4240F8
    ctx->pc = 0x4249D8u;
    SET_GPR_U32(ctx, 31, 0x4249E0u);
    ctx->pc = 0x4249DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4249D8u;
    // 0x4249dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4240F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4240F8u, 0x4249D8u, 0x4249E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4249E0u;
label_4249e0:
    // 0x4249e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4249E0u;
    {
        const bool branch_taken_0x4249e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4249E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4249E0u;
        // 0x4249e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4249e0) {
            ctx->pc = 0x4249FCu;
            goto label_4249fc;
        }
    }
    ctx->pc = 0x4249E8u;
label_4249e8:
    // 0x4249e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4249e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4249ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4249ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4249f0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4249F0u;
    {
        const bool branch_taken_0x4249f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4249F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4249F0u;
        // 0x4249f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4249f0) {
            ctx->pc = 0x424998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424998;
        }
    }
    ctx->pc = 0x4249F8u;
label_4249f8:
    // 0x4249f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4249f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4249fc:
    // 0x4249fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4249fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x424a00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x424a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x424a04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x424a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x424a08: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x424a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x424a0c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x424a0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x424a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x424a14: 0x3e00008  jr          $ra
    ctx->pc = 0x424A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424A14u;
        // 0x424a18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424A1Cu;
    // 0x424a1c: 0x0  nop
    ctx->pc = 0x424a1cu;
    // NOP
    ctx->pc = 0x424a20u;
}
