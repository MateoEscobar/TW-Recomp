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

// Function: sub_0047CE40
// Address: 0x47ce40 - 0x47d080
void sub_0047CE40_0x47ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CE40_0x47ce40");
#endif

    switch (ctx->pc) {
        case 0x47d048u: goto label_47d048;
        case 0x47d054u: goto label_47d054;
        default: break;
    }

    ctx->pc = 0x47ce40u;

    // 0x47ce40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47ce44: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x47ce44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ce48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47ce4c: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x47CE4Cu;
    {
        const bool branch_taken_0x47ce4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CE4Cu;
        // 0x47ce50: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ce4c) {
            ctx->pc = 0x47CED8u;
            goto label_47ced8;
        }
    }
    ctx->pc = 0x47CE54u;
    // 0x47ce54: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x47CE54u;
    {
        const bool branch_taken_0x47ce54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CE54u;
        // 0x47ce58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ce54) {
            ctx->pc = 0x47CE6Cu;
            goto label_47ce6c;
        }
    }
    ctx->pc = 0x47CE5Cu;
    // 0x47ce5c: 0x10c20044  beq         $a2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x47CE5Cu;
    {
        const bool branch_taken_0x47ce5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CE5Cu;
        // 0x47ce60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ce5c) {
            ctx->pc = 0x47CF70u;
            goto label_47cf70;
        }
    }
    ctx->pc = 0x47CE64u;
    // 0x47ce64: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x47CE64u;
    {
        const bool branch_taken_0x47ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CE64u;
        // 0x47ce68: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ce64) {
            ctx->pc = 0x47D034u;
            goto label_47d034;
        }
    }
    ctx->pc = 0x47CE6Cu;
label_47ce6c:
    // 0x47ce6c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x47ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x47ce70: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x47ce74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ce74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ce78: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x47ce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x47ce7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47ce7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47ce80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x47ce80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x47ce84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47ce84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47ce88: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x47ce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x47ce8c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x47ce8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x47ce90: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x47ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x47ce94: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x47ce94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x47ce98: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x47ce98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x47ce9c: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x47ce9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x47cea0: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x47cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x47cea4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x47cea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x47cea8: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x47cea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x47ceac: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x47ceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x47ceb0: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x47ceb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x47ceb4: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x47ceb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x47ceb8: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x47ceb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x47cebc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x47cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cec0: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x47cec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x47cec4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cec8: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x47cec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x47cecc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x47ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ced0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x47CED0u;
    {
        const bool branch_taken_0x47ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CED0u;
        // 0x47ced4: 0xe4e10028  swc1        $f1, 0x28($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ced0) {
            ctx->pc = 0x47D058u;
            goto label_47d058;
        }
    }
    ctx->pc = 0x47CED8u;
label_47ced8:
    // 0x47ced8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cedc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x47cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cee0: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x47cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cee4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47cee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47cee8: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x47cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47ceec: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x47ceecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x47cef0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cef4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47cef4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47cef8: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x47cef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x47cefc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf00: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x47cf00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x47cf04: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x47cf04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x47cf08: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x47cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cf0c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf10: 0xc4e20014  lwc1        $f2, 0x14($a3)
    ctx->pc = 0x47cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cf14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47cf14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47cf18: 0xc4e30018  lwc1        $f3, 0x18($a3)
    ctx->pc = 0x47cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47cf1c: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x47cf1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x47cf20: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf24: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47cf24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47cf28: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x47cf28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x47cf2c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf30: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x47cf30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x47cf34: 0xe4e30018  swc1        $f3, 0x18($a3)
    ctx->pc = 0x47cf34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x47cf38: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x47cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cf3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf40: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x47cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cf44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47cf44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47cf48: 0xc4e30028  lwc1        $f3, 0x28($a3)
    ctx->pc = 0x47cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47cf4c: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x47cf4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x47cf50: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf54: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47cf54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47cf58: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x47cf58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x47cf5c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47cf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf60: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x47cf60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x47cf64: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x47CF64u;
    {
        const bool branch_taken_0x47cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47CF64u;
        // 0x47cf68: 0xe4e30028  swc1        $f3, 0x28($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cf64) {
            ctx->pc = 0x47D058u;
            goto label_47d058;
        }
    }
    ctx->pc = 0x47CF6Cu;
    // 0x47cf6c: 0x0  nop
    ctx->pc = 0x47cf6cu;
    // NOP
