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

// Function: sub_0047D080
// Address: 0x47d080 - 0x47d240
void sub_0047D080_0x47d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D080_0x47d080");
#endif

    switch (ctx->pc) {
        case 0x47d204u: goto label_47d204;
        case 0x47d210u: goto label_47d210;
        default: break;
    }

    ctx->pc = 0x47d080u;

    // 0x47d080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47d084: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x47d084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d08c: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x47D08Cu;
    {
        const bool branch_taken_0x47d08c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D08Cu;
        // 0x47d090: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d08c) {
            ctx->pc = 0x47D118u;
            goto label_47d118;
        }
    }
    ctx->pc = 0x47D094u;
    // 0x47d094: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x47D094u;
    {
        const bool branch_taken_0x47d094 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D094u;
        // 0x47d098: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d094) {
            ctx->pc = 0x47D0ACu;
            goto label_47d0ac;
        }
    }
    ctx->pc = 0x47D09Cu;
    // 0x47d09c: 0x10c20047  beq         $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x47D09Cu;
    {
        const bool branch_taken_0x47d09c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D09Cu;
        // 0x47d0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d09c) {
            ctx->pc = 0x47D1BCu;
            goto label_47d1bc;
        }
    }
    ctx->pc = 0x47D0A4u;
    // 0x47d0a4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x47D0A4u;
    {
        const bool branch_taken_0x47d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D0A4u;
        // 0x47d0a8: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d0a4) {
            ctx->pc = 0x47D1F0u;
            goto label_47d1f0;
        }
    }
    ctx->pc = 0x47D0ACu;
label_47d0ac:
    // 0x47d0ac: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x47d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x47d0b0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x47d0b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47d0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47d0b8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x47d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x47d0bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47d0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47d0c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x47d0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x47d0c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47d0c8: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x47d0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x47d0cc: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x47d0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x47d0d0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x47d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x47d0d4: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x47d0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x47d0d8: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x47d0d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x47d0dc: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x47d0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x47d0e0: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x47d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x47d0e4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x47d0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x47d0e8: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x47d0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x47d0ec: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x47d0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x47d0f0: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x47d0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x47d0f4: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x47d0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x47d0f8: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x47d0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x47d0fc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x47d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d100: 0xe4e10030  swc1        $f1, 0x30($a3)
    ctx->pc = 0x47d100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x47d104: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47d104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d108: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x47d108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x47d10c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x47d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d110: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x47D110u;
    {
        const bool branch_taken_0x47d110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D110u;
        // 0x47d114: 0xe4e10038  swc1        $f1, 0x38($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d110) {
            ctx->pc = 0x47D218u;
            goto label_47d218;
        }
    }
    ctx->pc = 0x47D118u;
label_47d118:
    // 0x47d118: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47d118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d11c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x47d11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47d120: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x47d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d124: 0xc4e40010  lwc1        $f4, 0x10($a3)
    ctx->pc = 0x47d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47d128: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47d128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47d12c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x47d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47d130: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47d130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47d134: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x47d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d138: 0xc4e40030  lwc1        $f4, 0x30($a3)
    ctx->pc = 0x47d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47d13c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x47d13cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x47d140: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x47d140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47d144: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47d144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47d148: 0xc4e70014  lwc1        $f7, 0x14($a3)
    ctx->pc = 0x47d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x47d14c: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x47d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x47d150: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x47d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47d154: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x47d154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x47d158: 0xc4e90008  lwc1        $f9, 0x8($a3)
    ctx->pc = 0x47d158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x47d15c: 0xc4ea0018  lwc1        $f10, 0x18($a3)
    ctx->pc = 0x47d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x47d160: 0xc4eb0028  lwc1        $f11, 0x28($a3)
    ctx->pc = 0x47d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x47d164: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x47d164u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x47d168: 0xc4e30038  lwc1        $f3, 0x38($a3)
    ctx->pc = 0x47d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47d16c: 0xe4e40030  swc1        $f4, 0x30($a3)
    ctx->pc = 0x47d16cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x47d170: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d174: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x47d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47d178: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x47d178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x47d17c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x47d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d180: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x47d180u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x47d184: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x47d184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x47d188: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47d188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47d18c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47d18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47d190: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x47d190u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x47d194: 0xe4e50034  swc1        $f5, 0x34($a3)
    ctx->pc = 0x47d194u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x47d198: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d19c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x47d19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47d1a0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x47d1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x47d1a4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x47d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d1a8: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x47d1a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x47d1ac: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x47d1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x47d1b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47d1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47d1b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x47D1B4u;
    {
        const bool branch_taken_0x47d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D1B4u;
        // 0x47d1b8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d1b4) {
            ctx->pc = 0x47D1E4u;
            goto label_47d1e4;
        }
    }
    ctx->pc = 0x47D1BCu;
label_47d1bc:
    // 0x47d1bc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x47d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d1c0: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x47d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d1c4: 0xc4e20034  lwc1        $f2, 0x34($a3)
    ctx->pc = 0x47d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47d1c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47d1c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47d1cc: 0xc4e30038  lwc1        $f3, 0x38($a3)
    ctx->pc = 0x47d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47d1d0: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x47d1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x47d1d4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x47d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47d1d8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x47d1d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x47d1dc: 0xe4e20034  swc1        $f2, 0x34($a3)
    ctx->pc = 0x47d1dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x47d1e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47d1e4:
    // 0x47d1e4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x47d1e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x47d1e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x47D1E8u;
    {
        const bool branch_taken_0x47d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D1E8u;
        // 0x47d1ec: 0xe4e30038  swc1        $f3, 0x38($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d1e8) {
            ctx->pc = 0x47D218u;
            goto label_47d218;
        }
    }
    ctx->pc = 0x47D1F0u;
label_47d1f0:
    // 0x47d1f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47d1f4: 0x24a5ef98  addiu       $a1, $a1, -0x1068
    ctx->pc = 0x47d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963096));
    // 0x47d1f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x47d1fc: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47D1FCu;
    SET_GPR_U32(ctx, 31, 0x47D204u);
    ctx->pc = 0x47D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D1FCu;
    // 0x47d200: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47D1FCu, 0x47D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D204u;
label_47d204:
    // 0x47d204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47d204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d208: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47D208u;
    SET_GPR_U32(ctx, 31, 0x47D210u);
    ctx->pc = 0x47D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D208u;
    // 0x47d20c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47D208u, 0x47D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D210u;
label_47d210:
    // 0x47d210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47d210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d214: 0x0  nop
    ctx->pc = 0x47d214u;
    // NOP
label_47d218:
    // 0x47d218: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x47d218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x47d21c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x47d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x47d220: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x47d220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x47d224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47d224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d228: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x47d228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x47d22c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x47d22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d230: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x47d230u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x47d234: 0x3e00008  jr          $ra
    ctx->pc = 0x47D234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D234u;
        // 0x47d238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D23Cu;
    // 0x47d23c: 0x0  nop
    ctx->pc = 0x47d23cu;
    // NOP
    ctx->pc = 0x47d240u;
}
