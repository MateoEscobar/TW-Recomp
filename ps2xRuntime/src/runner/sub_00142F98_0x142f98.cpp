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

// Function: sub_00142F98
// Address: 0x142f98 - 0x143050
void sub_00142F98_0x142f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142F98_0x142f98");
#endif

    switch (ctx->pc) {
        case 0x142facu: goto label_142fac;
        case 0x143010u: goto label_143010;
        default: break;
    }

    ctx->pc = 0x142f98u;

    // 0x142f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x142f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x142fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142fa4: 0xc04821a  jal         func_120868
    ctx->pc = 0x142FA4u;
    SET_GPR_U32(ctx, 31, 0x142FACu);
    ctx->pc = 0x142FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FA4u;
    // 0x142fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x142FA4u, 0x142FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FACu;
label_142fac:
    // 0x142fac: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x142facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x142fb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142fb4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x142fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x142fb8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x142fbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x142fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x142fc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142fc8: 0x24427610  addiu       $v0, $v0, 0x7610
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30224));
    // 0x142fcc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x142fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x142fd0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x142fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x142fd4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x142fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x142fd8: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x142fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x142fdc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x142fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x142fe0: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x142fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x142fe4: 0x24a59340  addiu       $a1, $a1, -0x6CC0
    ctx->pc = 0x142fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939456));
    // 0x142fe8: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x142fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x142fec: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x142fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x142ff0: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x142ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x142ff4: 0xe6010228  swc1        $f1, 0x228($s0)
    ctx->pc = 0x142ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x142ff8: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x142ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x142ffc: 0xa2030234  sb          $v1, 0x234($s0)
    ctx->pc = 0x142ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 3));
    // 0x143000: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x143000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x143004: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x143004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x143008: 0xc10c4de  jal         func_431378
    ctx->pc = 0x143008u;
    SET_GPR_U32(ctx, 31, 0x143010u);
    ctx->pc = 0x14300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143008u;
    // 0x14300c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x143008u, 0x143010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143010u;
label_143010:
    // 0x143010: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x143010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x143014: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x143014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x143018: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x143018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x14301c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x14301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x143020: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x143020u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x511790u));
    // 0x143024: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14302c: 0x7e0401e0  sq          $a0, 0x1E0($s0)
    ctx->pc = 0x14302cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 480), GPR_VEC(ctx, 4));
    // 0x143030: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x143030u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x143034: 0x7e0301f0  sq          $v1, 0x1F0($s0)
    ctx->pc = 0x143034u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 3));
    // 0x143038: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x143038u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116C0u));
    // 0x14303c: 0x7e040200  sq          $a0, 0x200($s0)
    ctx->pc = 0x14303cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), GPR_VEC(ctx, 4));
    // 0x143040: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x143040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143044: 0x3e00008  jr          $ra
    ctx->pc = 0x143044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143044u;
        // 0x143048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14304Cu;
    // 0x14304c: 0x0  nop
    ctx->pc = 0x14304cu;
    // NOP
    ctx->pc = 0x143050u;
}