label_47cf70:
    // 0x47cf70: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x47cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cf74: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x47cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf78: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x47cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cf7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47cf7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47cf80: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x47cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47cf84: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x47cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47cf88: 0xc4e40014  lwc1        $f4, 0x14($a3)
    ctx->pc = 0x47cf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47cf8c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x47cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x47cf90: 0xc4e50018  lwc1        $f5, 0x18($a3)
    ctx->pc = 0x47cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47cf94: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cf98: 0xc4e60020  lwc1        $f6, 0x20($a3)
    ctx->pc = 0x47cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x47cf9c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47cf9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47cfa0: 0xc4e70024  lwc1        $f7, 0x24($a3)
    ctx->pc = 0x47cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x47cfa4: 0xc4e80028  lwc1        $f8, 0x28($a3)
    ctx->pc = 0x47cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x47cfa8: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x47cfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x47cfac: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x47cfacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x47cfb0: 0xc4ea0034  lwc1        $f10, 0x34($a3)
    ctx->pc = 0x47cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x47cfb4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cfb8: 0xc4e20038  lwc1        $f2, 0x38($a3)
    ctx->pc = 0x47cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47cfbc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x47cfbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x47cfc0: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x47cfc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x47cfc4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cfc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47cfc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47cfcc: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x47cfccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x47cfd0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cfd4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x47cfd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x47cfd8: 0xe4e40014  swc1        $f4, 0x14($a3)
    ctx->pc = 0x47cfd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x47cfdc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cfe0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x47cfe0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x47cfe4: 0xe4e50018  swc1        $f5, 0x18($a3)
    ctx->pc = 0x47cfe4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x47cfe8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cfec: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x47cfecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x47cff0: 0xe4e60020  swc1        $f6, 0x20($a3)
    ctx->pc = 0x47cff0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x47cff4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cff8: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x47cff8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x47cffc: 0xe4e70024  swc1        $f7, 0x24($a3)
    ctx->pc = 0x47cffcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x47d000: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d004: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x47d004u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x47d008: 0xe4e80028  swc1        $f8, 0x28($a3)
    ctx->pc = 0x47d008u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x47d00c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x47d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d010: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x47d010u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x47d014: 0xe4e90030  swc1        $f9, 0x30($a3)
    ctx->pc = 0x47d014u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x47d018: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x47d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d01c: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x47d01cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x47d020: 0xe4ea0034  swc1        $f10, 0x34($a3)
    ctx->pc = 0x47d020u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x47d024: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47d024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47d028: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47d028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47d02c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x47D02Cu;
    {
        const bool branch_taken_0x47d02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D02Cu;
        // 0x47d030: 0xe4e20038  swc1        $f2, 0x38($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d02c) {
            ctx->pc = 0x47D058u;
            goto label_47d058;
        }
    }
    ctx->pc = 0x47D034u;
label_47d034:
    // 0x47d034: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47d034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47d038: 0x24a5ef98  addiu       $a1, $a1, -0x1068
    ctx->pc = 0x47d038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963096));
    // 0x47d03c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x47d040: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47D040u;
    SET_GPR_U32(ctx, 31, 0x47D048u);
    ctx->pc = 0x47D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D040u;
    // 0x47d044: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47D040u, 0x47D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D048u;
label_47d048:
    // 0x47d048: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47d048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d04c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47D04Cu;
    SET_GPR_U32(ctx, 31, 0x47D054u);
    ctx->pc = 0x47D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D04Cu;
    // 0x47d050: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47D04Cu, 0x47D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D054u;
label_47d054:
    // 0x47d054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47d054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d058:
    // 0x47d058: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x47d058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x47d05c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x47d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x47d060: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x47d060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x47d064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d068: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x47d068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x47d06c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x47d06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d070: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x47d070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x47d074: 0x3e00008  jr          $ra
    ctx->pc = 0x47D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D074u;
        // 0x47d078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D07Cu;
    // 0x47d07c: 0x0  nop
    ctx->pc = 0x47d07cu;
    // NOP
    ctx->pc = 0x47d080u;
}
