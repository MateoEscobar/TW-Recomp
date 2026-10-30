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

// Function: sub_00415878
// Address: 0x415878 - 0x4158f8
void sub_00415878_0x415878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415878_0x415878");
#endif

    switch (ctx->pc) {
        case 0x4158a0u: goto label_4158a0;
        case 0x4158b4u: goto label_4158b4;
        default: break;
    }

    ctx->pc = 0x415878u;

    // 0x415878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x415878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41587c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x41587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x415880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x415880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x415884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x415884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x415888: 0x2450d870  addiu       $s0, $v0, -0x2790
    ctx->pc = 0x415888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
    // 0x41588c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x415890: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x415890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415898: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x415898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41589c: 0x0  nop
    ctx->pc = 0x41589cu;
    // NOP
label_4158a0:
    // 0x4158a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4158a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4158a4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4158A4u;
    {
        const bool branch_taken_0x4158a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4158a4) {
            ctx->pc = 0x4158A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4158A4u;
            // 0x4158a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4158C4u;
            goto label_4158c4;
        }
    }
    ctx->pc = 0x4158ACu;
    // 0x4158ac: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x4158ACu;
    SET_GPR_U32(ctx, 31, 0x4158B4u);
    ctx->pc = 0x4158B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4158ACu;
    // 0x4158b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x4158ACu, 0x4158B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4158B4u;
label_4158b4:
    // 0x4158b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4158B4u;
    {
        const bool branch_taken_0x4158b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4158B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158B4u;
        // 0x4158b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4158b4) {
            ctx->pc = 0x4158C4u;
            goto label_4158c4;
        }
    }
    ctx->pc = 0x4158BCu;
    // 0x4158bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4158BCu;
    {
        const bool branch_taken_0x4158bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4158C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158BCu;
        // 0x4158c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4158bc) {
            ctx->pc = 0x4158D4u;
            goto label_4158d4;
        }
    }
    ctx->pc = 0x4158C4u;
label_4158c4:
    // 0x4158c4: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x4158c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4158c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4158C8u;
    {
        const bool branch_taken_0x4158c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4158CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158C8u;
        // 0x4158cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4158c8) {
            ctx->pc = 0x4158A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4158a0;
        }
    }
    ctx->pc = 0x4158D0u;
    // 0x4158d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4158d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4158d4:
    // 0x4158d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4158d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4158d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4158d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4158dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4158dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4158e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4158e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4158e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4158E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4158E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158E4u;
        // 0x4158e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4158E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4158ECu;
    // 0x4158ec: 0x0  nop
    ctx->pc = 0x4158ecu;
    // NOP
    // 0x4158f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4158f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4158f4: 0x0  nop
    ctx->pc = 0x4158f4u;
    // NOP
    ctx->pc = 0x4158f8u;
}
