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

// Function: sub_00134B90
// Address: 0x134b90 - 0x134c80
void sub_00134B90_0x134b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134B90_0x134b90");
#endif

    switch (ctx->pc) {
        case 0x134ba4u: goto label_134ba4;
        case 0x134bdcu: goto label_134bdc;
        case 0x134bf0u: goto label_134bf0;
        default: break;
    }

    ctx->pc = 0x134b90u;

    // 0x134b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134b94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x134b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x134b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134b9c: 0xc04821a  jal         func_120868
    ctx->pc = 0x134B9Cu;
    SET_GPR_U32(ctx, 31, 0x134BA4u);
    ctx->pc = 0x134BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B9Cu;
    // 0x134ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x134B9Cu, 0x134BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BA4u;
label_134ba4:
    // 0x134ba4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x134ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x134ba8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x134ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x134bac: 0x24426010  addiu       $v0, $v0, 0x6010
    ctx->pc = 0x134bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24592));
    // 0x134bb0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x134bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x134bb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x134bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x134bb8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x134bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x134bbc: 0x24a58c38  addiu       $a1, $a1, -0x73C8
    ctx->pc = 0x134bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937656));
    // 0x134bc0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x134bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x134bc4: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x134bc8: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x134bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x134bcc: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x134bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x134bd0: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x134bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x134bd4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x134BD4u;
    SET_GPR_U32(ctx, 31, 0x134BDCu);
    ctx->pc = 0x134BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BD4u;
    // 0x134bd8: 0xae0201e0  sw          $v0, 0x1E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x134BD4u, 0x134BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BDCu;
label_134bdc:
    // 0x134bdc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x134bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x134be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134be8: 0xc0482a6  jal         func_120A98
    ctx->pc = 0x134BE8u;
    SET_GPR_U32(ctx, 31, 0x134BF0u);
    ctx->pc = 0x134BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BE8u;
    // 0x134bec: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x134BE8u, 0x134BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BF0u;
label_134bf0:
    // 0x134bf0: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x134bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134bf4: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x134bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x134bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134bfc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x134bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x134c00: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x134c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x134c04: 0x3c013fc3  lui         $at, 0x3FC3
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16323 << 16));
    // 0x134c08: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x134c08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x134c0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x134c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c14: 0xe6010214  swc1        $f1, 0x214($s0)
    ctx->pc = 0x134c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x134c18: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x134c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x134c1c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x134c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x134c20: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x134c20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x134c24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x134c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x134c28: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x134c2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x134c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x134c30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x134c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x134c34: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x134c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x134c38: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x134c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x134c3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x134c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x134c40: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x134c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x134c44: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x134c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x134c48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x134c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x134c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c50: 0x3c0142e6  lui         $at, 0x42E6
    ctx->pc = 0x134c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17126 << 16));
    // 0x134c54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x134c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134c58: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x134c58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x134c5c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x134c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x134c60: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x134c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x134c64: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x134c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x134c68: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x134c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x134c6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x134c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134c74: 0x3e00008  jr          $ra
    ctx->pc = 0x134C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C74u;
        // 0x134c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134C7Cu;
    // 0x134c7c: 0x0  nop
    ctx->pc = 0x134c7cu;
    // NOP
    ctx->pc = 0x134c80u;
}
