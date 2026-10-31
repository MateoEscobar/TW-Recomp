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

// Function: sub_00432928
// Address: 0x432928 - 0x4329c0
void sub_00432928_0x432928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432928_0x432928");
#endif

    switch (ctx->pc) {
        case 0x432978u: goto label_432978;
        case 0x4329b0u: goto label_4329b0;
        default: break;
    }

    ctx->pc = 0x432928u;

    // 0x432928: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x432928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x43292c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x43292cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432930: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x432930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x432934: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x432934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x432938: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x432938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x43293c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432940: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x432940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x432944: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x432944u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x432948: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x432948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x43294c: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x43294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x432950: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x432950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x432954: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x432954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x432958: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x432958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x43295c: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x43295cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x432960: 0xe7ae00b4  swc1        $f14, 0xB4($sp)
    ctx->pc = 0x432960u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x432964: 0xe7b000b8  swc1        $f16, 0xB8($sp)
    ctx->pc = 0x432964u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x432968: 0xe7b200bc  swc1        $f18, 0xBC($sp)
    ctx->pc = 0x432968u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x43296c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x43296cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x432970: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x432970u;
    SET_GPR_U32(ctx, 31, 0x432978u);
    ctx->pc = 0x432974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432970u;
    // 0x432974: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x432970u, 0x432978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432978u;
label_432978:
    // 0x432978: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x432978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x43297c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x43297cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x432980: 0x8c8669ec  lw          $a2, 0x69EC($a0)
    ctx->pc = 0x432980u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5169ECu));
    // 0x432984: 0x24632920  addiu       $v1, $v1, 0x2920
    ctx->pc = 0x432984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10528));
    // 0x432988: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x432988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43298c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x43298cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x432990: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x432990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x432994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x432994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432998: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x432998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x43299c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x43299cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4329a0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4329a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4329a4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x4329a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x4329a8: 0xc10cb32  jal         func_432CC8
    ctx->pc = 0x4329A8u;
    SET_GPR_U32(ctx, 31, 0x4329B0u);
    ctx->pc = 0x4329ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4329A8u;
    // 0x4329ac: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432CC8u, 0x4329A8u, 0x4329B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4329B0u;
label_4329b0:
    // 0x4329b0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4329b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4329b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4329b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4329b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4329B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4329BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4329B8u;
        // 0x4329bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4329B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4329C0u;
}
