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

// Function: sub_003D9228
// Address: 0x3d9228 - 0x3d92c8
void sub_003D9228_0x3d9228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9228_0x3d9228");
#endif

    switch (ctx->pc) {
        case 0x3d9228u: goto label_3d9228;
        case 0x3d922cu: goto label_3d922c;
        case 0x3d9230u: goto label_3d9230;
        case 0x3d9234u: goto label_3d9234;
        case 0x3d9238u: goto label_3d9238;
        case 0x3d923cu: goto label_3d923c;
        case 0x3d9240u: goto label_3d9240;
        case 0x3d9244u: goto label_3d9244;
        case 0x3d9248u: goto label_3d9248;
        case 0x3d924cu: goto label_3d924c;
        case 0x3d9250u: goto label_3d9250;
        case 0x3d9254u: goto label_3d9254;
        case 0x3d9258u: goto label_3d9258;
        case 0x3d925cu: goto label_3d925c;
        case 0x3d9260u: goto label_3d9260;
        case 0x3d9264u: goto label_3d9264;
        case 0x3d9268u: goto label_3d9268;
        case 0x3d926cu: goto label_3d926c;
        case 0x3d9270u: goto label_3d9270;
        case 0x3d9274u: goto label_3d9274;
        case 0x3d9278u: goto label_3d9278;
        case 0x3d927cu: goto label_3d927c;
        case 0x3d9280u: goto label_3d9280;
        case 0x3d9284u: goto label_3d9284;
        case 0x3d9288u: goto label_3d9288;
        case 0x3d928cu: goto label_3d928c;
        case 0x3d9290u: goto label_3d9290;
        case 0x3d9294u: goto label_3d9294;
        case 0x3d9298u: goto label_3d9298;
        case 0x3d929cu: goto label_3d929c;
        case 0x3d92a0u: goto label_3d92a0;
        case 0x3d92a4u: goto label_3d92a4;
        case 0x3d92a8u: goto label_3d92a8;
        case 0x3d92acu: goto label_3d92ac;
        case 0x3d92b0u: goto label_3d92b0;
        case 0x3d92b4u: goto label_3d92b4;
        case 0x3d92b8u: goto label_3d92b8;
        case 0x3d92bcu: goto label_3d92bc;
        case 0x3d92c0u: goto label_3d92c0;
        case 0x3d92c4u: goto label_3d92c4;
        default: break;
    }

    ctx->pc = 0x3d9228u;

label_3d9228:
    // 0x3d9228: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d9228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d922c:
    // 0x3d922c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d9230:
    // 0x3d9230: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d9230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d9234:
    // 0x3d9234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d9234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9238:
    // 0x3d9238: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d9238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d923c:
    // 0x3d923c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d923cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9240:
    // 0x3d9240: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d9240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d9244:
    // 0x3d9244: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9248:
    // 0x3d9248: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d924c:
    // 0x3d924c: 0x40f809  jalr        $v0
label_3d9250:
    if (ctx->pc == 0x3D9250u) {
        ctx->pc = 0x3D9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D924Cu;
        // 0x3d9250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9254u;
        goto label_3d9254;
    }
    ctx->pc = 0x3D924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9254u);
        ctx->pc = 0x3D9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D924Cu;
        // 0x3d9250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D924Cu, 0x3D9254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9254u;
label_3d9254:
    // 0x3d9254: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d9254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d9258:
    // 0x3d9258: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d925c:
    // 0x3d925c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d925cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d9260:
    // 0x3d9260: 0xc0e858c  jal         func_3A1630
label_3d9264:
    if (ctx->pc == 0x3D9264u) {
        ctx->pc = 0x3D9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9260u;
        // 0x3d9264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9268u;
        goto label_3d9268;
    }
    ctx->pc = 0x3D9260u;
    SET_GPR_U32(ctx, 31, 0x3D9268u);
    ctx->pc = 0x3D9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9260u;
    // 0x3d9264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9260u, 0x3D9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9268u;
label_3d9268:
    // 0x3d9268: 0xc0ea14c  jal         func_3A8530
label_3d926c:
    if (ctx->pc == 0x3D926Cu) {
        ctx->pc = 0x3D926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9268u;
        // 0x3d926c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9270u;
        goto label_3d9270;
    }
    ctx->pc = 0x3D9268u;
    SET_GPR_U32(ctx, 31, 0x3D9270u);
    ctx->pc = 0x3D926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9268u;
    // 0x3d926c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D9268u, 0x3D9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9270u;
label_3d9270:
    // 0x3d9270: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d9270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9274:
    // 0x3d9274: 0xc0ea12a  jal         func_3A84A8
label_3d9278:
    if (ctx->pc == 0x3D9278u) {
        ctx->pc = 0x3D9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9274u;
        // 0x3d9278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D927Cu;
        goto label_3d927c;
    }
    ctx->pc = 0x3D9274u;
    SET_GPR_U32(ctx, 31, 0x3D927Cu);
    ctx->pc = 0x3D9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9274u;
    // 0x3d9278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9274u, 0x3D927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D927Cu;
label_3d927c:
    // 0x3d927c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d927cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9280:
    // 0x3d9280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d9280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9284:
    // 0x3d9284: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d9284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9288:
    // 0x3d9288: 0xc0ea12a  jal         func_3A84A8
label_3d928c:
    if (ctx->pc == 0x3D928Cu) {
        ctx->pc = 0x3D928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9288u;
        // 0x3d928c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9290u;
        goto label_3d9290;
    }
    ctx->pc = 0x3D9288u;
    SET_GPR_U32(ctx, 31, 0x3D9290u);
    ctx->pc = 0x3D928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9288u;
    // 0x3d928c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9288u, 0x3D9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9290u;
label_3d9290:
    // 0x3d9290: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d9290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9294:
    // 0x3d9294: 0x3c05b5a9  lui         $a1, 0xB5A9
    ctx->pc = 0x3d9294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46505 << 16));
label_3d9298:
    // 0x3d9298: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d9298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d929c:
    // 0x3d929c: 0x34a58173  ori         $a1, $a1, 0x8173
    ctx->pc = 0x3d929cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33139);
label_3d92a0:
    // 0x3d92a0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d92a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d92a4:
    // 0x3d92a4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d92a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d92a8:
    // 0x3d92a8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d92a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d92ac:
    // 0x3d92ac: 0xc045cb2  jal         func_1172C8
label_3d92b0:
    if (ctx->pc == 0x3D92B0u) {
        ctx->pc = 0x3D92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92ACu;
        // 0x3d92b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D92B4u;
        goto label_3d92b4;
    }
    ctx->pc = 0x3D92ACu;
    SET_GPR_U32(ctx, 31, 0x3D92B4u);
    ctx->pc = 0x3D92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D92ACu;
    // 0x3d92b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3D92ACu, 0x3D92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D92B4u;
label_3d92b4:
    // 0x3d92b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d92b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d92b8:
    // 0x3d92b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d92b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d92bc:
    // 0x3d92bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d92bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d92c0:
    // 0x3d92c0: 0x3e00008  jr          $ra
label_3d92c4:
    if (ctx->pc == 0x3D92C4u) {
        ctx->pc = 0x3D92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92C0u;
        // 0x3d92c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D92C8u;
        goto label_fallthrough_0x3d92c0;
    }
    ctx->pc = 0x3D92C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92C0u;
        // 0x3d92c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D92C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d92c0:
    ctx->pc = 0x3D92C8u;
}
