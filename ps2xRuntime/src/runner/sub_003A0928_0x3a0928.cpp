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

// Function: sub_003A0928
// Address: 0x3a0928 - 0x3a0a28
void sub_003A0928_0x3a0928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0928_0x3a0928");
#endif

    switch (ctx->pc) {
        case 0x3a0a14u: goto label_3a0a14;
        default: break;
    }

    ctx->pc = 0x3a0928u;

    // 0x3a0928: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a0928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a092c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0930: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a0930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3a0934: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a0934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a0938: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a0938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a093c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3a093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3a0940: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0940u;
    {
        const bool branch_taken_0x3a0940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0940u;
        // 0x3a0944: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0940) {
            ctx->pc = 0x3A0964u;
            goto label_3a0964;
        }
    }
    ctx->pc = 0x3A0948u;
    // 0x3a0948: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A0948u;
    {
        const bool branch_taken_0x3a0948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0948u;
        // 0x3a094c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0948) {
            ctx->pc = 0x3A0968u;
            goto label_3a0968;
        }
    }
    ctx->pc = 0x3A0950u;
    // 0x3a0950: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a0950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a0954: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0954u;
    {
        const bool branch_taken_0x3a0954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0954u;
        // 0x3a0958: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0954) {
            ctx->pc = 0x3A0968u;
            goto label_3a0968;
        }
    }
    ctx->pc = 0x3A095Cu;
    // 0x3a095c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A095Cu;
    {
        const bool branch_taken_0x3a095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A095Cu;
        // 0x3a0960: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a095c) {
            ctx->pc = 0x3A096Cu;
            goto label_3a096c;
        }
    }
    ctx->pc = 0x3A0964u;
label_3a0964:
    // 0x3a0964: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x3a0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_3a0968:
    // 0x3a0968: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a0968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3a096c:
    // 0x3a096c: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x3a096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0970: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a0970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a0974: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a0974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a0978: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x3a0978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x3a097c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x3a097cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x3a0980: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a0980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a0984: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a0984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a0988: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3a0988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x3a098c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3a098cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a0990: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x3a0990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a0994: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3a0994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a0998: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a0998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a099c: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x3a099cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a09a0: 0x0  nop
    ctx->pc = 0x3a09a0u;
    // NOP
    // 0x3a09a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3A09A4u;
    {
        const bool branch_taken_0x3a09a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A09A4u;
        // 0x3a09a8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a09a4) {
            ctx->pc = 0x3A09B0u;
            goto label_3a09b0;
        }
    }
    ctx->pc = 0x3A09ACu;
    // 0x3a09ac: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x3a09acu;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_3a09b0:
    // 0x3a09b0: 0xc6030054  lwc1        $f3, 0x54($s0)
    ctx->pc = 0x3a09b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a09b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3a09b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3a09b8: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x3a09b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a09bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a09c0: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x3a09c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a09c4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3a09c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x3a09c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a09c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a09cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a09ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a09d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a09d4: 0xa7a2004c  sh          $v0, 0x4C($sp)
    ctx->pc = 0x3a09d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a09d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a09d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a09dc: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x3a09dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3a09e0: 0xa7a4004e  sh          $a0, 0x4E($sp)
    ctx->pc = 0x3a09e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a09e4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3a09e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x3a09e8: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x3a09e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3a09ec: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x3a09ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3a09f0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3a09f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3a09f4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x3a09f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3a09f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3a09f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3a09fc: 0x8cc22c7c  lw          $v0, 0x2C7C($a2)
    ctx->pc = 0x3a09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a0a00: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3a0a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x3a0a04: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x3a0a04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3a0a08: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x3a0a08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3a0a0c: 0xc0e4364  jal         func_390D90
    ctx->pc = 0x3A0A0Cu;
    SET_GPR_U32(ctx, 31, 0x3A0A14u);
    ctx->pc = 0x3A0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A0Cu;
    // 0x3a0a10: 0x8c440848  lw          $a0, 0x848($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390D90u, 0x3A0A0Cu, 0x3A0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A14u;
label_3a0a14:
    // 0x3a0a14: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x3a0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x3a0a18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a0a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a0a1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a0a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0a20: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A20u;
        // 0x3a0a24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0A28u;
}
