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

// Function: sub_00221108
// Address: 0x221108 - 0x221260
void sub_00221108_0x221108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221108_0x221108");
#endif

    switch (ctx->pc) {
        case 0x221148u: goto label_221148;
        case 0x221188u: goto label_221188;
        case 0x221190u: goto label_221190;
        case 0x2211a0u: goto label_2211a0;
        case 0x2211bcu: goto label_2211bc;
        case 0x2211f4u: goto label_2211f4;
        case 0x221210u: goto label_221210;
        case 0x221248u: goto label_221248;
        default: break;
    }

    ctx->pc = 0x221108u;

    // 0x221108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22110c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221110: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x221110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x221114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22111c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221120: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x221120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x221124: 0x50430049  beql        $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x221124u;
    {
        const bool branch_taken_0x221124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x221124) {
            ctx->pc = 0x221128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221124u;
            // 0x221128: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22124Cu;
            goto label_22124c;
        }
    }
    ctx->pc = 0x22112Cu;
    // 0x22112c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x221130: 0x84620144  lh          $v0, 0x144($v1)
    ctx->pc = 0x221130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x221134: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x221134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x221138: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x221138u;
    {
        const bool branch_taken_0x221138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221138) {
            ctx->pc = 0x22113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221138u;
            // 0x22113c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221174u;
            goto label_221174;
        }
    }
    ctx->pc = 0x221140u;
    // 0x221140: 0xc088b98  jal         func_222E60
    ctx->pc = 0x221140u;
    SET_GPR_U32(ctx, 31, 0x221148u);
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x221140u, 0x221148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221148u;
label_221148:
    // 0x221148: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x221148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22114c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22114cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221150: 0x0  nop
    ctx->pc = 0x221150u;
    // NOP
    // 0x221154: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x221154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x221158: 0x84620144  lh          $v0, 0x144($v1)
    ctx->pc = 0x221158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x22115c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22115cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221160: 0x0  nop
    ctx->pc = 0x221160u;
    // NOP
    // 0x221164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221168: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x221168u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22116c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22116Cu;
    {
        const bool branch_taken_0x22116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22116Cu;
        // 0x221170: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22116c) {
            ctx->pc = 0x221178u;
            goto label_221178;
        }
    }
    ctx->pc = 0x221174u;
label_221174:
    // 0x221174: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_221178:
    // 0x221178: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x221178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x22117c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22117cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221180: 0xc06c90c  jal         func_1B2430
    ctx->pc = 0x221180u;
    SET_GPR_U32(ctx, 31, 0x221188u);
    ctx->pc = 0x221184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221180u;
    // 0x221184: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2430u, 0x221180u, 0x221188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221188u;
label_221188:
    // 0x221188: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x221188u;
    SET_GPR_U32(ctx, 31, 0x221190u);
    ctx->pc = 0x22118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221188u;
    // 0x22118c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x221188u, 0x221190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221190u;
label_221190:
    // 0x221190: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221190u;
    {
        const bool branch_taken_0x221190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221190) {
            ctx->pc = 0x221194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221190u;
            // 0x221194: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2211A8u;
            goto label_2211a8;
        }
    }
    ctx->pc = 0x221198u;
    // 0x221198: 0xc089ff6  jal         func_227FD8
    ctx->pc = 0x221198u;
    SET_GPR_U32(ctx, 31, 0x2211A0u);
    ctx->pc = 0x22119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221198u;
    // 0x22119c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x221198u, 0x2211A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211A0u;
label_2211a0:
    // 0x2211a0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2211A0u;
    {
        const bool branch_taken_0x2211a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2211A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211A0u;
        // 0x2211a4: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211a0) {
            ctx->pc = 0x2211FCu;
            goto label_2211fc;
        }
    }
    ctx->pc = 0x2211A8u;
label_2211a8:
    // 0x2211a8: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x2211a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x2211ac: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2211ACu;
    {
        const bool branch_taken_0x2211ac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2211ac) {
            ctx->pc = 0x2211B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2211ACu;
            // 0x2211b0: 0x8e050380  lw          $a1, 0x380($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2211E8u;
            goto label_2211e8;
        }
    }
    ctx->pc = 0x2211B4u;
    // 0x2211b4: 0xc088c1a  jal         func_223068
    ctx->pc = 0x2211B4u;
    SET_GPR_U32(ctx, 31, 0x2211BCu);
    ctx->pc = 0x2211B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211B4u;
    // 0x2211b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x2211B4u, 0x2211BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211BCu;
