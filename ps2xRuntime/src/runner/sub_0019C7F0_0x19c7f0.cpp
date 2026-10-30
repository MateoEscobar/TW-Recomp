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

// Function: sub_0019C7F0
// Address: 0x19c7f0 - 0x19cac0
void sub_0019C7F0_0x19c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C7F0_0x19c7f0");
#endif

    switch (ctx->pc) {
        case 0x19c868u: goto label_19c868;
        case 0x19c95cu: goto label_19c95c;
        case 0x19c96cu: goto label_19c96c;
        case 0x19c974u: goto label_19c974;
        case 0x19c9b0u: goto label_19c9b0;
        case 0x19ca28u: goto label_19ca28;
        case 0x19ca38u: goto label_19ca38;
        case 0x19ca44u: goto label_19ca44;
        case 0x19ca50u: goto label_19ca50;
        case 0x19ca58u: goto label_19ca58;
        default: break;
    }

    ctx->pc = 0x19c7f0u;

    // 0x19c7f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19c7f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x19c7f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x19c7fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19c7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c800: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x19c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x19c804: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19c804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c808: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x19c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x19c80c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19c80cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c810: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19c810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19c814: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x19c814u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c818: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x19c81c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19c820: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19c824: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x19c824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x19c828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c82c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x19c82cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x19c830: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x19c830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x19c834: 0x12e00092  beqz        $s7, . + 4 + (0x92 << 2)
    ctx->pc = 0x19C834u;
    {
        const bool branch_taken_0x19c834 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C834u;
        // 0x19c838: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c834) {
            ctx->pc = 0x19CA80u;
            goto label_19ca80;
        }
    }
    ctx->pc = 0x19C83Cu;
    // 0x19c83c: 0x17a842  srl         $s5, $s7, 1
    ctx->pc = 0x19c83cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x19c840: 0x171082  srl         $v0, $s7, 2
    ctx->pc = 0x19c840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x19c844: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x19c844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x19c848: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x19c848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x19c84c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19c84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c850: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19c850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x19c854: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19c858: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19c858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c85c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x19c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x19c860: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x19c860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x19c864: 0x0  nop
    ctx->pc = 0x19c864u;
    // NOP
label_19c868:
    // 0x19c868: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x19C868u;
    {
        const bool branch_taken_0x19c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c868) {
            ctx->pc = 0x19C86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C868u;
            // 0x19c86c: 0x2f01023  subu        $v0, $s7, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C8E4u;
            goto label_19c8e4;
        }
    }
    ctx->pc = 0x19C870u;
    // 0x19c870: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C870u;
    {
        const bool branch_taken_0x19c870 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C870u;
        // 0x19c874: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c870) {
            ctx->pc = 0x19C88Cu;
            goto label_19c88c;
        }
    }
    ctx->pc = 0x19C878u;
    // 0x19c878: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x19c878u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c87c: 0x0  nop
    ctx->pc = 0x19c87cu;
    // NOP
    // 0x19c880: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19c884: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19C884u;
    {
        const bool branch_taken_0x19c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c884) {
            ctx->pc = 0x19C8A4u;
            goto label_19c8a4;
        }
    }
    ctx->pc = 0x19C88Cu;
label_19c88c:
    // 0x19c88c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x19c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x19c890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c894: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c898: 0x0  nop
    ctx->pc = 0x19c898u;
    // NOP
    // 0x19c89c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19c8a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19c8a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19c8a4:
    // 0x19c8a4: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C8A4u;
    {
        const bool branch_taken_0x19c8a4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x19c8a4) {
            ctx->pc = 0x19C8C0u;
            goto label_19c8c0;
        }
    }
    ctx->pc = 0x19C8ACu;
    // 0x19c8ac: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x19c8acu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c8b0: 0x0  nop
    ctx->pc = 0x19c8b0u;
    // NOP
    // 0x19c8b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c8b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c8b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C8B8u;
    {
        const bool branch_taken_0x19c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8b8) {
            ctx->pc = 0x19C8CCu;
            goto label_19c8cc;
        }
    }
    ctx->pc = 0x19C8C0u;
label_19c8c0:
    // 0x19c8c0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19c8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c8c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c8c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19c8c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19c8cc:
    // 0x19c8cc: 0x0  nop
    ctx->pc = 0x19c8ccu;
    // NOP
    // 0x19c8d0: 0x0  nop
    ctx->pc = 0x19c8d0u;
    // NOP
    // 0x19c8d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19c8d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19c8d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19c8dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19C8DCu;
    {
        const bool branch_taken_0x19c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8DCu;
        // 0x19c8e0: 0xc44ccf1c  lwc1        $f12, -0x30E4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8dc) {
            ctx->pc = 0x19C954u;
            goto label_19c954;
        }
    }
    ctx->pc = 0x19C8E4u;
