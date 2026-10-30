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

// Function: sub_003A16B8
// Address: 0x3a16b8 - 0x3a1730
void sub_003A16B8_0x3a16b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A16B8_0x3a16b8");
#endif

    switch (ctx->pc) {
        case 0x3a1718u: goto label_3a1718;
        default: break;
    }

    ctx->pc = 0x3a16b8u;

    // 0x3a16b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a16b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a16bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3a16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3a16c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a16c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a16c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a16c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a16c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a16c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a16cc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a16d0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3a16d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3a16d4: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3a16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x3a16d8: 0x30840200  andi        $a0, $a0, 0x200
    ctx->pc = 0x3a16d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x3a16dc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a16dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a16e0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3a16e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x3a16e4: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x3a16e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3a16e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A16E8u;
    {
        const bool branch_taken_0x3a16e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16E8u;
        // 0x3a16ec: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16e8) {
            ctx->pc = 0x3A16F8u;
            goto label_3a16f8;
        }
    }
    ctx->pc = 0x3A16F0u;
    // 0x3a16f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a16f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a16f4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3a16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3a16f8:
    // 0x3a16f8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a16fc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3a16fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3a1700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1700u;
    {
        const bool branch_taken_0x3a1700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1700) {
            ctx->pc = 0x3A1710u;
            goto label_3a1710;
        }
    }
    ctx->pc = 0x3A1708u;
    // 0x3a1708: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x3a1708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3a170c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x3a170cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_3a1710:
    // 0x3a1710: 0xc0e8568  jal         func_3A15A0
    ctx->pc = 0x3A1710u;
    SET_GPR_U32(ctx, 31, 0x3A1718u);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x3A1710u, 0x3A1718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1718u;
label_3a1718:
    // 0x3a1718: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x3a1718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x3a171c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a171cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1724: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1724u;
        // 0x3a1728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A172Cu;
    // 0x3a172c: 0x0  nop
    ctx->pc = 0x3a172cu;
    // NOP
    ctx->pc = 0x3a1730u;
}
