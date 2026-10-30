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

// Function: sub_002AC970
// Address: 0x2ac970 - 0x2ac9e0
void sub_002AC970_0x2ac970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC970_0x2ac970");
#endif

    switch (ctx->pc) {
        case 0x2ac99cu: goto label_2ac99c;
        case 0x2ac9d0u: goto label_2ac9d0;
        default: break;
    }

    ctx->pc = 0x2ac970u;

    // 0x2ac970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ac974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ac978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac97c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ac97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac980: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ac980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac984: 0x8e0304b0  lw          $v1, 0x4B0($s0)
    ctx->pc = 0x2ac984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
    // 0x2ac988: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AC988u;
    {
        const bool branch_taken_0x2ac988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC988u;
        // 0x2ac98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac988) {
            ctx->pc = 0x2AC9D0u;
            goto label_2ac9d0;
        }
    }
    ctx->pc = 0x2AC990u;
    // 0x2ac990: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ac990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2ac994: 0xc089998  jal         func_226660
    ctx->pc = 0x2AC994u;
    SET_GPR_U32(ctx, 31, 0x2AC99Cu);
    ctx->pc = 0x2AC998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC994u;
    // 0x2ac998: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2AC994u, 0x2AC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC99Cu;
label_2ac99c:
    // 0x2ac99c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AC99Cu;
    {
        const bool branch_taken_0x2ac99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac99c) {
            ctx->pc = 0x2AC9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC99Cu;
            // 0x2ac9a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC9D4u;
            goto label_2ac9d4;
        }
    }
    ctx->pc = 0x2AC9A4u;
    // 0x2ac9a4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ac9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ac9a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ac9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ac9ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9b4: 0x2405029d  addiu       $a1, $zero, 0x29D
    ctx->pc = 0x2ac9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    // 0x2ac9b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ac9c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ac9c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ac9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac9c8: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2AC9C8u;
    SET_GPR_U32(ctx, 31, 0x2AC9D0u);
    ctx->pc = 0x2AC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9C8u;
    // 0x2ac9cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2AC9C8u, 0x2AC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC9D0u;
label_2ac9d0:
    // 0x2ac9d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ac9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac9d4:
    // 0x2ac9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9D8u;
        // 0x2ac9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC9E0u;
}