label_19c8e4:
    // 0x19c8e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C8E4u;
    {
        const bool branch_taken_0x19c8e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8E4u;
        // 0x19c8e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8e4) {
            ctx->pc = 0x19C900u;
            goto label_19c900;
        }
    }
    ctx->pc = 0x19C8ECu;
    // 0x19c8ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c8f0: 0x0  nop
    ctx->pc = 0x19c8f0u;
    // NOP
    // 0x19c8f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19c8f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19C8F8u;
    {
        const bool branch_taken_0x19c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8f8) {
            ctx->pc = 0x19C918u;
            goto label_19c918;
        }
    }
    ctx->pc = 0x19C900u;
label_19c900:
    // 0x19c900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19c904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c90c: 0x0  nop
    ctx->pc = 0x19c90cu;
    // NOP
    // 0x19c910: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19c914: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19c914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19c918:
    // 0x19c918: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C918u;
    {
        const bool branch_taken_0x19c918 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x19c918) {
            ctx->pc = 0x19C934u;
            goto label_19c934;
        }
    }
    ctx->pc = 0x19C920u;
    // 0x19c920: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x19c920u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c924: 0x0  nop
    ctx->pc = 0x19c924u;
    // NOP
    // 0x19c928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c92c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C92Cu;
    {
        const bool branch_taken_0x19c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c92c) {
            ctx->pc = 0x19C940u;
            goto label_19c940;
        }
    }
    ctx->pc = 0x19C934u;
label_19c934:
    // 0x19c934: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c93c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19c93cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19c940:
    // 0x19c940: 0x0  nop
    ctx->pc = 0x19c940u;
    // NOP
    // 0x19c944: 0x0  nop
    ctx->pc = 0x19c944u;
    // NOP
    // 0x19c948: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19c948u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19c94c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x19c950: 0xc46ccf1c  lwc1        $f12, -0x30E4($v1)
    ctx->pc = 0x19c950u;
    { uint32_t bits = FAST_READ32(0x50CF1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c954:
    // 0x19c954: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x19C954u;
    SET_GPR_U32(ctx, 31, 0x19C95Cu);
    ctx->pc = 0x19C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C954u;
    // 0x19c958: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x19C954u, 0x19C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C95Cu;
label_19c95c:
    // 0x19c95c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x19c95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19c960: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x19c960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x19c964: 0xc12e4b0  jal         func_4B92C0
    ctx->pc = 0x19C964u;
    SET_GPR_U32(ctx, 31, 0x19C96Cu);
    ctx->pc = 0x19C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C964u;
    // 0x19c968: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B92C0u, 0x19C964u, 0x19C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C96Cu;
label_19c96c:
    // 0x19c96c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x19C96Cu;
    SET_GPR_U32(ctx, 31, 0x19C974u);
    ctx->pc = 0x19C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C96Cu;
    // 0x19c970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x19C96Cu, 0x19C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C974u;
label_19c974:
    // 0x19c974: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19c974u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x19c978: 0x261e0001  addiu       $fp, $s0, 0x1
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19c97c: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
    ctx->pc = 0x19C97Cu;
    {
        const bool branch_taken_0x19c97c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C97Cu;
        // 0x19c980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c97c) {
            ctx->pc = 0x19CA70u;
            goto label_19ca70;
        }
    }
    ctx->pc = 0x19C984u;
    // 0x19c984: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x19c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19c988: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x19c988u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x19c98c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19c98cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19c990: 0x32930001  andi        $s3, $s4, 0x1
    ctx->pc = 0x19c990u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x19c994: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x19c994u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x19c998: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19c99c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19c99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19c9a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9a4: 0x24421d08  addiu       $v0, $v0, 0x1D08
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7432));
    // 0x19c9a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c9ac: 0x0  nop
    ctx->pc = 0x19c9acu;
    // NOP
label_19c9b0:
    // 0x19c9b0: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19c9b4: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C9B4u;
    {
        const bool branch_taken_0x19c9b4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x19C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9B4u;
        // 0x19c9b8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9b4) {
            ctx->pc = 0x19C9D0u;
            goto label_19c9d0;
        }
    }
    ctx->pc = 0x19C9BCu;
    // 0x19c9bc: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x19c9bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c9c0: 0x0  nop
    ctx->pc = 0x19c9c0u;
    // NOP
    // 0x19c9c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19c9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19c9c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19C9C8u;
    {
        const bool branch_taken_0x19c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c9c8) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C9D0u;
