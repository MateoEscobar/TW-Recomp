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

// Function: sub_004BE028
// Address: 0x4be028 - 0x4be2c0
void sub_004BE028_0x4be028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE028_0x4be028");
#endif

    switch (ctx->pc) {
        case 0x4be080u: goto label_4be080;
        default: break;
    }

    ctx->pc = 0x4be028u;

    // 0x4be028: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4be028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4be02c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4be02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4be030: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4be030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be034: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4be034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4be038: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4be03c: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x4be03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x4be040: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x4be040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4be044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be048: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4be048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4be04c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4BE04Cu;
    {
        const bool branch_taken_0x4be04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE04Cu;
        // 0x4be050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be04c) {
            ctx->pc = 0x4BE0CCu;
            goto label_4be0cc;
        }
    }
    ctx->pc = 0x4BE054u;
    // 0x4be054: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4be054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4be058: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4be058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4be05c: 0x0  nop
    ctx->pc = 0x4be05cu;
    // NOP
    // 0x4be060: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4BE060u;
    {
        const bool branch_taken_0x4be060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE060u;
        // 0x4be064: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be060) {
            ctx->pc = 0x4BE0D0u;
            goto label_4be0d0;
        }
    }
    ctx->pc = 0x4BE068u;
    // 0x4be068: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4be068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4be06c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x4be06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4be070: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BE070u;
    {
        const bool branch_taken_0x4be070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE070u;
        // 0x4be074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be070) {
            ctx->pc = 0x4BE0A0u;
            goto label_4be0a0;
        }
    }
    ctx->pc = 0x4BE078u;
    // 0x4be078: 0xc12f970  jal         func_4BE5C0
    ctx->pc = 0x4BE078u;
    SET_GPR_U32(ctx, 31, 0x4BE080u);
    ctx->pc = 0x4BE5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5C0u, 0x4BE078u, 0x4BE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE080u;
label_4be080:
    // 0x4be080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4be080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4be084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4be084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be088: 0x0  nop
    ctx->pc = 0x4be088u;
    // NOP
    // 0x4be08c: 0x0  nop
    ctx->pc = 0x4be08cu;
    // NOP
    // 0x4be090: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4be090u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4be094: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x4BE094u;
    {
        const bool branch_taken_0x4be094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE094u;
        // 0x4be098: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be094) {
            ctx->pc = 0x4BE2B4u;
            goto label_4be2b4;
        }
    }
    ctx->pc = 0x4BE09Cu;
    // 0x4be09c: 0x0  nop
    ctx->pc = 0x4be09cu;
    // NOP
label_4be0a0:
    // 0x4be0a0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BE0A0u;
    {
        const bool branch_taken_0x4be0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE0A0u;
        // 0x4be0a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be0a0) {
            ctx->pc = 0x4BE0C4u;
            goto label_4be0c4;
        }
    }
    ctx->pc = 0x4BE0A8u;
    // 0x4be0a8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4be0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x4be0ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4be0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be0b0: 0x0  nop
    ctx->pc = 0x4be0b0u;
    // NOP
    // 0x4be0b4: 0x0  nop
    ctx->pc = 0x4be0b4u;
    // NOP
    // 0x4be0b8: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x4be0b8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x4be0bc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x4BE0BCu;
    {
        const bool branch_taken_0x4be0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be0bc) {
            ctx->pc = 0x4BE2B4u;
            goto label_4be2b4;
        }
    }
    ctx->pc = 0x4BE0C4u;
label_4be0c4:
    // 0x4be0c4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x4BE0C4u;
    {
        const bool branch_taken_0x4be0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE0C4u;
        // 0x4be0c8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be0c4) {
            ctx->pc = 0x4BE2B0u;
            goto label_4be2b0;
        }
    }
    ctx->pc = 0x4BE0CCu;
