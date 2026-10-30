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

// Function: sub_00452470
// Address: 0x452470 - 0x452508
void sub_00452470_0x452470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452470_0x452470");
#endif

    switch (ctx->pc) {
        case 0x4524c0u: goto label_4524c0;
        case 0x4524d0u: goto label_4524d0;
        default: break;
    }

    ctx->pc = 0x452470u;

    // 0x452470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x452470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x452474: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x452474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x452478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45247c: 0x24670090  addiu       $a3, $v1, 0x90
    ctx->pc = 0x45247cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x452480: 0x24660098  addiu       $a2, $v1, 0x98
    ctx->pc = 0x452480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x452484: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x452484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x452488: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x452488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45248c: 0x1502000e  bne         $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x45248Cu;
    {
        const bool branch_taken_0x45248c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x452490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45248Cu;
        // 0x452490: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45248c) {
            ctx->pc = 0x4524C8u;
            goto label_4524c8;
        }
    }
    ctx->pc = 0x452494u;
    // 0x452494: 0xc463009c  lwc1        $f3, 0x9C($v1)
    ctx->pc = 0x452494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x452498: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x452498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x45249c: 0xc4620090  lwc1        $f2, 0x90($v1)
    ctx->pc = 0x45249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4524a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4524a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4524a4: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x4524a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4524a8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x4524a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4524ac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x4524acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4524b0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x4524b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4524b4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x4524b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4524b8: 0xc114174  jal         func_4505D0
    ctx->pc = 0x4524B8u;
    SET_GPR_U32(ctx, 31, 0x4524C0u);
    ctx->pc = 0x4524BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4524B8u;
    // 0x4524bc: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4505D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4505D0u, 0x4524B8u, 0x4524C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4524C0u;
label_4524c0:
    // 0x4524c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4524C0u;
    {
        const bool branch_taken_0x4524c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4524C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4524C0u;
        // 0x4524c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4524c0) {
            ctx->pc = 0x452500u;
            goto label_452500;
        }
    }
    ctx->pc = 0x4524C8u;
label_4524c8:
    // 0x4524c8: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4524C8u;
    {
        const bool branch_taken_0x4524c8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4524CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4524C8u;
        // 0x4524cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4524c8) {
            ctx->pc = 0x452500u;
            goto label_452500;
        }
    }
    ctx->pc = 0x4524D0u;
label_4524d0:
    // 0x4524d0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x4524d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4524d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4524d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4524d8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4524d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4524dc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x4524dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4524e0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4524e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4524e4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4524e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4524e8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4524e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4524ec: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4524ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4524f0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x4524f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4524f4: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4524F4u;
    {
        const bool branch_taken_0x4524f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4524F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4524F4u;
        // 0x4524f8: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4524f4) {
            ctx->pc = 0x4524D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4524d0;
        }
    }
    ctx->pc = 0x4524FCu;
    // 0x4524fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4524fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_452500:
    // 0x452500: 0x3e00008  jr          $ra
    ctx->pc = 0x452500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452500u;
        // 0x452504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452508u;
}