label_19c9d0:
    // 0x19c9d0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x19c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x19c9d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c9d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c9dc: 0x0  nop
    ctx->pc = 0x19c9dcu;
    // NOP
    // 0x19c9e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19c9e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19c9e4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x19c9e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_19c9e8:
    // 0x19c9e8: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C9E8u;
    {
        const bool branch_taken_0x19c9e8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x19c9e8) {
            ctx->pc = 0x19CA04u;
            goto label_19ca04;
        }
    }
    ctx->pc = 0x19C9F0u;
    // 0x19c9f0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x19c9f0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c9f4: 0x0  nop
    ctx->pc = 0x19c9f4u;
    // NOP
    // 0x19c9f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c9fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19C9FCu;
    {
        const bool branch_taken_0x19c9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c9fc) {
            ctx->pc = 0x19CA14u;
            goto label_19ca14;
        }
    }
    ctx->pc = 0x19CA04u;
label_19ca04:
    // 0x19ca04: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x19ca04u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ca08: 0x0  nop
    ctx->pc = 0x19ca08u;
    // NOP
    // 0x19ca0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ca0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19ca10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19ca10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19ca14:
    // 0x19ca14: 0x0  nop
    ctx->pc = 0x19ca14u;
    // NOP
    // 0x19ca18: 0x0  nop
    ctx->pc = 0x19ca18u;
    // NOP
    // 0x19ca1c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x19ca1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x19ca20: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x19CA20u;
    SET_GPR_U32(ctx, 31, 0x19CA28u);
    ctx->pc = 0x19CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA20u;
    // 0x19ca24: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x19CA20u, 0x19CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA28u;
label_19ca28:
    // 0x19ca28: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x19ca28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19ca2c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x19ca2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x19ca30: 0xc12e4b0  jal         func_4B92C0
    ctx->pc = 0x19CA30u;
    SET_GPR_U32(ctx, 31, 0x19CA38u);
    ctx->pc = 0x19CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA30u;
    // 0x19ca34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B92C0u, 0x19CA30u, 0x19CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA38u;
label_19ca38:
    // 0x19ca38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19ca38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19ca3c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x19CA3Cu;
    SET_GPR_U32(ctx, 31, 0x19CA44u);
    ctx->pc = 0x19CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA3Cu;
    // 0x19ca40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x19CA3Cu, 0x19CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA44u;
label_19ca44:
    // 0x19ca44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ca44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca48: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x19CA48u;
    SET_GPR_U32(ctx, 31, 0x19CA50u);
    ctx->pc = 0x19CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA48u;
    // 0x19ca4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x19CA48u, 0x19CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA50u;
label_19ca50:
    // 0x19ca50: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x19CA50u;
    SET_GPR_U32(ctx, 31, 0x19CA58u);
    ctx->pc = 0x19CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA50u;
    // 0x19ca54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x19CA50u, 0x19CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA58u;
label_19ca58:
    // 0x19ca58: 0xe640fff8  swc1        $f0, -0x8($s2)
    ctx->pc = 0x19ca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967288), bits); }
    // 0x19ca5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ca5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca60: 0xe6550000  swc1        $f21, 0x0($s2)
    ctx->pc = 0x19ca60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x19ca64: 0x94102b  sltu        $v0, $a0, $s4
    ctx->pc = 0x19ca64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x19ca68: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x19CA68u;
    {
        const bool branch_taken_0x19ca68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA68u;
        // 0x19ca6c: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca68) {
            ctx->pc = 0x19C9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c9b0;
        }
    }
    ctx->pc = 0x19CA70u;
label_19ca70:
    // 0x19ca70: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x19ca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca74: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x19ca74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x19ca78: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x19CA78u;
    {
        const bool branch_taken_0x19ca78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA78u;
        // 0x19ca7c: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca78) {
            ctx->pc = 0x19C868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c868;
        }
    }
    ctx->pc = 0x19CA80u;
label_19ca80:
    // 0x19ca80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca84: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19ca84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19ca88: 0xac5632d0  sw          $s6, 0x32D0($v0)
    ctx->pc = 0x19ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13008), GPR_U32(ctx, 22));
    // 0x19ca8c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19ca8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19ca90: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19ca90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19ca94: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19ca94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ca98: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x19ca98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ca9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19ca9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19caa0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x19caa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19caa4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x19caa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19caa8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x19caa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19caac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19caacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cab0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x19cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19cab4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x19cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19cab8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAB8u;
        // 0x19cabc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CAC0u;
}
