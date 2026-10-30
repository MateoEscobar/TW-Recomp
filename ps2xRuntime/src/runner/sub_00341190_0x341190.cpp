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

// Function: sub_00341190
// Address: 0x341190 - 0x3414c0
void sub_00341190_0x341190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341190_0x341190");
#endif

    switch (ctx->pc) {
        case 0x341328u: goto label_341328;
        case 0x341348u: goto label_341348;
        default: break;
    }

    ctx->pc = 0x341190u;

    // 0x341190: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x341190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x341194: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x341194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341198: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x341198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x34119c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3411a0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3411a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3411a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3411a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3411a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3411a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3411ac: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x3411acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3411b0: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3411B0u;
    {
        const bool branch_taken_0x3411b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3411B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411B0u;
        // 0x3411b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411b0) {
            ctx->pc = 0x3412B0u;
            goto label_3412b0;
        }
    }
    ctx->pc = 0x3411B8u;
    // 0x3411b8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3411b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3411bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3411BCu;
    {
        const bool branch_taken_0x3411bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3411C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411BCu;
        // 0x3411c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411bc) {
            ctx->pc = 0x3411D4u;
            goto label_3411d4;
        }
    }
    ctx->pc = 0x3411C4u;
    // 0x3411c4: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3411C4u;
    {
        const bool branch_taken_0x3411c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3411c4) {
            ctx->pc = 0x341320u;
            goto label_341320;
        }
    }
    ctx->pc = 0x3411CCu;
    // 0x3411cc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x3411CCu;
    {
        const bool branch_taken_0x3411cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3411D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411CCu;
        // 0x3411d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411cc) {
            ctx->pc = 0x3414ACu;
            goto label_3414ac;
        }
    }
    ctx->pc = 0x3411D4u;
label_3411d4:
    // 0x3411d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3411d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3411d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3411D8u;
    {
        const bool branch_taken_0x3411d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3411DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411D8u;
        // 0x3411dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411d8) {
            ctx->pc = 0x3411F0u;
            goto label_3411f0;
        }
    }
    ctx->pc = 0x3411E0u;
    // 0x3411e0: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3411E0u;
    {
        const bool branch_taken_0x3411e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3411e0) {
            ctx->pc = 0x3411E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3411E0u;
            // 0x3411e4: 0x78820040  lq          $v0, 0x40($a0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341248u;
            goto label_341248;
        }
    }
    ctx->pc = 0x3411E8u;
    // 0x3411e8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x3411E8u;
    {
        const bool branch_taken_0x3411e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3411ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411E8u;
        // 0x3411ec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411e8) {
            ctx->pc = 0x3414ACu;
            goto label_3414ac;
        }
    }
    ctx->pc = 0x3411F0u;
label_3411f0:
    // 0x3411f0: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x3411f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3411f4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3411f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3411f8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3411f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3411fc: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x3411fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341200: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x341200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341204: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x341204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341208: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x341208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34120c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x34120cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x341210: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x341210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341214: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x341214u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x341218: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x341218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x34121c: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x34121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341220: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x341220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341224: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x341224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x341228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34122c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x34122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341230: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x341230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x341234: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x341234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341238: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x341238u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34123c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x34123cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x341240: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x341240u;
    {
        const bool branch_taken_0x341240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341240u;
        // 0x341244: 0xc4800044  lwc1        $f0, 0x44($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341240) {
            ctx->pc = 0x341314u;
            goto label_341314;
        }
    }
    ctx->pc = 0x341248u;
label_341248:
    // 0x341248: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x341248u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x34124c: 0x78830050  lq          $v1, 0x50($a0)
    ctx->pc = 0x34124cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x341250: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x341250u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x341254: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x341254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341258: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x341258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34125c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x34125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341260: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x341260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x341264: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x341264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341268: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x341268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34126c: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x34126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341270: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x341270u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x341274: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x341274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x341278: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x341278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34127c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x34127cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x341280: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x341280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x341284: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x341284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341288: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x341288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34128c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x34128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341290: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x341290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x341294: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x341294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341298: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x341298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34129c: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x34129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3412a0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3412a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3412a4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x3412a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3412a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3412A8u;
    {
        const bool branch_taken_0x3412a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3412ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412A8u;
        // 0x3412ac: 0xc4800060  lwc1        $f0, 0x60($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3412a8) {
            ctx->pc = 0x341314u;
            goto label_341314;
        }
    }
    ctx->pc = 0x3412B0u;
label_3412b0:
    // 0x3412b0: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x3412b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3412b4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3412b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3412b8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3412b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3412bc: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x3412bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3412c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3412c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412c4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3412c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3412c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3412c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3412cc: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3412ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3412d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3412d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3412d4: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x3412d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3412d8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3412d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3412dc: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x3412dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3412e0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x3412e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412e4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3412e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3412e8: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x3412e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3412ec: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x3412ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3412f0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3412f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412f4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3412f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3412f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3412f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3412fc: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3412fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341300: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x341300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x341304: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x341304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341308: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x341308u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34130c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x34130cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x341310: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x341310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341314:
    // 0x341314: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x341314u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x341318: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x341318u;
    {
        const bool branch_taken_0x341318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341318u;
        // 0x34131c: 0xe6030008  swc1        $f3, 0x8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341318) {
            ctx->pc = 0x34146Cu;
            goto label_34146c;
        }
    }
    ctx->pc = 0x341320u;
