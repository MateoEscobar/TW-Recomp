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

// Function: sub_003D9178
// Address: 0x3d9178 - 0x3d9218
void sub_003D9178_0x3d9178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9178_0x3d9178");
#endif

    switch (ctx->pc) {
        case 0x3d9178u: goto label_3d9178;
        case 0x3d917cu: goto label_3d917c;
        case 0x3d9180u: goto label_3d9180;
        case 0x3d9184u: goto label_3d9184;
        case 0x3d9188u: goto label_3d9188;
        case 0x3d918cu: goto label_3d918c;
        case 0x3d9190u: goto label_3d9190;
        case 0x3d9194u: goto label_3d9194;
        case 0x3d9198u: goto label_3d9198;
        case 0x3d919cu: goto label_3d919c;
        case 0x3d91a0u: goto label_3d91a0;
        case 0x3d91a4u: goto label_3d91a4;
        case 0x3d91a8u: goto label_3d91a8;
        case 0x3d91acu: goto label_3d91ac;
        case 0x3d91b0u: goto label_3d91b0;
        case 0x3d91b4u: goto label_3d91b4;
        case 0x3d91b8u: goto label_3d91b8;
        case 0x3d91bcu: goto label_3d91bc;
        case 0x3d91c0u: goto label_3d91c0;
        case 0x3d91c4u: goto label_3d91c4;
        case 0x3d91c8u: goto label_3d91c8;
        case 0x3d91ccu: goto label_3d91cc;
        case 0x3d91d0u: goto label_3d91d0;
        case 0x3d91d4u: goto label_3d91d4;
        case 0x3d91d8u: goto label_3d91d8;
        case 0x3d91dcu: goto label_3d91dc;
        case 0x3d91e0u: goto label_3d91e0;
        case 0x3d91e4u: goto label_3d91e4;
        case 0x3d91e8u: goto label_3d91e8;
        case 0x3d91ecu: goto label_3d91ec;
        case 0x3d91f0u: goto label_3d91f0;
        case 0x3d91f4u: goto label_3d91f4;
        case 0x3d91f8u: goto label_3d91f8;
        case 0x3d91fcu: goto label_3d91fc;
        case 0x3d9200u: goto label_3d9200;
        case 0x3d9204u: goto label_3d9204;
        case 0x3d9208u: goto label_3d9208;
        case 0x3d920cu: goto label_3d920c;
        case 0x3d9210u: goto label_3d9210;
        case 0x3d9214u: goto label_3d9214;
        default: break;
    }

    ctx->pc = 0x3d9178u;

label_3d9178:
    // 0x3d9178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d9178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d917c:
    // 0x3d917c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d9180:
    // 0x3d9180: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d9180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d9184:
    // 0x3d9184: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d9184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9188:
    // 0x3d9188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d918c:
    // 0x3d918c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d918cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9190:
    // 0x3d9190: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d9190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d9194:
    // 0x3d9194: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9198:
    // 0x3d9198: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d919c:
    // 0x3d919c: 0x40f809  jalr        $v0
label_3d91a0:
    if (ctx->pc == 0x3D91A0u) {
        ctx->pc = 0x3D91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D919Cu;
        // 0x3d91a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D91A4u;
        goto label_3d91a4;
    }
    ctx->pc = 0x3D919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D91A4u);
        ctx->pc = 0x3D91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D919Cu;
        // 0x3d91a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D919Cu, 0x3D91A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D91A4u;
label_3d91a4:
    // 0x3d91a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d91a8:
    // 0x3d91a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d91a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d91ac:
    // 0x3d91ac: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d91acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d91b0:
    // 0x3d91b0: 0xc0e858c  jal         func_3A1630
