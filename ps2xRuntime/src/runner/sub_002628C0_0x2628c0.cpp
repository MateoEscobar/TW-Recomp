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

// Function: sub_002628C0
// Address: 0x2628c0 - 0x262920
void sub_002628C0_0x2628c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002628C0_0x2628c0");
#endif

    switch (ctx->pc) {
        case 0x2628c0u: goto label_2628c0;
        case 0x2628c4u: goto label_2628c4;
        case 0x2628c8u: goto label_2628c8;
        case 0x2628ccu: goto label_2628cc;
        case 0x2628d0u: goto label_2628d0;
        case 0x2628d4u: goto label_2628d4;
        case 0x2628d8u: goto label_2628d8;
        case 0x2628dcu: goto label_2628dc;
        case 0x2628e0u: goto label_2628e0;
        case 0x2628e4u: goto label_2628e4;
        case 0x2628e8u: goto label_2628e8;
        case 0x2628ecu: goto label_2628ec;
        case 0x2628f0u: goto label_2628f0;
        case 0x2628f4u: goto label_2628f4;
        case 0x2628f8u: goto label_2628f8;
        case 0x2628fcu: goto label_2628fc;
        case 0x262900u: goto label_262900;
        case 0x262904u: goto label_262904;
        case 0x262908u: goto label_262908;
        case 0x26290cu: goto label_26290c;
        case 0x262910u: goto label_262910;
        case 0x262914u: goto label_262914;
        case 0x262918u: goto label_262918;
        case 0x26291cu: goto label_26291c;
        default: break;
    }

    ctx->pc = 0x2628c0u;

label_2628c0:
    // 0x2628c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2628c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2628c4:
    // 0x2628c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2628c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2628c8:
    // 0x2628c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2628c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2628cc:
    // 0x2628cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2628ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2628d0:
    // 0x2628d0: 0xc05d484  jal         func_175210
label_2628d4:
    if (ctx->pc == 0x2628D4u) {
        ctx->pc = 0x2628D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628D0u;
        // 0x2628d4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628D8u;
        goto label_2628d8;
    }
    ctx->pc = 0x2628D0u;
    SET_GPR_U32(ctx, 31, 0x2628D8u);
    ctx->pc = 0x2628D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628D0u;
    // 0x2628d4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2628D0u, 0x2628D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628D8u;
label_2628d8:
    // 0x2628d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2628d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2628dc:
    // 0x2628dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2628dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2628e0:
    // 0x2628e0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2628e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2628e4:
    // 0x2628e4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_2628e8:
    if (ctx->pc == 0x2628E8u) {
        ctx->pc = 0x2628E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628E4u;
        // 0x2628e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628ECu;
        goto label_2628ec;
    }
    ctx->pc = 0x2628E4u;
    {
        const bool branch_taken_0x2628e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2628e4) {
            ctx->pc = 0x2628E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2628E4u;
            // 0x2628e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262904u;
            goto label_262904;
        }
    }
    ctx->pc = 0x2628ECu;
label_2628ec:
    // 0x2628ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2628ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2628f0:
    // 0x2628f0: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2628f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_2628f4:
    // 0x2628f4: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2628f8:
    // 0x2628f8: 0x60f809  jalr        $v1
label_2628fc:
    if (ctx->pc == 0x2628FCu) {
        ctx->pc = 0x2628FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628F8u;
        // 0x2628fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262900u;
        goto label_262900;
    }
    ctx->pc = 0x2628F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x262900u);
        ctx->pc = 0x2628FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628F8u;
        // 0x2628fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2628F8u, 0x262900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262900u;
label_262900:
    // 0x262900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262904:
    // 0x262904: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x262904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_262908:
    // 0x262908: 0xc08700c  jal         func_21C030
label_26290c:
    if (ctx->pc == 0x26290Cu) {
        ctx->pc = 0x26290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262908u;
        // 0x26290c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262910u;
        goto label_262910;
    }
    ctx->pc = 0x262908u;
    SET_GPR_U32(ctx, 31, 0x262910u);
    ctx->pc = 0x26290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262908u;
    // 0x26290c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x262908u, 0x262910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262910u;
label_262910:
    // 0x262910: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x262910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_262914:
    // 0x262914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_262918:
    // 0x262918: 0x3e00008  jr          $ra
label_26291c:
    if (ctx->pc == 0x26291Cu) {
        ctx->pc = 0x26291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262918u;
        // 0x26291c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262920u;
        goto label_fallthrough_0x262918;
    }
    ctx->pc = 0x262918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262918u;
        // 0x26291c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x262918:
    ctx->pc = 0x262920u;
}
