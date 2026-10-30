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

// Function: sub_002DDD48
// Address: 0x2ddd48 - 0x2dde50
void sub_002DDD48_0x2ddd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDD48_0x2ddd48");
#endif

    switch (ctx->pc) {
        case 0x2ddd48u: goto label_2ddd48;
        case 0x2ddd4cu: goto label_2ddd4c;
        case 0x2ddd50u: goto label_2ddd50;
        case 0x2ddd54u: goto label_2ddd54;
        case 0x2ddd58u: goto label_2ddd58;
        case 0x2ddd5cu: goto label_2ddd5c;
        case 0x2ddd60u: goto label_2ddd60;
        case 0x2ddd64u: goto label_2ddd64;
        case 0x2ddd68u: goto label_2ddd68;
        case 0x2ddd6cu: goto label_2ddd6c;
        case 0x2ddd70u: goto label_2ddd70;
        case 0x2ddd74u: goto label_2ddd74;
        case 0x2ddd78u: goto label_2ddd78;
        case 0x2ddd7cu: goto label_2ddd7c;
        case 0x2ddd80u: goto label_2ddd80;
        case 0x2ddd84u: goto label_2ddd84;
        case 0x2ddd88u: goto label_2ddd88;
        case 0x2ddd8cu: goto label_2ddd8c;
        case 0x2ddd90u: goto label_2ddd90;
        case 0x2ddd94u: goto label_2ddd94;
        case 0x2ddd98u: goto label_2ddd98;
        case 0x2ddd9cu: goto label_2ddd9c;
        case 0x2ddda0u: goto label_2ddda0;
        case 0x2ddda4u: goto label_2ddda4;
        case 0x2ddda8u: goto label_2ddda8;
        case 0x2dddacu: goto label_2dddac;
        case 0x2dddb0u: goto label_2dddb0;
        case 0x2dddb4u: goto label_2dddb4;
        case 0x2dddb8u: goto label_2dddb8;
        case 0x2dddbcu: goto label_2dddbc;
        case 0x2dddc0u: goto label_2dddc0;
        case 0x2dddc4u: goto label_2dddc4;
        case 0x2dddc8u: goto label_2dddc8;
        case 0x2dddccu: goto label_2dddcc;
        case 0x2dddd0u: goto label_2dddd0;
        case 0x2dddd4u: goto label_2dddd4;
        case 0x2dddd8u: goto label_2dddd8;
        case 0x2ddddcu: goto label_2ddddc;
        case 0x2ddde0u: goto label_2ddde0;
        case 0x2ddde4u: goto label_2ddde4;
        case 0x2ddde8u: goto label_2ddde8;
        case 0x2dddecu: goto label_2dddec;
        case 0x2dddf0u: goto label_2dddf0;
        case 0x2dddf4u: goto label_2dddf4;
        case 0x2dddf8u: goto label_2dddf8;
        case 0x2dddfcu: goto label_2dddfc;
        case 0x2dde00u: goto label_2dde00;
        case 0x2dde04u: goto label_2dde04;
        case 0x2dde08u: goto label_2dde08;
        case 0x2dde0cu: goto label_2dde0c;
        case 0x2dde10u: goto label_2dde10;
        case 0x2dde14u: goto label_2dde14;
        case 0x2dde18u: goto label_2dde18;
        case 0x2dde1cu: goto label_2dde1c;
        case 0x2dde20u: goto label_2dde20;
        case 0x2dde24u: goto label_2dde24;
        case 0x2dde28u: goto label_2dde28;
        case 0x2dde2cu: goto label_2dde2c;
        case 0x2dde30u: goto label_2dde30;
        case 0x2dde34u: goto label_2dde34;
        case 0x2dde38u: goto label_2dde38;
        case 0x2dde3cu: goto label_2dde3c;
        case 0x2dde40u: goto label_2dde40;
        case 0x2dde44u: goto label_2dde44;
        case 0x2dde48u: goto label_2dde48;
        case 0x2dde4cu: goto label_2dde4c;
        default: break;
    }

    ctx->pc = 0x2ddd48u;

label_2ddd48:
    // 0x2ddd48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ddd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ddd4c:
    // 0x2ddd4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ddd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2ddd50:
    // 0x2ddd50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ddd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2ddd54:
    // 0x2ddd54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ddd58:
    // 0x2ddd58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ddd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ddd5c:
    // 0x2ddd5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ddd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ddd60:
    // 0x2ddd60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ddd60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ddd64:
    // 0x2ddd64: 0xc08a08a  jal         func_228228
