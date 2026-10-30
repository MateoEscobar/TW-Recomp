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

// Function: sub_002B5190
// Address: 0x2b5190 - 0x2b5218
void sub_002B5190_0x2b5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5190_0x2b5190");
#endif

    switch (ctx->pc) {
        case 0x2b51c0u: goto label_2b51c0;
        case 0x2b51d0u: goto label_2b51d0;
        case 0x2b5200u: goto label_2b5200;
        default: break;
    }

    ctx->pc = 0x2b5190u;

    // 0x2b5190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5194: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b5194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b5198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b519c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b519cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b51a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b51a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b51a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b51a8: 0x8c8303e8  lw          $v1, 0x3E8($a0)
    ctx->pc = 0x2b51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2b51ac: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B51ACu;
    {
        const bool branch_taken_0x2b51ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b51ac) {
            ctx->pc = 0x2B51B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B51ACu;
            // 0x2b51b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5208u;
            goto label_2b5208;
        }
    }
    ctx->pc = 0x2B51B4u;
    // 0x2b51b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2b51b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2b51b8: 0xc089998  jal         func_226660
    ctx->pc = 0x2B51B8u;
    SET_GPR_U32(ctx, 31, 0x2B51C0u);
    ctx->pc = 0x2B51BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B51B8u;
    // 0x2b51bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2B51B8u, 0x2B51C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B51C0u;
label_2b51c0:
    // 0x2b51c0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B51C0u;
    {
        const bool branch_taken_0x2b51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b51c0) {
            ctx->pc = 0x2B51C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B51C0u;
            // 0x2b51c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5208u;
            goto label_2b5208;
        }
    }
    ctx->pc = 0x2B51C8u;
    // 0x2b51c8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B51C8u;
    SET_GPR_U32(ctx, 31, 0x2B51D0u);
    ctx->pc = 0x2B51CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B51C8u;
    // 0x2b51cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B51C8u, 0x2B51D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B51D0u;
label_2b51d0:
    // 0x2b51d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B51D0u;
    {
        const bool branch_taken_0x2b51d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51D0u;
        // 0x2b51d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51d0) {
            ctx->pc = 0x2B5200u;
            goto label_2b5200;
        }
    }
    ctx->pc = 0x2B51D8u;
    // 0x2b51d8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2b51d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2b51dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2b51dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2b51e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b51e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b51e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b51e8: 0x2406029d  addiu       $a2, $zero, 0x29D
    ctx->pc = 0x2b51e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    // 0x2b51ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b51ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b51f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b51f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b51f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b51f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b51f8: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2B51F8u;
    SET_GPR_U32(ctx, 31, 0x2B5200u);
    ctx->pc = 0x2B51FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B51F8u;
    // 0x2b51fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2B51F8u, 0x2B5200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5200u;
label_2b5200:
    // 0x2b5200: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x2b5200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b5204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5208:
    // 0x2b5208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b520c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B520Cu;
        // 0x2b5210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B520Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5214u;
    // 0x2b5214: 0x0  nop
    ctx->pc = 0x2b5214u;
    // NOP
    ctx->pc = 0x2b5218u;
}