label_2211bc:
    // 0x2211bc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2211bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2211c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2211c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2211c4: 0x0  nop
    ctx->pc = 0x2211c4u;
    // NOP
    // 0x2211c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2211c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2211cc: 0x84620148  lh          $v0, 0x148($v1)
    ctx->pc = 0x2211ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x2211d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2211d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2211d4: 0x0  nop
    ctx->pc = 0x2211d4u;
    // NOP
    // 0x2211d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2211d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2211dc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2211dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2211e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2211E0u;
    {
        const bool branch_taken_0x2211e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2211E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211E0u;
        // 0x2211e4: 0x8e050380  lw          $a1, 0x380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211e0) {
            ctx->pc = 0x2211ECu;
            goto label_2211ec;
        }
    }
    ctx->pc = 0x2211E8u;
label_2211e8:
    // 0x2211e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2211e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2211ec:
    // 0x2211ec: 0xc06c918  jal         func_1B2460
    ctx->pc = 0x2211ECu;
    SET_GPR_U32(ctx, 31, 0x2211F4u);
    ctx->pc = 0x2211F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211ECu;
    // 0x2211f0: 0x26240840  addiu       $a0, $s1, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2460u, 0x2211ECu, 0x2211F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211F4u;
label_2211f4:
    // 0x2211f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2211F4u;
    {
        const bool branch_taken_0x2211f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2211F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211F4u;
        // 0x2211f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211f4) {
            ctx->pc = 0x22124Cu;
            goto label_22124c;
        }
    }
    ctx->pc = 0x2211FCu;
label_2211fc:
    // 0x2211fc: 0x8443014a  lh          $v1, 0x14A($v0)
    ctx->pc = 0x2211fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 330)));
    // 0x221200: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x221200u;
    {
        const bool branch_taken_0x221200 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x221200) {
            ctx->pc = 0x221204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221200u;
            // 0x221204: 0x8e050380  lw          $a1, 0x380($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22123Cu;
            goto label_22123c;
        }
    }
    ctx->pc = 0x221208u;
    // 0x221208: 0xc088c62  jal         func_223188
    ctx->pc = 0x221208u;
    SET_GPR_U32(ctx, 31, 0x221210u);
    ctx->pc = 0x22120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221208u;
    // 0x22120c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223188u, 0x221208u, 0x221210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221210u;
label_221210:
    // 0x221210: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x221210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x221214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221218: 0x0  nop
    ctx->pc = 0x221218u;
    // NOP
    // 0x22121c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22121cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x221220: 0x8462014a  lh          $v0, 0x14A($v1)
    ctx->pc = 0x221220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 330)));
    // 0x221224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221228: 0x0  nop
    ctx->pc = 0x221228u;
    // NOP
    // 0x22122c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22122cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221230: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x221230u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x221234: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x221234u;
    {
        const bool branch_taken_0x221234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221234u;
        // 0x221238: 0x8e050380  lw          $a1, 0x380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221234) {
            ctx->pc = 0x221240u;
            goto label_221240;
        }
    }
    ctx->pc = 0x22123Cu;
label_22123c:
    // 0x22123c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22123cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_221240:
    // 0x221240: 0xc06c918  jal         func_1B2460
    ctx->pc = 0x221240u;
    SET_GPR_U32(ctx, 31, 0x221248u);
    ctx->pc = 0x221244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221240u;
    // 0x221244: 0x26240840  addiu       $a0, $s1, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2460u, 0x221240u, 0x221248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221248u;
label_221248:
    // 0x221248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x221248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22124c:
    // 0x22124c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22124cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221254: 0x3e00008  jr          $ra
    ctx->pc = 0x221254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221254u;
        // 0x221258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22125Cu;
    // 0x22125c: 0x0  nop
    ctx->pc = 0x22125cu;
    // NOP
    ctx->pc = 0x221260u;
}
