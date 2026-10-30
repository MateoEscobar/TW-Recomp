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

// Function: sub_00419030
// Address: 0x419030 - 0x419108
void sub_00419030_0x419030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419030_0x419030");
#endif

    switch (ctx->pc) {
        case 0x419050u: goto label_419050;
        case 0x419074u: goto label_419074;
        case 0x4190d8u: goto label_4190d8;
        case 0x4190ecu: goto label_4190ec;
        default: break;
    }

    ctx->pc = 0x419030u;

    // 0x419030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x419030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x419034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x419034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x419038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41903c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x419040: 0x26110234  addiu       $s1, $s0, 0x234
    ctx->pc = 0x419040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x419044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419048: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419048u;
    SET_GPR_U32(ctx, 31, 0x419050u);
    ctx->pc = 0x41904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419048u;
    // 0x41904c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419048u, 0x419050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419050u;
label_419050:
    // 0x419050: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x419050u;
    {
        const bool branch_taken_0x419050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419050) {
            ctx->pc = 0x419054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419050u;
            // 0x419054: 0x92030248  lbu         $v1, 0x248($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4190A0u;
            goto label_4190a0;
        }
    }
    ctx->pc = 0x419058u;
    // 0x419058: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x419058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41905c: 0x8e050258  lw          $a1, 0x258($s0)
    ctx->pc = 0x41905cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x419060: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x419060u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x419064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x419064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x419068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41906c: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x41906Cu;
    SET_GPR_U32(ctx, 31, 0x419074u);
    ctx->pc = 0x419070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41906Cu;
    // 0x419070: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x41906Cu, 0x419074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419074u;
label_419074:
    // 0x419074: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x419074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
    // 0x419078: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x419078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41907c: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x41907cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x419080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x419080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x419084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x419088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x419088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41908c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x41908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x419090: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x419090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x419094: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x419094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x419098: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x419098u;
    {
        const bool branch_taken_0x419098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419098u;
        // 0x41909c: 0xae030238  sw          $v1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419098) {
            ctx->pc = 0x4190D0u;
            goto label_4190d0;
        }
    }
    ctx->pc = 0x4190A0u;
label_4190a0:
    // 0x4190a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4190a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4190a4: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4190A4u;
    {
        const bool branch_taken_0x4190a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4190a4) {
            ctx->pc = 0x4190A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4190A4u;
            // 0x4190a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4190F8u;
            goto label_4190f8;
        }
    }
    ctx->pc = 0x4190ACu;
    // 0x4190ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4190acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4190b0: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x4190b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4190b4: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x4190b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x4190b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4190b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4190bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4190bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4190c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4190c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4190c4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x4190c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x4190c8: 0xe6010240  swc1        $f1, 0x240($s0)
    ctx->pc = 0x4190c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x4190cc: 0xae020238  sw          $v0, 0x238($s0)
    ctx->pc = 0x4190ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
label_4190d0:
    // 0x4190d0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x4190D0u;
    SET_GPR_U32(ctx, 31, 0x4190D8u);
    ctx->pc = 0x4190D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4190D0u;
    // 0x4190d4: 0xe600023c  swc1        $f0, 0x23C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x4190D0u, 0x4190D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4190D8u;
label_4190d8:
    // 0x4190d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4190D8u;
    {
        const bool branch_taken_0x4190d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4190DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190D8u;
        // 0x4190dc: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4190d8) {
            ctx->pc = 0x4190F4u;
            goto label_4190f4;
        }
    }
    ctx->pc = 0x4190E0u;
    // 0x4190e0: 0xa2030248  sb          $v1, 0x248($s0)
    ctx->pc = 0x4190e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 584), (uint8_t)GPR_U32(ctx, 3));
    // 0x4190e4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x4190E4u;
    SET_GPR_U32(ctx, 31, 0x4190ECu);
    ctx->pc = 0x4190E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4190E4u;
    // 0x4190e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x4190E4u, 0x4190ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4190ECu;
label_4190ec:
    // 0x4190ec: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x4190ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4190f0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x4190f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_4190f4:
    // 0x4190f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4190f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4190f8:
    // 0x4190f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4190f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4190fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4190fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419100: 0x3e00008  jr          $ra
    ctx->pc = 0x419100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419100u;
        // 0x419104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419108u;
}
