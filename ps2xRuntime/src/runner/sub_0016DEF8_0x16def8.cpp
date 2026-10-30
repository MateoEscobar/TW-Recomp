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

// Function: sub_0016DEF8
// Address: 0x16def8 - 0x16df68
void sub_0016DEF8_0x16def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DEF8_0x16def8");
#endif

    switch (ctx->pc) {
        case 0x16df10u: goto label_16df10;
        default: break;
    }

    ctx->pc = 0x16def8u;

    // 0x16def8: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x16defc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16defcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df00: 0x252816c0  addiu       $t0, $t1, 0x16C0
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 5824));
    // 0x16df04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16df04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16df08: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x16df08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x16df0c: 0x248500bc  addiu       $a1, $a0, 0xBC
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 188));
label_16df10:
    // 0x16df10: 0xaca6fff8  sw          $a2, -0x8($a1)
    ctx->pc = 0x16df10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 6));
    // 0x16df14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16df14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16df18: 0x2ce30004  sltiu       $v1, $a3, 0x4
    ctx->pc = 0x16df18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16df1c: 0x8d42bd30  lw          $v0, -0x42D0($t2)
    ctx->pc = 0x16df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950192)));
    // 0x16df20: 0xaca2fffc  sw          $v0, -0x4($a1)
    ctx->pc = 0x16df20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 2));
    // 0x16df24: 0xc52016c0  lwc1        $f0, 0x16C0($t1)
    ctx->pc = 0x16df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df28: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x16df28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x16df2c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x16df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16df30: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x16df30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x16df34: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x16df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df38: 0xa0a0000f  sb          $zero, 0xF($a1)
    ctx->pc = 0x16df38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x16df3c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x16df3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x16df40: 0xa0a0000e  sb          $zero, 0xE($a1)
    ctx->pc = 0x16df40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x16df44: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x16df44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x16df48: 0xa0a60010  sb          $a2, 0x10($a1)
    ctx->pc = 0x16df48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x16df4c: 0xa0a60011  sb          $a2, 0x11($a1)
    ctx->pc = 0x16df4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x16df50: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x16DF50u;
    {
        const bool branch_taken_0x16df50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF50u;
        // 0x16df54: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df50) {
            ctx->pc = 0x16DF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16df10;
        }
    }
    ctx->pc = 0x16DF58u;
    // 0x16df58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16df5c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x16df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x16df60: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF60u;
        // 0x16df64: 0xac8200ac  sw          $v0, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DF68u;
}
