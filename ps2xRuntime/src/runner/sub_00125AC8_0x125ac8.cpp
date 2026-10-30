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

// Function: sub_00125AC8
// Address: 0x125ac8 - 0x125b60
void sub_00125AC8_0x125ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125AC8_0x125ac8");
#endif

    switch (ctx->pc) {
        case 0x125b34u: goto label_125b34;
        default: break;
    }

    ctx->pc = 0x125ac8u;

    // 0x125ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125ad0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x125ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x125ad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x125ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x125ad8: 0x46006146  mov.s       $f5, $f12
    ctx->pc = 0x125ad8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[12]);
    // 0x125adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ae4: 0xc6010208  lwc1        $f1, 0x208($s0)
    ctx->pc = 0x125ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125ae8: 0xc60c0304  lwc1        $f12, 0x304($s0)
    ctx->pc = 0x125ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x125aec: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x125aecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x125af0: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x125af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125af4: 0x46002928  max.s       $f4, $f5, $f0
    ctx->pc = 0x125af4u;
    ctx->f[4] = std::max(ctx->f[5], ctx->f[0]);
    // 0x125af8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x125af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x125afc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125b00: 0x460c20a9  min.s       $f2, $f4, $f12
    ctx->pc = 0x125b00u;
    ctx->f[2] = std::min(ctx->f[4], ctx->f[12]);
    // 0x125b04: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x125b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x125b08: 0x0  nop
    ctx->pc = 0x125b08u;
    // NOP
    // 0x125b0c: 0x0  nop
    ctx->pc = 0x125b0cu;
    // NOP
    // 0x125b10: 0x460c1b03  div.s       $f12, $f3, $f12
    ctx->pc = 0x125b10u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[3], ctx->f[12]); }
    // 0x125b14: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x125b14u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x125b18: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x125b18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x125b1c: 0xe6020344  swc1        $f2, 0x344($s0)
    ctx->pc = 0x125b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 836), bits); }
    // 0x125b20: 0xe6020308  swc1        $f2, 0x308($s0)
    ctx->pc = 0x125b20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x125b24: 0xe602032c  swc1        $f2, 0x32C($s0)
    ctx->pc = 0x125b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 812), bits); }
    // 0x125b28: 0xe6010348  swc1        $f1, 0x348($s0)
    ctx->pc = 0x125b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 840), bits); }
    // 0x125b2c: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x125B2Cu;
    SET_GPR_U32(ctx, 31, 0x125B34u);
    ctx->pc = 0x125B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B2Cu;
    // 0x125b30: 0xe6010330  swc1        $f1, 0x330($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x125B2Cu, 0x125B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B34u;
label_125b34:
    // 0x125b34: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x125b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
    // 0x125b38: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x125b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x125b3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125b40: 0x0  nop
    ctx->pc = 0x125b40u;
    // NOP
    // 0x125b44: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x125b44u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x125b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125b4c: 0xe60003b0  swc1        $f0, 0x3B0($s0)
    ctx->pc = 0x125b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 944), bits); }
    // 0x125b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x125b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125b54: 0x3e00008  jr          $ra
    ctx->pc = 0x125B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B54u;
        // 0x125b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125B5Cu;
    // 0x125b5c: 0x0  nop
    ctx->pc = 0x125b5cu;
    // NOP
    ctx->pc = 0x125b60u;
}
