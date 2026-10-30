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

// Function: sub_003DA278
// Address: 0x3da278 - 0x3da318
void sub_003DA278_0x3da278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA278_0x3da278");
#endif

    switch (ctx->pc) {
        case 0x3da278u: goto label_3da278;
        case 0x3da27cu: goto label_3da27c;
        case 0x3da280u: goto label_3da280;
        case 0x3da284u: goto label_3da284;
        case 0x3da288u: goto label_3da288;
        case 0x3da28cu: goto label_3da28c;
        case 0x3da290u: goto label_3da290;
        case 0x3da294u: goto label_3da294;
        case 0x3da298u: goto label_3da298;
        case 0x3da29cu: goto label_3da29c;
        case 0x3da2a0u: goto label_3da2a0;
        case 0x3da2a4u: goto label_3da2a4;
        case 0x3da2a8u: goto label_3da2a8;
        case 0x3da2acu: goto label_3da2ac;
        case 0x3da2b0u: goto label_3da2b0;
        case 0x3da2b4u: goto label_3da2b4;
        case 0x3da2b8u: goto label_3da2b8;
        case 0x3da2bcu: goto label_3da2bc;
        case 0x3da2c0u: goto label_3da2c0;
        case 0x3da2c4u: goto label_3da2c4;
        case 0x3da2c8u: goto label_3da2c8;
        case 0x3da2ccu: goto label_3da2cc;
        case 0x3da2d0u: goto label_3da2d0;
        case 0x3da2d4u: goto label_3da2d4;
        case 0x3da2d8u: goto label_3da2d8;
        case 0x3da2dcu: goto label_3da2dc;
        case 0x3da2e0u: goto label_3da2e0;
        case 0x3da2e4u: goto label_3da2e4;
        case 0x3da2e8u: goto label_3da2e8;
        case 0x3da2ecu: goto label_3da2ec;
        case 0x3da2f0u: goto label_3da2f0;
        case 0x3da2f4u: goto label_3da2f4;
        case 0x3da2f8u: goto label_3da2f8;
        case 0x3da2fcu: goto label_3da2fc;
        case 0x3da300u: goto label_3da300;
        case 0x3da304u: goto label_3da304;
        case 0x3da308u: goto label_3da308;
        case 0x3da30cu: goto label_3da30c;
        case 0x3da310u: goto label_3da310;
        case 0x3da314u: goto label_3da314;
        default: break;
    }

    ctx->pc = 0x3da278u;

label_3da278:
    // 0x3da278: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3da278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3da27c:
    // 0x3da27c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3da27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3da280:
    // 0x3da280: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3da280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3da284:
    // 0x3da284: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3da284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da288:
    // 0x3da288: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3da288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3da28c:
    // 0x3da28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da290:
    // 0x3da290: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3da290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3da294:
    // 0x3da294: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da298:
    // 0x3da298: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da29c:
    // 0x3da29c: 0x40f809  jalr        $v0
label_3da2a0:
    if (ctx->pc == 0x3DA2A0u) {
        ctx->pc = 0x3DA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA29Cu;
        // 0x3da2a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA2A4u;
        goto label_3da2a4;
    }
    ctx->pc = 0x3DA29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA2A4u);
        ctx->pc = 0x3DA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA29Cu;
        // 0x3da2a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA29Cu, 0x3DA2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA2A4u;
label_3da2a4:
    // 0x3da2a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3da2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3da2a8:
    // 0x3da2a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3da2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3da2ac:
    // 0x3da2ac: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3da2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3da2b0:
    // 0x3da2b0: 0xc0e858c  jal         func_3A1630
label_3da2b4:
    if (ctx->pc == 0x3DA2B4u) {
        ctx->pc = 0x3DA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2B0u;
        // 0x3da2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA2B8u;
        goto label_3da2b8;
    }
    ctx->pc = 0x3DA2B0u;
    SET_GPR_U32(ctx, 31, 0x3DA2B8u);
    ctx->pc = 0x3DA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2B0u;
    // 0x3da2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA2B0u, 0x3DA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2B8u;
label_3da2b8:
    // 0x3da2b8: 0xc0ea14c  jal         func_3A8530
label_3da2bc:
    if (ctx->pc == 0x3DA2BCu) {
        ctx->pc = 0x3DA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2B8u;
        // 0x3da2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA2C0u;
        goto label_3da2c0;
    }
    ctx->pc = 0x3DA2B8u;
    SET_GPR_U32(ctx, 31, 0x3DA2C0u);
    ctx->pc = 0x3DA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2B8u;
    // 0x3da2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DA2B8u, 0x3DA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2C0u;
label_3da2c0:
    // 0x3da2c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da2c4:
    // 0x3da2c4: 0xc0ea12a  jal         func_3A84A8
label_3da2c8:
    if (ctx->pc == 0x3DA2C8u) {
        ctx->pc = 0x3DA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2C4u;
        // 0x3da2c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA2CCu;
        goto label_3da2cc;
    }
    ctx->pc = 0x3DA2C4u;
    SET_GPR_U32(ctx, 31, 0x3DA2CCu);
    ctx->pc = 0x3DA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2C4u;
    // 0x3da2c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA2C4u, 0x3DA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2CCu;
label_3da2cc:
    // 0x3da2cc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da2ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da2d0:
    // 0x3da2d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3da2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da2d4:
    // 0x3da2d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da2d8:
    // 0x3da2d8: 0xc0ea12a  jal         func_3A84A8
label_3da2dc:
    if (ctx->pc == 0x3DA2DCu) {
        ctx->pc = 0x3DA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2D8u;
        // 0x3da2dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA2E0u;
        goto label_3da2e0;
    }
    ctx->pc = 0x3DA2D8u;
    SET_GPR_U32(ctx, 31, 0x3DA2E0u);
    ctx->pc = 0x3DA2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2D8u;
    // 0x3da2dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA2D8u, 0x3DA2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2E0u;
label_3da2e0:
    // 0x3da2e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da2e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da2e4:
    // 0x3da2e4: 0x3c05c083  lui         $a1, 0xC083
    ctx->pc = 0x3da2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49283 << 16));
label_3da2e8:
    // 0x3da2e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3da2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da2ec:
    // 0x3da2ec: 0x34a5d2a2  ori         $a1, $a1, 0xD2A2
    ctx->pc = 0x3da2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53922);
label_3da2f0:
    // 0x3da2f0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3da2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3da2f4:
    // 0x3da2f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3da2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da2f8:
    // 0x3da2f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3da2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3da2fc:
    // 0x3da2fc: 0xc045cb2  jal         func_1172C8
label_3da300:
    if (ctx->pc == 0x3DA300u) {
        ctx->pc = 0x3DA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2FCu;
        // 0x3da300: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA304u;
        goto label_3da304;
    }
    ctx->pc = 0x3DA2FCu;
    SET_GPR_U32(ctx, 31, 0x3DA304u);
    ctx->pc = 0x3DA300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2FCu;
    // 0x3da300: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DA2FCu, 0x3DA304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA304u;
label_3da304:
    // 0x3da304: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3da304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3da308:
    // 0x3da308: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3da308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3da30c:
    // 0x3da30c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3da30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3da310:
    // 0x3da310: 0x3e00008  jr          $ra
label_3da314:
    if (ctx->pc == 0x3DA314u) {
        ctx->pc = 0x3DA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA310u;
        // 0x3da314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA318u;
        goto label_fallthrough_0x3da310;
    }
    ctx->pc = 0x3DA310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA310u;
        // 0x3da314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3da310:
    ctx->pc = 0x3DA318u;
}
