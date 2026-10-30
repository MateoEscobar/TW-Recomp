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

// Function: sub_0017E930
// Address: 0x17e930 - 0x17ea60
void sub_0017E930_0x17e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E930_0x17e930");
#endif

    switch (ctx->pc) {
        case 0x17e968u: goto label_17e968;
        case 0x17e978u: goto label_17e978;
        case 0x17e99cu: goto label_17e99c;
        case 0x17ea18u: goto label_17ea18;
        case 0x17ea2cu: goto label_17ea2c;
        default: break;
    }

    ctx->pc = 0x17e930u;

    // 0x17e930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17e934: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17e938: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x17e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17e93c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x17e940: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17e940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17e944: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x17e944u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17e948: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x17e948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17e94c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x17e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x17e950: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17e954: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x17e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x17e958: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x17E958u;
    {
        const bool branch_taken_0x17e958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E958u;
        // 0x17e95c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e958) {
            ctx->pc = 0x17EA44u;
            goto label_17ea44;
        }
    }
    ctx->pc = 0x17E960u;
    // 0x17e960: 0xc12104a  jal         func_484128
    ctx->pc = 0x17E960u;
    SET_GPR_U32(ctx, 31, 0x17E968u);
    ctx->pc = 0x17E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E960u;
    // 0x17e964: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x17E960u, 0x17E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E968u;
label_17e968:
    // 0x17e968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e96c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e970: 0xc11f332  jal         func_47CCC8
    ctx->pc = 0x17E970u;
    SET_GPR_U32(ctx, 31, 0x17E978u);
    ctx->pc = 0x17E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E970u;
    // 0x17e974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CCC8u, 0x17E970u, 0x17E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E978u;
label_17e978:
    // 0x17e978: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x17e978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17e97c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e980: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x17e980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x17e984: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17E984u;
    {
        const bool branch_taken_0x17e984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E984u;
        // 0x17e988: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e984) {
            ctx->pc = 0x17E9B4u;
            goto label_17e9b4;
        }
    }
    ctx->pc = 0x17E98Cu;
    // 0x17e98c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e990: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17e990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17e994: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17E994u;
    {
        const bool branch_taken_0x17e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E994u;
        // 0x17e998: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e994) {
            ctx->pc = 0x17E9F8u;
            goto label_17e9f8;
        }
    }
    ctx->pc = 0x17E99Cu;
label_17e99c:
    // 0x17e99c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e9a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e9a4: 0x0  nop
    ctx->pc = 0x17e9a4u;
    // NOP
    // 0x17e9a8: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x17e9a8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x17e9ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17E9ACu;
    {
        const bool branch_taken_0x17e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9ACu;
        // 0x17e9b0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9ac) {
            ctx->pc = 0x17E9FCu;
            goto label_17e9fc;
        }
    }
    ctx->pc = 0x17E9B4u;
label_17e9b4:
    // 0x17e9b4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x17e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e9b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x17e9b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x17e9bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e9c0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x17e9c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x17e9c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17e9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x17e9c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17e9c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17e9cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17e9ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17e9d0: 0x0  nop
    ctx->pc = 0x17e9d0u;
    // NOP
    // 0x17e9d4: 0x0  nop
    ctx->pc = 0x17e9d4u;
    // NOP
    // 0x17e9d8: 0x46010504  c1          0x10504
    ctx->pc = 0x17e9d8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x17e9dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e9e0: 0x0  nop
    ctx->pc = 0x17e9e0u;
    // NOP
    // 0x17e9e4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x17e9e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e9e8: 0x0  nop
    ctx->pc = 0x17e9e8u;
    // NOP
    // 0x17e9ec: 0x4501ffeb  bc1t        . + 4 + (-0x15 << 2)
    ctx->pc = 0x17E9ECu;
    {
        const bool branch_taken_0x17e9ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9ECu;
        // 0x17e9f0: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9ec) {
            ctx->pc = 0x17E99Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e99c;
        }
    }
    ctx->pc = 0x17E9F4u;
    // 0x17e9f4: 0x0  nop
    ctx->pc = 0x17e9f4u;
    // NOP
label_17e9f8:
    // 0x17e9f8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x17e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_17e9fc:
    // 0x17e9fc: 0x24635300  addiu       $v1, $v1, 0x5300
    ctx->pc = 0x17e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21248));
    // 0x17ea00: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17ea04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17EA04u;
    {
        const bool branch_taken_0x17ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA04u;
        // 0x17ea08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea04) {
            ctx->pc = 0x17EA40u;
            goto label_17ea40;
        }
    }
    ctx->pc = 0x17EA0Cu;
    // 0x17ea0c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x17ea0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea10: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x17ea10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea14: 0x0  nop
    ctx->pc = 0x17ea14u;
    // NOP
label_17ea18:
    // 0x17ea18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ea1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17ea1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17ea20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17ea24: 0xc11db32  jal         func_476CC8
    ctx->pc = 0x17EA24u;
    SET_GPR_U32(ctx, 31, 0x17EA2Cu);
    ctx->pc = 0x17EA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA24u;
    // 0x17ea28: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x476CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476CC8u, 0x17EA24u, 0x17EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA2Cu;
label_17ea2c:
    // 0x17ea2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17ea2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17ea30: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17ea34: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17ea34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17ea38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17EA38u;
    {
        const bool branch_taken_0x17ea38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA38u;
        // 0x17ea3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea38) {
            ctx->pc = 0x17EA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ea18;
        }
    }
    ctx->pc = 0x17EA40u;
label_17ea40:
    // 0x17ea40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17ea40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17ea44:
    // 0x17ea44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x17ea44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ea48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17ea48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ea4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17ea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ea50: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x17ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17ea54: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x17ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ea58: 0x3e00008  jr          $ra
    ctx->pc = 0x17EA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA58u;
        // 0x17ea5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EA60u;
}