label_341320:
    // 0x341320: 0xc0d0c3a  jal         func_3430E8
    ctx->pc = 0x341320u;
    SET_GPR_U32(ctx, 31, 0x341328u);
    ctx->pc = 0x341324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341320u;
    // 0x341324: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3430E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3430E8u, 0x341320u, 0x341328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341328u;
label_341328:
    // 0x341328: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x341328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34132c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34132cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341330: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x341338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34133c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34133cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341344: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x341344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_341348:
    // 0x341348: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x341348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x34134c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x34134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341350: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x341350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x341354: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x341354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x341358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34135c: 0x0  nop
    ctx->pc = 0x34135cu;
    // NOP
    // 0x341360: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x341360u;
    {
        const bool branch_taken_0x341360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341360) {
            ctx->pc = 0x341364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341360u;
            // 0x341364: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341368u;
            goto label_341368;
        }
    }
    ctx->pc = 0x341368u;
label_341368:
    // 0x341368: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x341368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x34136c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x34136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x341370: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x341370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x341374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341378: 0x0  nop
    ctx->pc = 0x341378u;
    // NOP
    // 0x34137c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34137Cu;
    {
        const bool branch_taken_0x34137c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34137c) {
            ctx->pc = 0x341380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34137Cu;
            // 0x341380: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341384u;
            goto label_341384;
        }
    }
    ctx->pc = 0x341384u;
label_341384:
    // 0x341384: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x341384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x341388: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x341388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34138c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x34138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x341390: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x341390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341394: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x341394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341398: 0x0  nop
    ctx->pc = 0x341398u;
    // NOP
    // 0x34139c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34139Cu;
    {
        const bool branch_taken_0x34139c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34139c) {
            ctx->pc = 0x3413A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34139Cu;
            // 0x3413a0: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3413A4u;
            goto label_3413a4;
        }
    }
    ctx->pc = 0x3413A4u;
label_3413a4:
    // 0x3413a4: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x3413a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3413a8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3413a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3413ac: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3413acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3413b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3413b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3413b4: 0x0  nop
    ctx->pc = 0x3413b4u;
    // NOP
    // 0x3413b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3413B8u;
    {
        const bool branch_taken_0x3413b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3413b8) {
            ctx->pc = 0x3413BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3413B8u;
            // 0x3413bc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3413C0u;
            goto label_3413c0;
        }
    }
    ctx->pc = 0x3413C0u;
label_3413c0:
    // 0x3413c0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3413c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3413c4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3413c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3413c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3413c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3413cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3413ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3413d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3413d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3413d4: 0x0  nop
    ctx->pc = 0x3413d4u;
    // NOP
    // 0x3413d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3413D8u;
    {
        const bool branch_taken_0x3413d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3413d8) {
            ctx->pc = 0x3413DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3413D8u;
            // 0x3413dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3413E0u;
            goto label_3413e0;
        }
    }
    ctx->pc = 0x3413E0u;
label_3413e0:
    // 0x3413e0: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x3413e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3413e4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3413e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3413e8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3413e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3413ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3413ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3413f0: 0x0  nop
    ctx->pc = 0x3413f0u;
    // NOP
    // 0x3413f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3413F4u;
    {
        const bool branch_taken_0x3413f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3413f4) {
            ctx->pc = 0x3413F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3413F4u;
            // 0x3413f8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3413FCu;
            goto label_3413fc;
        }
    }
    ctx->pc = 0x3413FCu;
label_3413fc:
    // 0x3413fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3413fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x341400: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x341400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x341404: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x341404u;
    {
        const bool branch_taken_0x341404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341404u;
        // 0x341408: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341404) {
            ctx->pc = 0x341348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341348;
        }
    }
    ctx->pc = 0x34140Cu;
    // 0x34140c: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x34140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x341410: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x341410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x341414: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x341414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x341418: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x341418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x34141c: 0x3a44821  addu        $t1, $sp, $a0
    ctx->pc = 0x34141cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x341420: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x341420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x341424: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x341424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x341428: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x341428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x34142c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x34142cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x341430: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x341430u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x341434: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x341434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x341438: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x341438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x34143c: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x34143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x341440: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x341440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x341444: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x341444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341448: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x341448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34144c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x34144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341450: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x341450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341454: 0xe6240000  swc1        $f4, 0x0($s1)
    ctx->pc = 0x341454u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x341458: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x341458u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x34145c: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x34145cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x341460: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x341460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x341464: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x341464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x341468: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x341468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_34146c:
    // 0x34146c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x34146cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x341470: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x341470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x341474: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x341474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341478: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x341478u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34147c: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x34147cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x341480: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x341480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x341484: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x341484u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x341488: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x341488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x34148c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x34148cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x341490: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x341490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341494: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x341494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x341498: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x341498u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34149c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34149cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3414a0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3414a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3414a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3414a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3414a8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3414a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3414ac:
    // 0x3414ac: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3414acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3414b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3414b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3414b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3414B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3414B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414B4u;
        // 0x3414b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3414B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3414BCu;
    // 0x3414bc: 0x0  nop
    ctx->pc = 0x3414bcu;
    // NOP
    ctx->pc = 0x3414c0u;
}