label_2ddd68:
    if (ctx->pc == 0x2DDD68u) {
        ctx->pc = 0x2DDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD64u;
        // 0x2ddd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD6Cu;
        goto label_2ddd6c;
    }
    ctx->pc = 0x2DDD64u;
    SET_GPR_U32(ctx, 31, 0x2DDD6Cu);
    ctx->pc = 0x2DDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD64u;
    // 0x2ddd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2DDD64u, 0x2DDD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD6Cu;
label_2ddd6c:
    // 0x2ddd6c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2ddd70:
    if (ctx->pc == 0x2DDD70u) {
        ctx->pc = 0x2DDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD6Cu;
        // 0x2ddd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD74u;
        goto label_2ddd74;
    }
    ctx->pc = 0x2DDD6Cu;
    {
        const bool branch_taken_0x2ddd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD6Cu;
        // 0x2ddd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd6c) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDD74u;
label_2ddd74:
    // 0x2ddd74: 0xc089bfc  jal         func_226FF0
label_2ddd78:
    if (ctx->pc == 0x2DDD78u) {
        ctx->pc = 0x2DDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD74u;
        // 0x2ddd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD7Cu;
        goto label_2ddd7c;
    }
    ctx->pc = 0x2DDD74u;
    SET_GPR_U32(ctx, 31, 0x2DDD7Cu);
    ctx->pc = 0x2DDD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD74u;
    // 0x2ddd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2DDD74u, 0x2DDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD7Cu;
label_2ddd7c:
    // 0x2ddd7c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2ddd80:
    if (ctx->pc == 0x2DDD80u) {
        ctx->pc = 0x2DDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD7Cu;
        // 0x2ddd80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD84u;
        goto label_2ddd84;
    }
    ctx->pc = 0x2DDD7Cu;
    {
        const bool branch_taken_0x2ddd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD7Cu;
        // 0x2ddd80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd7c) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDD84u;
label_2ddd84:
    // 0x2ddd84: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2ddd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2ddd88:
    // 0x2ddd88: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ddd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2ddd8c:
    // 0x2ddd8c: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2ddd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2ddd90:
    // 0x2ddd90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ddd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2ddd94:
    // 0x2ddd94: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2ddd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_2ddd98:
    // 0x2ddd98: 0x2472f2f0  addiu       $s2, $v1, -0xD10
    ctx->pc = 0x2ddd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_2ddd9c:
    // 0x2ddd9c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2ddd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2ddda0:
    // 0x2ddda0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ddda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ddda4:
    // 0x2ddda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ddda8:
    // 0x2ddda8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ddda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2dddac:
    // 0x2dddac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dddb0:
    // 0x2dddb0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dddb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dddb4:
    // 0x2dddb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dddb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dddb8:
    // 0x2dddb8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dddb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dddbc:
    // 0x2dddbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dddbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dddc0:
    // 0x2dddc0: 0xc0a757c  jal         func_29D5F0
label_2dddc4:
    if (ctx->pc == 0x2DDDC4u) {
        ctx->pc = 0x2DDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDC0u;
        // 0x2dddc4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDC8u;
        goto label_2dddc8;
    }
    ctx->pc = 0x2DDDC0u;
    SET_GPR_U32(ctx, 31, 0x2DDDC8u);
    ctx->pc = 0x2DDDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDC0u;
    // 0x2dddc4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2DDDC0u, 0x2DDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDC8u;
label_2dddc8:
    // 0x2dddc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dddc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dddcc:
    // 0x2dddcc: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2dddd0:
    if (ctx->pc == 0x2DDDD0u) {
        ctx->pc = 0x2DDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDCCu;
        // 0x2dddd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDD4u;
        goto label_2dddd4;
    }
    ctx->pc = 0x2DDDCCu;
    {
        const bool branch_taken_0x2dddcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDCCu;
        // 0x2dddd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dddcc) {
            ctx->pc = 0x2DDE2Cu;
            goto label_2dde2c;
        }
    }
    ctx->pc = 0x2DDDD4u;
label_2dddd4:
    // 0x2dddd4: 0xc0e5452  jal         func_395148
label_2dddd8:
    if (ctx->pc == 0x2DDDD8u) {
        ctx->pc = 0x2DDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDD4u;
        // 0x2dddd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDDCu;
        goto label_2ddddc;
    }
    ctx->pc = 0x2DDDD4u;
    SET_GPR_U32(ctx, 31, 0x2DDDDCu);
    ctx->pc = 0x2DDDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDD4u;
    // 0x2dddd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395148u, 0x2DDDD4u, 0x2DDDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDDCu;
label_2ddddc:
    // 0x2ddddc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2ddde0:
    if (ctx->pc == 0x2DDDE0u) {
        ctx->pc = 0x2DDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDDCu;
        // 0x2ddde0: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDE4u;
        goto label_2ddde4;
    }
    ctx->pc = 0x2DDDDCu;
    {
        const bool branch_taken_0x2ddddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddddc) {
            ctx->pc = 0x2DDDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDDDCu;
            // 0x2ddde0: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDE30u;
            goto label_2dde30;
        }
    }
    ctx->pc = 0x2DDDE4u;
