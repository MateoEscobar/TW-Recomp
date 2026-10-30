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

// Function: sub_004142D0
// Address: 0x4142d0 - 0x414338
void sub_004142D0_0x4142d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004142D0_0x4142d0");
#endif

    switch (ctx->pc) {
        case 0x4142f0u: goto label_4142f0;
        case 0x41430cu: goto label_41430c;
        default: break;
    }

    ctx->pc = 0x4142d0u;

    // 0x4142d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4142d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4142d4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x4142d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x4142d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4142d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4142dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4142dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4142e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4142e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4142e4: 0x24503f50  addiu       $s0, $v0, 0x3F50
    ctx->pc = 0x4142e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16208));
    // 0x4142e8: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x4142e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
    // 0x4142ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4142ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4142f0:
    // 0x4142f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4142f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4142F4u;
    {
        const bool branch_taken_0x4142f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4142F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4142F4u;
        // 0x4142f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4142f4) {
            ctx->pc = 0x414314u;
            goto label_414314;
        }
    }
    ctx->pc = 0x4142FCu;
    // 0x4142fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4142fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414300: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x414300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x414304: 0xc105120  jal         func_414480
    ctx->pc = 0x414304u;
    SET_GPR_U32(ctx, 31, 0x41430Cu);
    ctx->pc = 0x414308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414304u;
    // 0x414308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414480u, 0x414304u, 0x41430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41430Cu;
label_41430c:
    // 0x41430c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x41430Cu;
    {
        const bool branch_taken_0x41430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41430Cu;
        // 0x414310: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41430c) {
            ctx->pc = 0x414328u;
            goto label_414328;
        }
    }
    ctx->pc = 0x414314u;
label_414314:
    // 0x414314: 0x26100184  addiu       $s0, $s0, 0x184
    ctx->pc = 0x414314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x414318: 0x2cc20064  sltiu       $v0, $a2, 0x64
    ctx->pc = 0x414318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x41431c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x41431Cu;
    {
        const bool branch_taken_0x41431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41431Cu;
        // 0x414320: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41431c) {
            ctx->pc = 0x4142F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4142f0;
        }
    }
    ctx->pc = 0x414324u;
    // 0x414324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x414324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414328:
    // 0x414328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x414328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41432c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414330: 0x3e00008  jr          $ra
    ctx->pc = 0x414330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414330u;
        // 0x414334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414338u;
}
