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

// Function: sub_003671E0
// Address: 0x3671e0 - 0x367270
void sub_003671E0_0x3671e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003671E0_0x3671e0");
#endif

    switch (ctx->pc) {
        case 0x367204u: goto label_367204;
        case 0x36720cu: goto label_36720c;
        case 0x367220u: goto label_367220;
        case 0x367238u: goto label_367238;
        case 0x367240u: goto label_367240;
        case 0x367250u: goto label_367250;
        default: break;
    }

    ctx->pc = 0x3671e0u;

    // 0x3671e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3671e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3671e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3671e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3671e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3671e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3671ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3671ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3671f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3671f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3671f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3671f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3671f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3671f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3671fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3671FCu;
    SET_GPR_U32(ctx, 31, 0x367204u);
    ctx->pc = 0x367200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3671FCu;
    // 0x367200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3671FCu, 0x367204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367204u;
label_367204:
    // 0x367204: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367204u;
    SET_GPR_U32(ctx, 31, 0x36720Cu);
    ctx->pc = 0x367208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367204u;
    // 0x367208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367204u, 0x36720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36720Cu;
label_36720c:
    // 0x36720c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36720cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367218: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367218u;
    SET_GPR_U32(ctx, 31, 0x367220u);
    ctx->pc = 0x36721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367218u;
    // 0x36721c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367218u, 0x367220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367220u;
label_367220:
    // 0x367220: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x367220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x367224: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x367224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x367228: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x367228u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36722c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367230: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367230u;
    SET_GPR_U32(ctx, 31, 0x367238u);
    ctx->pc = 0x367234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367230u;
    // 0x367234: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367230u, 0x367238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367238u;
label_367238:
    // 0x367238: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x367238u;
    SET_GPR_U32(ctx, 31, 0x367240u);
    ctx->pc = 0x36723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367238u;
    // 0x36723c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x367238u, 0x367240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367240u;
label_367240:
    // 0x367240: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x367240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367248: 0xc047796  jal         func_11DE58
    ctx->pc = 0x367248u;
    SET_GPR_U32(ctx, 31, 0x367250u);
    ctx->pc = 0x36724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367248u;
    // 0x36724c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE58u, 0x367248u, 0x367250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367250u;
label_367250:
    // 0x367250: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x367250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367258: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x367258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36725c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36725cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367264: 0x3e00008  jr          $ra
    ctx->pc = 0x367264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367264u;
        // 0x367268: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36726Cu;
    // 0x36726c: 0x0  nop
    ctx->pc = 0x36726cu;
    // NOP
    ctx->pc = 0x367270u;
}
