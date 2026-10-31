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

// Function: sub_002F7028
// Address: 0x2f7028 - 0x2f7120
void sub_002F7028_0x2f7028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7028_0x2f7028");
#endif

    switch (ctx->pc) {
        case 0x2f7058u: goto label_2f7058;
        case 0x2f7080u: goto label_2f7080;
        case 0x2f70a8u: goto label_2f70a8;
        case 0x2f70e8u: goto label_2f70e8;
        default: break;
    }

    ctx->pc = 0x2f7028u;

    // 0x2f7028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f7028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f702c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f7030: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f7030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f7034: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f7034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7038: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2f7038u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f703c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f703cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7040: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2f7040u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f7044: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f7044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f7048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f704c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7050: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x2F7050u;
    SET_GPR_U32(ctx, 31, 0x2F7058u);
    ctx->pc = 0x2F7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7050u;
    // 0x2f7054: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2F7050u, 0x2F7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7058u;
label_2f7058:
    // 0x2f7058: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2f7058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2f705c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f7060: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x2f7060u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2f7064: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f7064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2f7068: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f7068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f706c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f706cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2f7070: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f7070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2f7074: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f7074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f7078: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x2F7078u;
    SET_GPR_U32(ctx, 31, 0x2F7080u);
    ctx->pc = 0x2F707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7078u;
    // 0x2f707c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2F7078u, 0x2F7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7080u;
label_2f7080:
    // 0x2f7080: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f7080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f7084: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2f7084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7088: 0x0  nop
    ctx->pc = 0x2f7088u;
    // NOP
    // 0x2f708c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2F708Cu;
    {
        const bool branch_taken_0x2f708c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F708Cu;
        // 0x2f7090: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f708c) {
            ctx->pc = 0x2F70B4u;
            goto label_2f70b4;
        }
    }
    ctx->pc = 0x2F7094u;
    // 0x2f7094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f709c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f709cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70a0: 0xc0888a2  jal         func_222288
    ctx->pc = 0x2F70A0u;
    SET_GPR_U32(ctx, 31, 0x2F70A8u);
    ctx->pc = 0x2F70A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70A0u;
    // 0x2f70a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2F70A0u, 0x2F70A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70A8u;
label_2f70a8:
    // 0x2f70a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F70A8u;
    {
        const bool branch_taken_0x2f70a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70A8u;
        // 0x2f70ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70a8) {
            ctx->pc = 0x2F70C0u;
            goto label_2f70c0;
        }
    }
    ctx->pc = 0x2F70B0u;
    // 0x2f70b0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2f70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2f70b4:
    // 0x2f70b4: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2f70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2f70b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F70B8u;
    {
        const bool branch_taken_0x2f70b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70B8u;
        // 0x2f70bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70b8) {
            ctx->pc = 0x2F7100u;
            goto label_2f7100;
        }
    }
    ctx->pc = 0x2F70C0u;
label_2f70c0:
    // 0x2f70c0: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x2f70c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2f70c4: 0xc4410b4c  lwc1        $f1, 0xB4C($v0)
    ctx->pc = 0x2f70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f70c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f70c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f70d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f70d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f70d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f70d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f70d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f70d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f70dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f70e0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2F70E0u;
    SET_GPR_U32(ctx, 31, 0x2F70E8u);
    ctx->pc = 0x2F70E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70E0u;
    // 0x2f70e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2F70E0u, 0x2F70E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70E8u;
label_2f70e8:
    // 0x2f70e8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2f70e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2f70ec: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F70ECu;
    {
        const bool branch_taken_0x2f70ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f70ec) {
            ctx->pc = 0x2F70F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F70ECu;
            // 0x2f70f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7104u;
            goto label_2f7104;
        }
    }
    ctx->pc = 0x2F70F4u;
    // 0x2f70f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f70f8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2f70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2f70fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f70fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f7100:
    // 0x2f7100: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f7100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f7104:
    // 0x2f7104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f7104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7108: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f7108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f710c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f710cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7110: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2f7110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f7114: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2f7114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f7118: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7118u;
        // 0x2f711c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7120u;
}
