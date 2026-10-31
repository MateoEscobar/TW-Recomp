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

// Function: sub_00317050
// Address: 0x317050 - 0x317108
void sub_00317050_0x317050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317050_0x317050");
#endif

    switch (ctx->pc) {
        case 0x3170c0u: goto label_3170c0;
        default: break;
    }

    ctx->pc = 0x317050u;

    // 0x317050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x317050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x317054: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x317054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x317058: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x317058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31705c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x317060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317064: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x317064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x317068: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x317068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31706c: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x31706cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x317070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317074: 0x79400  sll         $s2, $a3, 16
    ctx->pc = 0x317074u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x317078: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x317078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x31707c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x317080: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x317080u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x317084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x317084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317088: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x317088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31708c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31708cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x317090: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x317090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x317094: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x317094u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x317098: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x317098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31709c: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x31709cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3170a0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3170a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3170a4: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x3170a4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x3170a8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3170a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3170ac: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x3170acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x3170b0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3170b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170b4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3170b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3170b8: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x3170B8u;
    SET_GPR_U32(ctx, 31, 0x3170C0u);
    ctx->pc = 0x3170BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170B8u;
    // 0x3170bc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x3170B8u, 0x3170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170C0u;
label_3170c0:
    // 0x3170c0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3170c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3170c4: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x3170c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3170c8: 0x24423b60  addiu       $v0, $v0, 0x3B60
    ctx->pc = 0x3170c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x3170cc: 0xe6150024  swc1        $f21, 0x24($s0)
    ctx->pc = 0x3170ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3170d0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3170d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3170d4: 0xa6110028  sh          $s1, 0x28($s0)
    ctx->pc = 0x3170d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 17));
    // 0x3170d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3170d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170dc: 0xa612002a  sh          $s2, 0x2A($s0)
    ctx->pc = 0x3170dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 18));
    // 0x3170e0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3170e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x3170e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3170e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3170e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3170e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3170ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3170ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3170f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3170f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3170f4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3170f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3170f8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3170f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3170fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3170FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170FCu;
        // 0x317100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3170FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317104u;
    // 0x317104: 0x0  nop
    ctx->pc = 0x317104u;
    // NOP
    ctx->pc = 0x317108u;
}
