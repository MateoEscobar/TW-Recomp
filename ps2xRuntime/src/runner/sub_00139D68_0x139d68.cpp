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

// Function: sub_00139D68
// Address: 0x139d68 - 0x139df8
void sub_00139D68_0x139d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139D68_0x139d68");
#endif

    switch (ctx->pc) {
        case 0x139d7cu: goto label_139d7c;
        case 0x139dd4u: goto label_139dd4;
        default: break;
    }

    ctx->pc = 0x139d68u;

    // 0x139d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139d74: 0xc04821a  jal         func_120868
    ctx->pc = 0x139D74u;
    SET_GPR_U32(ctx, 31, 0x139D7Cu);
    ctx->pc = 0x139D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D74u;
    // 0x139d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x139D74u, 0x139D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D7Cu;
label_139d7c:
    // 0x139d7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x139d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x139d80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139d84: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x139d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x139d88: 0x24636b10  addiu       $v1, $v1, 0x6B10
    ctx->pc = 0x139d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27408));
    // 0x139d8c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x139d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139d90: 0x2408ff9d  addiu       $t0, $zero, -0x63
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x139d94: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x139d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x139d98: 0xa600032c  sh          $zero, 0x32C($s0)
    ctx->pc = 0x139d98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 812), (uint16_t)GPR_U32(ctx, 0));
    // 0x139d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139da0: 0xa200032f  sb          $zero, 0x32F($s0)
    ctx->pc = 0x139da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 815), (uint8_t)GPR_U32(ctx, 0));
    // 0x139da4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x139da8: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x139da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x139dac: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x139dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x139db0: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x139db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x139db4: 0x24a59150  addiu       $a1, $a1, -0x6EB0
    ctx->pc = 0x139db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938960));
    // 0x139db8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x139db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x139dbc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x139dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x139dc0: 0xe6000324  swc1        $f0, 0x324($s0)
    ctx->pc = 0x139dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 804), bits); }
    // 0x139dc4: 0xa2070330  sb          $a3, 0x330($s0)
    ctx->pc = 0x139dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 816), (uint8_t)GPR_U32(ctx, 7));
    // 0x139dc8: 0xa2080331  sb          $t0, 0x331($s0)
    ctx->pc = 0x139dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 8));
    // 0x139dcc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x139DCCu;
    SET_GPR_U32(ctx, 31, 0x139DD4u);
    ctx->pc = 0x139DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DCCu;
    // 0x139dd0: 0xa202032e  sb          $v0, 0x32E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 814), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x139DCCu, 0x139DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DD4u;
label_139dd4:
    // 0x139dd4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x139dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x139dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x139dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ddc: 0x24841790  addiu       $a0, $a0, 0x1790
    ctx->pc = 0x139ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6032));
    // 0x139de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139de4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x139de4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511790u));
    // 0x139de8: 0x7e030310  sq          $v1, 0x310($s0)
    ctx->pc = 0x139de8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), GPR_VEC(ctx, 3));
    // 0x139dec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139df0: 0x3e00008  jr          $ra
    ctx->pc = 0x139DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF0u;
        // 0x139df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139DF8u;
}
