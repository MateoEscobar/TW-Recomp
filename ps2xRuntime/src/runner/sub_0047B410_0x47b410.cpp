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

// Function: sub_0047B410
// Address: 0x47b410 - 0x47b480
void sub_0047B410_0x47b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B410_0x47b410");
#endif

    switch (ctx->pc) {
        case 0x47b440u: goto label_47b440;
        default: break;
    }

    ctx->pc = 0x47b410u;

    // 0x47b410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47b418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47b41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b420: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x47b420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x47b424: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x47b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x47b428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47B428u;
    {
        const bool branch_taken_0x47b428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B428u;
        // 0x47b42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b428) {
            ctx->pc = 0x47B440u;
            goto label_47b440;
        }
    }
    ctx->pc = 0x47B430u;
    // 0x47b430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47b434: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x47b434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47b438: 0xc11db32  jal         func_476CC8
    ctx->pc = 0x47B438u;
    SET_GPR_U32(ctx, 31, 0x47B440u);
    ctx->pc = 0x47B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B438u;
    // 0x47b43c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x476CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476CC8u, 0x47B438u, 0x47B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B440u;
label_47b440:
    // 0x47b440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47b440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b448: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47b448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b44c: 0x3e00008  jr          $ra
    ctx->pc = 0x47B44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B44Cu;
        // 0x47b450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B454u;
    // 0x47b454: 0x0  nop
    ctx->pc = 0x47b454u;
    // NOP
    // 0x47b458: 0x0  nop
    ctx->pc = 0x47b458u;
    // NOP
    // 0x47b45c: 0x0  nop
    ctx->pc = 0x47b45cu;
    // NOP
    // 0x47b460: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x47b460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x47b464: 0x0  nop
    ctx->pc = 0x47b464u;
    // NOP
    // 0x47b468: 0xa083002a  sb          $v1, 0x2A($a0)
    ctx->pc = 0x47b468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x47b46c: 0x0  nop
    ctx->pc = 0x47b46cu;
    // NOP
    // 0x47b470: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47b474: 0x0  nop
    ctx->pc = 0x47b474u;
    // NOP
    // 0x47b478: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47b47c: 0x0  nop
    ctx->pc = 0x47b47cu;
    // NOP
    ctx->pc = 0x47b480u;
}
