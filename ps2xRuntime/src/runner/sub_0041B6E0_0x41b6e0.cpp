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

// Function: sub_0041B6E0
// Address: 0x41b6e0 - 0x41b7a0
void sub_0041B6E0_0x41b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B6E0_0x41b6e0");
#endif

    switch (ctx->pc) {
        case 0x41b758u: goto label_41b758;
        case 0x41b780u: goto label_41b780;
        default: break;
    }

    ctx->pc = 0x41b6e0u;

    // 0x41b6e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x41b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x41b6e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41b6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41b6e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x41b6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x41b6ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x41b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x41b6f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x41b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x41b6f4: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x41b6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41b6f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x41b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x41b6fc: 0x98c00  sll         $s1, $t1, 16
    ctx->pc = 0x41b6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x41b700: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x41b704: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x41b704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x41b708: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x41b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x41b70c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41b710: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41b710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41b714: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x41b714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b718: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x41b718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b71c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x41b71cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x41b720: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x41b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41b724: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x41b724u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x41b728: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x41b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41b72c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x41b72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b730: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x41b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41b734: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x41b734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x41b738: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x41b738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41b73c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b740: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x41b740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41b744: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x41b744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41b748: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x41b748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x41b74c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x41b74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41b750: 0xc094ab8  jal         func_252AE0
    ctx->pc = 0x41B750u;
    SET_GPR_U32(ctx, 31, 0x41B758u);
    ctx->pc = 0x41B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B750u;
    // 0x41b754: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x41B750u, 0x41B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B758u;
label_41b758:
    // 0x41b758: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41b75c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41b75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b760: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x41b760u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41b764: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41b764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b768: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x41b768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b76c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x41b76cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b770: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x41b770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b774: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x41b774u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41b778: 0xc106e2c  jal         func_41B8B0
    ctx->pc = 0x41B778u;
    SET_GPR_U32(ctx, 31, 0x41B780u);
    ctx->pc = 0x41B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B778u;
    // 0x41b77c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x41B778u, 0x41B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B780u;
label_41b780:
    // 0x41b780: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x41b780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41b784: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41b784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41b788: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x41b788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41b78c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41b78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41b790: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x41b790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41b794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41b794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41b798: 0x3e00008  jr          $ra
    ctx->pc = 0x41B798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B798u;
        // 0x41b79c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B7A0u;
}