label_4be0cc:
    // 0x4be0cc: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x4be0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_4be0d0:
    // 0x4be0d0: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x4be0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x4be0d4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4be0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4be0d8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BE0D8u;
    {
        const bool branch_taken_0x4be0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be0d8) {
            ctx->pc = 0x4BE0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BE0D8u;
            // 0x4be0dc: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BE11Cu;
            goto label_4be11c;
        }
    }
    ctx->pc = 0x4BE0E0u;
    // 0x4be0e0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BE0E0u;
    {
        const bool branch_taken_0x4be0e0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4be0e0) {
            ctx->pc = 0x4BE0F0u;
            goto label_4be0f0;
        }
    }
    ctx->pc = 0x4BE0E8u;
    // 0x4be0e8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x4be0e8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x4be0ec: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x4be0ecu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_4be0f0:
    // 0x4be0f0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x4be0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x4be0f4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x4be0f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x4be0f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4be0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be0fc: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x4be0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x4be100: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x4be100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x4be104: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4be104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be108: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x4be108u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x4be10c: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x4be10cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x4be110: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4be110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4be114: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x4be114u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x4be118: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x4be118u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_4be11c:
    // 0x4be11c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4be11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4be120: 0x24621940  addiu       $v0, $v1, 0x1940
    ctx->pc = 0x4be120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6464));
    // 0x4be124: 0xc4691940  lwc1        $f9, 0x1940($v1)
    ctx->pc = 0x4be124u;
    { uint32_t bits = FAST_READ32(0x591940u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4be128: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x4be128u;
    { uint32_t bits = FAST_READ32(0x591970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4be12c: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x4be12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x4be130: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x4be130u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x4be134: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x4be134u;
    { uint32_t bits = FAST_READ32(0x59196Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4be138: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x4be138u;
    { uint32_t bits = FAST_READ32(0x591968u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4be13c: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x4be13cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x4be140: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x4be140u;
    { uint32_t bits = FAST_READ32(0x591964u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4be144: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x4be144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x4be148: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x4be148u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x4be14c: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x4be14cu;
    { uint32_t bits = FAST_READ32(0x591960u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4be150: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x4be150u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x4be154: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x4be154u;
    { uint32_t bits = FAST_READ32(0x59195Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4be158: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x4be158u;
    { uint32_t bits = FAST_READ32(0x591958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4be15c: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x4be15cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x4be160: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x4be160u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x4be164: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x4be164u;
    { uint32_t bits = FAST_READ32(0x591954u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4be168: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x4be168u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x4be16c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x4be16cu;
    { uint32_t bits = FAST_READ32(0x591950u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4be170: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x4be170u;
    { uint32_t bits = FAST_READ32(0x59194Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4be174: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x4be174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4be178: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x4be178u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x4be17c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x4be17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4be180: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x4be180u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x4be184: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x4be184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4be188: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x4be188u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x4be18c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4be18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4be190: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x4be190u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x4be194: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4be194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4be198: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x4be198u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x4be19c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4be19cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4be1a0: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x4be1a0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x4be1a4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4be1a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4be1a8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x4be1a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x4be1ac: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x4be1acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x4be1b0: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x4be1b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x4be1b4: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x4be1b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x4be1b8: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x4be1b8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x4be1bc: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x4be1bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x4be1c0: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x4be1c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x4be1c4: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x4be1c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x4be1c8: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x4be1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x4be1cc: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x4be1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x4be1d0: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x4be1d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x4be1d4: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x4be1d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x4be1d8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x4be1d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x4be1dc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4BE1DCu;
    {
        const bool branch_taken_0x4be1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE1DCu;
        // 0x4be1e0: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be1dc) {
            ctx->pc = 0x4BE230u;
            goto label_4be230;
        }
    }
    ctx->pc = 0x4BE1E4u;
    // 0x4be1e4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4be1e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4be1e8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4be1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4be1ec: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x4be1ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x4be1f0: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x4be1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x4be1f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4be1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4be1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4be1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4be1fc: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x4be1fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x4be200: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4be200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4be204: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4be204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4be208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4be208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4be20c: 0x0  nop
    ctx->pc = 0x4be20cu;
    // NOP
    // 0x4be210: 0x0  nop
    ctx->pc = 0x4be210u;
    // NOP
    // 0x4be214: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4be214u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4be218: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4be218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4be21c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x4be21cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x4be220: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4be220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4be224: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x4be224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4be228: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4BE228u;
    {
        const bool branch_taken_0x4be228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE228u;
        // 0x4be22c: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be228) {
            ctx->pc = 0x4BE2B0u;
            goto label_4be2b0;
        }
    }
    ctx->pc = 0x4BE230u;
label_4be230:
    // 0x4be230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4be230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4be234: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4BE234u;
    {
        const bool branch_taken_0x4be234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE234u;
        // 0x4be238: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be234) {
            ctx->pc = 0x4BE2B0u;
            goto label_4be2b0;
        }
    }
    ctx->pc = 0x4BE23Cu;
    // 0x4be23c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x4be23cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4be240: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4be240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be244: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4be244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4be248: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4be248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4be24c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4be250: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4be250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4be254: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x4be254u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x4be258: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4be258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x4be25c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4be25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be260: 0x0  nop
    ctx->pc = 0x4be260u;
    // NOP
    // 0x4be264: 0x0  nop
    ctx->pc = 0x4be264u;
    // NOP
    // 0x4be268: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x4be268u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x4be26c: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x4be26cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4be270: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4be270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4be274: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4be274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be278: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4be27c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4be27cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be280: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x4be280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x4be284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4be284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4be288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4be288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be28c: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x4be28cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4be290: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4be290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be294: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x4be294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4be298: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4be298u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be29c: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x4be29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x4be2a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4be2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4be2a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4be2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be2a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4be2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4be2ac: 0x0  nop
    ctx->pc = 0x4be2acu;
    // NOP
label_4be2b0:
    // 0x4be2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4be2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4be2b4:
    // 0x4be2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE2B4u;
        // 0x4be2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE2BCu;
    // 0x4be2bc: 0x0  nop
    ctx->pc = 0x4be2bcu;
    // NOP
    ctx->pc = 0x4be2c0u;
}
