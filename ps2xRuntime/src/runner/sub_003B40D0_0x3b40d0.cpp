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

// Function: sub_003B40D0
// Address: 0x3b40d0 - 0x3b4128
void sub_003B40D0_0x3b40d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B40D0_0x3b40d0");
#endif

    switch (ctx->pc) {
        case 0x3b40d0u: goto label_3b40d0;
        case 0x3b40d4u: goto label_3b40d4;
        case 0x3b40d8u: goto label_3b40d8;
        case 0x3b40dcu: goto label_3b40dc;
        case 0x3b40e0u: goto label_3b40e0;
        case 0x3b40e4u: goto label_3b40e4;
        case 0x3b40e8u: goto label_3b40e8;
        case 0x3b40ecu: goto label_3b40ec;
        case 0x3b40f0u: goto label_3b40f0;
        case 0x3b40f4u: goto label_3b40f4;
        case 0x3b40f8u: goto label_3b40f8;
        case 0x3b40fcu: goto label_3b40fc;
        case 0x3b4100u: goto label_3b4100;
        case 0x3b4104u: goto label_3b4104;
        case 0x3b4108u: goto label_3b4108;
        case 0x3b410cu: goto label_3b410c;
        case 0x3b4110u: goto label_3b4110;
        case 0x3b4114u: goto label_3b4114;
        case 0x3b4118u: goto label_3b4118;
        case 0x3b411cu: goto label_3b411c;
        case 0x3b4120u: goto label_3b4120;
        case 0x3b4124u: goto label_3b4124;
        default: break;
    }

    ctx->pc = 0x3b40d0u;

label_3b40d0:
    // 0x3b40d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b40d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b40d4:
    // 0x3b40d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b40d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b40d8:
    // 0x3b40d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b40d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b40dc:
    // 0x3b40dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b40dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b40e0:
    // 0x3b40e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b40e4:
    // 0x3b40e4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b40e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b40e8:
    // 0x3b40e8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b40ec:
    // 0x3b40ec: 0x40f809  jalr        $v0
label_3b40f0:
    if (ctx->pc == 0x3B40F0u) {
        ctx->pc = 0x3B40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40ECu;
        // 0x3b40f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40F4u;
        goto label_3b40f4;
    }
    ctx->pc = 0x3B40ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B40F4u);
        ctx->pc = 0x3B40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40ECu;
        // 0x3b40f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B40ECu, 0x3B40F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B40F4u;
label_3b40f4:
    // 0x3b40f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b40f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b40f8:
    // 0x3b40f8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3b40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b40fc:
    // 0x3b40fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b4100:
    // 0x3b4100: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3b4104:
    if (ctx->pc == 0x3B4104u) {
        ctx->pc = 0x3B4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4100u;
        // 0x3b4104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4108u;
        goto label_3b4108;
    }
    ctx->pc = 0x3B4100u;
    {
        const bool branch_taken_0x3b4100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4100u;
        // 0x3b4104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4100) {
            ctx->pc = 0x3B4118u;
            goto label_3b4118;
        }
    }
    ctx->pc = 0x3B4108u;
label_3b4108:
    // 0x3b4108: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3b4108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b410c:
    // 0x3b410c: 0xc0e858c  jal         func_3A1630
label_3b4110:
    if (ctx->pc == 0x3B4110u) {
        ctx->pc = 0x3B4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B410Cu;
        // 0x3b4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4114u;
        goto label_3b4114;
    }
    ctx->pc = 0x3B410Cu;
    SET_GPR_U32(ctx, 31, 0x3B4114u);
    ctx->pc = 0x3B4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B410Cu;
    // 0x3b4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B410Cu, 0x3B4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4114u;
label_3b4114:
    // 0x3b4114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4118:
    // 0x3b4118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b4118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b411c:
    // 0x3b411c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b411cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4120:
    // 0x3b4120: 0x3e00008  jr          $ra
label_3b4124:
    if (ctx->pc == 0x3B4124u) {
        ctx->pc = 0x3B4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4120u;
        // 0x3b4124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4128u;
        goto label_fallthrough_0x3b4120;
    }
    ctx->pc = 0x3B4120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4120u;
        // 0x3b4124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b4120:
    ctx->pc = 0x3B4128u;
}
