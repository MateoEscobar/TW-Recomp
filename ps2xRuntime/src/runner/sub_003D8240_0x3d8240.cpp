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

// Function: sub_003D8240
// Address: 0x3d8240 - 0x3d82e0
void sub_003D8240_0x3d8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8240_0x3d8240");
#endif

    switch (ctx->pc) {
        case 0x3d8240u: goto label_3d8240;
        case 0x3d8244u: goto label_3d8244;
        case 0x3d8248u: goto label_3d8248;
        case 0x3d824cu: goto label_3d824c;
        case 0x3d8250u: goto label_3d8250;
        case 0x3d8254u: goto label_3d8254;
        case 0x3d8258u: goto label_3d8258;
        case 0x3d825cu: goto label_3d825c;
        case 0x3d8260u: goto label_3d8260;
        case 0x3d8264u: goto label_3d8264;
        case 0x3d8268u: goto label_3d8268;
        case 0x3d826cu: goto label_3d826c;
        case 0x3d8270u: goto label_3d8270;
        case 0x3d8274u: goto label_3d8274;
        case 0x3d8278u: goto label_3d8278;
        case 0x3d827cu: goto label_3d827c;
        case 0x3d8280u: goto label_3d8280;
        case 0x3d8284u: goto label_3d8284;
        case 0x3d8288u: goto label_3d8288;
        case 0x3d828cu: goto label_3d828c;
        case 0x3d8290u: goto label_3d8290;
        case 0x3d8294u: goto label_3d8294;
        case 0x3d8298u: goto label_3d8298;
        case 0x3d829cu: goto label_3d829c;
        case 0x3d82a0u: goto label_3d82a0;
        case 0x3d82a4u: goto label_3d82a4;
        case 0x3d82a8u: goto label_3d82a8;
        case 0x3d82acu: goto label_3d82ac;
        case 0x3d82b0u: goto label_3d82b0;
        case 0x3d82b4u: goto label_3d82b4;
        case 0x3d82b8u: goto label_3d82b8;
        case 0x3d82bcu: goto label_3d82bc;
        case 0x3d82c0u: goto label_3d82c0;
        case 0x3d82c4u: goto label_3d82c4;
        case 0x3d82c8u: goto label_3d82c8;
        case 0x3d82ccu: goto label_3d82cc;
        case 0x3d82d0u: goto label_3d82d0;
        case 0x3d82d4u: goto label_3d82d4;
        case 0x3d82d8u: goto label_3d82d8;
        case 0x3d82dcu: goto label_3d82dc;
        default: break;
    }

    ctx->pc = 0x3d8240u;

label_3d8240:
    // 0x3d8240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d8244:
    // 0x3d8244: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d8248:
    // 0x3d8248: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d824c:
    // 0x3d824c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d824cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8250:
    // 0x3d8250: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d8250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d8254:
    // 0x3d8254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d8254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8258:
    // 0x3d8258: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d825c:
    // 0x3d825c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d825cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8260:
    // 0x3d8260: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8264:
    // 0x3d8264: 0x40f809  jalr        $v0
label_3d8268:
    if (ctx->pc == 0x3D8268u) {
        ctx->pc = 0x3D8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8264u;
        // 0x3d8268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D826Cu;
        goto label_3d826c;
    }
    ctx->pc = 0x3D8264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D826Cu);
        ctx->pc = 0x3D8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8264u;
        // 0x3d8268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8264u, 0x3D826Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D826Cu;
label_3d826c:
    // 0x3d826c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d8270:
    // 0x3d8270: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d8270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d8274:
    // 0x3d8274: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d8274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d8278:
    // 0x3d8278: 0xc0e858c  jal         func_3A1630
