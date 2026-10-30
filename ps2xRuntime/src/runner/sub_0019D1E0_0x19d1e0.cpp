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

// Function: sub_0019D1E0
// Address: 0x19d1e0 - 0x19d318
void sub_0019D1E0_0x19d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D1E0_0x19d1e0");
#endif

    switch (ctx->pc) {
        case 0x19d244u: goto label_19d244;
        case 0x19d250u: goto label_19d250;
        case 0x19d270u: goto label_19d270;
        case 0x19d280u: goto label_19d280;
        case 0x19d28cu: goto label_19d28c;
        default: break;
    }

    ctx->pc = 0x19d1e0u;

    // 0x19d1e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19d1e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19d1e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19d1ec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19d1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x19d1f0: 0xc441cf28  lwc1        $f1, -0x30D8($v0)
    ctx->pc = 0x19d1f0u;
    { uint32_t bits = FAST_READ32(0x50CF28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d1f4: 0xc600cf38  lwc1        $f0, -0x30C8($s0)
    ctx->pc = 0x19d1f4u;
    { uint32_t bits = FAST_READ32(0x50CF38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d1f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19d1fc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x19d200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19d200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19d204: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x19d204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x19d208: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19d208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d20c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19d20cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19d210: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19d210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d214: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19d218: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19d218u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19d21c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19d220: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19d220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x19d224: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19d228: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x19d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x19d22c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x19d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x19d230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d234: 0x8e510074  lw          $s1, 0x74($s2)
    ctx->pc = 0x19d234u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x19d238: 0x8e530078  lw          $s3, 0x78($s2)
    ctx->pc = 0x19d238u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x19d23c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x19D23Cu;
    SET_GPR_U32(ctx, 31, 0x19D244u);
    ctx->pc = 0x19D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D23Cu;
    // 0x19d240: 0xe600cf38  swc1        $f0, -0x30C8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954808), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x19D23Cu, 0x19D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D244u;
label_19d244:
    // 0x19d244: 0xc60ccf38  lwc1        $f12, -0x30C8($s0)
    ctx->pc = 0x19d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19d248: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x19D248u;
    SET_GPR_U32(ctx, 31, 0x19D250u);
    ctx->pc = 0x19D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D248u;
    // 0x19d24c: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x19D248u, 0x19D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D250u;
label_19d250:
    // 0x19d250: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x19d250u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x19d254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d258: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x19D258u;
    {
        const bool branch_taken_0x19d258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D258u;
        // 0x19d25c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d258) {
            ctx->pc = 0x19D2E4u;
            goto label_19d2e4;
        }
    }
    ctx->pc = 0x19D260u;
    // 0x19d260: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x19d260u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19d264: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x19d264u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d268: 0x24131d00  addiu       $s3, $zero, 0x1D00
    ctx->pc = 0x19d268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7424));
    // 0x19d26c: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x19d26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d270:
    // 0x19d270: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x19D270u;
    {
        const bool branch_taken_0x19d270 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D270u;
        // 0x19d274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d270) {
            ctx->pc = 0x19D2D4u;
            goto label_19d2d4;
        }
    }
    ctx->pc = 0x19D278u;
    // 0x19d278: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x19d278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x19d27c: 0x0  nop
    ctx->pc = 0x19d27cu;
    // NOP
label_19d280:
    // 0x19d280: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19d280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d284: 0xc0674c6  jal         func_19D318
    ctx->pc = 0x19D284u;
    SET_GPR_U32(ctx, 31, 0x19D28Cu);
    ctx->pc = 0x19D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D284u;
    // 0x19d288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D318u, 0x19D284u, 0x19D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D28Cu;
label_19d28c:
    // 0x19d28c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d290: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x19d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d294: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x19d294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x19d298: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x19d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19d29c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19d29cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x19d2a0: 0x4600a082  mul.s       $f2, $f20, $f0
    ctx->pc = 0x19d2a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x19d2a4: 0xc603fff8  lwc1        $f3, -0x8($s0)
    ctx->pc = 0x19d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d2a8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x19d2a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x19d2ac: 0xc601fffc  lwc1        $f1, -0x4($s0)
    ctx->pc = 0x19d2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d2b0: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x19d2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x19d2b4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x19d2b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x19d2b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x19d2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x19d2bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19d2bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19d2c0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x19d2c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x19d2c4: 0xe601fff4  swc1        $f1, -0xC($s0)
    ctx->pc = 0x19d2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), bits); }
    // 0x19d2c8: 0xe603fff0  swc1        $f3, -0x10($s0)
    ctx->pc = 0x19d2c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), bits); }
    // 0x19d2cc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19D2CCu;
    {
        const bool branch_taken_0x19d2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2CCu;
        // 0x19d2d0: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2cc) {
            ctx->pc = 0x19D280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d280;
        }
    }
    ctx->pc = 0x19D2D4u;
label_19d2d4:
    // 0x19d2d4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x19d2d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d2d8: 0x77102b  sltu        $v0, $v1, $s7
    ctx->pc = 0x19d2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x19d2dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x19D2DCu;
    {
        const bool branch_taken_0x19d2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2DCu;
        // 0x19d2e0: 0x24760001  addiu       $s6, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2dc) {
            ctx->pc = 0x19D270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d270;
        }
    }
    ctx->pc = 0x19D2E4u;
label_19d2e4:
    // 0x19d2e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19d2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d2e8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19d2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d2ec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19d2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d2f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19d2f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d2f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d2f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d2f8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19d2f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d2fc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x19d2fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d300: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x19d300u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d308: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x19d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19d30c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x19d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d310: 0x3e00008  jr          $ra
    ctx->pc = 0x19D310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D310u;
        // 0x19d314: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D318u;
}