label_2ddde4:
    // 0x2ddde4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ddde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ddde8:
    // 0x2ddde8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ddde8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dddec:
    // 0x2dddec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dddf0:
    // 0x2dddf0: 0x40f809  jalr        $v0
label_2dddf4:
    if (ctx->pc == 0x2DDDF4u) {
        ctx->pc = 0x2DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDF0u;
        // 0x2dddf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDF8u;
        goto label_2dddf8;
    }
    ctx->pc = 0x2DDDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DDDF8u);
        ctx->pc = 0x2DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDF0u;
        // 0x2dddf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDF0u, 0x2DDDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDDF8u;
label_2dddf8:
    // 0x2dddf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dddfc:
    // 0x2dddfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dddfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dde00:
    // 0x2dde00: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dde00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dde04:
    // 0x2dde04: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dde04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dde08:
    // 0x2dde08: 0x40f809  jalr        $v0
label_2dde0c:
    if (ctx->pc == 0x2DDE0Cu) {
        ctx->pc = 0x2DDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE08u;
        // 0x2dde0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE10u;
        goto label_2dde10;
    }
    ctx->pc = 0x2DDE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DDE10u);
        ctx->pc = 0x2DDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE08u;
        // 0x2dde0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE08u, 0x2DDE10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDE10u;
label_2dde10:
    // 0x2dde10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dde10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dde14:
    // 0x2dde14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dde14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dde18:
    // 0x2dde18: 0xc0b71c2  jal         func_2DC708
label_2dde1c:
    if (ctx->pc == 0x2DDE1Cu) {
        ctx->pc = 0x2DDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE18u;
        // 0x2dde1c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE20u;
        goto label_2dde20;
    }
    ctx->pc = 0x2DDE18u;
    SET_GPR_U32(ctx, 31, 0x2DDE20u);
    ctx->pc = 0x2DDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE18u;
    // 0x2dde1c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2DDE18u, 0x2DDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE20u;
label_2dde20:
    // 0x2dde20: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2dde20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_2dde24:
    // 0x2dde24: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dde28:
    if (ctx->pc == 0x2DDE28u) {
        ctx->pc = 0x2DDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE24u;
        // 0x2dde28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE2Cu;
        goto label_2dde2c;
    }
    ctx->pc = 0x2DDE24u;
    {
        const bool branch_taken_0x2dde24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE24u;
        // 0x2dde28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde24) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDE2Cu;
label_2dde2c:
    // 0x2dde2c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2dde2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_2dde30:
    // 0x2dde30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dde30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dde34:
    // 0x2dde34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2dde34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dde38:
    // 0x2dde38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dde38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dde3c:
    // 0x2dde3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dde3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dde40:
    // 0x2dde40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dde40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dde44:
    // 0x2dde44: 0x3e00008  jr          $ra
label_2dde48:
    if (ctx->pc == 0x2DDE48u) {
        ctx->pc = 0x2DDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE44u;
        // 0x2dde48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE4Cu;
        goto label_2dde4c;
    }
    ctx->pc = 0x2DDE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE44u;
        // 0x2dde48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDE4Cu;
label_2dde4c:
    // 0x2dde4c: 0x0  nop
    ctx->pc = 0x2dde4cu;
    // NOP
    ctx->pc = 0x2dde50u;
}
