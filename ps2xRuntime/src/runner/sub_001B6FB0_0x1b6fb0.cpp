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

// Function: sub_001B6FB0
// Address: 0x1b6fb0 - 0x1b70c0
void sub_001B6FB0_0x1b6fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6FB0_0x1b6fb0");
#endif

    switch (ctx->pc) {
        case 0x1b6fc8u: goto label_1b6fc8;
        case 0x1b6ff4u: goto label_1b6ff4;
        case 0x1b7054u: goto label_1b7054;
        default: break;
    }

    ctx->pc = 0x1b6fb0u;

    // 0x1b6fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6fb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6fc0: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1B6FC0u;
    SET_GPR_U32(ctx, 31, 0x1B6FC8u);
    ctx->pc = 0x1B6FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FC0u;
    // 0x1b6fc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1B6FC0u, 0x1B6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FC8u;
label_1b6fc8:
    // 0x1b6fc8: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1b6fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1b6fcc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1b6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1b6fd0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b6fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6fd8: 0x2442a068  addiu       $v0, $v0, -0x5F98
    ctx->pc = 0x1b6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942824));
    // 0x1b6fdc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b6fe0: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x1b6fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6fe4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b6fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b6fe8: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x1b6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x1b6fec: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1B6FECu;
    SET_GPR_U32(ctx, 31, 0x1B6FF4u);
    ctx->pc = 0x1B6FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FECu;
    // 0x1b6ff0: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1B6FECu, 0x1B6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FF4u;
label_1b6ff4:
    // 0x1b6ff4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b6ff8: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x1b6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b6ffc: 0xc441d61c  lwc1        $f1, -0x29E4($v0)
    ctx->pc = 0x1b6ffcu;
    { uint32_t bits = FAST_READ32(0x50D61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7000: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b7000u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b7004: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7004u;
    {
        const bool branch_taken_0x1b7004 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7004u;
        // 0x1b7008: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7004) {
            ctx->pc = 0x1B7020u;
            goto label_1b7020;
        }
    }
    ctx->pc = 0x1B700Cu;
    // 0x1b700c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b700cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7010: 0x0  nop
    ctx->pc = 0x1b7010u;
    // NOP
    // 0x1b7014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7018u;
    {
        const bool branch_taken_0x1b7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7018) {
            ctx->pc = 0x1B703Cu;
            goto label_1b703c;
        }
    }
    ctx->pc = 0x1B7020u;
label_1b7020:
    // 0x1b7020: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1b7020u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b7024: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b7024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b7028: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b702c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b702cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7030: 0x0  nop
    ctx->pc = 0x1b7030u;
    // NOP
    // 0x1b7034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7038: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b7038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b703c:
    // 0x1b703c: 0x0  nop
    ctx->pc = 0x1b703cu;
    // NOP
    // 0x1b7040: 0x0  nop
    ctx->pc = 0x1b7040u;
    // NOP
    // 0x1b7044: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b7044u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b7048: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b7048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b704c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1B704Cu;
    SET_GPR_U32(ctx, 31, 0x1B7054u);
    ctx->pc = 0x1B7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B704Cu;
    // 0x1b7050: 0xe600010c  swc1        $f0, 0x10C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1B704Cu, 0x1B7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7054u;
label_1b7054:
    // 0x1b7054: 0xc621d61c  lwc1        $f1, -0x29E4($s1)
    ctx->pc = 0x1b7054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7058: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1b7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b705c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b705cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b7060: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7060u;
    {
        const bool branch_taken_0x1b7060 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7060u;
        // 0x1b7064: 0x46000047  neg.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7060) {
            ctx->pc = 0x1B707Cu;
            goto label_1b707c;
        }
    }
    ctx->pc = 0x1B7068u;
    // 0x1b7068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b706c: 0x0  nop
    ctx->pc = 0x1b706cu;
    // NOP
    // 0x1b7070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7074: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7074u;
    {
        const bool branch_taken_0x1b7074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7074) {
            ctx->pc = 0x1B7098u;
            goto label_1b7098;
        }
    }
    ctx->pc = 0x1B707Cu;
label_1b707c:
    // 0x1b707c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b707cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b7080: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7084: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b708c: 0x0  nop
    ctx->pc = 0x1b708cu;
    // NOP
    // 0x1b7090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7094: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b7094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b7098:
    // 0x1b7098: 0x0  nop
    ctx->pc = 0x1b7098u;
    // NOP
    // 0x1b709c: 0x0  nop
    ctx->pc = 0x1b709cu;
    // NOP
    // 0x1b70a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b70a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b70a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b70a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b70a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b70ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b70acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b70b0: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1b70b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x1b70b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b70b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b70b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B70B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70B8u;
        // 0x1b70bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B70B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B70C0u;
}
