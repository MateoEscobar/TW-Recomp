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

// Function: sub_0031C030
// Address: 0x31c030 - 0x31c0e0
void sub_0031C030_0x31c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C030_0x31c030");
#endif

    switch (ctx->pc) {
        case 0x31c088u: goto label_31c088;
        default: break;
    }

    ctx->pc = 0x31c030u;

    // 0x31c030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31c034: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31c034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31c038: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31c03c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31c040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31c040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c044: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31c048: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31c04c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x31c04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c054: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31c054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c058: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x31c058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31c05c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31c060: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31c060u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31c064: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31c064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31c068: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x31c068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c06c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31c070: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31c070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31c074: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31c074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31c078: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31c078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31c07c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31c080: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31C080u;
    SET_GPR_U32(ctx, 31, 0x31C088u);
    ctx->pc = 0x31C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C080u;
    // 0x31c084: 0xae090008  sw          $t1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31C080u, 0x31C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C088u;
label_31c088:
    // 0x31c088: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31c088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31c08c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31c090: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x31c090u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31c094: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x31c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x31c098: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31c098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31c09c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x31c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x31c0a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31c0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0a4: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x31c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x31c0a8: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x31c0a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x31c0ac: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x31c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x31c0b0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x31c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x31c0b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31c0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c0b8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31c0bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31c0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c0c0: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x31c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x31c0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c0c8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x31c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x31c0cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31c0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c0d0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x31c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31c0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0D4u;
        // 0x31c0d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C0DCu;
    // 0x31c0dc: 0x0  nop
    ctx->pc = 0x31c0dcu;
    // NOP
    ctx->pc = 0x31c0e0u;
}