label_3d827c:
    if (ctx->pc == 0x3D827Cu) {
        ctx->pc = 0x3D827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8278u;
        // 0x3d827c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8280u;
        goto label_3d8280;
    }
    ctx->pc = 0x3D8278u;
    SET_GPR_U32(ctx, 31, 0x3D8280u);
    ctx->pc = 0x3D827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8278u;
    // 0x3d827c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8278u, 0x3D8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8280u;
label_3d8280:
    // 0x3d8280: 0xc0ea14c  jal         func_3A8530
label_3d8284:
    if (ctx->pc == 0x3D8284u) {
        ctx->pc = 0x3D8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8280u;
        // 0x3d8284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8288u;
        goto label_3d8288;
    }
    ctx->pc = 0x3D8280u;
    SET_GPR_U32(ctx, 31, 0x3D8288u);
    ctx->pc = 0x3D8284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8280u;
    // 0x3d8284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D8280u, 0x3D8288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8288u;
label_3d8288:
    // 0x3d8288: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d8288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d828c:
    // 0x3d828c: 0xc0ea12a  jal         func_3A84A8
label_3d8290:
    if (ctx->pc == 0x3D8290u) {
        ctx->pc = 0x3D8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D828Cu;
        // 0x3d8290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8294u;
        goto label_3d8294;
    }
    ctx->pc = 0x3D828Cu;
    SET_GPR_U32(ctx, 31, 0x3D8294u);
    ctx->pc = 0x3D8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D828Cu;
    // 0x3d8290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D828Cu, 0x3D8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8294u;
label_3d8294:
    // 0x3d8294: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d8294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8298:
    // 0x3d8298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d8298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d829c:
    // 0x3d829c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d829cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d82a0:
    // 0x3d82a0: 0xc0ea12a  jal         func_3A84A8
label_3d82a4:
    if (ctx->pc == 0x3D82A4u) {
        ctx->pc = 0x3D82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82A0u;
        // 0x3d82a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D82A8u;
        goto label_3d82a8;
    }
    ctx->pc = 0x3D82A0u;
    SET_GPR_U32(ctx, 31, 0x3D82A8u);
    ctx->pc = 0x3D82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D82A0u;
    // 0x3d82a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D82A0u, 0x3D82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D82A8u;
label_3d82a8:
    // 0x3d82a8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d82a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d82ac:
    // 0x3d82ac: 0x3c05b5a9  lui         $a1, 0xB5A9
    ctx->pc = 0x3d82acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46505 << 16));
label_3d82b0:
    // 0x3d82b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d82b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d82b4:
    // 0x3d82b4: 0x34a58173  ori         $a1, $a1, 0x8173
    ctx->pc = 0x3d82b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33139);
label_3d82b8:
    // 0x3d82b8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d82b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d82bc:
    // 0x3d82bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d82bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d82c0:
    // 0x3d82c0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d82c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d82c4:
    // 0x3d82c4: 0xc045cb2  jal         func_1172C8
label_3d82c8:
    if (ctx->pc == 0x3D82C8u) {
        ctx->pc = 0x3D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82C4u;
        // 0x3d82c8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D82CCu;
        goto label_3d82cc;
    }
    ctx->pc = 0x3D82C4u;
    SET_GPR_U32(ctx, 31, 0x3D82CCu);
    ctx->pc = 0x3D82C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D82C4u;
    // 0x3d82c8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3D82C4u, 0x3D82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D82CCu;
label_3d82cc:
    // 0x3d82cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d82ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d82d0:
    // 0x3d82d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d82d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d82d4:
    // 0x3d82d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d82d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d82d8:
    // 0x3d82d8: 0x3e00008  jr          $ra
label_3d82dc:
    if (ctx->pc == 0x3D82DCu) {
        ctx->pc = 0x3D82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82D8u;
        // 0x3d82dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D82E0u;
        goto label_fallthrough_0x3d82d8;
    }
    ctx->pc = 0x3D82D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82D8u;
        // 0x3d82dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D82D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d82d8:
    ctx->pc = 0x3D82E0u;
}