label_3d91b4:
    if (ctx->pc == 0x3D91B4u) {
        ctx->pc = 0x3D91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91B0u;
        // 0x3d91b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D91B8u;
        goto label_3d91b8;
    }
    ctx->pc = 0x3D91B0u;
    SET_GPR_U32(ctx, 31, 0x3D91B8u);
    ctx->pc = 0x3D91B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D91B0u;
    // 0x3d91b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D91B0u, 0x3D91B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D91B8u;
label_3d91b8:
    // 0x3d91b8: 0xc0ea14c  jal         func_3A8530
label_3d91bc:
    if (ctx->pc == 0x3D91BCu) {
        ctx->pc = 0x3D91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91B8u;
        // 0x3d91bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D91C0u;
        goto label_3d91c0;
    }
    ctx->pc = 0x3D91B8u;
    SET_GPR_U32(ctx, 31, 0x3D91C0u);
    ctx->pc = 0x3D91BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D91B8u;
    // 0x3d91bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D91B8u, 0x3D91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D91C0u;
label_3d91c0:
    // 0x3d91c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d91c4:
    // 0x3d91c4: 0xc0ea12a  jal         func_3A84A8
label_3d91c8:
    if (ctx->pc == 0x3D91C8u) {
        ctx->pc = 0x3D91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91C4u;
        // 0x3d91c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D91CCu;
        goto label_3d91cc;
    }
    ctx->pc = 0x3D91C4u;
    SET_GPR_U32(ctx, 31, 0x3D91CCu);
    ctx->pc = 0x3D91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D91C4u;
    // 0x3d91c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D91C4u, 0x3D91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D91CCu;
label_3d91cc:
    // 0x3d91cc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d91ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d91d0:
    // 0x3d91d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d91d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d91d4:
    // 0x3d91d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d91d8:
    // 0x3d91d8: 0xc0ea12a  jal         func_3A84A8
label_3d91dc:
    if (ctx->pc == 0x3D91DCu) {
        ctx->pc = 0x3D91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91D8u;
        // 0x3d91dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D91E0u;
        goto label_3d91e0;
    }
    ctx->pc = 0x3D91D8u;
    SET_GPR_U32(ctx, 31, 0x3D91E0u);
    ctx->pc = 0x3D91DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D91D8u;
    // 0x3d91dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D91D8u, 0x3D91E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D91E0u;
label_3d91e0:
    // 0x3d91e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d91e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d91e4:
    // 0x3d91e4: 0x3c05b5a9  lui         $a1, 0xB5A9
    ctx->pc = 0x3d91e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46505 << 16));
label_3d91e8:
    // 0x3d91e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d91e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d91ec:
    // 0x3d91ec: 0x34a58173  ori         $a1, $a1, 0x8173
    ctx->pc = 0x3d91ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33139);
label_3d91f0:
    // 0x3d91f0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d91f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d91f4:
    // 0x3d91f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d91f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d91f8:
    // 0x3d91f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d91f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d91fc:
    // 0x3d91fc: 0xc045cb2  jal         func_1172C8
label_3d9200:
    if (ctx->pc == 0x3D9200u) {
        ctx->pc = 0x3D9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91FCu;
        // 0x3d9200: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9204u;
        goto label_3d9204;
    }
    ctx->pc = 0x3D91FCu;
    SET_GPR_U32(ctx, 31, 0x3D9204u);
    ctx->pc = 0x3D9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D91FCu;
    // 0x3d9200: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3D91FCu, 0x3D9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9204u;
label_3d9204:
    // 0x3d9204: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d9204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d9208:
    // 0x3d9208: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d9208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d920c:
    // 0x3d920c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9210:
    // 0x3d9210: 0x3e00008  jr          $ra
label_3d9214:
    if (ctx->pc == 0x3D9214u) {
        ctx->pc = 0x3D9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9210u;
        // 0x3d9214: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9218u;
        goto label_fallthrough_0x3d9210;
    }
    ctx->pc = 0x3D9210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9210u;
        // 0x3d9214: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9210:
    ctx->pc = 0x3D9218u;
}
