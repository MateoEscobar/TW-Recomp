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

// Function: sub_004328A0
// Address: 0x4328a0 - 0x432920
void sub_004328A0_0x4328a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004328A0_0x4328a0");
#endif

    switch (ctx->pc) {
        case 0x43290cu: goto label_43290c;
        default: break;
    }

    ctx->pc = 0x4328a0u;

    // 0x4328a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4328a4: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4328a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x4328a8: 0x8c4d69ec  lw          $t5, 0x69EC($v0)
    ctx->pc = 0x4328a8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x5169ECu));
    // 0x4328ac: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4328acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4328b0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4328b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4328b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4328b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4328b8: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x4328b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x4328bc: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x4328bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x4328c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4328c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4328c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4328c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4328c8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4328c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4328cc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4328ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4328d0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4328d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4328d4: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x4328d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x4328d8: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x4328d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x4328dc: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x4328dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x4328e0: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x4328e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x4328e4: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x4328e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x4328e8: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x4328e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x4328ec: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x4328ecu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x4328f0: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x4328f0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x4328f4: 0xe7b200ac  swc1        $f18, 0xAC($sp)
    ctx->pc = 0x4328f4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x4328f8: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x4328f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4328fc: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x4328fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x432900: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x432900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x432904: 0xc10d9c4  jal         func_436710
    ctx->pc = 0x432904u;
    SET_GPR_U32(ctx, 31, 0x43290Cu);
    ctx->pc = 0x432908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432904u;
    // 0x432908: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436710u, 0x432904u, 0x43290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43290Cu;
label_43290c:
    // 0x43290c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x43290cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432910: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x432910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x432914: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x432914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x432918: 0x3e00008  jr          $ra
    ctx->pc = 0x432918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432918u;
        // 0x43291c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432920u;
}
